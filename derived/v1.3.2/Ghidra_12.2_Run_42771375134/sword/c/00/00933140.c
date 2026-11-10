/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933140; name: FUN_00933140
 */


undefined2 FUN_00933140(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    return 0;
  }
  uVar1 = FUN_008ed2f0(param_1 + 0x58);
  return uVar1;
}


