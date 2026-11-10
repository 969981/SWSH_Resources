/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004729a0; name: FUN_004729a0
 */


bool FUN_004729a0(long param_1,code *param_2,uint *param_3,undefined8 param_4,uint *param_5,
                 undefined8 param_6,ulong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  
  if (((((param_7 & 1) != 0) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (uVar7 = (*param_2)(param_1 + 8,param_4,param_6), (uVar7 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  uVar10 = *param_3;
  if (uVar10 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      do {
        *param_5 = *(uint *)(puVar13 + 5);
        uVar7 = FUN_00472d10(puVar13,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
        if ((uVar7 & 1) == 0) {
          uVar10 = *(uint *)(param_1 + 0x20);
          puVar13 = puVar13 + 6;
        }
        else {
          puVar14 = (undefined8 *)puVar13[3];
          if (*(uint *)(puVar13 + 4) != 0) {
            lVar16 = (ulong)*(uint *)(puVar13 + 4) * 0x30;
            do {
              FUN_0046ec50(puVar14);
              puVar14 = puVar14 + 6;
              lVar16 = lVar16 + -0x30;
            } while (lVar16 != 0);
            puVar14 = (undefined8 *)puVar13[3];
          }
          if (puVar14 != (undefined8 *)0x0) {
            if (*(uint *)(puVar13 + 4) != 0) {
              lVar16 = (ulong)*(uint *)(puVar13 + 4) * 0x30;
              do {
                (**(code **)*puVar14)(puVar14);
                lVar16 = lVar16 + -0x30;
                puVar14 = puVar14 + 6;
              } while (lVar16 != 0);
              puVar14 = (undefined8 *)puVar13[3];
            }
            *(undefined4 *)(puVar13 + 4) = 0;
            FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar14);
            puVar13[3] = 0;
            *(undefined4 *)((long)puVar13 + 0x24) = 0;
          }
          puVar8 = (undefined8 *)
                   ((*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30) - 0x30);
          for (puVar14 = puVar13; puVar14 < puVar8; puVar14 = puVar14 + 6) {
            *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(puVar14 + 0xb);
            puVar14[1] = puVar14[7];
            *(undefined1 *)(puVar14 + 2) = *(undefined1 *)(puVar14 + 8);
            uVar1 = puVar14[9];
            uVar2 = puVar14[10];
            puVar14[9] = 0;
            puVar14[10] = 0;
            puVar14[3] = uVar1;
            puVar14[4] = uVar2;
          }
          (**(code **)*puVar8)();
          uVar10 = *(int *)(param_1 + 0x20) - 1;
          *(uint *)(param_1 + 0x20) = uVar10;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar10 * 0x30) != puVar13);
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar11) {
      lVar16 = *(long *)(param_1 + 0x18);
      iVar12 = 0;
      do {
        while( true ) {
          iVar5 = iVar11 - iVar12;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 1;
          }
          iVar5 = iVar12 + (iVar5 >> 1);
          lVar17 = (long)iVar5;
          uVar3 = *(uint *)(lVar16 + (long)iVar5 * 0x30 + 0x28);
          if (uVar10 < uVar3) break;
          if (uVar10 <= uVar3) {
            lVar9 = lVar16 + lVar17 * 0x30;
            if (lVar9 != 0) {
              *param_5 = uVar10;
              uVar7 = FUN_00472d10(lVar9,param_2,param_3 + 2,param_4,param_5 + 2,param_6,1);
              if ((uVar7 & 1) != 0) {
                lVar9 = lVar16 + lVar17 * 0x30;
                puVar14 = (undefined8 *)(lVar9 + 0x18);
                puVar13 = (undefined8 *)*puVar14;
                puVar15 = (uint *)(lVar9 + 0x20);
                if (*puVar15 != 0) {
                  lVar9 = (ulong)*puVar15 * 0x30;
                  do {
                    FUN_0046ec50(puVar13);
                    puVar13 = puVar13 + 6;
                    lVar9 = lVar9 + -0x30;
                  } while (lVar9 != 0);
                  puVar13 = (undefined8 *)*puVar14;
                }
                if (puVar13 != (undefined8 *)0x0) {
                  if (*puVar15 != 0) {
                    lVar9 = (ulong)*puVar15 * 0x30;
                    do {
                      (**(code **)*puVar13)(puVar13);
                      lVar9 = lVar9 + -0x30;
                      puVar13 = puVar13 + 6;
                    } while (lVar9 != 0);
                    puVar13 = (undefined8 *)*puVar14;
                  }
                  *puVar15 = 0;
                  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar13);
                  *puVar14 = 0;
                  *(undefined4 *)(lVar16 + lVar17 * 0x30 + 0x24) = 0;
                }
                FUN_00471d10((long *)(param_1 + 0x18),*param_3);
                cVar4 = *(char *)(param_1 + 0x10);
                goto joined_r0x00472cd4;
              }
            }
            goto LAB_00472bec;
          }
          iVar12 = iVar5 + 1;
          if (iVar11 < iVar12) goto LAB_00472bec;
        }
        iVar11 = iVar5 + -1;
      } while (iVar12 <= iVar11);
    }
  }
LAB_00472bec:
  cVar4 = *(char *)(param_1 + 0x10);
joined_r0x00472cd4:
  if (cVar4 == '\0') {
    bVar6 = *(int *)(param_1 + 0x20) == 0;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


