/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b26c0; name: FUN_004b26c0
 */


void FUN_004b26c0(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  int *piVar13;
  long lVar14;
  int *piVar15;
  
  plVar4 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar4 != (long *)0x0) && (plVar5 = (long *)*plVar4, plVar5 != (long *)0x0)) {
    plVar8 = (long *)0x0;
    plVar10 = plVar5;
    do {
      plVar11 = (long *)plVar10[2];
      if ((int)plVar10[7] == param_2) {
        if (plVar5 != plVar10) {
          plVar4 = plVar8 + 2;
        }
        *plVar4 = (long)plVar11;
        FUN_004b47f0(*(undefined8 *)PTR_DAT_02712b68,param_2,plVar10);
        uVar9 = *(uint *)(plVar10 + 6);
        uVar12 = (ulong)uVar9;
        puVar3 = (undefined4 *)PTR_DAT_02712a90;
        do {
          PTR_DAT_02712a90 = (undefined *)puVar3;
          if (uVar9 == 0) {
            uVar2 = *puVar3;
            *plVar10 = (long)(PTR_DAT_02713448 + 0x10);
            if (plVar10[5] != 0) {
              *(undefined4 *)(plVar10 + 6) = 0;
              FUN_00404870(*puVar3);
              plVar10[5] = 0;
              *(undefined4 *)((long)plVar10 + 0x34) = 0;
            }
            if (plVar10[4] != 0) {
              FUN_00404870(*puVar3);
            }
            plVar10[4] = 0;
            FUN_00404870(uVar2,plVar10);
            if ((param_3 & 1) == 0) {
              return;
            }
            FUN_004b2040(param_1);
            return;
          }
          if ((int)uVar12 != 0) {
            piVar15 = (int *)plVar10[5];
            iVar1 = *piVar15;
            FUN_004b1d40(*(undefined8 *)(piVar15 + 2));
            (**(code **)(**(long **)(piVar15 + 2) + 0x18))();
            piVar13 = (int *)plVar10[5];
            uVar9 = *(uint *)(plVar10 + 6);
            uVar12 = (ulong)uVar9;
            piVar15 = piVar13 + uVar12 * 4;
            piVar7 = piVar13;
            if (uVar9 != 0) {
              lVar14 = uVar12 << 4;
              piVar6 = piVar13;
              do {
                piVar7 = piVar6;
                if (*piVar6 == iVar1) break;
                lVar14 = lVar14 + -0x10;
                piVar6 = piVar6 + 4;
                piVar7 = piVar15;
              } while (lVar14 != 0);
            }
            if (piVar15 != piVar7) {
              if (piVar7 < piVar15 + -4) {
                uVar12 = (long)piVar13 + (uVar12 * 0x10 - (long)piVar7) + -0x11;
                uVar9 = ((uint)(uVar12 >> 4) & 0xfffffff) + 1;
                if ((uVar9 & 7) != 0) {
                  lVar14 = -((ulong)uVar9 & 7);
                  piVar13 = piVar7;
                  do {
                    piVar7 = piVar13 + 4;
                    *(undefined8 *)piVar13 = *(undefined8 *)piVar7;
                    *(undefined8 *)(piVar13 + 2) = *(undefined8 *)(piVar13 + 6);
                    lVar14 = lVar14 + 1;
                    piVar13 = piVar7;
                  } while (lVar14 != 0);
                }
                if (0x6f < uVar12) {
                  do {
                    *(undefined8 *)piVar7 = *(undefined8 *)(piVar7 + 4);
                    *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(piVar7 + 6);
                    *(undefined8 *)(piVar7 + 4) = *(undefined8 *)(piVar7 + 8);
                    *(undefined8 *)(piVar7 + 6) = *(undefined8 *)(piVar7 + 10);
                    *(undefined8 *)(piVar7 + 8) = *(undefined8 *)(piVar7 + 0xc);
                    *(undefined8 *)(piVar7 + 10) = *(undefined8 *)(piVar7 + 0xe);
                    *(undefined8 *)(piVar7 + 0xc) = *(undefined8 *)(piVar7 + 0x10);
                    *(undefined8 *)(piVar7 + 0xe) = *(undefined8 *)(piVar7 + 0x12);
                    *(undefined8 *)(piVar7 + 0x10) = *(undefined8 *)(piVar7 + 0x14);
                    *(undefined8 *)(piVar7 + 0x12) = *(undefined8 *)(piVar7 + 0x16);
                    *(undefined8 *)(piVar7 + 0x14) = *(undefined8 *)(piVar7 + 0x18);
                    *(undefined8 *)(piVar7 + 0x16) = *(undefined8 *)(piVar7 + 0x1a);
                    *(undefined8 *)(piVar7 + 0x18) = *(undefined8 *)(piVar7 + 0x1c);
                    *(undefined8 *)(piVar7 + 0x1a) = *(undefined8 *)(piVar7 + 0x1e);
                    piVar13 = piVar7 + 0x20;
                    *(undefined8 *)(piVar7 + 0x1c) = *(undefined8 *)piVar13;
                    *(undefined8 *)(piVar7 + 0x1e) = *(undefined8 *)(piVar7 + 0x22);
                    piVar7 = piVar13;
                  } while (piVar13 < piVar15 + -4);
                }
                uVar9 = *(uint *)(plVar10 + 6);
              }
              uVar12 = (ulong)(uVar9 - 1);
              *(uint *)(plVar10 + 6) = uVar9 - 1;
            }
          }
          uVar9 = (uint)uVar12;
          puVar3 = (undefined4 *)PTR_DAT_02712a90;
        } while( true );
      }
      plVar8 = plVar10;
      plVar10 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
  return;
}


