/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01369ea0; name: FUN_01369ea0
 */


void FUN_01369ea0(long *param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ushort uVar5;
  bool bVar6;
  byte bVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  float fVar24;
  undefined8 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  undefined8 local_ca;
  undefined4 local_c2;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b6;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 uStack_80;
  ushort local_7e;
  undefined2 uStack_7c;
  undefined2 local_7a;
  ushort uStack_78;
  undefined4 uStack_76;
  
  puVar4 = PTR_DAT_02710848;
  fVar24 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  if (fVar24 < *(float *)(&DAT_0216c4c8 + (ulong)*(uint *)(param_2 + 0x6c) * 4)) {
    lVar19 = *(long *)(*(long *)puVar4 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    puVar12 = *(uint **)(*(long *)(lVar19 + 0x198) + 400);
    piVar1 = (int *)((long)puVar12 + (ulong)*puVar12);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar14 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar14 == 0)) {
      puVar12 = (uint *)0x0;
      uVar9 = uRam0000000000000000;
    }
    else {
      puVar12 = (uint *)((long)piVar1 + uVar14);
      puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
      uVar9 = *puVar12;
    }
    if (uVar9 != 0) {
      lVar22 = 0;
      uVar14 = 1;
      do {
        uVar17 = (ulong)puVar12[uVar14];
        lVar21 = lVar22 + (uVar17 - (long)*(int *)((long)puVar12 + uVar14 * 4 + uVar17));
        if ((*(ushort *)((long)puVar12 + lVar21 + 4) < 5) ||
           (uVar18 = (ulong)*(ushort *)((long)puVar12 + lVar21 + 8), uVar18 == 0)) {
          if (*(long *)(param_2 + 0x60) == 0) goto LAB_01369fe0;
        }
        else if (*(long *)(param_2 + 0x60) ==
                 *(long *)((long)puVar12 + lVar22 + uVar17 + uVar18 + 4)) {
LAB_01369fe0:
          FUN_0136ac70(&local_b0,param_2,(long)puVar12 + lVar22 + uVar17 + 4);
          goto joined_r0x01369ff4;
        }
        bVar6 = uVar14 < uVar9;
        uVar14 = uVar14 + 1;
        lVar22 = lVar22 + 4;
      } while (bVar6);
    }
    uStack_78 = 0;
    uStack_76 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_7e = 0;
    uStack_7c = 0;
    local_7a = 0;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
joined_r0x01369ff4:
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    }
    uVar5 = local_b0._2_2_;
    if (((((((local_b0._2_2_ == 0) && ((ushort)local_a8 == 0)) && (local_a8._6_2_ == 0)) &&
          ((uStack_a0._4_2_ == 0 && (local_98._2_2_ == 0)))) &&
         (((ushort)local_90 == 0 && ((local_90._6_2_ == 0 && (local_88._4_2_ == 0)))))) &&
        (local_7e == 0)) && (uStack_78 == 0)) goto LAB_0136a174;
    uVar14 = FUN_0136a770();
    uVar9 = FUN_0136a910();
    lVar22 = *(long *)PTR_DAT_02710798;
    lVar19 = *(long *)(*(long *)puVar4 + 0x90);
    if (lVar19 != 0) {
      (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
    }
    lVar21 = *(long *)(lVar19 + 0x58);
    if (lVar21 != 0) {
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
    iVar10 = FUN_00884820(lVar21);
    lVar19 = *(long *)(lVar22 + 0x220);
    if (lVar19 == 0) {
      iVar11 = FUN_01507a30(0,*(undefined8 *)(param_2 + 0x58));
    }
    else {
      plVar23 = (long *)(lVar19 + 0x48);
      (**(code **)(*plVar23 + 0x10))(plVar23);
      iVar11 = FUN_01507a30(lVar19,*(undefined8 *)(param_2 + 0x58));
      (**(code **)(*plVar23 + 0x18))(plVar23);
    }
    if (lVar21 != 0) {
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
    }
    if (((6 - iVar10) + iVar11 == 0) || (sVar8 = FUN_0136ab10(), sVar8 == 0)) goto LAB_0136a174;
    bVar7 = FUN_014ae360();
    puVar4 = PTR_DAT_02710848;
    if ((bVar7 < (byte)local_b0) || (uVar9 < *(uint *)(&DAT_0216c4ac + (uVar14 & 0xffffffff) * 4)))
    goto LAB_0136a174;
    if (uVar5 == 0) {
      uVar9 = 0;
      uVar3 = local_b0;
    }
    else {
      fVar24 = 1.0 - (float)uVar5 / DAT_01d4c6b8;
      uVar9 = (uint)(fVar24 * fVar24 * DAT_01d4c6b8);
      local_b0._0_4_ = CONCAT22((short)uVar9,(undefined2)local_b0);
      uVar3 = local_b0;
    }
    if ((ushort)local_a8 != 0) {
      fVar24 = 1.0 - (float)(ushort)local_a8 / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_a8 = CONCAT62(local_a8._2_6_,(short)iVar10);
    }
    if (local_a8._6_2_ != 0) {
      fVar24 = 1.0 - (float)local_a8._6_2_ / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_a8 = CONCAT26((short)iVar10,(undefined6)local_a8);
    }
    if (uStack_a0._4_2_ != 0) {
      fVar24 = 1.0 - (float)uStack_a0._4_2_ / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      uStack_a0._0_6_ = CONCAT24((short)iVar10,(undefined4)uStack_a0);
    }
    if (local_98._2_2_ != 0) {
      fVar24 = 1.0 - (float)local_98._2_2_ / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_98._0_4_ = CONCAT22((short)iVar10,(undefined2)local_98);
    }
    if ((ushort)local_90 != 0) {
      fVar24 = 1.0 - (float)(ushort)local_90 / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_90 = CONCAT62(local_90._2_6_,(short)iVar10);
    }
    if (local_90._6_2_ != 0) {
      fVar24 = 1.0 - (float)local_90._6_2_ / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_90 = CONCAT26((short)iVar10,(undefined6)local_90);
    }
    if (local_88._4_2_ != 0) {
      fVar24 = 1.0 - (float)local_88._4_2_ / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_88._0_6_ = CONCAT24((short)iVar10,(undefined4)local_88);
    }
    if (local_7e != 0) {
      fVar24 = 1.0 - (float)local_7e / DAT_01d4c6b8;
      iVar10 = (int)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + iVar10;
      local_7e = (ushort)iVar10;
    }
    uVar13 = (uint)uStack_78;
    if (uStack_78 != 0) {
      fVar24 = 1.0 - (float)uStack_78 / DAT_01d4c6b8;
      uVar13 = (uint)(fVar24 * fVar24 * DAT_01d4c6b8);
      uVar9 = uVar9 + uVar13;
      uStack_78 = (ushort)uVar13;
    }
    puVar16 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    local_b0._2_2_ = (ushort)((ulong)uVar3 >> 0x10);
    if (uVar9 == 0) {
      uVar14 = *puVar16;
      uVar15 = (int)puVar16[1] + (int)uVar14;
      uVar17 = puVar16[1] ^ uVar14;
      *puVar16 = uVar17 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar17 << 0x10;
      puVar16[1] = uVar17 >> 0x1b | uVar17 << 0x25;
    }
    else if (uVar9 == 1) {
      uVar15 = 0;
    }
    else {
      uVar17 = (0x20 - LZCOUNT(uVar9)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar9)) & 0x1f) & uVar9)
                      == 0);
      uVar14 = uVar17 >> 6;
      if ((uVar17 & 0x3f) != 0) {
        uVar14 = uVar14 + 1;
      }
      uVar18 = 0;
      if (uVar14 != 0) {
        uVar18 = uVar17 / uVar14;
      }
      uVar2 = 0;
      if (uVar14 <= uVar17) {
        uVar2 = (uint)(0xffffffffffffffff >> (-uVar18 & 0x3f));
      }
      uVar14 = *puVar16;
      uVar17 = puVar16[1];
      do {
        uVar18 = uVar14 ^ uVar17;
        iVar10 = (int)uVar14;
        iVar11 = (int)uVar17;
        uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
        uVar14 = uVar18 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar18 << 0x10;
        uVar15 = iVar10 + iVar11 & uVar2;
      } while (uVar9 <= uVar15);
      *puVar16 = uVar14;
      puVar16[1] = uVar17;
    }
    if (local_b0._2_2_ != 0) {
      uVar15 = uVar15 - local_b0._2_2_;
      if ((int)uVar15 < 0) {
        puVar20 = (ushort *)((ulong)&local_b0 | 2);
        goto LAB_0136a578;
      }
    }
    if (((ushort)local_a8 == 0) || (uVar15 = uVar15 - (ushort)local_a8, -1 < (int)uVar15)) {
      if ((local_a8._6_2_ == 0) || (uVar15 = uVar15 - local_a8._6_2_, -1 < (int)uVar15)) {
        if ((uStack_a0._4_2_ == 0) || (uVar15 = uVar15 - uStack_a0._4_2_, -1 < (int)uVar15)) {
          if ((local_98._2_2_ == 0) || (uVar15 = uVar15 - local_98._2_2_, -1 < (int)uVar15)) {
            if (((ushort)local_90 == 0) || (uVar15 = uVar15 - (ushort)local_90, -1 < (int)uVar15)) {
              if ((local_90._6_2_ == 0) || (uVar15 = uVar15 - local_90._6_2_, -1 < (int)uVar15)) {
                if ((local_88._4_2_ == 0) || (uVar15 = uVar15 - local_88._4_2_, -1 < (int)uVar15)) {
                  if ((local_7e == 0) || (uVar15 = uVar15 - local_7e, -1 < (int)uVar15)) {
                    if ((uVar13 == 0) || ((int)uVar13 <= (int)uVar15)) goto LAB_0136a174;
                    puVar20 = &uStack_78;
                  }
                  else {
                    puVar20 = &local_7e;
                  }
                }
                else {
                  puVar20 = (ushort *)((long)&local_88 + 4);
                }
              }
              else {
                puVar20 = (ushort *)((long)&local_90 + 6);
              }
            }
            else {
              puVar20 = (ushort *)&local_90;
            }
          }
          else {
            puVar20 = (ushort *)((long)&local_98 + 2);
          }
        }
        else {
          puVar20 = (ushort *)((long)&uStack_a0 + 4);
        }
      }
      else {
        puVar20 = (ushort *)((long)&local_a8 + 6);
      }
    }
    else {
      puVar20 = (ushort *)&local_a8;
    }
