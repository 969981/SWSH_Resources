/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131d830; name: FUN_0131d830
 */


bool FUN_0131d830(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_006b92e0();
  if (*plVar1 != 0x148785bc46ac4581 && *plVar1 != 0x6f3c13bce33a451a) {
    plVar1 = (long *)FUN_006b92e0(param_1);
    if ((*plVar1 != -0x36d3a400db7ba287) && (*plVar1 != 0x60a352e5a3788049)) {
      plVar1 = (long *)FUN_006b92e0(param_1);
      return *plVar1 == -0x5237f66b670614a9 || *plVar1 == 0x23e3ad9a65982c8b;
    }
  }
  return true;
}


