/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00473380; name: FUN_00473380
 */


bool FUN_00473380(long param_1,code *param_2,byte *param_3,undefined8 param_4,byte *param_5,
                 undefined8 param_6,uint param_7)

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
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  if (((((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (uVar7 = (*param_2)(param_1 + 8,param_4,param_6), (uVar7 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  puVar5 = PTR_DAT_02712a90;
  bVar1 = *param_3;
  if (bVar1 == 0xff) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar17 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(byte *)(puVar17 + 5);
        uVar7 = FUN_00473670(puVar17,param_2,param_3 + 8,param_4,param_5 + 8,param_6);
        if ((uVar7 & 1) == 0) {
          uVar9 = *(uint *)(param_1 + 0x20);
          puVar17 = puVar17 + 6;
        }
        else {
          if (puVar17[3] != 0) {
            *(undefined4 *)(puVar17 + 4) = 0;
            FUN_00404870(*(undefined4 *)puVar5);
            puVar17[3] = 0;
            *(undefined4 *)((long)puVar17 + 0x24) = 0;
          }
          puVar19 = (undefined8 *)
                    (*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30 + -0x30);
          if (puVar17 < puVar19) {
            puVar15 = puVar17 + 7;
            puVar18 = puVar17;
            do {
              *(undefined1 *)(puVar15 + -2) = *(undefined1 *)(puVar15 + 4);
              puVar15[-6] = *puVar15;
              *(undefined1 *)(puVar15 + -5) = *(undefined1 *)(puVar15 + 1);
              if (puVar15[-4] == 0) {
                puVar20 = puVar15 + -3;
                puVar10 = (undefined4 *)((long)puVar15 + -0x14);
              }
              else {
                *(undefined4 *)(puVar15 + -3) = 0;
                puVar20 = puVar18 + 4;
                FUN_00404870(*(undefined4 *)puVar5);
                puVar10 = (undefined4 *)((long)puVar18 + 0x24);
                puVar15[-4] = 0;
                *(undefined4 *)((long)puVar15 + -0x14) = 0;
              }
              puVar15[-4] = puVar15[2];
              *(undefined4 *)puVar20 = *(undefined4 *)(puVar15 + 3);
              *puVar10 = *(undefined4 *)((long)puVar15 + 0x1c);
              puVar20 = puVar15 + -1;
              puVar15[2] = 0;
              puVar15[3] = 0;
              puVar15 = puVar15 + 6;
              puVar18 = puVar18 + 6;
            } while (puVar20 < puVar19);
          }
          (**(code **)*puVar19)(puVar19);
          uVar9 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar9;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar9 * 0x30) != puVar17);
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar11) {
      lVar13 = *(long *)(param_1 + 0x18);
      iVar12 = 0;
      do {
        while( true ) {
          iVar4 = iVar11 - iVar12;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar12 + (iVar4 >> 1);
          lVar14 = (long)iVar4;
          bVar2 = *(byte *)(lVar13 + (long)iVar4 * 0x30 + 0x28);
          if (bVar1 < bVar2) break;
          if (bVar1 <= bVar2) {
            lVar8 = lVar13 + lVar14 * 0x30;
            if (lVar8 != 0) {
              *param_5 = bVar1;
              uVar7 = FUN_00473670(lVar8,param_2,param_3 + 8,param_4,param_5 + 8,param_6);
              if ((uVar7 & 1) != 0) {
                plVar16 = (long *)(lVar13 + lVar14 * 0x30 + 0x18);
                if (*plVar16 != 0) {
                  lVar13 = lVar13 + lVar14 * 0x30;
                  *(undefined4 *)(lVar13 + 0x20) = 0;
                  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
                  *plVar16 = 0;
                  *(undefined4 *)(lVar13 + 0x24) = 0;
                }
                FUN_00472570((long *)(param_1 + 0x18),*param_3);
                cVar3 = *(char *)(param_1 + 0x10);
                goto joined_r0x00473638;
              }
            }
            goto LAB_004735b8;
          }
          iVar12 = iVar4 + 1;
          if (iVar11 < iVar12) goto LAB_004735b8;
        }
        iVar11 = iVar4 + -1;
      } while (iVar12 <= iVar11);
    }
  }
LAB_004735b8:
  cVar3 = *(char *)(param_1 + 0x10);
joined_r0x00473638:
  if (cVar3 == '\0') {
    bVar6 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


