/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fedf0; name: FUN_004fedf0
 */


undefined8
FUN_004fedf0(long param_1,ulong *param_2,ulong param_3,uint param_4,ulong param_5,undefined4 param_6
            )

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    uVar7 = 1;
    goto LAB_004ff1ac;
  }
  uVar10 = *(uint *)(param_1 + 0x30);
  if (uVar10 == 0) {
    uVar18 = 0;
    bVar5 = false;
joined_r0x004ff070:
    if (param_4 != 0xffffffff) goto LAB_004feebc;
LAB_004ff074:
    if (bVar5) {
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar18 * 8);
      puVar8 = (undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar10 * 8 + -8);
      if (puVar6 < puVar8) {
        uVar16 = (ulong)uVar10 * 8 + -9 + (ulong)uVar18 * -8;
        uVar10 = ((uint)(uVar16 >> 3) & 0x1fffffff) + 1;
        if ((uVar10 & 3) != 0) {
          lVar14 = -((ulong)uVar10 & 3);
          puVar15 = puVar6;
          do {
            puVar6 = puVar15 + 1;
            *puVar15 = *puVar6;
            lVar14 = lVar14 + 1;
            puVar15 = puVar6;
          } while (lVar14 != 0);
        }
        if (0x17 < uVar16) {
          do {
            *puVar6 = puVar6[1];
            puVar6[1] = puVar6[2];
            puVar6[2] = puVar6[3];
            puVar15 = puVar6 + 4;
            puVar6[3] = *puVar15;
            puVar6 = puVar15;
          } while (puVar15 < puVar8);
        }
        uVar10 = *(uint *)(param_1 + 0x30);
      }
      *(uint *)(param_1 + 0x30) = uVar10 - 1;
    }
LAB_004ff1a4:
    uVar7 = 2;
  }
  else {
    iVar13 = 0;
    iVar9 = uVar10 - 1;
    do {
      while( true ) {
        iVar4 = iVar9 - iVar13;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        uVar18 = iVar13 + (iVar4 >> 1);
        puVar17 = *(ulong **)(*(long *)(param_1 + 0x28) + (ulong)uVar18 * 8);
        if ((uint)puVar17[4] <= (uint)param_2[4]) break;
LAB_004fee8c:
        iVar9 = uVar18 - 1;
        if (iVar9 < iVar13) goto LAB_004feeac;
      }
      if ((uint)param_2[4] <= (uint)puVar17[4]) {
        if (*puVar17 < *param_2) goto LAB_004fee8c;
        if (*puVar17 <= *param_2) {
          if (param_2[1] < puVar17[1]) goto LAB_004fee8c;
          if (param_2[1] == puVar17[1]) {
            bVar5 = true;
            goto joined_r0x004ff070;
          }
        }
      }
      iVar13 = uVar18 + 1;
    } while (iVar13 <= iVar9);
LAB_004feeac:
    bVar5 = false;
    uVar18 = uVar10;
    if (param_4 == 0xffffffff) goto LAB_004ff074;
LAB_004feebc:
    if (!bVar5) {
      uVar19 = *(uint *)(param_1 + 0x34);
      if (uVar10 < uVar19) {
LAB_004fef58:
        if (uVar10 < uVar19) {
          plVar1 = (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8);
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) + 1;
          if (plVar1 != (long *)0x0) {
            *plVar1 = (long)param_2;
            uVar10 = *(uint *)(param_1 + 0x30);
            goto LAB_004fef80;
          }
        }
      }
      else {
        uVar19 = uVar19 + 1;
        puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_027137c8,(ulong)uVar19 << 3);
        if (puVar6 != (undefined8 *)0x0) {
          puVar8 = *(undefined8 **)(param_1 + 0x28);
          if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar6)) {
            uVar2 = *(uint *)(param_1 + 0x30);
            if (uVar2 != 0) {
              *puVar6 = *puVar8;
              if (uVar2 != 1) {
                if (uVar2 == 2) {
                  lVar11 = 1;
                }
                else {
                  lVar14 = 0;
                  do {
                    lVar11 = lVar14;
                    puVar6[lVar11 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 8 + 8)
                    ;
                    puVar6[lVar11 + 2] =
                         *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 8 + 0x10);
                    lVar14 = lVar11 + 2;
                  } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar11 + 2);
                  lVar11 = lVar11 + 3;
                  if ((~uVar2 & 1) == 0) goto LAB_004fef3c;
                }
                puVar6[lVar11] = *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar11 * 8);
              }
