/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00452280; name: FUN_00452280
 */


void FUN_00452280(int *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *local_68;
  
  if (*param_1 == 2) {
    FUN_004be070(*(undefined8 *)PTR_DAT_02712b18);
  }
  else if (*param_1 == 1) {
    FUN_004be020(*(undefined8 *)PTR_DAT_02712b18);
  }
  puVar4 = PTR_DAT_02712fe8;
  puVar3 = PTR_DAT_02712a90;
  uVar15 = *(uint *)(PTR_DAT_02712fe8 + 8);
  if (uVar15 != 0) {
    local_68 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 << 3);
    if (*(int *)(puVar4 + 8) != 0) {
      uVar12 = 0;
      uVar14 = 0;
      if (local_68 != (undefined8 *)0x0) {
        uVar14 = uVar15;
      }
      puVar10 = local_68;
      puVar11 = *(undefined8 **)puVar4;
      do {
        uVar13 = *puVar11;
        puVar5 = puVar10;
        uVar15 = uVar14;
        if (uVar12 < uVar14) {
LAB_0045242c:
          puVar10 = puVar5;
          uVar14 = uVar15;
          if (uVar12 < uVar15) {
            uVar1 = (ulong)uVar12;
            uVar12 = uVar12 + 1;
            if (puVar5 + uVar1 != (undefined8 *)0x0) {
              puVar5[uVar1] = uVar13;
            }
          }
        }
        else {
          uVar15 = uVar14 + 1;
          puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)puVar3,(ulong)uVar15 << 3);
          if (puVar5 != (undefined8 *)0x0) {
            if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar5)) {
              if ((uVar12 != 0) && (*puVar5 = *puVar10, uVar12 != 1)) {
                uVar14 = uVar12 + 7 & 7;
                if ((ulong)uVar12 - 2 < 7) {
                  lVar8 = 1;
                }
                else {
                  puVar7 = puVar5 + 4;
                  puVar9 = puVar10 + 4;
                  lVar8 = 1;
                  do {
                    puVar7[-3] = puVar9[-3];
                    puVar7[-2] = puVar9[-2];
                    puVar7[-1] = puVar9[-1];
                    *puVar7 = *puVar9;
                    puVar7[1] = puVar9[1];
                    puVar7[2] = puVar9[2];
                    puVar7[3] = puVar9[3];
                    puVar2 = puVar9 + 4;
                    lVar8 = lVar8 + 8;
                    puVar9 = puVar9 + 8;
                    puVar7[4] = *puVar2;
                    puVar7 = puVar7 + 8;
                  } while ((ulong)uVar12 - (ulong)uVar14 != lVar8);
                }
                if (uVar14 != 0) {
                  lVar6 = -(ulong)uVar14;
                  puVar7 = puVar10 + lVar8;
                  puVar9 = puVar5 + lVar8;
                  do {
                    lVar6 = lVar6 + 1;
                    *puVar9 = *puVar7;
                    puVar7 = puVar7 + 1;
                    puVar9 = puVar9 + 1;
                  } while (lVar6 != 0);
                }
              }
              FUN_00404870(*(undefined4 *)puVar3,puVar10);
            }
            local_68 = puVar5;
            goto LAB_0045242c;
          }
        }
        puVar5 = puVar11 + 1;
        (**(code **)(*(long *)*puVar11 + 0x10))();
        puVar11 = puVar5;
      } while (puVar5 != (undefined8 *)(*(long *)puVar4 + (ulong)*(uint *)(puVar4 + 8) * 8));
      if (uVar12 != 0) {
        lVar8 = 0;
        do {
          (**(code **)(**(long **)((long)local_68 + lVar8) + 0x98))
                    (*(long **)((long)local_68 + lVar8),param_1);
          (**(code **)(**(long **)((long)local_68 + lVar8) + 0x18))();
          lVar8 = lVar8 + 8;
        } while ((ulong)uVar12 * 8 != lVar8);
      }
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_00404870(*(undefined4 *)puVar3,local_68);
    }
  }
  return;
}


