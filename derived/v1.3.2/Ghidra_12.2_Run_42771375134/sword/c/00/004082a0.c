/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004082a0; name: FUN_004082a0
 */


undefined8 FUN_004082a0(undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  
  if (param_4 != 0) {
    puVar1 = PTR_DAT_02712b00 + 0x10;
    uVar15 = 0;
    puVar2 = PTR_DAT_02712b08 + 0x10;
    do {
      piVar14 = (int *)*param_3;
      *param_3 = (long)(piVar14 + 8);
      if (*piVar14 == 0) {
        plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x48);
        if (plVar8 == (long *)0x0) {
          return 2;
        }
        *plVar8 = (long)puVar1;
        plVar8[1] = param_2;
        plVar8[2] = 0x100000000;
        *(undefined2 *)(plVar8 + 3) = 0;
        *(undefined4 *)((long)plVar8 + 0x1c) = 50000;
        plVar8[7] = 0;
        *(undefined1 *)(plVar8 + 8) = 0;
        *(undefined4 *)(plVar8 + 6) = 0;
        *(undefined2 *)((long)plVar8 + 0x41) = 1;
        *(undefined2 *)((long)plVar8 + 0x44) = 0;
        plVar8[4] = 0;
        plVar8[5] = 0;
        uVar4 = *(uint *)(param_2 + 0x28);
        uVar13 = *(uint *)(param_2 + 0x2c);
        if (uVar13 <= uVar4) {
          uVar13 = uVar13 + 8;
          puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3);
          if (puVar9 == (undefined8 *)0x0) goto LAB_004086d0;
          puVar10 = *(undefined8 **)(param_2 + 0x20);
          if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar9)) {
            uVar5 = *(uint *)(param_2 + 0x28);
            if (uVar5 != 0) {
              *puVar9 = *puVar10;
              if (uVar5 != 1) {
                uVar3 = uVar5 + 3 & 3;
                if ((ulong)uVar5 - 2 < 3) {
                  lVar12 = 1;
                }
                else {
                  lVar11 = 0;
                  do {
                    lVar12 = lVar11;
                    lVar11 = lVar12 * 8;
                    puVar9[lVar12 + 1] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 8);
                    puVar9[lVar12 + 2] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 0x10);
                    puVar9[lVar12 + 3] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 0x18);
                    puVar9[lVar12 + 4] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 0x20);
                    lVar11 = lVar12 + 4;
                  } while (((ulong)uVar5 - 1) - (ulong)uVar3 != lVar12 + 4);
                  lVar12 = lVar12 + 5;
                }
                if (uVar3 != 0) {
                  lVar12 = lVar12 << 3;
                  lVar11 = -(ulong)uVar3;
                  do {
                    *(undefined8 *)((long)puVar9 + lVar12) =
                         *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar12);
                    lVar12 = lVar12 + 8;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0);
                }
              }
              puVar10 = *(undefined8 **)(param_2 + 0x20);
            }
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar10);
          }
          *(undefined8 **)(param_2 + 0x20) = puVar9;
          *(uint *)(param_2 + 0x2c) = uVar13;
        }
        if (uVar13 <= uVar4) goto LAB_004086d0;
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)*(uint *)(param_2 + 0x28) * 8);
        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) + 1;
        if (puVar9 == (undefined8 *)0x0) goto LAB_004086d0;
        *puVar9 = plVar8;
        *(short *)((long)plVar8 + 0x44) = (short)piVar14[7];
        iVar7 = piVar14[5];
        *(int *)((long)plVar8 + 0x14) = piVar14[4];
        *(short *)(plVar8 + 3) = (short)iVar7;
        *(int *)((long)plVar8 + 0x1c) = piVar14[6];
        *(int *)(plVar8 + 6) = piVar14[3];
        *(undefined1 *)(plVar8 + 8) = 0;
        *(undefined1 *)((long)plVar8 + 0x41) = *(undefined1 *)((long)piVar14 + 0x1f);
        *(int *)(plVar8 + 2) = piVar14[1];
        if ((piVar14[2] != 0) && (iVar7 = FUN_004082a0(param_1,plVar8,param_3), iVar7 != 1)) {
          return 2;
        }
        iVar7 = piVar14[6];
      }
      else {
        plVar8 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
        if (plVar8 == (long *)0x0) {
          return 2;
        }
        *plVar8 = (long)puVar2;
        plVar8[1] = param_2;
        plVar8[2] = 0x100000000;
        *(undefined2 *)(plVar8 + 3) = 0;
        *(undefined4 *)((long)plVar8 + 0x1c) = 50000;
        uVar4 = *(uint *)(param_2 + 0x28);
        uVar13 = *(uint *)(param_2 + 0x2c);
        if (uVar13 <= uVar4) {
          uVar13 = uVar13 + 8;
          puVar9 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 3);
          if (puVar9 == (undefined8 *)0x0) goto LAB_004086d0;
          puVar10 = *(undefined8 **)(param_2 + 0x20);
          if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar9)) {
            uVar5 = *(uint *)(param_2 + 0x28);
            if (uVar5 != 0) {
              *puVar9 = *puVar10;
              if (uVar5 != 1) {
                uVar3 = uVar5 + 3 & 3;
                if ((ulong)uVar5 - 2 < 3) {
                  lVar12 = 1;
                }
                else {
                  lVar11 = 0;
                  do {
                    lVar12 = lVar11;
                    lVar11 = lVar12 * 8;
                    puVar9[lVar12 + 1] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 8);
                    puVar9[lVar12 + 2] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 0x10);
                    puVar9[lVar12 + 3] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 0x18);
                    puVar9[lVar12 + 4] = *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar11 + 0x20);
                    lVar11 = lVar12 + 4;
                  } while (((ulong)uVar5 - 1) - (ulong)uVar3 != lVar12 + 4);
                  lVar12 = lVar12 + 5;
                }
                if (uVar3 != 0) {
                  lVar12 = lVar12 << 3;
                  lVar11 = -(ulong)uVar3;
                  do {
                    *(undefined8 *)((long)puVar9 + lVar12) =
                         *(undefined8 *)(*(long *)(param_2 + 0x20) + lVar12);
                    lVar12 = lVar12 + 8;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0);
                }
              }
              puVar10 = *(undefined8 **)(param_2 + 0x20);
            }
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar10);
          }
          *(undefined8 **)(param_2 + 0x20) = puVar9;
          *(uint *)(param_2 + 0x2c) = uVar13;
        }
        if (uVar13 <= uVar4) {
LAB_004086d0:
          uVar6 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*plVar8)(plVar8);
          FUN_00404870(uVar6,plVar8);
          return 2;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x20) + (ulong)*(uint *)(param_2 + 0x28) * 8);
        *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) + 1;
        if (puVar9 == (undefined8 *)0x0) goto LAB_004086d0;
        *puVar9 = plVar8;
        iVar7 = piVar14[5];
        *(int *)((long)plVar8 + 0x14) = piVar14[4];
        *(short *)(plVar8 + 3) = (short)iVar7;
        *(int *)((long)plVar8 + 0x1c) = piVar14[6];
        *(int *)(plVar8 + 4) = *piVar14;
        *(int *)(plVar8 + 2) = piVar14[1];
        FUN_00416470(param_2);
        iVar7 = piVar14[6];
      }
      if (iVar7 != 50000) {
        *(undefined1 *)(param_2 + 0x40) = 1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < param_4);
  }
  return 1;
}


