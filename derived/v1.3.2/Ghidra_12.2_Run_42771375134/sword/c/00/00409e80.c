/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00409e80; name: FUN_00409e80
 */


undefined8 FUN_00409e80(long param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  
  puVar6 = PTR_DAT_02712a90;
  plVar11 = *(long **)(param_1 + 0xe0);
  if (param_3 != 0) {
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
      if (plVar11 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0xe0) = 0;
        return 2;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(long **)(param_1 + 0xe0) = plVar11;
      lVar9 = FUN_00404690(*(undefined4 *)puVar6,(ulong)param_3 * 0x18);
      *plVar11 = lVar9;
      if (lVar9 == 0) {
        return 2;
      }
      *(uint *)((long)plVar11 + 0xc) = param_3;
    }
    else {
      *(undefined4 *)(plVar11 + 1) = 0;
    }
    puVar6 = PTR_DAT_02712a90;
    uVar12 = 0;
    do {
      plVar11 = *(long **)(param_1 + 0xe0);
      uVar4 = *(uint *)(plVar11 + 1);
      uVar13 = *(uint *)((long)plVar11 + 0xc);
      if (uVar13 <= uVar4) {
        uVar13 = uVar13 + 2;
        puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar6,(ulong)uVar13 * 0x18);
        if (puVar7 == (undefined8 *)0x0) {
          return 2;
        }
        puVar8 = (undefined8 *)*plVar11;
        if (puVar8 != (undefined8 *)0x0 && puVar8 != puVar7) {
          uVar5 = *(uint *)(plVar11 + 1);
          if (uVar5 != 0) {
            puVar7[2] = puVar8[2];
            puVar7[1] = puVar8[1];
            *puVar7 = *puVar8;
            if (uVar5 != 1) {
              uVar3 = uVar5 + 3 & 3;
              if ((ulong)uVar5 - 2 < 3) {
                lVar10 = 1;
              }
              else {
                lVar9 = 0x60;
                lVar10 = 1;
                do {
                  lVar1 = *plVar11 + lVar9;
                  puVar8 = (undefined8 *)((long)puVar7 + lVar9);
                  puVar8[-7] = *(undefined8 *)(lVar1 + -0x38);
                  puVar8[-8] = *(undefined8 *)(lVar1 + -0x40);
                  puVar8[-9] = *(undefined8 *)(lVar1 + -0x48);
                  lVar1 = *plVar11 + lVar9;
                  puVar8[-4] = *(undefined8 *)(lVar1 + -0x20);
                  puVar8[-5] = *(undefined8 *)(lVar1 + -0x28);
                  puVar8[-6] = *(undefined8 *)(lVar1 + -0x30);
                  lVar1 = *plVar11 + lVar9;
                  puVar8[-1] = *(undefined8 *)(lVar1 + -8);
                  puVar8[-2] = *(undefined8 *)(lVar1 + -0x10);
                  puVar8[-3] = *(undefined8 *)(lVar1 + -0x18);
                  puVar2 = (undefined8 *)(*plVar11 + lVar9);
                  lVar9 = lVar9 + 0x60;
                  puVar8[2] = puVar2[2];
                  puVar8[1] = puVar2[1];
                  lVar10 = lVar10 + 4;
                  *puVar8 = *puVar2;
                } while ((ulong)uVar5 - (ulong)uVar3 != lVar10);
              }
              if (uVar3 != 0) {
                lVar10 = lVar10 * 0x18;
                lVar9 = -(ulong)uVar3;
                do {
                  puVar8 = (undefined8 *)(*plVar11 + lVar10);
                  puVar2 = (undefined8 *)((long)puVar7 + lVar10);
                  lVar10 = lVar10 + 0x18;
                  puVar2[2] = puVar8[2];
                  puVar2[1] = puVar8[1];
                  lVar9 = lVar9 + 1;
                  *puVar2 = *puVar8;
                } while (lVar9 != 0);
              }
            }
            puVar8 = (undefined8 *)*plVar11;
          }
          FUN_00404870(*(undefined4 *)puVar6,puVar8);
        }
        *plVar11 = (long)puVar7;
        *(uint *)((long)plVar11 + 0xc) = uVar13;
      }
      if (uVar13 <= uVar4) {
        return 2;
      }
      puVar7 = (undefined8 *)(*plVar11 + (ulong)*(uint *)(plVar11 + 1) * 0x18);
      *(uint *)(plVar11 + 1) = *(uint *)(plVar11 + 1) + 1;
      if (puVar7 == (undefined8 *)0x0) {
        return 2;
      }
      puVar7[2] = param_2[2];
      puVar7[1] = param_2[1];
      uVar12 = uVar12 + 1;
      *puVar7 = *param_2;
      param_2 = param_2 + 3;
    } while (uVar12 < param_3);
    return 1;
  }
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  if (*plVar11 != 0) {
    *(undefined4 *)(plVar11 + 1) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *plVar11 = 0;
    *(undefined4 *)((long)plVar11 + 0xc) = 0;
    plVar11 = *(long **)(param_1 + 0xe0);
    if (plVar11 == (long *)0x0) goto LAB_0040a0c8;
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,plVar11);
LAB_0040a0c8:
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return 1;
}


