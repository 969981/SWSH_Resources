/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c5bc0; name: FUN_004c5bc0
 */


void FUN_004c5bc0(ulong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  
  puVar5 = PTR_DAT_027134f8;
  puVar4 = PTR_DAT_02712e28;
  uVar8 = *(uint *)(PTR_DAT_027134f8 + 8);
  if (uVar8 != 0) {
    plVar15 = *(long **)PTR_DAT_027134f8;
    if ((param_1 & 1) == 0) {
      do {
        plVar11 = (long *)*plVar15;
        FUN_004c7580(plVar11);
        lVar14 = plVar11[9];
        if (lVar14 == 0) {
LAB_004c5db8:
          if ((((plVar11[0xe] == 0) || (*(long *)(plVar11[0xe] + 0x80) == 0)) &&
              (lVar14 = FUN_0047d760(plVar11 + 0xe), lVar14 != 0)) &&
             (iVar9 = *(int *)(lVar14 + 0x3c), iVar6 = (**(code **)(*plVar11 + 0x88))(plVar11),
             iVar9 == iVar6)) goto LAB_004c5da8;
LAB_004c5df0:
          uVar3 = *(undefined4 *)puVar4;
          if (((plVar11[9] == 0) && ((plVar11[0xe] == 0 || (*(long *)(plVar11[0xe] + 0x80) == 0))))
             && ((lVar14 = FUN_0047d760(plVar11 + 0xe), lVar14 != 0 &&
                 ((*(long **)(lVar14 + 0x118) == plVar11 ||
                  (*(long **)(lVar14 + 0x118) == (long *)0x0)))))) {
            FUN_0047b000();
          }
          FUN_004d43c0(plVar11);
          FUN_00404870(uVar3,plVar11);
          uVar8 = *(uint *)(puVar5 + 8);
          plVar11 = (long *)(*(long *)puVar5 + (ulong)uVar8 * 8 + -8);
          if (plVar15 < plVar11) {
            uVar12 = (*(long *)puVar5 + ((ulong)uVar8 * 8 - (long)plVar15)) - 9;
            uVar8 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
            plVar10 = plVar15;
            if ((uVar8 & 7) != 0) {
              lVar14 = -((ulong)uVar8 & 7);
              plVar13 = plVar15;
              do {
                plVar10 = plVar13 + 1;
                *plVar13 = *plVar10;
                lVar14 = lVar14 + 1;
                plVar13 = plVar10;
              } while (lVar14 != 0);
            }
            if (0x37 < uVar12) {
              do {
                *plVar10 = plVar10[1];
                plVar10[1] = plVar10[2];
                plVar10[2] = plVar10[3];
                plVar10[3] = plVar10[4];
                plVar10[4] = plVar10[5];
                plVar10[5] = plVar10[6];
                plVar10[6] = plVar10[7];
                plVar13 = plVar10 + 8;
                plVar10[7] = *plVar13;
                plVar10 = plVar13;
              } while (plVar13 < plVar11);
            }
            uVar8 = *(uint *)(puVar5 + 8);
          }
          uVar8 = uVar8 - 1;
          *(uint *)(puVar5 + 8) = uVar8;
        }
        else {
          iVar9 = 0;
          lVar7 = lVar14;
          do {
            piVar1 = (int *)(lVar7 + 0x2a0);
            lVar7 = *(long *)(lVar7 + 0x40);
            if (*piVar1 == 0) {
              iVar9 = iVar9 + 1;
            }
          } while (lVar7 != 0);
          if (iVar9 == 0) {
            if (lVar14 == 0) goto LAB_004c5db8;
            goto LAB_004c5df0;
          }
LAB_004c5da8:
          uVar8 = *(uint *)(puVar5 + 8);
          plVar15 = plVar15 + 1;
        }
      } while ((long *)(*(long *)puVar5 + (ulong)uVar8 * 8) != plVar15);
    }
    else {
      plVar11 = plVar15;
      do {
        lVar14 = *plVar15;
        if (lVar14 != 0) {
          uVar3 = *(undefined4 *)puVar4;
          if ((*(long *)(lVar14 + 0x48) == 0) &&
             ((((*(long *)(lVar14 + 0x70) == 0 || (*(long *)(*(long *)(lVar14 + 0x70) + 0x80) == 0))
               && (lVar7 = FUN_0047d760(lVar14 + 0x70), lVar7 != 0)) &&
              ((*(long *)(lVar7 + 0x118) == lVar14 || (*(long *)(lVar7 + 0x118) == 0)))))) {
            FUN_0047b000();
          }
          FUN_004d43c0(lVar14);
          FUN_00404870(uVar3,lVar14);
          plVar11 = *(long **)puVar5;
          uVar8 = *(uint *)(puVar5 + 8);
        }
        if (plVar15 < plVar11 + ((ulong)uVar8 - 1)) {
          uVar12 = (long)plVar11 + (ulong)uVar8 * 8 + ~(ulong)plVar15 + -8;
          uVar2 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
          plVar10 = plVar15;
          if ((uVar2 & 7) != 0) {
            lVar14 = -((ulong)uVar2 & 7);
            plVar13 = plVar15;
            do {
              plVar10 = plVar13 + 1;
              *plVar13 = *plVar10;
              lVar14 = lVar14 + 1;
              plVar13 = plVar10;
            } while (lVar14 != 0);
          }
          if (0x37 < uVar12) {
            do {
              *plVar10 = plVar10[1];
              plVar10[1] = plVar10[2];
              plVar10[2] = plVar10[3];
              plVar10[3] = plVar10[4];
              plVar10[4] = plVar10[5];
              plVar10[5] = plVar10[6];
              plVar10[6] = plVar10[7];
              plVar13 = plVar10 + 8;
              plVar10[7] = *plVar13;
              plVar10 = plVar13;
            } while (plVar13 < plVar11 + ((ulong)uVar8 - 1));
          }
          uVar8 = *(uint *)(puVar5 + 8);
          plVar11 = *(long **)puVar5;
        }
        uVar8 = uVar8 - 1;
        *(uint *)(puVar5 + 8) = uVar8;
      } while (plVar11 + uVar8 != plVar15);
    }
  }
  for (lVar14 = *(long *)(PTR_DAT_02713500 + 0x10); lVar14 != 0; lVar14 = *(long *)(lVar14 + 0x68))
  {
    FUN_004c7580(lVar14);
    FUN_004c6440(lVar14);
  }
  return;
}


