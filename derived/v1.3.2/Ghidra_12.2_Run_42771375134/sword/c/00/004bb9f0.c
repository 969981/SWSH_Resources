/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bb9f0; name: FUN_004bb9f0
 */


void FUN_004bb9f0(long *param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    uVar6 = 0;
    if (uVar2 != 0) {
      uVar6 = (uint)param_2 / uVar2;
    }
    puVar1 = (ulong *)(param_1[3] + (ulong)((uint)param_2 - uVar6 * uVar2) * 8);
    plVar8 = (long *)*puVar1;
    if (plVar8 != (long *)0x0) {
      plVar4 = plVar8;
      do {
        if (*plVar4 == param_2) {
          if (0 < (int)param_1[8]) {
            *(undefined1 *)((long)plVar4 + 0x14) = 0;
            return;
          }
          plVar11 = (long *)0x0;
          goto LAB_004bba48;
        }
        plVar4 = (long *)plVar4[1];
      } while (plVar4 != (long *)0x0);
    }
  }
  return;
  while( true ) {
    plVar8 = (long *)plVar9[1];
    plVar11 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) break;
LAB_004bba48:
    plVar9 = plVar8;
    if (*plVar9 == param_2) {
      if (plVar11 != (long *)0x0) {
        puVar1 = (ulong *)(plVar11 + 1);
      }
      *puVar1 = plVar9[1];
      *(int *)(param_1 + 5) = (int)param_1[5] + -1;
      break;
    }
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 != 0) {
    uVar6 = *(uint *)(plVar4 + 2);
    uVar16 = 0;
    if (uVar2 != 0) {
      uVar16 = uVar6 / uVar2;
    }
    for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar6 - uVar16 * uVar2) * 8); puVar5 != (uint *)0x0;
        puVar5 = *(uint **)(puVar5 + 2)) {
      if (*puVar5 == uVar6) {
        uVar2 = puVar5[0xc];
        uVar6 = uVar2 - 1;
        if (-1 < (int)uVar6) {
          lVar12 = *(long *)(puVar5 + 10);
          iVar14 = 0;
          uVar16 = uVar6;
          goto LAB_004bbad8;
        }
        break;
      }
    }
  }
  goto LAB_004bbbac;
  while (uVar16 = iVar3 - 1, iVar14 <= (int)uVar16) {
LAB_004bbad8:
    iVar3 = uVar16 - iVar14;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar14 + (iVar3 >> 1);
    plVar8 = *(long **)(lVar12 + (long)iVar3 * 8);
    if (plVar8 <= plVar4) {
      if (plVar4 <= plVar8) {
        puVar7 = (undefined8 *)(lVar12 + (long)iVar3 * 8);
        puVar13 = (undefined8 *)(lVar12 + (ulong)uVar2 * 8 + -8);
        if (puVar7 < puVar13) {
          uVar10 = (ulong)uVar2 * 8 + -9 + (long)iVar3 * -8;
          uVar2 = ((uint)(uVar10 >> 3) & 0x1fffffff) + 1;
          if ((uVar2 & 3) != 0) {
            lVar12 = -((ulong)uVar2 & 3);
            puVar15 = puVar7;
            do {
              puVar7 = puVar15 + 1;
              *puVar15 = *puVar7;
              lVar12 = lVar12 + 1;
              puVar15 = puVar7;
            } while (lVar12 != 0);
          }
          if (0x17 < uVar10) {
            do {
              *puVar7 = puVar7[1];
              puVar7[1] = puVar7[2];
              puVar7[2] = puVar7[3];
              puVar15 = puVar7 + 4;
              puVar7[3] = *puVar15;
              puVar7 = puVar15;
            } while (puVar15 < puVar13);
          }
          uVar6 = puVar5[0xc] - 1;
        }
        puVar5[0xc] = uVar6;
        break;
      }
      iVar14 = iVar3 + 1;
      if ((int)uVar16 < iVar14) break;
      goto LAB_004bbad8;
    }
  }
LAB_004bbbac:
  FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
  return;
}


