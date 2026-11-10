/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f51550; name: FUN_00f51550
 */


void FUN_00f51550(long param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00f51590();
  iVar2 = *(int *)(param_1 + 0x54);
  uVar1 = iVar2 + 2;
  if (-1 < iVar2 + 1) {
    uVar1 = iVar2 + 1;
  }
  *(uint *)(param_1 + 0x54) = (iVar2 + 1) - (uVar1 & 0xfffffffe);
  return;
}


