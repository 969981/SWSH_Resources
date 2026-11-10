/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012d5dd0; name: FUN_012d5dd0
 */


long * FUN_012d5dd0(long param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x80);
  if ((*plVar1 != param_2) || (*(long *)(param_1 + 0x90) == 0)) {
    if ((*(long *)(param_1 + 0x110) == param_2) && (*(long *)(param_1 + 0x120) != 0)) {
      return (long *)(param_1 + 0x110);
    }
    if ((*(long *)(param_1 + 0x1a0) == param_2) && (*(long *)(param_1 + 0x1b0) != 0)) {
      return (long *)(param_1 + 0x1a0);
    }
    if ((*(long *)(param_1 + 0x230) == param_2) && (*(long *)(param_1 + 0x240) != 0)) {
      return (long *)(param_1 + 0x230);
    }
    if ((*(long *)(param_1 + 0x2c0) == param_2) && (*(long *)(param_1 + 0x2d0) != 0)) {
      return (long *)(param_1 + 0x2c0);
    }
    if ((*(long *)(param_1 + 0x350) == param_2) && (*(long *)(param_1 + 0x360) != 0)) {
      return (long *)(param_1 + 0x350);
    }
    if ((*(long *)(param_1 + 0x3e0) == param_2) && (*(long *)(param_1 + 0x3f0) != 0)) {
      return (long *)(param_1 + 0x3e0);
    }
    if ((*(long *)(param_1 + 0x470) == param_2) && (*(long *)(param_1 + 0x480) != 0)) {
      return (long *)(param_1 + 0x470);
    }
    if ((*(long *)(param_1 + 0x500) == param_2) && (*(long *)(param_1 + 0x510) != 0)) {
      return (long *)(param_1 + 0x500);
    }
    if ((*(long *)(param_1 + 0x590) == param_2) && (*(long *)(param_1 + 0x5a0) != 0)) {
      return (long *)(param_1 + 0x590);
    }
    if ((*(long *)(param_1 + 0x620) == param_2) && (*(long *)(param_1 + 0x630) != 0)) {
      return (long *)(param_1 + 0x620);
    }
    if ((*(long *)(param_1 + 0x6b0) == param_2) && (*(long *)(param_1 + 0x6c0) != 0)) {
      return (long *)(param_1 + 0x6b0);
    }
    if ((*(long *)(param_1 + 0x740) == param_2) && (*(long *)(param_1 + 0x750) != 0)) {
      return (long *)(param_1 + 0x740);
    }
    if ((*(long *)(param_1 + 2000) == param_2) && (*(long *)(param_1 + 0x7e0) != 0)) {
      return (long *)(param_1 + 2000);
    }
    if ((*(long *)(param_1 + 0x860) == param_2) && (*(long *)(param_1 + 0x870) != 0)) {
      return (long *)(param_1 + 0x860);
    }
    plVar1 = (long *)(param_1 + 0x980);
    if ((*(long *)(param_1 + 0x8f0) == param_2) && (*(long *)(param_1 + 0x900) != 0)) {
      return (long *)(param_1 + 0x8f0);
    }
  }
  return plVar1;
}


