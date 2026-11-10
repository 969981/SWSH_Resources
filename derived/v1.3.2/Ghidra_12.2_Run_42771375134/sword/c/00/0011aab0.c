/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011aab0; name: FUN_0011aab0
 */


void FUN_0011aab0(long *param_1,ulong param_2)

{
  uint *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  long lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ushort *puVar19;
  long lVar20;
  byte *pbVar21;
  long lVar22;
  ulong uVar23;
  ulong local_90 [5];
  undefined4 local_68;
  
  lVar20 = param_1[3];
  uVar23 = param_2 >> 6 & 0x3ffffff;
  lVar2 = lVar20 + uVar23 * 0x20;
  pbVar21 = (byte *)(lVar2 + 4);
  bVar6 = *pbVar21;
  if ((bVar6 >> 2 & 1) != 0) {
    lVar11 = uVar23 * 0x20;
    if (*(uint *)(lVar20 + lVar11) != 0xffffffff) {
      uVar9 = *(uint *)(lVar20 + lVar11);
      do {
        uVar4 = *(uint *)(param_1[9] + (ulong)uVar9 * 8);
        uVar7 = uVar9 >> 1;
        uVar18 = (ulong)uVar7;
        uVar9 = *(uint *)(*(long *)param_1[0x48] + (ulong)(uVar9 ^ 1) * 4);
        local_90[0] = CONCAT44(local_90[0]._4_4_,uVar7);
        lVar22 = param_1[7];
        puVar1 = (uint *)(lVar22 + (ulong)uVar7 * 0x10);
        if ((uVar9 < 0xffffffc0) &&
           (uVar9 = *(uint *)(param_1[0x1e] + (ulong)(uVar9 >> 6) * 4), uVar10 = (ulong)uVar9,
           uVar9 != 0xffffffff)) {
          lVar16 = lVar22 + uVar18 * 0x10;
          lVar13 = param_1[0xb];
          puVar12 = (uint *)(lVar16 + 8);
          uVar9 = *puVar12;
          puVar15 = (uint *)(lVar16 + 0xc);
          if (uVar9 == 0xffffffff) {
            *(uint *)(lVar13 + uVar10 * 0x2c + (ulong)*puVar1 * 4 + 0x1c) = *puVar15;
            uVar9 = *puVar12;
            uVar7 = *puVar15;
            if (uVar7 != 0xffffffff) goto LAB_0011abac;
LAB_0011abdc:
            uVar17 = (ulong)*puVar1;
            *(uint *)(lVar13 + uVar10 * 0x2c + uVar17 * 4 + 0x14) = uVar9;
          }
          else {
            *(uint *)(lVar22 + (ulong)uVar9 * 0x10 + 0xc) = *puVar15;
            uVar7 = *puVar15;
            if (uVar7 == 0xffffffff) goto LAB_0011abdc;
LAB_0011abac:
            *(uint *)(lVar22 + (ulong)uVar7 * 0x10 + 8) = uVar9;
            uVar17 = (ulong)*puVar1;
          }
          lVar16 = lVar13 + uVar10 * 0x2c + uVar17 * 4;
          *(int *)(lVar16 + 0x24) = *(int *)(lVar16 + 0x24) + -1;
          *puVar15 = 0xffffffff;
          *puVar12 = 0xffffffff;
        }
        FUN_00116080(param_1,uVar18);
        FUN_00115ed0(param_1,local_90[0] & 0xffffffff);
        puVar19 = (ushort *)(lVar22 + uVar18 * 0x10 + 4);
        uVar8 = *puVar19;
        uVar9 = uVar8 & 0xfffe;
        *puVar19 = (ushort)uVar9;
        if ((uVar8 >> 2 & 1) != 0) {
          *puVar19 = uVar8 & 0xfffa;
          puVar12 = (uint *)(param_1[7] + (local_90[0] & 0xffffffff) * 0x10);
          uVar8 = (ushort)puVar12[1];
          if ((uVar8 >> 6 & 1) != 0) {
            uVar9 = *(uint *)(param_1 + (ulong)*puVar12 * 2 + 0x16);
            if (uVar9 != 0) {
              lVar22 = param_1[(ulong)*puVar12 * 2 + 0x15];
              uVar18 = 0;
              do {
                if (*(uint *)(lVar22 + (uVar18 & 0xffffffff) * 4) == (uint)local_90[0]) {
                  *(uint *)(param_1 + (ulong)*puVar12 * 2 + 0x16) = uVar9 - 1;
                  *(undefined4 *)(lVar22 + uVar18 * 4) =
                       *(undefined4 *)(lVar22 + (ulong)(uVar9 - 1) * 4);
                  break;
                }
                uVar18 = uVar18 + 1;
              } while ((uint)uVar18 < uVar9);
            }
            *(ushort *)(puVar12 + 1) = uVar8 & 0xffbf;
          }
          uVar9 = *(uint *)(*(long *)param_1[0x48] + (ulong)((uint)local_90[0] << 1) * 4);
          if ((uVar9 < 0xffffffc0) &&
             (uVar7 = *(uint *)(*(long *)param_1[0x48] + (ulong)((uint)local_90[0] << 1 | 1) * 4),
             uVar7 < 0xffffffc0)) {
            lVar16 = param_1[3];
            lVar22 = lVar16 + (ulong)(uVar9 >> 6) * 0x20;
            *(int *)(lVar22 + 0x10) = *(int *)(lVar22 + 0x10) + -1;
            lVar16 = lVar16 + (ulong)(uVar7 >> 6) * 0x20;
            *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + -1;
          }
          if (*puVar12 == 0) {
            lVar22 = (ulong)((uint)local_90[0] >> 5) * 4;
            *(uint *)(param_1[0x22] + lVar22) =
                 *(uint *)(param_1[0x22] + lVar22) &
                 (1 << (ulong)((uint)local_90[0] & 0x1f) ^ 0xffffffffU);
          }
          *(int *)((long)param_1 + (ulong)*puVar1 * 4 + 200) =
               *(int *)((long)param_1 + (ulong)*puVar1 * 4 + 200) + -1;
          uVar9 = (uint)*puVar19;
        }
        if ((uVar9 >> 1 & 1) == 0) {
          if ((uVar9 >> 3 & 1) == 0) {
            uVar7 = *puVar1;
            if (*(uint *)(param_1 + (ulong)uVar7 * 2 + 0x2c) <
                (*(uint *)((long)param_1 + (ulong)uVar7 * 0x10 + 0x164) & 0x7fffffff)) {
              *(uint *)(param_1[(ulong)uVar7 * 2 + 0x2b] +
                       (ulong)*(uint *)(param_1 + (ulong)uVar7 * 2 + 0x2c) * 4) = (uint)local_90[0];
              *(int *)(param_1 + (ulong)uVar7 * 2 + 0x2c) =
                   (int)param_1[(ulong)uVar7 * 2 + 0x2c] + 1;
              uVar8 = (ushort)uVar9 | 8;
            }
            else {
              FUN_001b4230(param_1 + (ulong)uVar7 * 2 + 0x2b,local_90);
              uVar8 = *puVar19 | 8;
            }
            goto LAB_0011ad90;
          }
        }
        else {
          uVar8 = (ushort)uVar9 | 0x20;
LAB_0011ad90:
          *puVar19 = uVar8;
        }
        uVar9 = uVar4;
      } while (uVar4 != 0xffffffff);
      bVar6 = *pbVar21;
    }
    if (((bVar6 >> 5 & 1) == 0) && (lVar22 = param_1[5], *(int *)(lVar22 + uVar23 * 4) != 0x3ffffff)
       ) {
      puVar14 = (undefined4 *)(lVar20 + lVar11 + 0x10);
      uVar3 = *puVar14;
      *puVar14 = 0;
      if ((*(int *)(param_1[3] + lVar11 + 0x10) == 0) &&
         (iVar5 = *(int *)(lVar22 + uVar23 * 4), iVar5 != 0x3ffffff)) {
        lVar20 = param_1[0x13];
        uVar9 = *(uint *)(lVar20 + (ulong)((int)param_1[0x14] - 1) * 4);
        *(int *)(lVar22 + (ulong)(uVar9 >> 6) * 4) = iVar5;
        *(uint *)(lVar20 + (ulong)*(uint *)(lVar22 + uVar23 * 4) * 4) = uVar9;
        *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -1;
        *(undefined4 *)(lVar22 + uVar23 * 4) = 0x3ffffff;
      }
      *puVar14 = uVar3;
    }
    *pbVar21 = bVar6 & 0xfb;
    if ((int)param_1[1] == 0) {
      uVar9 = *(uint *)(param_1 + 2);
      *(uint *)(param_1 + 2) = uVar9 + 1;
    }
    else {
      uVar4 = (int)param_1[1] - 1;
      uVar9 = *(uint *)(*param_1 + (ulong)uVar4 * 4);
      *(uint *)(param_1 + 1) = uVar4;
    }
    if (uVar9 == (*(uint *)((long)param_1 + 100) & 0x7fffffff)) {
      uVar4 = *(uint *)((long)param_1 + 100) << 1 | 1;
      if (uVar9 < uVar4) {
        FUN_0011b530(param_1 + 0xb,uVar4);
      }
      FUN_00190b50(param_1 + 0x20,uVar4);
      local_90[0] = local_90[0] & 0xffffffff00000000;
      FUN_001ed3f0(param_1 + 0xd,uVar4,local_90);
    }
    lVar20 = (ulong)(uVar9 >> 5) * 4;
    *(uint *)(param_1[0x20] + lVar20) =
         *(uint *)(param_1[0x20] + lVar20) & (1 << (ulong)(uVar9 & 0x1f) ^ 0xffffffffU);
    uVar4 = *(uint *)(param_1 + 0xc);
    local_90[0] = 0xffffffc0ffffffc0;
    local_90[1] = 0;
    local_90[2] = 0xffffffffffffffff;
    local_90[3] = 0xffffffffffffffff;
    local_90[4] = 0xffffffff;
    local_68 = 0;
    if (uVar4 <= uVar9 + 1) {
      uVar4 = uVar9 + 1;
    }
    FUN_00115540(param_1 + 0xb,uVar4,local_90);
    uVar4 = *(uint *)(param_1 + 0xc);
    local_90[0] = local_90[0] & 0xffffffff00000000;
    if (uVar4 <= uVar9 + 1) {
      uVar4 = uVar9 + 1;
    }
    FUN_001ed3f0(param_1 + 0xd,uVar4,local_90);
    puVar14 = (undefined4 *)(param_1[0xb] + (ulong)uVar9 * 0x2c);
    *puVar14 = (int)param_2;
    puVar14[1] = (int)param_2;
    puVar14[(ulong)*(byte *)(lVar2 + 5) + 2] = 1;
    *(uint *)(param_1[0x1e] + uVar23 * 4) = uVar9;
    *(undefined4 *)(param_1[0xd] + (ulong)uVar9 * 4) = 0;
    if ((*pbVar21 >> 1 & 1) != 0) {
      *pbVar21 = *pbVar21 & 0xfd;
      FUN_001155d0(param_1,param_2 & 0xffffffff);
    }
  }
  return;
}


