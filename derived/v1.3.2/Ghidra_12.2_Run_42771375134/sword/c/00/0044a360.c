/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044a360; name: FUN_0044a360
 */


undefined8 FUN_0044a360(long param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  
  if (param_2 < 0x1d) {
    uVar12 = 0x1d;
  }
  else if (param_2 < 0x35) {
    uVar12 = 0x35;
  }
  else if (param_2 < 0x61) {
    uVar12 = 0x61;
  }
  else if (param_2 < 0xc1) {
    uVar12 = 0xc1;
  }
  else if (param_2 < 0x185) {
    uVar12 = 0x185;
  }
  else if (param_2 < 0x301) {
    uVar12 = 0x301;
  }
  else if (param_2 < 0x607) {
    uVar12 = 0x607;
  }
  else if (param_2 < 0xc07) {
    uVar12 = 0xc07;
  }
  else {
    uVar12 = 0x1807;
    if (0x1806 < param_2) {
      if (param_2 < 0x3001) {
        uVar12 = 0x3001;
      }
      else {
        uVar12 = 0x6011;
        if ((((0x6010 < param_2) && (uVar12 = 0xc005, 0xc004 < param_2)) &&
            (uVar12 = 0x1800d, 0x1800c < param_2)) &&
           ((uVar12 = 0x30005, 0x30004 < param_2 && (uVar12 = 0x60019, 0x60018 < param_2)))) {
          if (param_2 < 0xc0001) {
            uVar12 = 0xc0001;
          }
          else {
            uVar12 = 0x180005;
            if (((((0x180004 < param_2) && (uVar12 = 0x30000b, 0x30000a < param_2)) &&
                 ((uVar12 = 0x60000d, 0x60000c < param_2 &&
                  (((uVar12 = 0xc00005, 0xc00004 < param_2 &&
                    (uVar12 = 0x1800013, 0x1800012 < param_2)) &&
                   (uVar12 = 0x3000005, 0x3000004 < param_2)))))) &&
                ((uVar12 = 0x6000017, 0x6000016 < param_2 &&
                 (uVar12 = 0xc000013, 0xc000012 < param_2)))) &&
               ((uVar12 = 0x18000005, 0x18000004 < param_2 &&
                ((uVar12 = 0x30000059, 0x30000058 < param_2 &&
                 (uVar12 = 0x60000005, 0x60000004 < param_2)))))) {
              return 2;
            }
          }
        }
      }
    }
  }
  plVar13 = (long *)(param_1 + 8);
  lVar11 = *plVar13;
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *plVar13 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar4 = PTR_DAT_02712a90;
  puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 << 3);
  if (puVar5 == (undefined8 *)0x0) {
    if (*plVar13 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      FUN_00404870(*(undefined4 *)puVar4);
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(long *)(param_1 + 8) = lVar11;
    *(uint *)(param_1 + 0x10) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    return 2;
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  if ((puVar6 == (undefined8 *)0x0) || (puVar6 == puVar5)) goto LAB_0044a5b0;
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 != 0) {
    *puVar5 = *puVar6;
    if (uVar7 != 1) {
      if (uVar7 == 2) {
        lVar9 = 1;
      }
      else {
        lVar10 = 0;
        do {
          lVar9 = lVar10;
          puVar5[lVar9 + 1] = *(undefined8 *)(*plVar13 + lVar9 * 8 + 8);
          puVar5[lVar9 + 2] = *(undefined8 *)(*plVar13 + lVar9 * 8 + 0x10);
          lVar10 = lVar9 + 2;
        } while (((ulong)uVar7 - 1) - (ulong)(~uVar7 & 1) != lVar9 + 2);
        lVar9 = lVar9 + 3;
        if ((~uVar7 & 1) == 0) goto LAB_0044a5a4;
      }
      puVar5[lVar9] = *(undefined8 *)(*plVar13 + lVar9 * 8);
    }
LAB_0044a5a4:
    puVar6 = (undefined8 *)*plVar13;
  }
  FUN_00404870(*(undefined4 *)puVar4,puVar6);
LAB_0044a5b0:
  uVar7 = 1;
  *(undefined8 **)(param_1 + 8) = puVar5;
  *(uint *)(param_1 + 0x14) = uVar12;
  uVar3 = *(uint *)(param_1 + 0x10);
  if (uVar12 <= uVar3) goto joined_r0x0044a5e8;
  do {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar3 * 8);
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
    }
joined_r0x0044a5e8:
    do {
      if (uVar12 <= uVar7) {
        if (uVar1 != 0) {
          uVar8 = 0;
          do {
            plVar13 = (long *)*(long *)(lVar11 + uVar8 * 8);
            while (plVar13 != (long *)0x0) {
              uVar12 = *(uint *)(param_1 + 0x10);
              uVar7 = 0;
              if (uVar12 != 0) {
                uVar7 = *(uint *)(plVar13 + 1) / uVar12;
              }
              lVar9 = *plVar13;
              lVar10 = (ulong)(*(uint *)(plVar13 + 1) - uVar7 * uVar12) * 8;
              *plVar13 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar10);
              *(long **)(*(long *)(param_1 + 8) + lVar10) = plVar13;
              plVar13 = (long *)lVar9;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 != uVar1);
        }
        if (lVar11 != 0) {
          FUN_00404870(*(undefined4 *)puVar4,lVar11);
        }
        return 1;
      }
      uVar7 = uVar7 + 1;
      uVar3 = *(uint *)(param_1 + 0x10);
    } while (*(uint *)(param_1 + 0x14) <= uVar3);
  } while( true );
}


