/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bc4d0; name: FUN_004bc4d0
 */


undefined8 FUN_004bc4d0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  
  if (param_2 < 0x1d) {
    uVar14 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar14 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar14 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar14 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar14 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar14 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar14 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar14 = 0xc07;
  }
  else {
    uVar14 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar14 = 0x3001;
      }
      else {
        uVar14 = 0x6011;
        if ((((0x6010 < param_2) && (uVar14 = 0xc005, 0xc004 < param_2)) &&
            (uVar14 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar14 = 0x30005, 0x30004 < param_2 && (uVar14 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar14 = 0xc0001;
          }
          else {
            uVar14 = 0x180005;
            if (((((0x180004 < param_2) && (uVar14 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar14 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar14 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar14 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar14 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar14 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar14 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar14 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar14 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar14 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  lVar13 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_02712a90;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar14 << 3);
  if (puVar6 == (undefined8 *)0x0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN_00404870(*(undefined4 *)puVar5);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = lVar13;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    return 2;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((puVar7 == (undefined8 *)0x0) || (puVar7 == puVar6)) goto LAB_004bc71c;
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 != 0) {
    *puVar6 = *puVar7;
    if (uVar8 != 1) {
      if (uVar8 == 2) {
        lVar10 = 1;
      }
      else {
        lVar11 = 0;
        do {
          lVar10 = lVar11;
          puVar6[lVar10 + 1] = *(undefined8 *)(*param_1 + lVar10 * 8 + 8);
          puVar6[lVar10 + 2] = *(undefined8 *)(*param_1 + lVar10 * 8 + 0x10);
          lVar11 = lVar10 + 2;
        } while (((ulong)uVar8 - 1) - (ulong)(~uVar8 & 1) != lVar10 + 2);
        lVar10 = lVar10 + 3;
        if ((~uVar8 & 1) == 0) goto LAB_004bc710;
      }
      puVar6[lVar10] = *(undefined8 *)(*param_1 + lVar10 * 8);
    }
LAB_004bc710:
    puVar7 = (undefined8 *)*param_1;
  }
  FUN_00404870(*(undefined4 *)puVar5,puVar7);
LAB_004bc71c:
  uVar8 = 1;
  *param_1 = (long)puVar6;
  *(uint *)((long)param_1 + 0xc) = uVar14;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar14 <= uVar3) goto joined_r0x004bc754;
  do {
    puVar6 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
    *(uint *)(param_1 + 1) = uVar3 + 1;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
    }
joined_r0x004bc754:
    do {
      if (uVar14 <= uVar8) {
        if (uVar1 != 0) {
          uVar9 = 0;
          do {
            puVar4 = *(uint **)(lVar13 + uVar9 * 8);
            while (puVar4 != (uint *)0x0) {
              uVar8 = 0;
              if (uVar14 != 0) {
                uVar8 = *puVar4 / uVar14;
              }
              puVar12 = *(uint **)(puVar4 + 2);
              lVar11 = (ulong)(*puVar4 - uVar8 * uVar14) * 8;
              *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(*param_1 + lVar11);
              *(uint **)(*param_1 + lVar11) = puVar4;
              puVar4 = puVar12;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar1);
        }
        if (lVar13 != 0) {
          FUN_00404870(*(undefined4 *)puVar5,lVar13);
        }
        return 1;
      }
      uVar8 = uVar8 + 1;
      uVar3 = *(uint *)(param_1 + 1);
    } while (*(uint *)((long)param_1 + 0xc) <= uVar3);
  } while( true );
}


