/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe1be0; name: FUN_00fe1be0
 */


uint FUN_00fe1be0(long param_1)

{
  uint uVar1;
  long lVar2;
  long local_18;
  
  local_18 = *(long *)(param_1 + 0x820);
  if (local_18 == 0) {
    return 1;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x1b0);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = FUN_0167bc20(lVar2,&local_18);
  return uVar1 & 1;
}


