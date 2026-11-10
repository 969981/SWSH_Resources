/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c4670; name: FUN_005c4670
 */


void FUN_005c4670(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_3;
  param_1[1] = 0;
  if (param_3 == 0) {
    lVar2 = *param_2;
    if (lVar2 == 0) {
      lVar2 = FUN_005bc740();
      if (lVar2 == 0) {
        lVar2 = FUN_005bc6f0();
      }
      else {
        lVar2 = FUN_005bc740();
      }
    }
    *param_1 = lVar2;
  }
  uVar9 = param_2[2];
  if (uVar9 != 0) {
    FUN_005c5e00(param_1,uVar9 + 1,0);
    lVar2 = param_1[1];
    puVar1 = PTR_DAT_02713e78;
    if ((undefined *)param_2[1] != (undefined *)0x0) {
      puVar1 = (undefined *)param_2[1];
    }
    uVar3 = uVar9;
    if ((long)uVar9 < 0) {
      uVar5 = 0;
      do {
        uVar3 = uVar5;
        uVar5 = uVar3 + 1;
      } while (puVar1[uVar3] != '\0');
    }
    if ((lVar2 != 0) && (0 < (long)uVar3)) {
      uVar5 = uVar3 & 3;
      if (uVar3 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          puVar4 = puVar1 + lVar7 + 1;
          puVar8 = (undefined1 *)(lVar2 + 1 + lVar7);
          lVar7 = lVar7 + 4;
          puVar8[-1] = puVar4[-1];
          *puVar8 = *puVar4;
          puVar8[1] = puVar4[1];
          puVar8[2] = puVar4[2];
        } while (uVar3 - uVar5 != lVar7);
      }
      if (uVar5 != 0) {
        lVar6 = -uVar5;
        puVar4 = puVar1 + lVar7;
        puVar8 = (undefined1 *)(lVar2 + lVar7);
        do {
          lVar6 = lVar6 + 1;
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar6 != 0);
      }
      *(undefined1 *)(lVar2 + uVar3) = 0;
    }
    param_1[2] = uVar9;
    param_1[4] = uVar9;
    param_1[5] = 0;
  }
  return;
}