LAB_004fef3c:
              puVar8 = *(undefined8 **)(param_1 + 0x28);
            }
            FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,puVar8);
          }
          *(undefined8 **)(param_1 + 0x28) = puVar6;
          *(uint *)(param_1 + 0x34) = uVar19;
          goto LAB_004fef58;
        }
      }
      goto LAB_004ff1a4;
    }
LAB_004fef80:
    lVar14 = *(long *)(param_1 + 0x28);
    uVar19 = 0;
    uVar10 = uVar10 - 1;
    do {
      while( true ) {
        iVar13 = uVar10 - uVar19;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 1;
        }
        uVar2 = uVar19 + (iVar13 >> 1);
        puVar17 = *(ulong **)(lVar14 + (ulong)uVar2 * 8);
        uVar3 = (uint)puVar17[4];
        if (param_4 > uVar3 || uVar3 == param_4) break;
LAB_004fefb0:
        uVar10 = uVar2 - 1;
        if ((int)uVar10 < (int)uVar19) goto LAB_004feffc;
      }
      if (param_4 <= uVar3) {
        if (*puVar17 < param_5) goto LAB_004fefb0;
        if (*puVar17 <= param_5) {
          if (param_2[1] < puVar17[1]) goto LAB_004fefb0;
          if (param_2[1] <= puVar17[1]) {
            uVar10 = uVar2;
            uVar19 = uVar2;
            break;
          }
        }
      }
      uVar19 = uVar2 + 1;
    } while ((int)uVar19 <= (int)uVar10);
LAB_004feffc:
    if ((int)uVar10 <= (int)uVar19) {
      uVar10 = uVar19;
    }
    uVar16 = (ulong)uVar18;
    uVar12 = *(undefined8 *)(lVar14 + (ulong)uVar18 * 8);
    if (uVar18 < uVar10) {
      uVar10 = uVar10 - 1;
      uVar19 = uVar18 + 1;
      if (uVar19 <= uVar10) {
        *(undefined8 *)(lVar14 + uVar16 * 8) = *(undefined8 *)(lVar14 + (ulong)uVar19 * 8);
        while (uVar2 = uVar19, uVar18 + 2 <= uVar10) {
          *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar2 * 8) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar2 + 1) * 8);
          uVar19 = uVar2 + 1;
          uVar18 = uVar2;
        }
      }
    }
    else if ((uVar18 != uVar10) &&
            (*(undefined8 *)(lVar14 + uVar16 * 8) =
                  *(undefined8 *)(lVar14 + (ulong)(uVar18 - 1) * 8), uVar10 < uVar18 - 1)) {
      if (((uVar18 + 1) - uVar10 & 1) != 0) {
        uVar16 = uVar16 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar16 * 8) =
             *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)(uVar18 - 2) * 8);
      }
      if (uVar18 - 2 != uVar10) {
        uVar18 = (int)uVar16 - 1;
        do {
          lVar14 = uVar16 * 8;
          *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar14 + -8) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)((int)uVar16 - 2) * 8);
          uVar18 = uVar18 - 2;
          uVar16 = uVar16 - 2;
          *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar14 + -0x10) =
               *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar18 * 8);
        } while (uVar10 < uVar18);
      }
    }
    uVar7 = 1;
    *(undefined8 *)(*(long *)(param_1 + 0x28) + (ulong)uVar10 * 8) = uVar12;
  }
  *(uint *)(param_2 + 4) = param_4;
LAB_004ff1ac:
  *param_2 = param_5;
  *(undefined4 *)(param_2 + 3) = param_6;
  param_2[2] = param_3;
  return uVar7;
}


