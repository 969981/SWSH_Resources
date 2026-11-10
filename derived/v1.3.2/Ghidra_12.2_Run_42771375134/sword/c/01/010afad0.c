/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010afad0; name: FUN_010afad0
 */


undefined8 FUN_010afad0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x2b0) == 0) {
    return 1;
  }
  uVar1 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),PTR_DAT_02724358 + (param_2 & 0xffffffff) * 8);
  return uVar1;
}


