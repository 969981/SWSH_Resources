/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004614c0; name: FUN_004614c0
 */


long FUN_004614c0(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  
  plVar8 = (long *)param_2[7];
  if (plVar8 != (long *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x18))(plVar8,PTR_PTR_02713088);
    param_1[1] = lVar9;
    param_1[2] = (long)param_2;
    if (param_1 != (long *)0x0) {
      if (param_2[0xe] == 0) {
        param_2[0xe] = (long)param_1;
        param_1[0xb] = 0;
      }
      else {
        param_1[0xb] = param_2[0xe];
        param_2[0xe] = (long)param_1;
      }
      (**(code **)(*param_2 + 0x10))(param_2);
      param_2 = (long *)param_1[2];
    }
    *(undefined4 *)(param_1 + 10) = 0;
    uVar15 = *(uint *)(param_2 + 0xd);
    if (*(uint *)(param_2 + 0xb) != 0) {
      lVar12 = (ulong)*(uint *)(param_2 + 0xb) * 0x20;
      lVar11 = param_2[10];
      uVar13 = lVar12 - 0x20;
      uVar3 = ((uint)(uVar13 >> 5) & 0x7ffffff) + 1;
      lVar9 = lVar11;
      if ((uVar3 & 3) != 0) {
        lVar14 = -((ulong)uVar3 & 3);
        do {
          pcVar1 = (char *)(lVar9 + 5);
          lVar9 = lVar9 + 0x20;
          if (*pcVar1 != '\x01') {
            uVar15 = uVar15 + 1;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0);
      }
      if (0x5f < uVar13) {
        do {
          if (*(char *)(lVar9 + 5) != '\x01') {
            uVar15 = uVar15 + 1;
          }
          pcVar1 = (char *)(lVar9 + 0x45);
          if (*(char *)(lVar9 + 0x25) != '\x01') {
            uVar15 = uVar15 + 1;
          }
          pcVar2 = (char *)(lVar9 + 0x65);
          lVar9 = lVar9 + 0x80;
          if (*pcVar1 != '\x01') {
            uVar15 = uVar15 + 1;
          }
          if (*pcVar2 != '\x01') {
            uVar15 = uVar15 + 1;
          }
        } while (lVar11 + lVar12 != lVar9);
      }
    }
    lVar9 = (**(code **)(param_2[3] + 0x38))(param_2 + 3);
    plVar8 = (long *)(**(code **)(*(long *)(param_1[2] + 0x18) + 0x80))();
    if ((lVar9 != 0) && (plVar8 != (long *)0x0)) {
      lVar11 = *plVar8;
      if (lVar11 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0;
        do {
          lVar11 = *(long *)(lVar11 + 0x10);
          iVar10 = iVar10 + 1;
        } while (lVar11 != 0);
      }
      uVar15 = uVar15 + *(int *)(lVar9 + 8) * iVar10;
    }
    if (uVar15 != 0) {
      uVar3 = *(uint *)(param_1 + 10);
      if (uVar3 <= uVar15) {
        if (*(uint *)((long)param_1 + 0x54) < uVar15) {
          uVar4 = *(uint *)((long)param_1 + 0x54) + (uVar15 - uVar3);
          lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar4 << 4);
          if (lVar9 == 0) {
            (**(code **)(*param_1 + 0x28))(param_1);
            goto LAB_004617c8;
          }
          lVar11 = param_1[9];
          if ((lVar11 != 0) && (lVar11 != lVar9)) {
            uVar13 = (ulong)*(uint *)(param_1 + 10);
            if (*(uint *)(param_1 + 10) != 0) {
              lVar11 = 0;
              do {
                puVar5 = (undefined8 *)(lVar9 + lVar11);
                if (puVar5 != (undefined8 *)0x0) {
                  puVar6 = (undefined8 *)(lVar9 + lVar11);
                  *puVar6 = 0;
                  *(undefined2 *)(puVar6 + 1) = 0;
                  *(undefined4 *)((long)puVar6 + 0xc) = 0;
                }
                puVar6 = (undefined8 *)(param_1[9] + lVar11);
                lVar11 = lVar11 + 0x10;
                puVar5[1] = puVar6[1];
                uVar13 = uVar13 - 1;
                *puVar5 = *puVar6;
              } while (uVar13 != 0);
              lVar11 = param_1[9];
            }
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar11);
          }
          param_1[9] = lVar9;
          *(uint *)((long)param_1 + 0x54) = uVar4;
        }
        if (uVar3 < uVar15) {
          lVar11 = (ulong)uVar15 - (ulong)uVar3;
          lVar9 = (ulong)uVar3 << 4;
          do {
            if (param_1[9] + lVar9 != 0) {
              puVar5 = (undefined8 *)(param_1[9] + lVar9);
              *puVar5 = 0;
              *(undefined2 *)(puVar5 + 1) = 0;
              *(undefined4 *)((long)puVar5 + 0xc) = 0;
            }
            lVar11 = lVar11 + -1;
            lVar9 = lVar9 + 0x10;
          } while (lVar11 != 0);
        }
      }
      *(uint *)(param_1 + 10) = uVar15;
    }
    lVar9 = param_1[2];
    if (*(int *)(lVar9 + 0x68) != 0) {
      lVar11 = 0;
      uVar13 = 0;
      lVar12 = 0xc;
      do {
        lVar14 = param_1[9];
        puVar7 = (undefined2 *)(*(long *)(lVar9 + 0x60) + lVar11);
        lVar9 = lVar11 * 2;
        lVar11 = lVar11 + 8;
        *(undefined2 *)(lVar14 + lVar9 + 8) = *puVar7;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(lVar14 + lVar12) = *(undefined4 *)(puVar7 + 2);
        lVar9 = param_1[2];
        lVar12 = lVar12 + 0x10;
      } while (uVar13 < *(uint *)(lVar9 + 0x68));
    }
    if (param_3 == 0) {
      if ((param_6 & 1) != 0) {
        FUN_004619b0(param_1,param_4,param_5);
      }
    }
    else {
      FUN_00461820(param_1,param_3);
    }
    FUN_00461b20(param_1);
  }
LAB_004617c8:
  return param_1[1];
}


