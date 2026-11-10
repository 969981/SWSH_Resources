/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045a3a0; name: FUN_0045a3a0
 */


void FUN_0045a3a0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  
  *(undefined4 *)(param_1 + 0x16) = 0;
  puVar9 = PTR_DAT_02712d38;
  puVar8 = PTR_DAT_02712d18;
  puVar7 = PTR_DAT_02712a90;
  plVar10 = param_1;
  if ((char)param_1[0x17] == '\0') {
    plVar10 = *(long **)PTR_DAT_02712d18;
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      while (plVar10 == (long *)0x0) {
        plVar10 = (long *)FUN_00404690(*(undefined4 *)puVar7,0xc0);
        *plVar10 = (long)puVar1;
        plVar10[1] = 0;
        lVar13 = *(long *)(puVar9 + 8);
        plVar10[2] = 0;
        plVar10[3] = lVar13;
        plVar12 = (long *)(puVar9 + 0x10);
        if (*(long *)(puVar9 + 0x10) != 0) {
          plVar12 = (long *)(lVar13 + 0x10);
        }
        *plVar12 = (long)plVar10;
        *(long **)(puVar9 + 8) = plVar10;
        *(int *)puVar9 = *(int *)puVar9 + 1;
        *plVar10 = (long)puVar2;
        plVar10[7] = 0;
        plVar10[8] = 0;
        plVar10[10] = 0;
        plVar10[0xb] = 0;
        plVar10[0xf] = 0;
        plVar10[0x10] = 0;
        plVar10[0x12] = 0;
        plVar10[0x13] = 0;
        plVar10[0x15] = 0;
        plVar10[0x16] = 0;
        *(long **)puVar8 = plVar10;
        *(undefined2 *)(plVar10 + 0x17) = 0x101;
        if ((char)plVar10[0x17] != '\0') goto LAB_0045a480;
      }
    } while ((char)plVar10[0x17] == '\0');
  }
LAB_0045a480:
  FUN_0045afa0(param_1 + 0x14,plVar10 + 9);
  puVar9 = PTR_DAT_02712d38;
  puVar8 = PTR_DAT_02712d18;
  puVar7 = PTR_DAT_02712a90;
  plVar10 = param_1;
  if (*(char *)((long)param_1 + 0xb9) == '\0') {
    plVar10 = *(long **)PTR_DAT_02712d18;
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      while (plVar10 == (long *)0x0) {
        plVar10 = (long *)FUN_00404690(*(undefined4 *)puVar7,0xc0);
        *plVar10 = (long)puVar1;
        plVar10[1] = 0;
        lVar13 = *(long *)(puVar9 + 8);
        plVar10[2] = 0;
        plVar10[3] = lVar13;
        plVar12 = (long *)(puVar9 + 0x10);
        if (*(long *)(puVar9 + 0x10) != 0) {
          plVar12 = (long *)(lVar13 + 0x10);
        }
        *plVar12 = (long)plVar10;
        *(long **)(puVar9 + 8) = plVar10;
        *(int *)puVar9 = *(int *)puVar9 + 1;
        *plVar10 = (long)puVar2;
        plVar10[7] = 0;
        plVar10[8] = 0;
        plVar10[10] = 0;
        plVar10[0xb] = 0;
        plVar10[0xf] = 0;
        plVar10[0x10] = 0;
        plVar10[0x12] = 0;
        plVar10[0x13] = 0;
        plVar10[0x15] = 0;
        plVar10[0x16] = 0;
        *(long **)puVar8 = plVar10;
        *(undefined2 *)(plVar10 + 0x17) = 0x101;
        if (*(char *)((long)plVar10 + 0xb9) != '\0') goto LAB_0045a548;
      }
    } while (*(char *)((long)plVar10 + 0xb9) == '\0');
  }
