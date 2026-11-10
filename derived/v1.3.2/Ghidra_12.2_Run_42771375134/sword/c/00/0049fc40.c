/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049fc40; name: FUN_0049fc40
 */


void FUN_0049fc40(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar4 = PTR_DAT_02712a90;
  uVar5 = *param_2;
  if (uVar5 == 0) {
    if ((((char)param_2[2] == -1) && ((char)param_2[4] == -1)) && (*(long *)(param_2 + 6) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar11 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
        do {
          FUN_004a0300(puVar9);
          puVar9 = puVar9 + 5;
          lVar11 = lVar11 + -0x28;
        } while (lVar11 != 0);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar9 != (undefined8 *)0x0) {
        if (*(uint *)(param_1 + 0x18) != 0) {
          lVar11 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
          do {
            (**(code **)*puVar9)(puVar9);
            lVar11 = lVar11 + -0x28;
            puVar9 = puVar9 + 5;
          } while (lVar11 != 0);
          puVar9 = *(undefined8 **)(param_1 + 0x10);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar9);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_004a00b0(puVar9,param_2 + 2);
        if ((*(char *)((long)puVar9 + 0xc) == '\0') && (*(int *)(puVar9 + 3) == 0)) {
          FUN_004a0300(puVar9);
          puVar12 = (undefined8 *)
                    (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28 + -0x28);
          puVar3 = puVar9;
          while (puVar3 < puVar12) {
            *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 9);
            puVar6 = (undefined8 *)puVar3[2];
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar3 + 6);
            *(undefined1 *)((long)puVar3 + 0xc) = *(undefined1 *)((long)puVar3 + 0x34);
            if (puVar6 != (undefined8 *)0x0) {
              if (*(uint *)(puVar3 + 3) != 0) {
                lVar11 = (ulong)*(uint *)(puVar3 + 3) * 0x28;
                do {
                  (**(code **)*puVar6)(puVar6);
                  lVar11 = lVar11 + -0x28;
                  puVar6 = puVar6 + 5;
                } while (lVar11 != 0);
                puVar6 = (undefined8 *)puVar3[2];
              }
              *(undefined4 *)(puVar3 + 3) = 0;
              FUN_00404870(*(undefined4 *)puVar4,puVar6);
              puVar3[2] = 0;
              *(undefined4 *)((long)puVar3 + 0x1c) = 0;
            }
            puVar3[2] = puVar3[7];
            *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar3 + 8);
            *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x44);
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3 = puVar3 + 5;
          }
          (**(code **)*puVar12)(puVar12);
          uVar5 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar5;
        }
        else {
          uVar5 = *(uint *)(param_1 + 0x18);
          puVar9 = puVar9 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5 * 0x28) != puVar9);
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar7) {
      lVar11 = *(long *)(param_1 + 0x10);
      iVar8 = 0;
      do {
        while( true ) {
          iVar2 = iVar7 - iVar8;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar8 + (iVar2 >> 1);
          lVar13 = (long)iVar2;
          uVar1 = *(uint *)(lVar11 + (long)iVar2 * 0x28 + 0x20);
          if (uVar5 < uVar1) break;
          if (uVar5 <= uVar1) {
            lVar10 = lVar11 + lVar13 * 0x28;
            if (lVar10 == 0) {
              return;
            }
            FUN_004a00b0(lVar10,param_2 + 2);
            if (*(char *)(lVar11 + lVar13 * 0x28 + 0xc) != '\0') {
              return;
            }
            if (*(int *)(lVar11 + lVar13 * 0x28 + 0x18) == 0) {
              FUN_004a0300(lVar10);
              FUN_004a0450((long *)(param_1 + 0x10),*param_2);
              return;
            }
            return;
          }
          iVar8 = iVar2 + 1;
          if (iVar7 < iVar8) {
            return;
          }
        }
        iVar7 = iVar2 + -1;
      } while (iVar8 <= iVar7);
    }
  }
  return;
}


