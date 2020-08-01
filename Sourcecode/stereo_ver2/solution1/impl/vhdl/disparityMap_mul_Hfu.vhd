
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity disparityMap_mul_Hfu_DSP48_0 is
port (
    a: in std_logic_vector(10 - 1 downto 0);
    b: in std_logic_vector(18 - 1 downto 0);
    p: out std_logic_vector(18 - 1 downto 0));

end entity;

architecture behav of disparityMap_mul_Hfu_DSP48_0 is
    signal a_cvt: unsigned(10 - 1 downto 0);
    signal b_cvt: signed(18 - 1 downto 0);
    signal p_cvt: signed(18 - 1 downto 0);


begin

    a_cvt <= unsigned(a);
    b_cvt <= signed(b);
    p_cvt <= signed (resize(unsigned (signed ('0' & a_cvt) * signed (b_cvt)), 18));
    p <= std_logic_vector(p_cvt);

end architecture;
Library IEEE;
use IEEE.std_logic_1164.all;

entity disparityMap_mul_Hfu is
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER);
    port (
        din0 : IN STD_LOGIC_VECTOR(din0_WIDTH - 1 DOWNTO 0);
        din1 : IN STD_LOGIC_VECTOR(din1_WIDTH - 1 DOWNTO 0);
        dout : OUT STD_LOGIC_VECTOR(dout_WIDTH - 1 DOWNTO 0));
end entity;

architecture arch of disparityMap_mul_Hfu is
    component disparityMap_mul_Hfu_DSP48_0 is
        port (
            a : IN STD_LOGIC_VECTOR;
            b : IN STD_LOGIC_VECTOR;
            p : OUT STD_LOGIC_VECTOR);
    end component;



begin
    disparityMap_mul_Hfu_DSP48_0_U :  component disparityMap_mul_Hfu_DSP48_0
    port map (
        a => din0,
        b => din1,
        p => dout);

end architecture;


