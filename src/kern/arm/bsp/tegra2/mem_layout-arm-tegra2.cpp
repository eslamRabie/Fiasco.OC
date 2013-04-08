INTERFACE [arm && tegra2]:

EXTENSION class Mem_layout
{
public:
  enum Phys_layout_tegra2 : Address
  {
    Mp_scu_phys_base      = 0x50040000,
    L2cxx0_phys_base      = 0x50043000,

    Gic_cpu_phys_base     = 0x50040100,
    Gic_dist_phys_base    = 0x50041000,
    Gic2_cpu_phys_base    = 0x50020000,
    Gic2_dist_phys_base   = 0x50021000,

    Tmr_phys_base         = 0x60005000,
    Clock_reset_phys_base = 0x60006000,
    Uart_phys_base        = 0x70006300,
  };
};
