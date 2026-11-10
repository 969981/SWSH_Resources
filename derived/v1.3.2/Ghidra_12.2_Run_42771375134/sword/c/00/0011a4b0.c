/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011a4b0; name: FUN_0011a4b0
 */


void FUN_0011a4b0(long *param_1,ulong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ushort *puVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  byte *pbVar25;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  local_68 = (uint)param_2;
  lVar20 = param_1[3];
  uVar24 = param_2 >> 6 & 0x3ffffff;
  lVar9 = lVar20 + uVar24 * 0x20;
  pbVar25 = (byte *)(lVar9 + 4);
  bVar11 = *pbVar25;
  if ((bVar11 >> 2 & 1) != 0) {
    return;
  }
  uVar6 = *(uint *)(param_1[0x1e] + uVar24 * 4);
  uVar22 = (ulong)uVar6;
  lVar23 = param_1[0xb];
  *(undefined4 *)(param_1[0x1e] + uVar24 * 4) = 0xffffffff;
  lVar15 = lVar20 + (ulong)(local_68 >> 6) * 0x20;
  puVar14 = (undefined4 *)(lVar23 + uVar22 * 0x2c);
  puVar2 = (undefined4 *)(lVar20 + (ulong)(*(uint *)(lVar15 + 8) >> 6) * 0x20 + 0xc);
  if (0xffffffbf < *(uint *)(lVar15 + 8)) {
    puVar2 = puVar14 + 1;
  }
  *puVar2 = *(undefined4 *)(lVar15 + 0xc);
  puVar2 = (undefined4 *)(lVar20 + (ulong)(*(uint *)(lVar15 + 0xc) >> 6) * 0x20 + 8);
  if (0xffffffbf < *(uint *)(lVar15 + 0xc)) {
    puVar2 = puVar14;
  }
  *puVar2 = *(undefined4 *)(lVar15 + 8);
  puVar14[(ulong)*(byte *)(lVar15 + 5) + 2] = puVar14[(ulong)*(byte *)(lVar15 + 5) + 2] + -1;
  *(undefined8 *)(lVar15 + 8) = 0xffffffc0ffffffc0;
  if ((bVar11 >> 1 & 1) == 0) {
    if ((bVar11 >> 5 & 1) == 0) goto LAB_0011a684;
    bVar11 = bVar11 & 0xdf;
    *pbVar25 = bVar11;
    lVar15 = param_1[0x32];
    lVar18 = param_1[5];
    uVar8 = *(uint *)(lVar15 + (ulong)((int)param_1[0x33] - 1) * 4);
    *(undefined4 *)(lVar18 + (ulong)(uVar8 >> 6) * 4) =
         *(undefined4 *)(lVar18 + (ulong)(local_68 >> 6) * 4);
    *(uint *)(lVar15 + (ulong)*(uint *)(lVar18 + (ulong)(local_68 >> 6) * 4) * 4) = uVar8;
    *(int *)(param_1 + 0x33) = (int)param_1[0x33] + -1;
    puVar13 = (uint *)(lVar18 + (ulong)(local_68 >> 6) * 4);
  }
  else {
    uVar16 = (ulong)*(byte *)(lVar20 + (ulong)(local_68 >> 6) * 0x20 + 5);
    lVar15 = param_1[5];
    uVar8 = *(uint *)((long)param_1 + uVar16 * 4 + 0x130);
    puVar13 = (uint *)(lVar15 + (ulong)(local_68 >> 6) * 4);
    uVar17 = *puVar13;
    if (uVar17 < uVar8) {
      lVar18 = param_1[uVar16 * 2 + 0xf];
      piVar1 = (int *)((long)param_1 + uVar16 * 4 + 0x130);
      uVar8 = *(uint *)(lVar18 + (ulong)(uVar8 - 1) * 4);
      lVar19 = (ulong)(uVar8 >> 6) * 4;
      *puVar13 = *(uint *)(lVar15 + lVar19);
      *(uint *)(lVar15 + lVar19) = uVar17;
      *(uint *)(lVar18 + (ulong)uVar17 * 4) = uVar8;
      *(uint *)(lVar18 + (ulong)*puVar13 * 4) = local_68;
      *piVar1 = *piVar1 + -1;
      uVar17 = *puVar13;
    }
    else {
      lVar18 = param_1[uVar16 * 2 + 0xf];
    }
    uVar8 = *(uint *)(lVar18 + (ulong)((int)param_1[uVar16 * 2 + 0x10] - 1) * 4);
    *(uint *)(lVar15 + (ulong)(uVar8 >> 6) * 4) = uVar17;
    *(uint *)(lVar18 + (ulong)*puVar13 * 4) = uVar8;
    *(int *)(param_1 + uVar16 * 2 + 0x10) = (int)param_1[uVar16 * 2 + 0x10] + -1;
  }
  *puVar13 = 0x3ffffff;
LAB_0011a684:
  bVar11 = bVar11 & 0xf9 | 4;
  *pbVar25 = bVar11;
  if (*(int *)(lVar9 + 0x10) != 0) {
    *(int *)(param_1[5] + (ulong)(local_68 >> 6) * 4) = (int)param_1[0x33];
    if (*(uint *)(param_1 + 0x33) < (*(uint *)((long)param_1 + 0x19c) & 0x7fffffff)) {
      *(uint *)(param_1[0x32] + (ulong)*(uint *)(param_1 + 0x33) * 4) = local_68;
      *(int *)(param_1 + 0x33) = (int)param_1[0x33] + 1;
    }
    else {
      FUN_00114650(param_1 + 0x32,&local_68);
      bVar11 = *pbVar25;
    }
    *pbVar25 = bVar11 | 0x20;
  }
  lVar9 = lVar23 + uVar22 * 0x2c;
  iVar3 = *(int *)(lVar9 + 8);
  iVar4 = *(int *)(lVar9 + 0xc);
  uVar8 = *(uint *)(lVar20 + uVar24 * 0x20);
  if (uVar8 != 0xffffffff) {
    do {
      local_6c = uVar8 >> 1;
      uVar24 = (ulong)local_6c;
      uVar8 = *(uint *)(param_1[9] + (ulong)uVar8 * 8);
      lVar9 = param_1[7];
      puVar13 = (uint *)(lVar9 + (ulong)local_6c * 0x10);
      puVar10 = puVar13 + 2;
      uVar17 = *puVar10;
      puVar12 = puVar13 + 3;
      if (uVar17 == 0xffffffff) {
        *(uint *)(lVar23 + uVar22 * 0x2c + (ulong)*puVar13 * 4 + 0x1c) = *puVar12;
        uVar17 = *puVar10;
        uVar5 = *puVar12;
        if (uVar5 == 0xffffffff) goto LAB_0011a794;
LAB_0011a768:
        *(uint *)(lVar9 + (ulong)uVar5 * 0x10 + 8) = uVar17;
        uVar16 = (ulong)*puVar13;
      }
      else {
        *(uint *)(lVar9 + (ulong)uVar17 * 0x10 + 0xc) = *puVar12;
        uVar5 = *puVar12;
        if (uVar5 != 0xffffffff) goto LAB_0011a768;
LAB_0011a794:
        uVar16 = (ulong)*puVar13;
        *(uint *)(lVar23 + uVar22 * 0x2c + uVar16 * 4 + 0x14) = uVar17;
      }
      lVar20 = lVar23 + uVar22 * 0x2c + uVar16 * 4;
      *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + -1;
      *puVar12 = 0xffffffff;
      *puVar10 = 0xffffffff;
      FUN_00116080(param_1,uVar24);
      FUN_00115ed0(param_1,local_6c);
      puVar21 = (ushort *)(lVar9 + uVar24 * 0x10 + 4);
      uVar7 = *puVar21;
      uVar17 = uVar7 & 0xfffe;
      *puVar21 = (ushort)uVar17;
      if ((uVar7 >> 2 & 1) != 0) {
        puVar10 = (uint *)(param_1[7] + (ulong)local_6c * 0x10);
        uVar7 = (ushort)puVar10[1];
        if ((uVar7 >> 6 & 1) != 0) {
          uVar17 = *(uint *)(param_1 + (ulong)*puVar10 * 2 + 0x16);
          if (uVar17 != 0) {
            lVar9 = param_1[(ulong)*puVar10 * 2 + 0x15];
            uVar24 = 0;
            do {
              if (*(uint *)(lVar9 + (uVar24 & 0xffffffff) * 4) == local_6c) {
                *(uint *)(param_1 + (ulong)*puVar10 * 2 + 0x16) = uVar17 - 1;
                *(undefined4 *)(lVar9 + uVar24 * 4) =
                     *(undefined4 *)(lVar9 + (ulong)(uVar17 - 1) * 4);
                break;
              }
              uVar24 = uVar24 + 1;
            } while ((uint)uVar24 < uVar17);
          }
          *(ushort *)(puVar10 + 1) = uVar7 & 0xffbf;
        }
        uVar17 = *(uint *)(*(long *)param_1[0x48] + (ulong)(local_6c << 1) * 4);
        if ((uVar17 < 0xffffffc0) &&
           (uVar5 = *(uint *)(*(long *)param_1[0x48] + (ulong)(local_6c << 1 | 1) * 4),
           uVar5 < 0xffffffc0)) {
          lVar20 = param_1[3];
          lVar9 = lVar20 + (ulong)(uVar17 >> 6) * 0x20;
          *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + -1;
          lVar20 = lVar20 + (ulong)(uVar5 >> 6) * 0x20;
          *(int *)(lVar20 + 0x10) = *(int *)(lVar20 + 0x10) + -1;
        }
        if (*puVar10 == 0) {
          lVar9 = (ulong)(local_6c >> 5) * 4;
          *(uint *)(param_1[0x22] + lVar9) =
               *(uint *)(param_1[0x22] + lVar9) & (1 << (ulong)(local_6c & 0x1f) ^ 0xffffffffU);
        }
        uVar17 = *puVar21 & 0xfffffffb;
        *puVar21 = (ushort)uVar17;
        *(int *)((long)param_1 + (ulong)*puVar13 * 4 + 200) =
             *(int *)((long)param_1 + (ulong)*puVar13 * 4 + 200) + -1;
      }
      uVar7 = (ushort)uVar17;
      if ((uVar17 >> 1 & 1) == 0) {
        if ((uVar17 >> 3 & 1) == 0) {
          uVar17 = *puVar13;
          if (*(uint *)(param_1 + (ulong)uVar17 * 2 + 0x2c) <
              (*(uint *)((long)param_1 + (ulong)uVar17 * 0x10 + 0x164) & 0x7fffffff)) {
            *(uint *)(param_1[(ulong)uVar17 * 2 + 0x2b] +
                     (ulong)*(uint *)(param_1 + (ulong)uVar17 * 2 + 0x2c) * 4) = local_6c;
            *(int *)(param_1 + (ulong)uVar17 * 2 + 0x2c) =
                 (int)param_1[(ulong)uVar17 * 2 + 0x2c] + 1;
          }
          else {
            FUN_001b4230(param_1 + (ulong)uVar17 * 2 + 0x2b,&local_6c);
            uVar7 = *puVar21;
          }
          uVar7 = uVar7 | 8;
          goto LAB_0011a958;
        }
      }
      else {
        uVar7 = uVar7 | 0x20;
LAB_0011a958:
        *puVar21 = uVar7;
      }
    } while (uVar8 != 0xffffffff);
  }
  if (iVar3 + iVar4 == 0) {
    lVar9 = param_1[0xd];
    lVar23 = lVar23 + uVar22 * 0x2c;
    *(undefined8 *)(lVar23 + 0x1c) = 0xffffffffffffffff;
    *(undefined8 *)(lVar23 + 0x14) = 0xffffffffffffffff;
    *(undefined8 *)(lVar23 + 0x24) = 0;
    *(undefined4 *)(lVar9 + uVar22 * 4) = 0;
    if (*(int *)(lVar23 + 0x10) == -1) {
      uVar8 = 1 << (ulong)(uVar6 & 0x1f);
      puVar13 = (uint *)(param_1[0x20] + (ulong)(uVar6 >> 5) * 4);
    }
    else {
      lVar9 = param_1[0x24];
      lVar20 = param_1[0xb] + uVar22 * 0x2c;
      uVar8 = *(uint *)(lVar9 + (ulong)((int)param_1[0x25] - 1) * 4);
      *(undefined4 *)(param_1[0xb] + (ulong)uVar8 * 0x2c + 0x10) = *(undefined4 *)(lVar20 + 0x10);
      *(uint *)(lVar9 + (ulong)*(uint *)(lVar20 + 0x10) * 4) = uVar8;
      *(int *)(param_1 + 0x25) = (int)param_1[0x25] + -1;
      *(undefined4 *)(lVar20 + 0x10) = 0xffffffff;
      uVar8 = 1 << (ulong)(uVar6 & 0x1f);
      puVar13 = (uint *)(param_1[0x20] + (ulong)(uVar6 >> 5) * 4);
      *puVar13 = *puVar13 & (uVar8 ^ 0xffffffff);
    }
    *puVar13 = *puVar13 & ~uVar8;
    if (*(uint *)(param_1 + 2) == uVar6) {
      *(uint *)(param_1 + 2) = uVar6 - 1;
    }
    else if (*(uint *)(param_1 + 1) < (*(uint *)((long)param_1 + 0xc) & 0x7fffffff)) {
      *(uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4) = uVar6;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    }
    else {
      local_64 = uVar6;
      FUN_001b4230(param_1,&local_64);
    }
  }
  return;
}


