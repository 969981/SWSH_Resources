/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006abbe0; name: FUN_006abbe0
 */


void FUN_006abbe0(long *param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  FUN_006a0050();
  puVar1 = PTR_DAT_02715140;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar3 == 0) || (*(long *)(lVar3 + 0x80) == 0)) ||
     (lVar3 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8), lVar3 == 0)) {
    lVar3 = FUN_0075ecb0();
  }
  lVar5 = param_1[2];
  param_1[5] = lVar3;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  lVar3 = *(long *)(*(long *)(param_2 + 0x360) + 0x68);
  uVar4 = (ulong)(uint)((int)((ulong)(*(long *)(lVar3 + 0x268) - *(long *)(lVar3 + 0x260)) >> 5) *
                       -0x55555555);
  lVar3 = param_1[3] - lVar5 >> 2;
  bVar2 = uVar4 < (ulong)(lVar3 * -0x5555555555555555);
  lVar3 = uVar4 + lVar3 * 0x5555555555555555;
  if (!bVar2 && lVar3 != 0) {
    FUN_006ab540(param_1 + 2,lVar3);
    return;
  }
  if (bVar2) {
    param_1[3] = lVar5 + uVar4 * 0xc;
  }
  return;
}


