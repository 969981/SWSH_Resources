/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00478df0; name: FUN_00478df0
 */


undefined8 FUN_00478df0(long *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  if (param_2 < 0x1d) {
    uVar13 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar13 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar13 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar13 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar13 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar13 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar13 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar13 = 0xc07;
  }
  else {
    uVar13 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar13 = 0x3001;
      }
      else {
        uVar13 = 0x6011;
        if ((((0x6010 < param_2) && (uVar13 = 0xc005, 0xc004 < param_2)) &&
            (uVar13 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar13 = 0x30005, 0x30004 < param_2 && (uVar13 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar13 = 0xc0001;
          }
          else {
            uVar13 = 0x180005;
            if (((((0x180004 < param_2) && (uVar13 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar13 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar13 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar13 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar13 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar13 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar13 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar13 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar13 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar13 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  lVar12 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = *(undefined4 *)((long)param_1 + 0xc);
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_02712a90;
  puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3);
  if (puVar6 == (undefined8 *)0x0) {
    if (*param_1 != 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN_00404870(*(undefined4 *)puVar4);
      *param_1 = 0;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    *param_1 = lVar12;
    *(uint *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    return 2;
  }
  puVar7 = (undefined8 *)*param_1;
  if ((puVar7 == (undefined8 *)0x0) || (puVar7 == puVar6)) goto LAB_0047903c;
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 != 0) {
    *puVar6 = *puVar7;
    if (uVar8 != 1) {
      if (uVar8 == 2) {
        lVar10 = 1;
      }
      else {
        lVar5 = 0;
        do {
          lVar10 = lVar5;
          puVar6[lVar10 + 1] = *(undefined8 *)(*param_1 + lVar10 * 8 + 8);
          puVar6[lVar10 + 2] = *(undefined8 *)(*param_1 + lVar10 * 8 + 0x10);
          lVar5 = lVar10 + 2;
        } while (((ulong)uVar8 - 1) - (ulong)(~uVar8 & 1) != lVar10 + 2);
        lVar10 = lVar10 + 3;
        if ((~uVar8 & 1) == 0) goto LAB_00479030;
      }
      puVar6[lVar10] = *(undefined8 *)(*param_1 + lVar10 * 8);
    }
LAB_00479030:
    puVar7 = (undefined8 *)*param_1;
  }
  FUN_00404870(*(undefined4 *)puVar4,puVar7);
LAB_0047903c:
  uVar8 = 1;
  *param_1 = (long)puVar6;
  *(uint *)((long)param_1 + 0xc) = uVar13;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar13 <= uVar3) goto joined_r0x00479074;
  do {
    puVar6 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
    *(uint *)(param_1 + 1) = uVar3 + 1;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = 0;
    }
joined_r0x00479074:
    do {
      if (uVar13 <= uVar8) {
        if (uVar1 != 0) {
          uVar9 = 0;
          do {
            lVar5 = *(long *)(lVar12 + uVar9 * 8);
            while (lVar5 != 0) {
              uVar8 = 0;
              if (uVar13 != 0) {
                uVar8 = *(uint *)(lVar5 + 0x10) / uVar13;
              }
              lVar11 = *(long *)(lVar5 + 0x18);
              lVar10 = (ulong)(*(uint *)(lVar5 + 0x10) - uVar8 * uVar13) * 8;
              *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(*param_1 + lVar10);
              *(long *)(*param_1 + lVar10) = lVar5;
              lVar5 = lVar11;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar1);
        }
        if (lVar12 != 0) {
          FUN_00404870(*(undefined4 *)puVar4,lVar12);
        }
        return 1;
      }
      uVar8 = uVar8 + 1;
      uVar3 = *(uint *)(param_1 + 1);
    } while (*(uint *)((long)param_1 + 0xc) <= uVar3);
  } while( true );
}


