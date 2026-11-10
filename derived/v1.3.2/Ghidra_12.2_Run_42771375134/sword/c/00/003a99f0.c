/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a99f0; name: FUN_003a99f0
 */


long FUN_003a99f0(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(PTR_DAT_02711030 + 0x38);
  if (*(char *)(param_1 + 0xd) != '\x02') {
    plVar1 = (long *)(PTR_DAT_02711030 + 0x30);
  }
  return param_1 + *plVar1;
}


