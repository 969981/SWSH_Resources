/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049f740; name: FUN_0049f740
 */


void FUN_0049f740(long param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  
  puVar7 = PTR_DAT_02712a90;
  uVar10 = *param_2;
  if (uVar10 == 0) {
    if ((((param_2[2] == 0) && ((char)param_2[4] == -1)) && ((char)param_2[6] == -1)) &&
       (*(long *)(param_2 + 8) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_0049f990(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar15 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_0049fc40(puVar15,param_2 + 2);
        if ((*(char *)((long)puVar15 + 0xc) == '\0') && (*(int *)(puVar15 + 3) == 0)) {
          if (puVar15[2] != 0) {
            uVar4 = *(undefined4 *)puVar7;
            *(undefined4 *)(puVar15 + 3) = 0;
            FUN_00404870(uVar4);
            puVar15[2] = 0;
            *(undefined4 *)((long)puVar15 + 0x1c) = 0;
          }
          puVar8 = (undefined8 *)
                   ((*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28) - 0x28);
          for (puVar6 = puVar15; puVar6 < puVar8; puVar6 = puVar6 + 5) {
            *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar6 + 9);
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + 6);
            *(undefined1 *)((long)puVar6 + 0xc) = *(undefined1 *)((long)puVar6 + 0x34);
            uVar1 = puVar6[7];
            uVar2 = puVar6[8];
            puVar6[7] = 0;
            puVar6[8] = 0;
            puVar6[2] = uVar1;
            puVar6[3] = uVar2;
          }
          (**(code **)*puVar8)();
          uVar10 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar10;
        }
        else {
          uVar10 = *(uint *)(param_1 + 0x18);
          puVar15 = puVar15 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar10 * 0x28) != puVar15);
    }
  }
  else {
    iVar12 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar12) {
      lVar14 = *(long *)(param_1 + 0x10);
      iVar13 = 0;
      do {
        while( true ) {
          iVar5 = iVar12 - iVar13;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          iVar5 = iVar13 + (iVar5 >> 1);
          lVar16 = (long)iVar5;
          uVar3 = *(uint *)(lVar14 + (long)iVar5 * 0x28 + 0x20);
          if (uVar10 < uVar3) break;
          if (uVar10 <= uVar3) {
            lVar9 = lVar14 + lVar16 * 0x28;
            if (lVar9 == 0) {
              return;
            }
            FUN_0049fc40(lVar9,param_2 + 2);
            if (*(char *)(lVar14 + lVar16 * 0x28 + 0xc) != '\0') {
              return;
            }
            piVar11 = (int *)(lVar14 + lVar16 * 0x28 + 0x18);
            if (*piVar11 != 0) {
              return;
            }
            plVar17 = (long *)(lVar14 + lVar16 * 0x28 + 0x10);
            if (*plVar17 != 0) {
              uVar4 = *(undefined4 *)PTR_DAT_02712a90;
              *piVar11 = 0;
              FUN_00404870(uVar4);
              *plVar17 = 0;
              *(undefined4 *)(lVar14 + lVar16 * 0x28 + 0x1c) = 0;
            }
            FUN_0049ff40((long *)(param_1 + 0x10),*param_2);
            return;
          }
          iVar13 = iVar5 + 1;
          if (iVar12 < iVar13) {
            return;
          }
        }
        iVar12 = iVar5 + -1;
      } while (iVar13 <= iVar12);
    }
  }
  return;
}


