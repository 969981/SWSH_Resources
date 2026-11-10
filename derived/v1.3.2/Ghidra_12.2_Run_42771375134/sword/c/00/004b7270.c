/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b7270; name: FUN_004b7270
 */


void FUN_004b7270(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  undefined8 *puVar16;
  int iVar17;
  
  puVar8 = PTR_DAT_02713460;
  uVar3 = param_2[1];
  iVar10 = (int)param_1[1] + -1;
  if (-1 < iVar10) {
    iVar14 = 0;
    do {
      while( true ) {
        iVar17 = iVar10 - iVar14;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 1;
        }
        iVar17 = iVar14 + (iVar17 >> 1);
        uVar4 = *(uint *)(*param_1 + (long)iVar17 * 4);
        if (uVar3 > uVar4 || uVar4 == uVar3) break;
        iVar10 = iVar17 + -1;
        if (iVar10 < iVar14) goto LAB_004b72f0;
      }
      if (uVar3 <= uVar4) {
        if (*param_1 + (long)iVar17 * 4 != 0) {
          return;
        }
        break;
      }
      iVar14 = iVar17 + 1;
    } while (iVar14 <= iVar10);
  }
LAB_004b72f0:
  iVar10 = *(int *)(PTR_DAT_02713460 + 8) + -1;
  if (-1 < iVar10) {
    lVar11 = *(long *)PTR_DAT_02713460;
    iVar14 = 0;
    do {
      while( true ) {
        iVar17 = iVar10 - iVar14;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 1;
        }
        uVar4 = iVar14 + (iVar17 >> 1);
        uVar5 = *(uint *)(lVar11 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4
                                   ));
        if (uVar3 > uVar5 || uVar5 == uVar3) break;
        iVar10 = uVar4 - 1;
        if (iVar10 < iVar14) goto LAB_004b737c;
      }
      if (uVar3 <= uVar5) {
        if (lVar11 + (long)(int)uVar4 * 0x10 != 0) {
          plVar9 = *(long **)(lVar11 + (long)(int)uVar4 * 0x10 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          if (plVar9 == (long *)0x0) {
            return;
          }
          goto LAB_004b73ec;
        }
        break;
      }
      iVar14 = uVar4 + 1;
    } while (iVar14 <= iVar10);
  }
LAB_004b737c:
  lVar11 = FUN_004b7550(PTR_DAT_02713460);
  if (lVar11 != 0) {
    plVar9 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
    if (plVar9 != (long *)0x0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      *(undefined4 *)(plVar9 + 1) = uVar1;
      *(undefined4 *)((long)plVar9 + 0xc) = uVar2;
      FUN_004b7930(plVar9);
      *plVar9 = (long)(PTR_DAT_02713468 + 0x10);
      *(undefined4 *)(plVar9 + 2) = 1;
      FUN_004b79b0(plVar9,uVar2,uVar1);
      *(long **)(lVar11 + 8) = plVar9;
LAB_004b73ec:
      FUN_004b6f90(param_1,param_2[1]);
      return;
    }
    *(undefined8 *)(lVar11 + 8) = 0;
    uVar3 = *(uint *)(puVar8 + 8);
    iVar10 = uVar3 - 1;
    if (-1 < iVar10) {
      uVar4 = param_2[1];
      lVar11 = *(long *)puVar8;
      iVar14 = 0;
      iVar17 = iVar10;
      do {
        while( true ) {
          iVar7 = iVar17 - iVar14;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 1;
          }
          uVar5 = iVar14 + (iVar7 >> 1);
          uVar6 = *(uint *)(lVar11 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 |
                                     (ulong)uVar5 << 4));
          if (uVar4 > uVar6 || uVar6 == uVar4) break;
          iVar17 = uVar5 - 1;
          if (iVar17 < iVar14) {
            return;
          }
        }
        if (uVar4 <= uVar6) {
          puVar13 = (undefined8 *)(lVar11 + (long)(int)uVar5 * 0x10);
          puVar12 = (undefined8 *)(lVar11 + (ulong)uVar3 * 0x10 + -0x10);
          if (puVar13 < puVar12) {
            uVar15 = (ulong)uVar3 * 0x10 + -0x11 + (long)(int)uVar5 * -0x10;
            uVar3 = ((uint)(uVar15 >> 4) & 0xfffffff) + 1;
            if ((uVar3 & 7) != 0) {
              lVar11 = -((ulong)uVar3 & 7);
              puVar16 = puVar13;
              do {
                puVar13 = puVar16 + 2;
                *puVar16 = *puVar13;
                puVar16[1] = puVar16[3];
                lVar11 = lVar11 + 1;
                puVar16 = puVar13;
              } while (lVar11 != 0);
            }
            if (0x6f < uVar15) {
              do {
                *puVar13 = puVar13[2];
                puVar13[1] = puVar13[3];
                puVar13[2] = puVar13[4];
                puVar13[3] = puVar13[5];
                puVar13[4] = puVar13[6];
                puVar13[5] = puVar13[7];
                puVar13[6] = puVar13[8];
                puVar13[7] = puVar13[9];
                puVar13[8] = puVar13[10];
                puVar13[9] = puVar13[0xb];
                puVar13[10] = puVar13[0xc];
                puVar13[0xb] = puVar13[0xd];
                puVar13[0xc] = puVar13[0xe];
                puVar13[0xd] = puVar13[0xf];
                puVar16 = puVar13 + 0x10;
                puVar13[0xe] = *puVar16;
                puVar13[0xf] = puVar13[0x11];
                puVar13 = puVar16;
              } while (puVar16 < puVar12);
            }
            iVar10 = *(int *)(puVar8 + 8) + -1;
          }
          *(int *)(puVar8 + 8) = iVar10;
          return;
        }
        iVar14 = uVar5 + 1;
      } while (iVar14 <= iVar17);
    }
  }
  return;
}


