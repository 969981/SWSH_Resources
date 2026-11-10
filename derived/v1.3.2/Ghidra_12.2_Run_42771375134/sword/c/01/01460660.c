/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01460660; name: FUN_01460660
 */


void FUN_01460660(long param_1)

{
  int iVar1;
  long lVar2;
  uint local_28;
  int local_24;
  
  lVar2 = FUN_01457f50();
  lVar2 = *(long *)(lVar2 + 0x708);
  FUN_0144cc30(lVar2,*(undefined4 *)(*(long *)(param_1 + 400) + 0x838),*(undefined8 *)(param_1 + 8))
  ;
  if (*(int *)(lVar2 + 0x3dc) == 0) {
    FUN_01468e60(*(undefined8 *)(param_1 + 400));
    return;
  }
  iVar1 = FUN_01452170(lVar2,*(undefined4 *)(*(long *)(param_1 + 400) + 0x838));
  if (iVar1 == 1) {
    FUN_01469a00(*(undefined8 *)(param_1 + 400));
    FUN_01469cd0(*(undefined8 *)(param_1 + 400));
    FUN_01469040(*(undefined8 *)(param_1 + 400));
    return;
  }
  FUN_0146a6b0(*(undefined8 *)(param_1 + 400),&local_24,&local_28);
  if (local_24 < 1) {
    local_28 = local_28 - 1 & ((int)(local_28 - 1) >> 0x1f ^ 0xffffffffU);
    local_24 = 0;
  }
  else {
    local_24 = local_24 + -1;
  }
  FUN_0146a640(*(undefined8 *)(param_1 + 400),local_24,local_28);
  thunk_FUN_014683c0(*(undefined8 *)(param_1 + 400),local_28 + local_24);
  FUN_01468e60(*(undefined8 *)(param_1 + 400));
  return;
}


