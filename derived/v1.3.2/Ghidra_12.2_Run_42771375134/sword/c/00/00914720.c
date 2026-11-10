/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914720; name: FUN_00914720
 */


void FUN_00914720(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auStack_2790 [10032];
  
  puVar1 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_02717d60;
  param_1[0x12] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = lVar4;
  param_1[9] = (long)(puVar2 + 0x48);
  param_1[0xc] = param_2;
  param_1[0xd] = 0x689b467ca0fef;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1e] = 0;
  *(uint *)(param_1 + 0x20) = param_3;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  param_1[0x18] = param_2;
  param_1[0x19] = 0x689b467ca0fef;
  if (param_3 == 0) {
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  else {
    uVar6 = 0;
    do {
      FUN_009150e0(auStack_2790);
      uVar5 = param_1[0x15];
      if (uVar5 < (ulong)param_1[0x16]) {
        lVar4 = param_1[0x18];
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        FUN_00915110(uVar5,auStack_2790);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        param_1[0x15] = param_1[0x15] + 0x2728;
      }
      else {
        FUN_00914dd0(param_1 + 0x14,auStack_2790);
      }
      FUN_00915160(auStack_2790);
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    if ((int)param_1[0x20] != 0) {
      lVar3 = 0;
      uVar5 = 0;
      do {
        FUN_00915100(param_1[0x14] + lVar3);
        uVar5 = uVar5 + 1;
        lVar3 = lVar3 + 0x2728;
      } while (uVar5 < *(uint *)(param_1 + 0x20));
    }
  }
  return;
}


