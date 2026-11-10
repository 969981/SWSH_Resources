/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045c040; name: FUN_0045c040
 */


undefined8 FUN_0045c040(int *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  
  if (*param_1 == 1) {
    lVar6 = *(long *)(param_1 + 2);
    uVar4 = *(ushort *)(lVar6 + 6);
    if ((ulong)uVar4 != 0) {
      uVar10 = 0;
      do {
        piVar12 = (int *)(lVar6 + uVar10 * 0xc);
        piVar13 = piVar12 + 1;
        iVar7 = *piVar12;
        piVar9 = (int *)*param_2;
        uVar2 = *(uint *)(param_2 + 1);
        piVar12 = piVar9;
        if (uVar2 == 0) {
LAB_0045c0d0:
          if (piVar12 == piVar9 + (ulong)uVar2 * 2) goto LAB_0045c0e4;
          iVar7 = *piVar13;
LAB_0045c224:
          piVar12[1] = iVar7;
        }
        else {
          lVar6 = (ulong)uVar2 << 3;
          do {
            if (*piVar12 == iVar7) goto LAB_0045c0d0;
            lVar6 = lVar6 + -8;
            piVar12 = piVar12 + 2;
          } while (lVar6 != 0);
LAB_0045c0e4:
          uVar11 = *(uint *)((long)param_2 + 0xc);
          if (uVar2 < uVar11) {
LAB_0045c1fc:
            if (uVar2 < uVar11) {
              uVar2 = *(uint *)(param_2 + 1);
              *(uint *)(param_2 + 1) = uVar2 + 1;
              if (piVar9 + (ulong)uVar2 * 2 != (int *)0x0) {
                piVar9[(ulong)uVar2 * 2] = iVar7;
                iVar7 = *piVar13;
                piVar12 = piVar9 + (ulong)uVar2 * 2;
                goto LAB_0045c224;
              }
            }
          }
          else {
            uVar11 = uVar11 + 1;
            piVar9 = (int *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 << 3);
            if (piVar9 != (int *)0x0) {
              piVar12 = (int *)*param_2;
              if ((piVar12 != (int *)0x0) && (piVar12 != piVar9)) {
                uVar3 = *(uint *)(param_2 + 1);
                if (uVar3 != 0) {
                  *(undefined8 *)piVar9 = *(undefined8 *)piVar12;
                  if (uVar3 != 1) {
                    uVar1 = uVar3 + 3 & 3;
                    if ((ulong)uVar3 - 2 < 3) {
                      lVar8 = 1;
                    }
                    else {
                      lVar6 = 0;
                      do {
                        lVar8 = lVar6;
                        lVar6 = lVar8 * 8;
                        *(undefined8 *)(piVar9 + lVar8 * 2 + 2) =
                             *(undefined8 *)(*param_2 + lVar6 + 8);
                        *(undefined8 *)(piVar9 + lVar8 * 2 + 4) =
                             *(undefined8 *)(*param_2 + lVar6 + 0x10);
                        *(undefined8 *)(piVar9 + lVar8 * 2 + 6) =
                             *(undefined8 *)(*param_2 + lVar6 + 0x18);
                        *(undefined8 *)(piVar9 + lVar8 * 2 + 8) =
                             *(undefined8 *)(*param_2 + lVar6 + 0x20);
                        lVar6 = lVar8 + 4;
                      } while (((ulong)uVar3 - 1) - (ulong)uVar1 != lVar8 + 4);
                      lVar8 = lVar8 + 5;
                    }
                    if (uVar1 != 0) {
                      lVar8 = lVar8 << 3;
                      lVar6 = -(ulong)uVar1;
                      do {
                        *(undefined8 *)((long)piVar9 + lVar8) = *(undefined8 *)(*param_2 + lVar8);
                        lVar8 = lVar8 + 8;
                        lVar6 = lVar6 + 1;
                      } while (lVar6 != 0);
                    }
                  }
                  piVar12 = (int *)*param_2;
                }
                FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,piVar12);
              }
              *param_2 = (long)piVar9;
              *(uint *)((long)param_2 + 0xc) = uVar11;
              goto LAB_0045c1fc;
            }
          }
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == uVar4) break;
        lVar6 = *(long *)(param_1 + 2);
      } while( true );
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


