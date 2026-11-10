/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d97b0; name: FUN_003d97b0
 */


void FUN_003d97b0(long *param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  
  FUN_003ba380();
  *param_1 = (long)(PTR_DAT_027127b0 + 0x10);
  lVar4 = *(long *)(param_2 + 0x1120);
  if (*(int *)(lVar4 + 0x18) == 0) {
    iVar1 = *(int *)(lVar4 + 8);
    *(int *)(lVar4 + 8) = iVar1 + 1;
    *(int *)(param_1 + 0xb) = iVar1;
    return;
  }
  uVar3 = *(int *)(lVar4 + 0x18) - 1;
  uVar2 = *(undefined4 *)(*(long *)(lVar4 + 0x10) + (ulong)uVar3 * 4);
  *(uint *)(lVar4 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  return;
}


