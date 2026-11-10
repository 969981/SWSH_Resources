/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00472fd0; name: FUN_00472fd0
 */


bool FUN_00472fd0(long param_1,code *param_2,byte *param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6,ulong param_7)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  uint *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  
  if (((((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (uVar7 = (*param_2)(param_1 + 8,param_4,param_6), (uVar7 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar5 = PTR_DAT_02712a90;
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(byte *)(puVar12 + 5);
        uVar7 = FUN_00473380(puVar12,param_2,param_3 + 8,param_4,param_5 + 8,param_6,1);
        if ((uVar7 & 1) == 0) {
          uVar9 = *(uint *)(param_1 + 0x20);
          puVar12 = puVar12 + 6;
        }
        else {
          puVar10 = (undefined8 *)puVar12[3];
          if (*(uint *)(puVar12 + 4) != 0) {
            lVar19 = (ulong)*(uint *)(puVar12 + 4) * 0x30;
            plVar16 = puVar10 + 3;
            do {
              if (*plVar16 != 0) {
                *(undefined4 *)(plVar16 + 1) = 0;
                FUN_00404870(*(undefined4 *)puVar5);
                *plVar16 = 0;
                *(undefined4 *)((long)plVar16 + 0xc) = 0;
              }
              lVar19 = lVar19 + -0x30;
              plVar16 = plVar16 + 6;
            } while (lVar19 != 0);
            puVar10 = (undefined8 *)puVar12[3];
          }
          if (puVar10 != (undefined8 *)0x0) {
            if (*(uint *)(puVar12 + 4) != 0) {
              lVar19 = (ulong)*(uint *)(puVar12 + 4) * 0x30;
              do {
                (**(code **)*puVar10)(puVar10);
                lVar19 = lVar19 + -0x30;
                puVar10 = puVar10 + 6;
              } while (lVar19 != 0);
              puVar10 = (undefined8 *)puVar12[3];
            }
            *(undefined4 *)(puVar12 + 4) = 0;
            FUN_00404870(*(undefined4 *)puVar5,puVar10);
            puVar12[3] = 0;
            *(undefined4 *)((long)puVar12 + 0x24) = 0;
          }
          puVar10 = (undefined8 *)
                    ((*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) - 0x30);
          if (puVar12 < puVar10) {
            puVar11 = puVar12 + 7;
            do {
              *(undefined1 *)(puVar11 + -2) = *(undefined1 *)(puVar11 + 4);
              *(undefined1 *)(puVar11 + -5) = *(undefined1 *)(puVar11 + 1);
              puVar11[-6] = *puVar11;
              puVar11[-4] = puVar11[2];
              *(undefined4 *)(puVar11 + -3) = *(undefined4 *)(puVar11 + 3);
              *(undefined4 *)((long)puVar11 + -0x14) = *(undefined4 *)((long)puVar11 + 0x1c);
              puVar14 = puVar11 + -1;
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11 = puVar11 + 6;
            } while (puVar14 < puVar10);
          }
          (**(code **)*puVar10)();
          uVar9 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar9;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar9 * 0x30) != puVar12);
    }
  }
  else {
    iVar13 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar13) {
      lVar19 = *(long *)(param_1 + 0x18);
      iVar15 = 0;
      do {
        while( true ) {
          iVar4 = iVar13 - iVar15;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar15 + (iVar4 >> 1);
          lVar20 = (long)iVar4;
          bVar2 = *(byte *)(lVar19 + (long)iVar4 * 0x30 + 0x28);
          if (bVar1 < bVar2) break;
          if (bVar1 <= bVar2) {
            lVar8 = lVar19 + lVar20 * 0x30;
            if (lVar8 != 0) {
              *param_5 = bVar1;
              uVar7 = FUN_00473380(lVar8,param_2,param_3 + 8,param_4,param_5 + 8,param_6,1);
              puVar5 = PTR_DAT_02712a90;
              if ((uVar7 & 1) != 0) {
                lVar8 = lVar19 + lVar20 * 0x30;
                plVar16 = (long *)(lVar8 + 0x18);
                puVar12 = (undefined8 *)*plVar16;
                puVar17 = (uint *)(lVar8 + 0x20);
                if (*puVar17 != 0) {
                  lVar8 = (ulong)*puVar17 * 0x30;
                  plVar18 = puVar12 + 3;
                  do {
                    if (*plVar18 != 0) {
                      *(undefined4 *)(plVar18 + 1) = 0;
                      FUN_00404870(*(undefined4 *)puVar5);
                      *plVar18 = 0;
                      *(undefined4 *)((long)plVar18 + 0xc) = 0;
                    }
                    lVar8 = lVar8 + -0x30;
                    plVar18 = plVar18 + 6;
                  } while (lVar8 != 0);
                  puVar12 = (undefined8 *)*plVar16;
                }
                if (puVar12 != (undefined8 *)0x0) {
                  if (*puVar17 != 0) {
                    lVar8 = (ulong)*puVar17 * 0x30;
                    do {
                      (**(code **)*puVar12)(puVar12);
                      lVar8 = lVar8 + -0x30;
                      puVar12 = puVar12 + 6;
                    } while (lVar8 != 0);
                    puVar12 = (undefined8 *)*plVar16;
                  }
                  *puVar17 = 0;
                  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar12);
                  *plVar16 = 0;
                  *(undefined4 *)(lVar19 + lVar20 * 0x30 + 0x24) = 0;
                }
                FUN_00472400((long *)(param_1 + 0x18),*param_3);
                cVar3 = *(char *)(param_1 + 0x10);
                goto joined_r0x00473350;
              }
            }
            goto LAB_00473248;
          }
          iVar15 = iVar4 + 1;
          if (iVar13 < iVar15) goto LAB_00473248;
        }
        iVar13 = iVar4 + -1;
      } while (iVar15 <= iVar13);
    }
  }
LAB_00473248:
  cVar3 = *(char *)(param_1 + 0x10);
joined_r0x00473350:
  if (cVar3 == '\0') {
    bVar6 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