LAB_0136a578:
    local_f0 = 0xffffffffffffffff;
    uStack_e8 = 0x3ffffffff;
    local_d8 = 899;
    local_d4 = 0xffff00ff00010000;
    local_cc = 0x1ff;
    local_bc = 0xffff;
    local_100 = 0;
    local_f8 = 0;
    local_e0 = 0xffffffffffffffff;
    local_b8 = 0;
    local_c2 = 0xffffffff;
    local_b6 = 0x1000100;
    local_ca = 0xffffffffffffffff;
    local_b0 = uVar3;
    bVar7 = FUN_014ae360();
    if (local_b0._1_1_ <= bVar7) {
      bVar7 = local_b0._1_1_;
    }
    if ((uint)bVar7 - (uint)(byte)local_b0 == 0) {
      uVar9 = 0;
    }
    else {
      puVar16 = *(ulong **)(*(long *)puVar4 + 0x98);
      uVar13 = ((uint)bVar7 - (uint)(byte)local_b0) + 1;
      if (uVar13 == 0) {
        uVar14 = *puVar16;
        uVar9 = (int)puVar16[1] + (int)uVar14;
        uVar17 = puVar16[1] ^ uVar14;
        *puVar16 = uVar17 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar17 << 0x10;
        puVar16[1] = uVar17 >> 0x1b | uVar17 << 0x25;
      }
      else {
        uVar17 = (0x20 - LZCOUNT(uVar13)) -
                 (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar13)) & 0x1f) &
                         uVar13) == 0);
        uVar14 = uVar17 >> 6;
        if ((uVar17 & 0x3f) != 0) {
          uVar14 = uVar14 + 1;
        }
        uVar18 = 0;
        if (uVar14 != 0) {
          uVar18 = uVar17 / uVar14;
        }
        uVar15 = 0;
        if (uVar14 <= uVar17) {
          uVar15 = (uint)(0xffffffffffffffff >> (-uVar18 & 0x3f));
        }
        uVar14 = *puVar16;
        uVar17 = puVar16[1];
        do {
          uVar18 = uVar14 ^ uVar17;
          iVar10 = (int)uVar14;
          iVar11 = (int)uVar17;
          uVar17 = uVar18 >> 0x1b | uVar18 << 0x25;
          uVar14 = uVar18 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar18 << 0x10;
          uVar9 = iVar10 + iVar11 & uVar15;
        } while (uVar13 <= uVar9);
        *puVar16 = uVar14;
        puVar16[1] = uVar17;
      }
    }
    local_d8 = (uint)puVar20[1];
    local_d4 = CONCAT62(CONCAT42(local_d4._4_4_,(short)uVar9 + (ushort)(byte)local_b0),puVar20[2]);
    plVar23 = *(long **)(param_2 + 0x58);
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar19 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar23;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    lVar22 = (**(code **)(*plVar23 + 0x10))(plVar23,0xb8,8);
    if (lVar22 == 0) {
      (**(code **)(*plVar23 + 0xb8))(plVar23);
    }
    FUN_008662a0(lVar22,*(undefined8 *)(param_2 + 0x58),&local_100);
    *(long **)(lVar22 + 8) = plVar23;
    *(long *)(lVar22 + 0x10) = lVar22;
    *(undefined8 *)(lVar22 + 0x18) = 0xb8;
    *(undefined8 *)(lVar22 + 0x20) = 8;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    *param_1 = lVar22;
    if (lVar22 == 0) {
      return;
    }
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))((long *)(lVar22 + 0x48));
    return;
  }
LAB_0136a174:
  *param_1 = 0;
  return;
}


