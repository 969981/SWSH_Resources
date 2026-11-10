/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01520b70; name: FUN_01520b70
 */


undefined8 FUN_01520b70(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  long *plVar8;
  long lVar7;
  uint *puVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  
  param_2 = param_2 & 0xffff;
  uVar2 = FUN_00888c50(param_2,0xe);
  switch(uVar2) {
  case 0:
    uVar4 = 0x3c;
    puVar9 = *(uint **)(param_1 + 0x1358);
    break;
  case 1:
    uVar4 = 0x1e;
    puVar9 = *(uint **)(param_1 + 0x1360);
    break;
  case 2:
    uVar4 = 0x14;
    puVar9 = *(uint **)(param_1 + 0x1368);
    break;
  case 3:
    uVar4 = 0x50;
    puVar9 = *(uint **)(param_1 + 0x1370);
    break;
  case 4:
    uVar4 = 0x226;
    puVar9 = *(uint **)(param_1 + 0x1378);
    break;
  case 5:
    uVar4 = 0xd2;
    puVar9 = *(uint **)(param_1 + 0x1380);
    break;
  case 6:
    uVar4 = 100;
    puVar9 = *(uint **)(param_1 + 5000);
    break;
  case 7:
    uVar4 = 100;
    puVar9 = *(uint **)(param_1 + 0x1390);
    break;
  case 8:
    uVar4 = 0x40;
    puVar9 = *(uint **)(param_1 + 0x1398);
    break;
  default:
    goto switchD_01520bb4_default;
  }
  if (puVar9 == (uint *)0x0) {
switchD_01520bb4_default:
    return 0;
  }
  uVar13 = 0;
  puVar6 = puVar9;
  uVar14 = 0xffffffff;
  do {
    uVar11 = *puVar6;
    uVar15 = uVar11 & 0x7fff;
    if (uVar15 == param_2) goto LAB_01520cdc;
    uVar11 = uVar13;
    if (uVar15 != 0 || uVar14 != 0xffffffff) {
      uVar11 = uVar14;
    }
    uVar13 = uVar13 + 1;
    puVar6 = puVar6 + 1;
    uVar14 = uVar11;
  } while (uVar13 < uVar4);
  if (uVar11 == 0xffffffff) {
    return 0;
  }
  puVar6 = puVar9 + uVar11;
  uVar11 = *puVar6;
  uVar15 = uVar11 & 0x7fff;
LAB_01520cdc:
  if (uVar15 != param_2) {
    return 0;
  }
  if ((uVar11 >> 0xf & 0x7fff) < (param_3 & 0xffff)) {
    return 0;
  }
  uVar13 = (uVar11 >> 0xf) - (param_3 & 0xffff);
  uVar4 = uVar11 & 0x7fff | uVar13 * 0x8000 & 0x3fff8000;
  *puVar6 = uVar11 & 0xc0000000 | uVar4;
  if ((uVar13 & 0x7fff) != 0) {
    return 1;
  }
  *puVar6 = uVar4;
  uVar2 = FUN_00888c50(param_2,0xe);
  switch(uVar2) {
  case 0:
    plVar8 = (long *)(param_1 + 0x1358);
    uVar5 = 0x3c;
    break;
  case 1:
    plVar8 = (long *)(param_1 + 0x1360);
    uVar5 = 0x1e;
    break;
  case 2:
    plVar8 = (long *)(param_1 + 0x1368);
    uVar5 = 0x14;
    break;
  case 3:
    plVar8 = (long *)(param_1 + 0x1370);
    uVar5 = 0x50;
    break;
  case 4:
    plVar8 = (long *)(param_1 + 0x1378);
    uVar5 = 0x226;
    break;
  case 5:
    plVar8 = (long *)(param_1 + 0x1380);
    uVar5 = 0xd2;
    break;
  case 6:
    lVar16 = 5000;
    goto LAB_01520de8;
  case 7:
    lVar16 = 0x1390;
LAB_01520de8:
    plVar8 = (long *)(param_1 + lVar16);
    uVar5 = 100;
    break;
  case 8:
    plVar8 = (long *)(param_1 + 0x1398);
    uVar5 = 0x40;
    break;
  default:
    return 1;
  }
  lVar7 = *plVar8;
  lVar12 = (long)((int)uVar5 + -1);
  lVar16 = 1;
  uVar10 = 0;
  do {
    uVar1 = uVar10 + 1;
    if (uVar1 < uVar5) {
      lVar3 = lVar16;
      if ((1U - (int)uVar10 & 1) != 0) {
        uVar4 = *(uint *)(lVar7 + uVar10 * 4);
        if ((uVar4 & 0x3fff8000) == 0) {
          *(undefined4 *)(lVar7 + uVar10 * 4) = *(undefined4 *)(lVar7 + lVar16 * 4);
          *(uint *)(lVar7 + lVar16 * 4) = uVar4;
        }
        lVar3 = lVar16 + 1;
      }
      if (~uVar10 != -lVar12) {
        lVar17 = (lVar12 + 1) - lVar3;
        puVar9 = (uint *)(lVar7 + 4 + lVar3 * 4);
        do {
          while (uVar4 = *(uint *)(lVar7 + uVar10 * 4), (uVar4 & 0x3fff8000) == 0) {
            *(uint *)(lVar7 + uVar10 * 4) = puVar9[-1];
            puVar9[-1] = uVar4;
            uVar4 = *(uint *)(lVar7 + uVar10 * 4);
            if ((uVar4 & 0x3fff8000) != 0) goto LAB_01520e88;
LAB_01520eb0:
            *(uint *)(lVar7 + uVar10 * 4) = *puVar9;
            *puVar9 = uVar4;
            lVar17 = lVar17 + -2;
            puVar9 = puVar9 + 2;
            if (lVar17 == 0) goto LAB_01520ec8;
          }
          uVar4 = *(uint *)(lVar7 + uVar10 * 4);
          if ((uVar4 & 0x3fff8000) == 0) goto LAB_01520eb0;
LAB_01520e88:
          lVar17 = lVar17 + -2;
          puVar9 = puVar9 + 2;
        } while (lVar17 != 0);
      }
    }
LAB_01520ec8:
    lVar16 = lVar16 + 1;
    uVar10 = uVar1;
    if (lVar12 <= (long)uVar1) {
      return 1;
    }
  } while( true );
}


