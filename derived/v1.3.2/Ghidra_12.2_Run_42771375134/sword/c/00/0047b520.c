/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047b520; name: FUN_0047b520
 */


/* WARNING: Removing unreachable block (ram,0x0047b5e4) */

long FUN_0047b520(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  uint uVar16;
  
  puVar6 = PTR_DAT_02712a90;
  piVar8 = *(int **)(param_1 + 0x78);
  uVar14 = *(uint *)(param_1 + 0x80);
  piVar11 = piVar8;
  if (uVar14 == 0) {
LAB_0047b578:
    if (piVar11 == piVar8 + (ulong)uVar14 * 4) goto LAB_0047b58c;
LAB_0047b6b0:
    plVar15 = (long *)(piVar11 + 2);
    *plVar15 = 0;
    FUN_004a80f0(*(undefined4 *)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x40),plVar15);
    if (*plVar15 != 0) {
      return *plVar15;
    }
  }
  else {
    lVar12 = (ulong)uVar14 << 4;
    do {
      if (*piVar11 == param_2) goto LAB_0047b578;
      lVar12 = lVar12 + -0x10;
      piVar11 = piVar11 + 4;
    } while (lVar12 != 0);
LAB_0047b58c:
    uVar16 = *(uint *)(param_1 + 0x84);
    if (uVar14 < uVar16) {
LAB_0047b684:
      if (uVar14 < uVar16) {
        piVar8 = *(int **)(param_1 + 0x78);
        uVar16 = *(uint *)(param_1 + 0x80);
        uVar14 = uVar16 + 1;
        *(uint *)(param_1 + 0x80) = uVar14;
        if (piVar8 + (ulong)uVar16 * 4 == (int *)0x0) goto LAB_0047b6d8;
        piVar11 = piVar8 + (ulong)uVar16 * 4;
        piVar8[(ulong)uVar16 * 4] = param_2;
        goto LAB_0047b6b0;
      }
    }
    else {
      uVar16 = uVar16 + 1;
      lVar12 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 4);
      if (lVar12 != 0) {
        lVar7 = *(long *)(param_1 + 0x78);
        if ((lVar7 != 0) && (lVar7 != lVar12)) {
          uVar5 = *(uint *)(param_1 + 0x80);
          if (uVar5 != 0) {
            if (uVar5 == 1) {
              lVar9 = 0;
LAB_0047b64c:
              puVar3 = (undefined8 *)(lVar12 + lVar9 * 0x10);
              if (puVar3 != (undefined8 *)0x0) {
                *(undefined4 *)puVar3 = 0;
              }
              puVar4 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar9 * 0x10);
              puVar3[1] = puVar4[1];
              *puVar3 = *puVar4;
            }
            else {
              lVar7 = 0;
              lVar9 = 0;
              do {
                puVar3 = (undefined8 *)(lVar12 + lVar7);
                if (puVar3 != (undefined8 *)0x0) {
                  *(undefined4 *)(lVar12 + lVar7) = 0;
                }
                puVar4 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar7);
                puVar3[1] = puVar4[1];
                lVar1 = lVar12 + lVar7;
                *puVar3 = *puVar4;
                *(undefined4 *)(lVar1 + 0x10) = 0;
                lVar2 = *(long *)(param_1 + 0x78) + lVar7;
                lVar7 = lVar7 + 0x20;
                *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
                lVar9 = lVar9 + 2;
                *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
              } while ((ulong)uVar5 - ((ulong)uVar5 & 1) != lVar9);
              if ((uVar5 & 1) != 0) goto LAB_0047b64c;
            }
            lVar7 = *(long *)(param_1 + 0x78);
          }
          FUN_00404870(*(undefined4 *)puVar6,lVar7);
        }
        *(long *)(param_1 + 0x78) = lVar12;
        *(uint *)(param_1 + 0x84) = uVar16;
        goto LAB_0047b684;
      }
    }
  }
  uVar14 = *(uint *)(param_1 + 0x80);
  piVar8 = *(int **)(param_1 + 0x78);
LAB_0047b6d8:
  piVar11 = piVar8 + (ulong)uVar14 * 4;
  piVar10 = piVar8;
  if (uVar14 != 0) {
    lVar12 = (ulong)uVar14 << 4;
    do {
      if (*piVar10 == param_2) goto LAB_0047b714;
      lVar12 = lVar12 + -0x10;
      piVar10 = piVar10 + 4;
    } while (lVar12 != 0);
    piVar10 = piVar11;
  }
LAB_0047b714:
  if (piVar11 != piVar10) {
    if (piVar10 < piVar11 + -4) {
      uVar13 = (long)piVar8 + ~(ulong)piVar10 + (ulong)uVar14 * 0x10 + -0x10;
      uVar14 = ((uint)(uVar13 >> 4) & 0xfffffff) + 1;
      if ((uVar14 & 7) != 0) {
        lVar12 = -((ulong)uVar14 & 7);
        piVar8 = piVar10;
        do {
          piVar10 = piVar8 + 4;
          *(undefined8 *)piVar8 = *(undefined8 *)piVar10;
          *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 6);
          lVar12 = lVar12 + 1;
          piVar8 = piVar10;
        } while (lVar12 != 0);
      }
      if (0x6f < uVar13) {
        do {
          *(undefined8 *)piVar10 = *(undefined8 *)(piVar10 + 4);
          *(undefined8 *)(piVar10 + 2) = *(undefined8 *)(piVar10 + 6);
          *(undefined8 *)(piVar10 + 4) = *(undefined8 *)(piVar10 + 8);
          *(undefined8 *)(piVar10 + 6) = *(undefined8 *)(piVar10 + 10);
          *(undefined8 *)(piVar10 + 8) = *(undefined8 *)(piVar10 + 0xc);
          *(undefined8 *)(piVar10 + 10) = *(undefined8 *)(piVar10 + 0xe);
          *(undefined8 *)(piVar10 + 0xc) = *(undefined8 *)(piVar10 + 0x10);
          *(undefined8 *)(piVar10 + 0xe) = *(undefined8 *)(piVar10 + 0x12);
          *(undefined8 *)(piVar10 + 0x10) = *(undefined8 *)(piVar10 + 0x14);
          *(undefined8 *)(piVar10 + 0x12) = *(undefined8 *)(piVar10 + 0x16);
          *(undefined8 *)(piVar10 + 0x14) = *(undefined8 *)(piVar10 + 0x18);
          *(undefined8 *)(piVar10 + 0x16) = *(undefined8 *)(piVar10 + 0x1a);
          *(undefined8 *)(piVar10 + 0x18) = *(undefined8 *)(piVar10 + 0x1c);
          *(undefined8 *)(piVar10 + 0x1a) = *(undefined8 *)(piVar10 + 0x1e);
          piVar8 = piVar10 + 0x20;
          *(undefined8 *)(piVar10 + 0x1c) = *(undefined8 *)piVar8;
          *(undefined8 *)(piVar10 + 0x1e) = *(undefined8 *)(piVar10 + 0x22);
          piVar10 = piVar8;
        } while (piVar8 < piVar11 + -4);
      }
      uVar14 = *(uint *)(param_1 + 0x80);
    }
    *(uint *)(param_1 + 0x80) = uVar14 - 1;
  }
  return 0;
}


