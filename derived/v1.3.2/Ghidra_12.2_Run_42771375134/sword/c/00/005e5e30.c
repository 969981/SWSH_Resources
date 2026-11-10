/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e5e30; name: FUN_005e5e30
 */


void FUN_005e5e30(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  plVar7 = (long *)(**(code **)(*param_2 + 0xa8))(param_2);
  if (plVar7 != (long *)0x0) {
    lVar8 = (**(code **)(*param_3 + 0x48))(param_3);
    puVar6 = PTR_DAT_02713e78;
    if (lVar8 != 0) {
      do {
        lVar9 = (**(code **)(*param_3 + 0x78))(param_3,*(undefined4 *)(lVar8 + 0x44));
        puVar1 = puVar6;
        if (*(undefined **)(lVar9 + 8) != (undefined *)0x0) {
          puVar1 = *(undefined **)(lVar9 + 8);
        }
        lVar10 = (**(code **)(*plVar7 + 0xa8))(plVar7,puVar1);
        if ((((lVar10 != 0) && (iVar2 = *(int *)(lVar10 + 0x3c), -1 < iVar2)) &&
            (*(int *)(lVar9 + 0x40) == *(int *)(lVar10 + 0x48))) &&
           (*(int *)(lVar9 + 0x44) == *(int *)(lVar10 + 0x50))) {
          for (lVar9 = (**(code **)(*param_2 + 0x48))(param_2); lVar9 != 0;
              lVar9 = *(long *)(lVar9 + 8)) {
            if (*(int *)(lVar9 + 0x44) == iVar2) {
              iVar5 = *(int *)(lVar9 + 0x1c);
              if ((iVar5 == *(int *)(lVar8 + 0x1c)) &&
                 (*(int *)(lVar9 + 0x18) == *(int *)(lVar8 + 0x18))) {
                if (0 < iVar5) {
                  lVar10 = 0;
                  do {
                    bVar3 = *(byte *)(*(long *)(lVar9 + 0x20) + lVar10);
                    bVar4 = *(byte *)(*(long *)(lVar8 + 0x20) + lVar10);
                    if (bVar3 < bVar4 || bVar4 < bVar3) goto LAB_005e5fb4;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iVar5);
                }
                iVar5 = *(int *)(lVar9 + 0x34);
                if ((iVar5 == *(int *)(lVar8 + 0x34)) &&
                   (*(int *)(lVar9 + 0x30) == *(int *)(lVar8 + 0x30))) {
                  if (iVar5 < 1) goto LAB_005e5fe0;
                  lVar10 = 0;
                  while (bVar3 = *(byte *)(*(long *)(lVar9 + 0x38) + lVar10),
                        bVar4 = *(byte *)(*(long *)(lVar8 + 0x38) + lVar10),
                        bVar4 <= bVar3 && bVar3 <= bVar4) {
                    lVar10 = lVar10 + 1;
                    if (iVar5 <= lVar10) goto LAB_005e5fe0;
                  }
                }
              }
            }
LAB_005e5fb4:
          }
          (**(code **)(*param_2 + 0x30))(param_2,iVar2,0,lVar8 + 0x10,lVar8 + 0x28,0);
        }
LAB_005e5fe0:
        lVar8 = *(long *)(lVar8 + 8);
      } while (lVar8 != 0);
    }
  }
  return;
}


