/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a00b0; name: FUN_004a00b0
 */


void FUN_004a00b0(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  
  puVar5 = PTR_DAT_02712a90;
  bVar1 = *param_2;
  if (bVar1 == 0xff) {
    if ((param_2[8] == 0xff) && (*(long *)(param_2 + 0x10) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_004a0300(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_004a05c0(puVar13,param_2 + 8);
        if ((*(char *)((long)puVar13 + 0xc) == '\0') && (*(int *)(puVar13 + 3) == 0)) {
          if (puVar13[2] != 0) {
            *(undefined4 *)(puVar13 + 3) = 0;
            FUN_00404870(*(undefined4 *)puVar5);
            puVar13[2] = 0;
            *(undefined4 *)((long)puVar13 + 0x1c) = 0;
          }
          puVar6 = (undefined8 *)
                   ((*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28) - 0x28);
          for (puVar4 = puVar13; puVar4 < puVar6; puVar4 = puVar4 + 5) {
            *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + 9);
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + 6);
            *(undefined1 *)((long)puVar4 + 0xc) = *(undefined1 *)((long)puVar4 + 0x34);
            puVar4[2] = puVar4[7];
            *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar4 + 8);
            *(undefined4 *)((long)puVar4 + 0x1c) = *(undefined4 *)((long)puVar4 + 0x44);
            puVar4[7] = 0;
            puVar4[8] = 0;
          }
          (**(code **)*puVar6)();
          uVar8 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar8;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x18);
          puVar13 = puVar13 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x28) != puVar13);
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar10) {
      lVar12 = *(long *)(param_1 + 0x10);
      iVar11 = 0;
      do {
        while( true ) {
          iVar3 = iVar10 - iVar11;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar11 + (iVar3 >> 1);
          lVar14 = (long)iVar3;
          bVar2 = *(byte *)(lVar12 + (long)iVar3 * 0x28 + 0x20);
          if (bVar1 < bVar2) break;
          if (bVar1 <= bVar2) {
            lVar7 = lVar12 + lVar14 * 0x28;
            if (lVar7 == 0) {
              return;
            }
            FUN_004a05c0(lVar7,param_2 + 8);
            if (*(char *)(lVar12 + lVar14 * 0x28 + 0xc) != '\0') {
              return;
            }
            piVar9 = (int *)(lVar12 + lVar14 * 0x28 + 0x18);
            if (*piVar9 != 0) {
              return;
            }
            plVar15 = (long *)(lVar12 + lVar14 * 0x28 + 0x10);
            if (*plVar15 != 0) {
              *piVar9 = 0;
              FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
              *plVar15 = 0;
              *(undefined4 *)(lVar12 + lVar14 * 0x28 + 0x1c) = 0;
            }
            FUN_004a0bd0((long *)(param_1 + 0x10),*param_2);
            return;
          }
          iVar11 = iVar3 + 1;
          if (iVar10 < iVar11) {
            return;
          }
        }
        iVar10 = iVar3 + -1;
      } while (iVar11 <= iVar10);
    }
  }
  return;
}


