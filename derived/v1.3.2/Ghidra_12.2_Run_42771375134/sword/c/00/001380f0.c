/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001380f0; name: FUN_001380f0
 */


void FUN_001380f0(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  ulong local_88;
  
  if ((int)param_1[0x18] == 0) {
    return;
  }
  if ((char)param_1[6] != '\0') {
    lVar2 = *param_1;
    lVar3 = param_1[1];
    lVar9 = param_1[3];
    uVar1 = *(uint *)(param_1 + 5);
    uVar15 = *(uint *)((long)param_1 + 0x2c);
    if (uVar15 != 0) {
      if (uVar1 == 0) goto LAB_001384b0;
      lVar16 = param_1[2];
      lVar6 = param_1[4];
      uVar17 = 0;
      local_88 = 0;
      do {
        puVar7 = (uint *)(lVar3 + local_88 * 0x18);
        uVar4 = puVar7[3];
        uVar14 = uVar17;
        uVar8 = uVar17;
        do {
          uVar17 = uVar14;
          uVar8 = uVar8 + 1;
          uVar13 = *(uint *)(lVar16 + (ulong)uVar17 * 0x18);
          uVar14 = uVar17 + 1;
        } while (uVar13 < *puVar7);
        if (uVar13 <= uVar4) {
          lVar10 = lVar3 + local_88 * 0x18;
          uVar14 = uVar17;
          do {
            uVar13 = uVar8;
            lVar11 = lVar16 + (ulong)uVar14 * 0x18;
            if (((((uint)(*(int *)(lVar11 + 0x14) - *(int *)(lVar10 + 8)) >> 1 & 0x40000000) == 0 &&
                 (*(int *)(lVar11 + 0x10) - *(int *)(lVar10 + 4) & 0x80000000U) == 0) &&
                ((uint)(*(int *)(lVar10 + 0x10) - *(int *)(lVar11 + 4)) >> 2 & 0x20000000) == 0) &&
                ((uint)(*(int *)(lVar10 + 0x14) - *(int *)(lVar11 + 8)) >> 3 & 0x10000000) == 0) {
              FUN_001365d0(param_2,*(undefined4 *)
                                    (lVar2 + (ulong)*(ushort *)(lVar9 + local_88 * 2) * 8 + 4),
                           *(undefined4 *)
                            (lVar2 + (ulong)*(ushort *)(lVar6 + (ulong)uVar14 * 2) * 8 + 4));
            }
            uVar8 = uVar13 + 1;
            uVar14 = uVar13;
          } while (*(uint *)(lVar16 + (ulong)uVar13 * 0x18) <= uVar4);
        }
        local_88 = local_88 + 1;
      } while ((local_88 < uVar1) && (uVar17 < uVar15));
      uVar17 = 0;
      local_88 = 0;
      do {
        puVar7 = (uint *)(lVar16 + local_88 * 0x18);
        uVar4 = puVar7[3];
        uVar14 = uVar17;
        uVar8 = uVar17;
        do {
          uVar17 = uVar14;
          uVar8 = uVar8 + 1;
          uVar13 = *(uint *)(lVar3 + (ulong)uVar17 * 0x18);
          uVar14 = uVar17 + 1;
        } while (uVar13 <= *puVar7);
        if (uVar13 <= uVar4) {
          lVar10 = lVar16 + local_88 * 0x18;
          uVar14 = uVar17;
          do {
            uVar13 = uVar8;
            lVar11 = lVar3 + (ulong)uVar14 * 0x18;
            if (((((uint)(*(int *)(lVar11 + 0x14) - *(int *)(lVar10 + 8)) >> 1 & 0x40000000) == 0 &&
                 (*(int *)(lVar11 + 0x10) - *(int *)(lVar10 + 4) & 0x80000000U) == 0) &&
                ((uint)(*(int *)(lVar10 + 0x10) - *(int *)(lVar11 + 4)) >> 2 & 0x20000000) == 0) &&
                ((uint)(*(int *)(lVar10 + 0x14) - *(int *)(lVar11 + 8)) >> 3 & 0x10000000) == 0) {
              FUN_001365d0(param_2,*(undefined4 *)
                                    (lVar2 + (ulong)*(ushort *)(lVar9 + (ulong)uVar14 * 2) * 8 + 4),
                           *(undefined4 *)(lVar2 + (ulong)*(ushort *)(lVar6 + local_88 * 2) * 8 + 4)
                          );
            }
            uVar8 = uVar13 + 1;
            uVar14 = uVar13;
          } while (*(uint *)(lVar3 + (ulong)uVar13 * 0x18) <= uVar4);
        }
        local_88 = local_88 + 1;
      } while ((local_88 < uVar15) && (uVar17 < uVar1));
    }
    if (uVar1 != 0) {
      uVar12 = 0;
      uVar15 = 0;
      do {
        puVar7 = (uint *)(lVar3 + uVar12 * 0x18);
        uVar17 = puVar7[3];
        uVar4 = uVar15 + 2;
        do {
          uVar8 = uVar4;
          uVar5 = (ulong)uVar15;
          uVar15 = uVar15 + 1;
          uVar4 = uVar8 + 1;
        } while (*(uint *)(lVar3 + uVar5 * 0x18) < *puVar7);
        if (uVar1 <= uVar15) break;
        if (*(uint *)(lVar3 + (ulong)uVar15 * 0x18) <= uVar17) {
          lVar6 = lVar3 + uVar12 * 0x18;
          uVar4 = uVar15;
          do {
            uVar14 = uVar8;
            lVar16 = lVar3 + (ulong)uVar4 * 0x18;
            if (((((uint)(*(int *)(lVar16 + 0x14) - *(int *)(lVar6 + 8)) >> 1 & 0x40000000) == 0 &&
                 (*(int *)(lVar16 + 0x10) - *(int *)(lVar6 + 4) & 0x80000000U) == 0) &&
                ((uint)(*(int *)(lVar6 + 0x10) - *(int *)(lVar16 + 4)) >> 2 & 0x20000000) == 0) &&
                ((uint)(*(int *)(lVar6 + 0x14) - *(int *)(lVar16 + 8)) >> 3 & 0x10000000) == 0) {
              FUN_001365d0(param_2,*(undefined4 *)
                                    (lVar2 + (ulong)*(ushort *)(lVar9 + uVar12 * 2) * 8 + 4),
                           *(undefined4 *)
                            (lVar2 + (ulong)*(ushort *)(lVar9 + (ulong)uVar4 * 2) * 8 + 4));
            }
            uVar8 = uVar14 + 1;
            uVar4 = uVar14;
          } while (*(uint *)(lVar3 + (ulong)uVar14 * 0x18) <= uVar17);
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar1);
    }
  }
LAB_001384b0:
  if ((char)param_1[0xd] != '\0') {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 != 0) {
      uVar15 = *(uint *)((long)param_1 + 0x44);
      if (uVar15 != 0) {
        lVar16 = param_1[7];
        lVar2 = param_1[9];
        lVar9 = param_1[10];
        uVar17 = 0;
        lVar3 = param_1[0xb];
        lVar6 = param_1[0xc];
        local_88 = 0;
        do {
          puVar7 = (uint *)(lVar2 + local_88 * 0x18);
          uVar4 = puVar7[3];
          uVar14 = uVar17;
          uVar8 = uVar17;
          do {
            uVar17 = uVar14;
            uVar8 = uVar8 + 1;
            uVar13 = *(uint *)(lVar9 + (ulong)uVar17 * 0x18);
            uVar14 = uVar17 + 1;
          } while (uVar13 < *puVar7);
          if (uVar13 <= uVar4) {
            lVar10 = lVar2 + local_88 * 0x18;
            uVar14 = uVar17;
            do {
              uVar13 = uVar8;
              lVar11 = lVar9 + (ulong)uVar14 * 0x18;
              if (((((uint)(*(int *)(lVar11 + 0x14) - *(int *)(lVar10 + 8)) >> 1 & 0x40000000) == 0
                   && (*(int *)(lVar11 + 0x10) - *(int *)(lVar10 + 4) & 0x80000000U) == 0) &&
                  ((uint)(*(int *)(lVar10 + 0x10) - *(int *)(lVar11 + 4)) >> 2 & 0x20000000) == 0)
                  && ((uint)(*(int *)(lVar10 + 0x14) - *(int *)(lVar11 + 8)) >> 3 & 0x10000000) == 0
                 ) {
                FUN_001365d0(param_2,*(undefined4 *)
                                      (lVar16 + (ulong)*(ushort *)(lVar6 + local_88 * 2) * 8 + 4),
                             *(undefined4 *)
                              (lVar16 + (ulong)*(ushort *)(lVar3 + (ulong)uVar14 * 2) * 8 + 4));
              }
              uVar8 = uVar13 + 1;
              uVar14 = uVar13;
            } while (*(uint *)(lVar9 + (ulong)uVar13 * 0x18) <= uVar4);
          }
          local_88 = local_88 + 1;
        } while ((local_88 < uVar1) && (uVar17 < uVar15));
        uVar17 = 0;
        local_88 = 0;
        do {
          puVar7 = (uint *)(lVar9 + local_88 * 0x18);
          uVar4 = puVar7[3];
          uVar14 = uVar17;
          uVar8 = uVar17;
          do {
            uVar17 = uVar14;
            uVar8 = uVar8 + 1;
            uVar13 = *(uint *)(lVar2 + (ulong)uVar17 * 0x18);
            uVar14 = uVar17 + 1;
          } while (uVar13 <= *puVar7);
          if (uVar13 <= uVar4) {
            lVar10 = lVar9 + local_88 * 0x18;
            uVar14 = uVar17;
            do {
              uVar13 = uVar8;
              lVar11 = lVar2 + (ulong)uVar14 * 0x18;
              if (((((uint)(*(int *)(lVar11 + 0x14) - *(int *)(lVar10 + 8)) >> 1 & 0x40000000) == 0
                   && (*(int *)(lVar11 + 0x10) - *(int *)(lVar10 + 4) & 0x80000000U) == 0) &&
                  ((uint)(*(int *)(lVar10 + 0x10) - *(int *)(lVar11 + 4)) >> 2 & 0x20000000) == 0)
                  && ((uint)(*(int *)(lVar10 + 0x14) - *(int *)(lVar11 + 8)) >> 3 & 0x10000000) == 0
                 ) {
                FUN_001365d0(param_2,*(undefined4 *)
                                      (lVar16 + (ulong)*(ushort *)(lVar6 + (ulong)uVar14 * 2) * 8 +
                                      4),
                             *(undefined4 *)
                              (lVar16 + (ulong)*(ushort *)(lVar3 + local_88 * 2) * 8 + 4));
              }
              uVar8 = uVar13 + 1;
              uVar14 = uVar13;
            } while (*(uint *)(lVar2 + (ulong)uVar13 * 0x18) <= uVar4);
          }
          local_88 = local_88 + 1;
        } while ((local_88 < uVar15) && (uVar17 < uVar1));
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