LAB_0045a548:
  FUN_0045afa0(param_1 + 0x14,plVar10 + 0x11);
  puVar8 = PTR_DAT_02712d20;
  puVar7 = PTR_DAT_02712a90;
  if ((int)param_1[0x16] != 0) {
    puVar15 = (undefined8 *)param_1[0x15];
    do {
      puVar11 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar8,*puVar15);
      if (puVar11 != (undefined8 *)0x0) {
        FUN_0045b180(puVar11);
        iVar5 = *(int *)(puVar11 + 10);
        *(int *)(puVar11 + 10) = iVar5 + -1;
        if (iVar5 + -1 == 0) {
          uVar6 = *(undefined4 *)puVar7;
          (**(code **)*puVar11)(puVar11);
          FUN_00404870(uVar6,puVar11);
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != (undefined8 *)(param_1[0x15] + (ulong)*(uint *)(param_1 + 0x16) * 8));
  }
  puVar9 = PTR_DAT_02712d38;
  puVar8 = PTR_DAT_02712d20;
  puVar7 = PTR_DAT_02712a90;
  if ((*(long **)PTR_DAT_02712d18 == param_1) &&
     (plVar10 = *(long **)(PTR_DAT_02712d38 + 0x10), plVar10 != (long *)0x0)) {
    puVar1 = PTR_DAT_02712d28 + 0x10;
    puVar2 = PTR_DAT_02712d30 + 0x10;
    do {
      if (plVar10 != param_1) {
        if (*(char *)((long)plVar10 + 0xb9) == '\0') {
          *(undefined4 *)(plVar10 + 0x16) = 0;
          plVar12 = plVar10;
          puVar15 = (undefined8 *)PTR_DAT_02712d18;
          puVar14 = PTR_DAT_02712d28;
          if ((char)plVar10[0x17] == '\0') goto LAB_0045a674;
        }
        else {
          if ((char)plVar10[0x17] != '\0') goto LAB_0045a818;
          *(undefined4 *)(plVar10 + 0x16) = 0;
LAB_0045a674:
          puVar14 = PTR_DAT_02712d28;
          puVar15 = (undefined8 *)PTR_DAT_02712d18;
          plVar12 = *(long **)PTR_DAT_02712d18;
          do {
            while (plVar12 == (long *)0x0) {
              plVar12 = (long *)FUN_00404690(*(undefined4 *)puVar7,0xc0);
              *plVar12 = (long)puVar1;
              plVar12[1] = 0;
              lVar13 = *(long *)(puVar9 + 8);
              plVar12[2] = 0;
              plVar12[3] = lVar13;
              plVar4 = (long *)(puVar9 + 0x10);
              if (*(long *)(puVar9 + 0x10) != 0) {
                plVar4 = (long *)(lVar13 + 0x10);
              }
              *plVar4 = (long)plVar12;
              *(int *)puVar9 = *(int *)puVar9 + 1;
              *(long **)(puVar9 + 8) = plVar12;
              *plVar12 = (long)puVar2;
              plVar12[7] = 0;
              plVar12[8] = 0;
              plVar12[10] = 0;
              plVar12[0xb] = 0;
              plVar12[0xf] = 0;
              plVar12[0x10] = 0;
              plVar12[0x12] = 0;
              plVar12[0x13] = 0;
              plVar12[0x15] = 0;
              plVar12[0x16] = 0;
              *puVar15 = plVar12;
              *(undefined2 *)(plVar12 + 0x17) = 0x101;
              if ((char)plVar12[0x17] != '\0') goto LAB_0045a6f4;
            }
          } while ((char)plVar12[0x17] == '\0');
        }
LAB_0045a6f4:
        FUN_0045afa0(plVar10 + 0x14,plVar12 + 9);
        plVar12 = plVar10;
        if (*(char *)((long)plVar10 + 0xb9) == '\0') {
          plVar12 = (long *)*puVar15;
          do {
            while (plVar12 == (long *)0x0) {
              plVar12 = (long *)FUN_00404690(*(undefined4 *)puVar7,0xc0);
              *plVar12 = (long)(puVar14 + 0x10);
              plVar12[1] = 0;
              lVar13 = *(long *)(puVar9 + 8);
              plVar12[2] = 0;
              plVar12[3] = lVar13;
              plVar4 = (long *)(puVar9 + 0x10);
              if (*(long *)(puVar9 + 0x10) != 0) {
                plVar4 = (long *)(lVar13 + 0x10);
              }
              *plVar4 = (long)plVar12;
              puVar3 = PTR_DAT_02712d30 + 0x10;
              *(long **)(puVar9 + 8) = plVar12;
              *(int *)puVar9 = *(int *)puVar9 + 1;
              *plVar12 = (long)puVar3;
              plVar12[7] = 0;
              plVar12[8] = 0;
              plVar12[10] = 0;
              plVar12[0xb] = 0;
              plVar12[0xf] = 0;
              plVar12[0x10] = 0;
              plVar12[0x12] = 0;
              plVar12[0x13] = 0;
              plVar12[0x15] = 0;
              plVar12[0x16] = 0;
              *puVar15 = plVar12;
              *(undefined2 *)(plVar12 + 0x17) = 0x101;
              if (*(char *)((long)plVar12 + 0xb9) != '\0') goto LAB_0045a79c;
            }
          } while (*(char *)((long)plVar12 + 0xb9) == '\0');
        }
LAB_0045a79c:
        FUN_0045afa0(plVar10 + 0x14,plVar12 + 0x11);
        if ((int)plVar10[0x16] != 0) {
          puVar15 = (undefined8 *)plVar10[0x15];
          do {
            puVar11 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar8,*puVar15);
            if (puVar11 != (undefined8 *)0x0) {
              FUN_0045b180(puVar11);
              iVar5 = *(int *)(puVar11 + 10);
              *(int *)(puVar11 + 10) = iVar5 + -1;
              if (iVar5 + -1 == 0) {
                uVar6 = *(undefined4 *)puVar7;
                (**(code **)*puVar11)(puVar11);
                FUN_00404870(uVar6,puVar11);
              }
            }
            puVar15 = puVar15 + 1;
          } while (puVar15 != (undefined8 *)(plVar10[0x15] + (ulong)*(uint *)(plVar10 + 0x16) * 8));
        }
      }
LAB_0045a818:
      plVar10 = (long *)plVar10[2];
    } while (plVar10 != (long *)0x0);
  }
  return;
}


