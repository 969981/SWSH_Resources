/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b2910; name: FUN_004b2910
 */


void FUN_004b2910(long *param_1,ulong param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  int *piVar14;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  puVar5 = PTR_DAT_02712b68;
  puVar4 = PTR_DAT_02712a90;
  if ((plVar6 != (long *)0x0) && (plVar13 = (long *)*plVar6, plVar13 != (long *)0x0)) {
    puVar1 = PTR_DAT_02713448 + 0x10;
    do {
      if (plVar13[2] == 0) {
        *plVar6 = 0;
      }
      else {
        *plVar6 = plVar13[2];
      }
      FUN_004b47f0(*(undefined8 *)puVar5,(int)plVar13[7],plVar13);
      uVar9 = *(uint *)(plVar13 + 6);
      uVar10 = (ulong)uVar9;
      while (uVar9 != 0) {
        if ((int)uVar10 != 0) {
          piVar14 = (int *)plVar13[5];
          iVar2 = *piVar14;
          FUN_004b1d40(*(undefined8 *)(piVar14 + 2));
          (**(code **)(**(long **)(piVar14 + 2) + 0x18))();
          piVar11 = (int *)plVar13[5];
          uVar9 = *(uint *)(plVar13 + 6);
          uVar10 = (ulong)uVar9;
          piVar14 = piVar11 + uVar10 * 4;
          piVar8 = piVar11;
          if (uVar9 != 0) {
            lVar12 = uVar10 << 4;
            piVar7 = piVar11;
            do {
              piVar8 = piVar7;
              if (*piVar7 == iVar2) break;
              lVar12 = lVar12 + -0x10;
              piVar7 = piVar7 + 4;
              piVar8 = piVar14;
            } while (lVar12 != 0);
          }
          if (piVar14 != piVar8) {
            if (piVar8 < piVar14 + -4) {
              uVar10 = (long)piVar11 + (uVar10 * 0x10 - (long)piVar8) + -0x11;
              uVar9 = ((uint)(uVar10 >> 4) & 0xfffffff) + 1;
              if ((uVar9 & 7) != 0) {
                lVar12 = -((ulong)uVar9 & 7);
                piVar11 = piVar8;
                do {
                  piVar8 = piVar11 + 4;
                  *(undefined8 *)piVar11 = *(undefined8 *)piVar8;
                  *(undefined8 *)(piVar11 + 2) = *(undefined8 *)(piVar11 + 6);
                  lVar12 = lVar12 + 1;
                  piVar11 = piVar8;
                } while (lVar12 != 0);
              }
              if (0x6f < uVar10) {
                do {
                  *(undefined8 *)piVar8 = *(undefined8 *)(piVar8 + 4);
                  *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
                  *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 8);
                  *(undefined8 *)(piVar8 + 6) = *(undefined8 *)(piVar8 + 10);
                  *(undefined8 *)(piVar8 + 8) = *(undefined8 *)(piVar8 + 0xc);
                  *(undefined8 *)(piVar8 + 10) = *(undefined8 *)(piVar8 + 0xe);
                  *(undefined8 *)(piVar8 + 0xc) = *(undefined8 *)(piVar8 + 0x10);
                  *(undefined8 *)(piVar8 + 0xe) = *(undefined8 *)(piVar8 + 0x12);
                  *(undefined8 *)(piVar8 + 0x10) = *(undefined8 *)(piVar8 + 0x14);
                  *(undefined8 *)(piVar8 + 0x12) = *(undefined8 *)(piVar8 + 0x16);
                  *(undefined8 *)(piVar8 + 0x14) = *(undefined8 *)(piVar8 + 0x18);
                  *(undefined8 *)(piVar8 + 0x16) = *(undefined8 *)(piVar8 + 0x1a);
                  *(undefined8 *)(piVar8 + 0x18) = *(undefined8 *)(piVar8 + 0x1c);
                  *(undefined8 *)(piVar8 + 0x1a) = *(undefined8 *)(piVar8 + 0x1e);
                  piVar11 = piVar8 + 0x20;
                  *(undefined8 *)(piVar8 + 0x1c) = *(undefined8 *)piVar11;
                  *(undefined8 *)(piVar8 + 0x1e) = *(undefined8 *)(piVar8 + 0x22);
                  piVar8 = piVar11;
                } while (piVar11 < piVar14 + -4);
              }
              uVar9 = *(uint *)(plVar13 + 6);
            }
            uVar10 = (ulong)(uVar9 - 1);
            *(uint *)(plVar13 + 6) = uVar9 - 1;
          }
        }
        uVar9 = (uint)uVar10;
      }
      uVar3 = *(undefined4 *)puVar4;
      *plVar13 = (long)puVar1;
      if (plVar13[5] != 0) {
        *(undefined4 *)(plVar13 + 6) = 0;
        FUN_00404870(*(undefined4 *)puVar4);
        plVar13[5] = 0;
        *(undefined4 *)((long)plVar13 + 0x34) = 0;
      }
      if (plVar13[4] != 0) {
        FUN_00404870(*(undefined4 *)puVar4);
      }
      plVar13[4] = 0;
      FUN_00404870(uVar3,plVar13);
      plVar13 = (long *)*plVar6;
    } while (plVar13 != (long *)0x0);
    if ((param_2 & 1) != 0) {
      FUN_004b2040(param_1);
      return;
    }
  }
  return;
}


