/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be650; name: FUN_004be650
 */


void FUN_004be650(undefined8 param_1,int param_2,long *param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  puVar2 = PTR_DAT_02712a90;
  if ((int)param_3[1] == 0) {
    return;
  }
  uVar10 = 0;
LAB_004be7a4:
  do {
    lVar9 = *(long *)(*param_3 + (ulong)uVar10 * 8);
    if (5 < *(int *)(lVar9 + 0x3c) - 1U) goto switchD_004be7c8_caseD_3;
    uVar11 = (ulong)uVar10;
    switch(*(int *)(lVar9 + 0x3c)) {
    case 1:
      uVar3 = FUN_004bd870(lVar9,param_2);
      goto joined_r0x004be810;
    case 2:
      *(int *)(lVar9 + 0x24) = param_2;
      *(undefined4 *)(lVar9 + 0x3c) = 3;
      break;
    case 4:
      *(int *)(lVar9 + 0x18) = (param_2 - *(int *)(lVar9 + 0x24)) + *(int *)(lVar9 + 0x18);
      *(undefined4 *)(lVar9 + 0x3c) = 1;
      uVar3 = FUN_004bd870(lVar9,param_2);
joined_r0x004be810:
      if ((uVar3 & 1) != 0) {
        FUN_004bd7a0(lVar9);
        uVar5 = *(uint *)(param_3 + 1);
        puVar6 = (undefined8 *)(*param_3 + uVar11 * 8);
        puVar4 = (undefined8 *)(*param_3 + (ulong)uVar5 * 8 + -8);
        if (puVar6 < puVar4) {
          uVar11 = (ulong)uVar5 * 8 + -9 + uVar11 * -8;
          uVar5 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
          if ((uVar5 & 7) != 0) {
            lVar8 = -((ulong)uVar5 & 7);
            puVar7 = puVar6;
            do {
              puVar6 = puVar7 + 1;
              *puVar7 = *puVar6;
              lVar8 = lVar8 + 1;
              puVar7 = puVar6;
            } while (lVar8 != 0);
          }
          if (0x37 < uVar11) {
            do {
              *puVar6 = puVar6[1];
              puVar6[1] = puVar6[2];
              puVar6[2] = puVar6[3];
              puVar6[3] = puVar6[4];
              puVar6[4] = puVar6[5];
              puVar6[5] = puVar6[6];
              puVar6[6] = puVar6[7];
              puVar7 = puVar6 + 8;
              puVar6[7] = *puVar7;
              puVar6 = puVar7;
            } while (puVar7 < puVar4);
          }
          uVar5 = *(uint *)(param_3 + 1);
        }
        *(uint *)(param_3 + 1) = uVar5 - 1;
        if (lVar9 != 0) {
          uVar1 = *(undefined4 *)puVar2;
          FUN_004bd790(lVar9);
          FUN_00404870(uVar1,lVar9);
        }
        uVar5 = *(uint *)(param_3 + 1);
joined_r0x004be77c:
        if (uVar5 <= uVar10) {
          return;
        }
        goto LAB_004be7a4;
      }
      break;
    case 6:
      FUN_004bd7a0(lVar9);
      if (lVar9 != 0) {
        uVar1 = *(undefined4 *)puVar2;
        FUN_004bd790(lVar9);
        FUN_00404870(uVar1,lVar9);
      }
      uVar5 = *(uint *)(param_3 + 1);
      puVar6 = (undefined8 *)(*param_3 + uVar11 * 8);
      puVar4 = (undefined8 *)(*param_3 + (ulong)uVar5 * 8 + -8);
      if (puVar6 < puVar4) {
        uVar11 = (ulong)uVar5 * 8 + -9 + uVar11 * -8;
        uVar5 = ((uint)(uVar11 >> 3) & 0x1fffffff) + 1;
        if ((uVar5 & 7) != 0) {
          lVar9 = -((ulong)uVar5 & 7);
          puVar7 = puVar6;
          do {
            puVar6 = puVar7 + 1;
            *puVar7 = *puVar6;
            lVar9 = lVar9 + 1;
            puVar7 = puVar6;
          } while (lVar9 != 0);
        }
        if (0x37 < uVar11) {
          do {
            *puVar6 = puVar6[1];
            puVar6[1] = puVar6[2];
            puVar6[2] = puVar6[3];
            puVar6[3] = puVar6[4];
            puVar6[4] = puVar6[5];
            puVar6[5] = puVar6[6];
            puVar6[6] = puVar6[7];
            puVar7 = puVar6 + 8;
            puVar6[7] = *puVar7;
            puVar6 = puVar7;
          } while (puVar7 < puVar4);
        }
        uVar5 = *(uint *)(param_3 + 1);
      }
      *(uint *)(param_3 + 1) = uVar5 - 1;
      uVar5 = *(uint *)(param_3 + 1);
      goto joined_r0x004be77c;
    }
switchD_004be7c8_caseD_3:
    uVar10 = uVar10 + 1;
    if (*(uint *)(param_3 + 1) <= uVar10) {
      return;
    }
  } while( true );
}


