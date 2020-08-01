-- ==============================================================
-- File generated on Thu Jul 30 11:06:40 +0800 2020
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity disparityMap_expobkb_rom is 
    generic(
             DWIDTH     : integer := 10; 
             AWIDTH     : integer := 8; 
             MEM_SIZE    : integer := 256
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of disparityMap_expobkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "1111111111", 1 => "1111011101", 2 => "1110111101", 3 => "1110011101", 
    4 => "1101111111", 5 => "1101100001", 6 => "1101000101", 7 => "1100101010", 
    8 => "1100001111", 9 => "1011110101", 10 => "1011011101", 11 => "1011000100", 
    12 => "1010101101", 13 => "1010010111", 14 => "1010000001", 15 => "1001101100", 
    16 => "1001011000", 17 => "1001000100", 18 => "1000110001", 19 => "1000011111", 
    20 => "1000001101", 21 => "0111111100", 22 => "0111101011", 23 => "0111011011", 
    24 => "0111001011", 25 => "0110111100", 26 => "0110101110", 27 => "0110011111", 
    28 => "0110010010", 29 => "0110000101", 30 => "0101111000", 31 => "0101101100", 
    32 => "0101100000", 33 => "0101010100", 34 => "0101001001", 35 => "0100111110", 
    36 => "0100110100", 37 => "0100101010", 38 => "0100100000", 39 => "0100010110", 
    40 => "0100001101", 41 => "0100000100", 42 => "0011111100", 43 => "0011110011", 
    44 => "0011101011", 45 => "0011100100", 46 => "0011011100", 47 => "0011010101", 
    48 => "0011001110", 49 => "0011000111", 50 => "0011000001", 51 => "0010111010", 
    52 => "0010110100", 53 => "0010101110", 54 => "0010101001", 55 => "0010100011", 
    56 => "0010011110", 57 => "0010011001", 58 => "0010010011", 59 => "0010001111", 
    60 => "0010001010", 61 => "0010000101", 62 => "0010000001", 63 => "0001111101", 
    64 => "0001111001", 65 => "0001110101", 66 => "0001110001", 67 => "0001101101", 
    68 => "0001101010", 69 => "0001100110", 70 => "0001100011", 71 => "0001011111", 
    72 => "0001011100", 73 => "0001011001", 74 => "0001010110", 75 => "0001010011", 
    76 => "0001010001", 77 => "0001001110", 78 => "0001001011", 79 => "0001001001", 
    80 => "0001000111", 81 => "0001000100", 82 => "0001000010", 83 => "0001000000", 
    84 => "0000111110", 85 => "0000111100", 86 => "0000111010", 87 => "0000111000", 
    88 => "0000110110", 89 => "0000110100", 90 => "0000110010", 91 => "0000110001", 
    92 => "0000101111", 93 => "0000101110", 94 => "0000101100", 95 => "0000101011", 
    96 => "0000101001", 97 => "0000101000", 98 => "0000100111", 99 => "0000100101", 
    100 => "0000100100", 101 => "0000100011", 102 => "0000100010", 103 => "0000100001", 
    104 => "0000011111", 105 => "0000011110", 106 => "0000011101", 107 => "0000011100", 
    108 to 109=> "0000011011", 110 => "0000011010", 111 => "0000011001", 112 => "0000011000", 
    113 => "0000010111", 114 to 115=> "0000010110", 116 => "0000010101", 117 to 118=> "0000010100", 
    119 => "0000010011", 120 to 121=> "0000010010", 122 => "0000010001", 123 to 124=> "0000010000", 
    125 to 126=> "0000001111", 127 to 128=> "0000001110", 129 to 130=> "0000001101", 131 to 133=> "0000001100", 
    134 to 135=> "0000001011", 136 to 138=> "0000001010", 139 to 141=> "0000001001", 142 to 145=> "0000001000", 
    146 to 149=> "0000000111", 150 to 154=> "0000000110", 155 to 159=> "0000000101", 160 to 166=> "0000000100", 
    167 to 174=> "0000000011", 175 to 187=> "0000000010", 188 to 207=> "0000000001", 208 to 255=> "0000000000" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity disparityMap_expobkb is
    generic (
        DataWidth : INTEGER := 10;
        AddressRange : INTEGER := 256;
        AddressWidth : INTEGER := 8);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of disparityMap_expobkb is
    component disparityMap_expobkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    disparityMap_expobkb_rom_U :  component disparityMap_expobkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


