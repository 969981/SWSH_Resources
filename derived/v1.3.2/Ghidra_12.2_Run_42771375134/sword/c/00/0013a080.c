/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013a080; name: FUN_0013a080
 */


undefined8 FUN_0013a080(uint *param_1,uint param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  long lVar11;
  byte bVar12;
  undefined2 uVar13;
  uint *puVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ushort *puVar19;
  ulong uVar20;
  undefined4 *puVar21;
  uint uVar22;
  ulong uVar23;
  undefined4 *puVar24;
  ulong uVar25;
  ulong uVar26;
  uint *puVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  long local_878;
  undefined4 local_870;
  undefined4 local_86c [257];
  uint local_468 [257];
  undefined4 local_64;
  
  lVar17 = *(long *)(param_1 + 4);
  uVar32 = *param_1;
  lVar28 = *(long *)(param_1 + 8);
  uVar9 = param_2 >> 7;
  uVar30 = (ulong)(param_2 >> 2);
  if (param_1[0x20] <= uVar9) {
    FUN_00136460(param_1 + 0x1e,uVar30);
  }
  uVar22 = 1 << (ulong)(param_2 >> 2 & 0x1f);
  lVar18 = *(long *)(param_1 + 0x1e);
  lVar29 = (ulong)uVar9 * 4;
  *(uint *)(lVar18 + lVar29) = *(uint *)(lVar18 + lVar29) | uVar22;
  puVar19 = (ushort *)(lVar28 + uVar30 * 0xc + 4);
  uVar8 = *puVar19;
  uVar16 = (ulong)uVar8;
  if (uVar8 == 1) {
    lVar18 = lVar28 + uVar30 * 0xc;
    uVar25 = (ulong)*(ushort *)(lVar18 + 10);
    if (((((*(int *)(lVar17 + uVar25 * 0x38 + 0x28) == 0) &&
          (*(uint *)(lVar17 + uVar25 * 0x38 + 4) <= *param_3)) &&
         (*(uint *)(lVar17 + uVar25 * 0x38 + 8) <= param_3[1])) &&
        ((*(uint *)(lVar17 + uVar25 * 0x38 + 0xc) <= param_3[2] &&
         (param_3[3] <= *(uint *)(lVar17 + uVar25 * 0x38 + 0x10))))) &&
       ((param_3[4] <= *(uint *)(lVar17 + uVar25 * 0x38 + 0x14) &&
        (param_3[5] <= *(uint *)(lVar17 + uVar25 * 0x38 + 0x18))))) {
      if (param_1[0x536] <= uVar9) {
        FUN_00136460(param_1 + 0x534,uVar30);
      }
      lVar28 = *(long *)(param_1 + 0x534);
      *(uint *)(lVar28 + lVar29) = *(uint *)(lVar28 + lVar29) & (uVar22 ^ 0xffffffff);
      FUN_00137970(*(undefined8 *)(lVar17 + uVar25 * 0x38 + 0x20),param_3,
                   *(undefined2 *)(lVar18 + 8));
      return 1;
    }
  }
  if (uVar32 == 0) {
    uVar25 = 0;
    bVar10 = 1;
  }
  else {
    uVar15 = param_3[2];
    uVar4 = param_3[3];
    uVar2 = *param_3;
    uVar5 = param_3[1];
    uVar20 = 0;
    uVar3 = param_3[4];
    uVar6 = param_3[5];
    uVar25 = 0;
    puVar14 = (uint *)(lVar17 + 0xc);
    bVar10 = 1;
    do {
      if (((uVar2 <= puVar14[1]) && (puVar14[-2] <= uVar4)) &&
         ((uVar5 <= puVar14[2] &&
          (((puVar14[-1] <= uVar3 && (uVar15 <= puVar14[3])) && (*puVar14 <= uVar6)))))) {
        bVar12 = 0;
        if ((puVar14[-2] <= uVar2) && (puVar14[-1] <= uVar5)) {
          bVar12 = 0;
          if ((*puVar14 <= uVar15) && ((uVar4 <= puVar14[1] && (uVar3 <= puVar14[2])))) {
            bVar12 = bVar10 & uVar6 <= puVar14[3];
          }
        }
        bVar10 = bVar12;
        local_468[uVar25] = (uint)uVar20;
        uVar25 = (ulong)((int)uVar25 + 1);
      }
      uVar20 = uVar20 + 1;
      puVar14 = puVar14 + 0xe;
    } while (uVar32 != uVar20);
  }
  if (uVar8 == 1) {
    local_878 = lVar28 + uVar30 * 0xc + 8;
LAB_0013a31c:
    uVar26 = 0;
    uVar20 = 0;
    do {
      puVar21 = (undefined4 *)(local_878 + uVar26 * 4);
      uVar7 = *(ushort *)((long)puVar21 + 2);
      uVar32 = (uint)uVar25;
      if (uVar32 != 0) {
        uVar23 = 0;
        do {
          if (local_468[uVar23 & 0xffffffff] == (uint)uVar7) {
            uVar25 = (ulong)(uVar32 - 1);
            local_468[uVar23] = local_468[uVar25];
            FUN_00137970(*(undefined8 *)(lVar17 + (ulong)uVar7 * 0x38 + 0x20),param_3,
                         *(undefined2 *)puVar21);
            local_86c[uVar20 - 1] = *puVar21;
            uVar20 = (ulong)((int)uVar20 + 1);
            goto joined_r0x0013a3c0;
          }
          uVar23 = uVar23 + 1;
        } while ((uint)uVar23 < uVar32);
      }
      FUN_001377d0(*(undefined8 *)(lVar17 + (ulong)uVar7 * 0x38 + 0x20),*(undefined2 *)puVar21);
joined_r0x0013a3c0:
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar16);
    uVar32 = (uint)uVar20;
    iVar31 = (int)uVar25;
  }
  else {
    local_878 = *(long *)(param_1 + uVar16 * 4 + 0x26) +
                (ulong)*(uint *)(lVar28 + uVar30 * 0xc + 8) * 4;
    if (uVar8 != 0) goto LAB_0013a31c;
    uVar20 = 0;
    uVar32 = 0;
    iVar31 = (int)uVar25;
  }
  if (iVar31 != 0) {
    iVar31 = (int)uVar20;
    uVar26 = uVar25;
    puVar14 = local_468;
    do {
      uVar32 = *puVar14;
      uVar13 = FUN_001372a0(*(undefined8 *)(lVar17 + (ulong)uVar32 * 0x38 + 0x20),param_3,param_2,
                            param_2 & 1);
      lVar18 = uVar20 * 4;
      lVar11 = uVar20 - 1;
      uVar20 = (ulong)((int)uVar20 + 1);
      uVar26 = uVar26 - 1;
      *(undefined2 *)(local_86c + lVar11) = uVar13;
      *(short *)((long)local_86c + lVar18 + -2) = (short)uVar32;
      puVar14 = puVar14 + 1;
    } while (uVar26 != 0);
    uVar32 = (int)uVar25 + iVar31;
  }
  uVar15 = (uint)uVar8;
  if (uVar32 == uVar15) {
    if (uVar15 != 0) {
      if (uVar16 - 1 < 3) {
        lVar17 = 0;
      }
      else {
        lVar17 = 0;
        puVar21 = local_86c + 1;
        puVar24 = (undefined4 *)(local_878 + 8);
        do {
          puVar24[-2] = puVar21[-2];
          puVar24[-1] = puVar21[-1];
          *puVar24 = *puVar21;
          puVar1 = puVar21 + 1;
          lVar17 = lVar17 + 4;
          puVar21 = puVar21 + 4;
          puVar24[1] = *puVar1;
          puVar24 = puVar24 + 4;
        } while (uVar16 - (uVar16 & 3) != lVar17);
      }
      if ((uVar8 & 3) != 0) {
        lVar18 = -(uVar16 & 3);
        puVar21 = (undefined4 *)(local_878 + lVar17 * 4);
        puVar24 = local_86c + lVar17 + -1;
        do {
          lVar18 = lVar18 + 1;
          *puVar21 = *puVar24;
          puVar21 = puVar21 + 1;
          puVar24 = puVar24 + 1;
        } while (lVar18 != 0);
      }
      goto LAB_0013a58c;
    }
LAB_0013a680:
    *puVar19 = (ushort)uVar32;
LAB_0013a688:
    if ((bool)(bVar10 & uVar32 != 0)) {
      if (param_1[0x536] <= uVar9) {
        FUN_00136460(param_1 + 0x534,uVar30);
      }
      lVar17 = *(long *)(param_1 + 0x534);
      uVar22 = *(uint *)(lVar17 + lVar29) & (uVar22 ^ 0xffffffff);
      goto LAB_0013a700;
    }
    uVar32 = param_1[0x536];
  }
  else {
    if (1 < uVar15) {
      uVar2 = *(uint *)(lVar28 + uVar30 * 0xc + 8);
      *(uint *)(*(long *)(param_1 + uVar16 * 4 + 0x26) + (ulong)uVar2 * 4) = param_1[uVar16 + 0x42a]
      ;
      param_1[uVar16 + 0x42a] = uVar2;
    }
    if (uVar32 != 0) {
      if (uVar32 == 1) {
        *(undefined4 *)(lVar28 + uVar30 * 0xc + 8) = local_870;
      }
      else {
        puVar14 = param_1 + (ulong)uVar32 * 4 + 0x26;
        uVar15 = param_1[(ulong)uVar32 + 0x42a];
        if (uVar15 == 0xffffffff) {
          puVar27 = param_1 + (ulong)uVar32 * 4 + 0x28;
          uVar2 = *puVar27;
          uVar16 = (ulong)uVar2;
          uVar15 = uVar2 + uVar32;
          *(uint *)(lVar28 + uVar30 * 0xc + 8) = uVar2;
          uVar2 = param_1[(ulong)uVar32 * 4 + 0x29] & 0x7fffffff;
          if (uVar2 < uVar15) {
            uVar3 = 2;
            if (uVar2 != 0) {
              uVar3 = param_1[(ulong)uVar32 * 4 + 0x29] << 1;
            }
            if (uVar3 <= uVar15) {
              uVar3 = uVar15;
            }
            if (uVar2 < uVar3) {
              FUN_001ed4d0(puVar14);
              uVar16 = (ulong)*puVar27;
            }
          }
          lVar17 = *(long *)puVar14;
          *puVar27 = uVar15;
          puVar14 = (uint *)(lVar17 + uVar16 * 4);
        }
        else {
          *(uint *)(lVar28 + uVar30 * 0xc + 8) = uVar15;
          puVar14 = (uint *)(*(long *)puVar14 + (ulong)uVar15 * 4);
          param_1[(ulong)uVar32 + 0x42a] = *puVar14;
        }
        memcpy(puVar14,&local_870,(ulong)(uVar32 << 2));
      }
      goto LAB_0013a680;
    }
LAB_0013a58c:
    *puVar19 = (ushort)uVar32;
    if ((uVar15 == 0) || (uVar32 != 0)) goto LAB_0013a688;
    puVar21 = (undefined4 *)(lVar28 + uVar30 * 0xc);
    puVar21[2] = param_2;
    local_64 = *puVar21;
    if (param_1[0x52e] < (param_1[0x52f] & 0x7fffffff)) {
      *(undefined4 *)(*(long *)(param_1 + 0x52c) + (ulong)param_1[0x52e] * 4) = local_64;
      param_1[0x52e] = param_1[0x52e] + 1;
    }
    else {
      FUN_001b4230(param_1 + 0x52c,&local_64);
    }
    uVar32 = param_1[0x536];
  }
  if (uVar32 <= uVar9) {
    FUN_00136460(param_1 + 0x534,uVar30);
  }
  lVar17 = *(long *)(param_1 + 0x534);
  uVar22 = *(uint *)(lVar17 + lVar29) | uVar22;
LAB_0013a700:
  *(uint *)(lVar17 + lVar29) = uVar22;
  return 1;
}


