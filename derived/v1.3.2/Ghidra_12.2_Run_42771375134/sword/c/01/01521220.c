/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01521220; name: FUN_01521220
 */


void FUN_01521220(long param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_3 == param_4) {
    return;
  }
  switch(param_2) {
  case 0:
    uVar4 = 0x3c;
    lVar3 = *(long *)(param_1 + 0x1358);
    break;
  case 1:
    uVar4 = 0x1e;
    lVar3 = *(long *)(param_1 + 0x1360);
    goto joined_r0x01521288;
  case 2:
    uVar4 = 0x14;
    lVar3 = *(long *)(param_1 + 0x1368);
joined_r0x01521288:
    if (lVar3 == 0) {
      return;
    }
    goto LAB_0152131c;
  case 3:
    uVar4 = 0x50;
    lVar3 = *(long *)(param_1 + 0x1370);
    break;
  case 4:
    uVar4 = 0x226;
    lVar3 = *(long *)(param_1 + 0x1378);
    break;
  case 5:
    uVar4 = 0xd2;
    lVar3 = *(long *)(param_1 + 0x1380);
    break;
  case 6:
    uVar4 = 100;
    lVar3 = *(long *)(param_1 + 5000);
    break;
  case 7:
    uVar4 = 100;
    lVar3 = *(long *)(param_1 + 0x1390);
    break;
  case 8:
    uVar4 = 0x40;
    lVar3 = *(long *)(param_1 + 0x1398);
    break;
  default:
    goto switchD_01521244_default;
  }
  if (lVar3 != 0) {
LAB_0152131c:
    if ((param_3 < uVar4) && (param_4 < uVar4)) {
      uVar2 = *(undefined4 *)(lVar3 + (ulong)param_3 * 4);
      uVar4 = param_3 - param_4;
      if (param_3 < param_4) {
        uVar7 = (ulong)param_3;
        uVar5 = ~uVar7;
        if ((param_4 - param_3 & 3) != 0) {
          lVar11 = -((ulong)(param_4 - param_3) & 3);
          uVar8 = uVar7;
          do {
            uVar7 = uVar8 + 1;
            puVar9 = (undefined4 *)(lVar3 + uVar8 * 4);
            *puVar9 = puVar9[1];
            lVar11 = lVar11 + 1;
            uVar8 = uVar7;
          } while (lVar11 != 0);
        }
        if (2 < uVar5 + param_4) {
          lVar11 = param_4 - uVar7;
          puVar6 = (undefined8 *)(lVar3 + uVar7 * 4 + 8);
          do {
            *(undefined4 *)(puVar6 + -1) = *(undefined4 *)((long)puVar6 + -4);
            *(undefined8 *)((long)puVar6 + -4) = *puVar6;
            *(undefined4 *)((long)puVar6 + 4) = *(undefined4 *)(puVar6 + 1);
            lVar11 = lVar11 + -4;
            puVar6 = puVar6 + 2;
          } while (lVar11 != 0);
        }
      }
      else if (uVar4 != 0 && (int)param_4 <= (int)param_3) {
        lVar11 = (long)(int)param_3;
        uVar7 = ~(long)(int)param_4 + lVar11;
        if ((uVar4 & 3) != 0) {
          lVar12 = -((ulong)uVar4 & 3);
          lVar10 = lVar11;
          do {
            lVar11 = lVar10 + -1;
            puVar9 = (undefined4 *)(lVar3 + lVar10 * 4);
            *puVar9 = puVar9[-1];
            lVar12 = lVar12 + 1;
            lVar10 = lVar11;
          } while (lVar12 != 0);
        }
        if (2 < uVar7) {
          puVar9 = (undefined4 *)(lVar3 + lVar11 * 4 + -8);
          do {
            uVar1 = puVar9[1];
            lVar11 = lVar11 + -4;
            puVar9[1] = *puVar9;
            puVar9[2] = uVar1;
            *(undefined8 *)(puVar9 + -1) = *(undefined8 *)(puVar9 + -2);
            puVar9 = puVar9 + -4;
          } while ((int)param_4 < lVar11);
        }
      }
      *(undefined4 *)(lVar3 + (ulong)param_4 * 4) = uVar2;
    }
  }
switchD_01521244_default:
  return;
}


