/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f3150; name: FUN_010f3150
 */


ulong FUN_010f3150(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  ulong local_68;
  
  plVar23 = *(long **)(param_1 + 8);
  plVar10 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23,0x30,8);
  puVar9 = PTR_DAT_02710860;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_010f36ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar23;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  plVar10[4] = 0;
  *plVar10 = 0;
  plVar10[1] = 0;
  *(undefined4 *)(plVar10 + 5) = 0;
  plVar10[2] = 0;
  plVar10[3] = (long)plVar23;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  plVar26 = *(long **)(param_1 + 0xa0);
  if (plVar26 != (long *)0x0) {
    uVar20 = plVar26[1] - *plVar26;
    if (uVar20 != 0) {
      lVar11 = 0;
      uVar15 = (uint)*(byte *)(*(long *)*plVar26 + 0xec);
      uVar3 = uVar15;
      uVar17 = 0;
      do {
        uVar2 = uVar3;
        if (uVar15 != 0) {
          puVar5 = (undefined4 *)plVar10[1];
          if (puVar5 == (undefined4 *)plVar10[2]) {
            lVar12 = (long)puVar5 - *plVar10 >> 2;
            local_68 = 0x1555555555555555;
            uVar18 = lVar12 * -0x5555555555555555 + 1;
            if (0x1555555555555555 < uVar18) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar24 = plVar10[2] - *plVar10 >> 2;
            if ((ulong)(lVar24 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
              uVar21 = lVar24 * 0x5555555555555556;
              local_68 = uVar18;
              if (uVar18 <= uVar21) {
                local_68 = uVar21;
              }
              if (local_68 != 0) goto LAB_010f32d4;
              local_68 = 0;
              lVar24 = 0;
            }
            else {
LAB_010f32d4:
              lVar24 = (**(code **)(*(long *)plVar10[3] + 0x10))
                                 ((long *)plVar10[3],local_68 * 0xc,4);
              if (lVar24 == 0) {
                (**(code **)(*(long *)plVar10[3] + 0xb8))();
              }
            }
            lVar27 = plVar10[3];
            lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
            if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_010f36ac;
            *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar27;
            puVar28 = (undefined8 *)(lVar24 + lVar12 * 4);
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
            lVar12 = lVar24 + lVar12 * 4;
            lVar27 = (long)puVar28 + 0xc;
            *(int *)puVar28 = (int)lVar11;
            *(uint *)(lVar12 + 4) = uVar17;
            *(uint *)(lVar12 + 8) = uVar2;
            *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            lVar12 = *plVar10;
            lVar13 = plVar10[1];
            puVar29 = puVar28;
            if (lVar13 != lVar12) {
              do {
                lVar25 = plVar10[3];
                lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
                if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_010f36ac;
                *(long *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = lVar25;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
                puVar1 = (undefined8 *)(lVar13 + -0xc);
                uVar6 = *(undefined4 *)(lVar13 + -4);
                lVar13 = lVar13 + -0xc;
                puVar28 = (undefined8 *)((long)puVar29 + -0xc);
                *puVar28 = *puVar1;
                *(undefined4 *)((long)puVar29 + -4) = uVar6;
                *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
                puVar29 = puVar28;
              } while (lVar12 != lVar13);
              lVar12 = *plVar10;
            }
            *plVar10 = (long)puVar28;
            plVar10[1] = lVar27;
            lVar13 = plVar10[2];
            plVar10[2] = lVar24 + local_68 * 0xc;
            if (lVar12 != 0) {
              (**(code **)(*(long *)plVar10[3] + 0x18))((long *)plVar10[3],lVar12,lVar13 - lVar12,4)
              ;
            }
          }
          else {
            lVar24 = plVar10[3];
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
            if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_010f36ac;
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar24;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            *puVar5 = (int)lVar11;
            puVar5[1] = uVar17;
            puVar5[2] = uVar2;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
            plVar10[1] = plVar10[1] + 0xc;
          }
        }
        if ((ulong)((long)uVar20 >> 3) <= lVar11 + 1U) goto LAB_010f3438;
        lVar11 = lVar11 + 1;
        uVar15 = (uint)*(byte *)(*(long *)(*plVar26 + lVar11 * 8) + 0xec);
        uVar3 = uVar2 + uVar15;
        uVar17 = uVar2;
      } while( true );
    }
  }
LAB_010f34dc:
  uVar20 = 0;
  lVar11 = *plVar10;
joined_r0x010f35c4:
  if (lVar11 != 0) {
    plVar10[1] = lVar11;
    (**(code **)(*(long *)plVar10[3] + 0x18))((long *)plVar10[3],lVar11,plVar10[2] - lVar11,4);
  }
  (**(code **)(*plVar23 + 0x18))(plVar23,plVar10,0x30,8);
LAB_010f3600:
  return uVar20 & 0xffffffff;
LAB_010f3438:
  if (uVar2 != 0) {
    puVar16 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar2 = uVar2 + 1;
    if (uVar2 == 0) {
      uVar20 = *puVar16;
      uVar17 = (int)puVar16[1] + (int)uVar20;
      uVar18 = puVar16[1] ^ uVar20;
      *puVar16 = uVar18 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar18 << 0x10;
      puVar16[1] = uVar18 >> 0x1b | uVar18 << 0x25;
    }
    else {
      uVar18 = (0x20 - LZCOUNT(uVar2)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar2)) & 0x1f) & uVar2)
                      == 0);
      uVar20 = uVar18 >> 6;
      if ((uVar18 & 0x3f) != 0) {
        uVar20 = uVar20 + 1;
      }
      uVar21 = 0;
      if (uVar20 != 0) {
        uVar21 = uVar18 / uVar20;
      }
      uVar3 = 0;
      if (uVar20 <= uVar18) {
        uVar3 = (uint)(0xffffffffffffffff >> (-uVar21 & 0x3f));
      }
      uVar20 = *puVar16;
      uVar18 = puVar16[1];
      do {
        uVar21 = uVar20 ^ uVar18;
        iVar7 = (int)uVar20;
        iVar8 = (int)uVar18;
        uVar18 = uVar21 >> 0x1b | uVar21 << 0x25;
        uVar20 = uVar21 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar21 << 0x10;
        uVar17 = iVar7 + iVar8 & uVar3;
      } while (uVar2 <= uVar17);
      *puVar16 = uVar20;
      puVar16[1] = uVar18;
    }
    if (plVar10 == (long *)0x0) {
      uVar20 = 0;
      goto LAB_010f3600;
    }
    lVar11 = plVar10[1] - *plVar10;
    if (lVar11 != 0) {
      uVar20 = 0;
      puVar19 = (uint *)(*plVar10 + 8);
      do {
        if ((puVar19[-1] <= uVar17) && (uVar17 <= *puVar19)) {
          uVar20 = (ulong)puVar19[-2];
          goto joined_r0x010f3628;
        }
        uVar20 = uVar20 + 1;
        puVar19 = puVar19 + 3;
      } while (uVar20 < (ulong)((lVar11 >> 2) * -0x5555555555555555));
      goto joined_r0x010f35bc;
    }
    goto LAB_010f34dc;
  }
  if (((ulong)((long)uVar20 >> 3) < 2) || (uVar17 = (uint)(uVar20 >> 3), uVar17 == 1)) {
joined_r0x010f35bc:
    uVar20 = 0;
  }
  else {
    puVar16 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    if (uVar17 == 0) {
      uVar18 = *puVar16;
      uVar20 = (ulong)(uint)((int)puVar16[1] + (int)uVar18);
      uVar21 = puVar16[1] ^ uVar18;
      *puVar16 = uVar21 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar21 << 0x10;
      puVar16[1] = uVar21 >> 0x1b | uVar21 << 0x25;
    }
    else {
      uVar18 = (0x20 - LZCOUNT(uVar17)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar17)) & 0x1f) &
                       uVar17) == 0);
      uVar20 = uVar18 >> 6;
      if ((uVar18 & 0x3f) != 0) {
        uVar20 = uVar20 + 1;
      }
      uVar21 = 0;
      if (uVar20 != 0) {
        uVar21 = uVar18 / uVar20;
      }
      uVar4 = 0;
      if (uVar20 <= uVar18) {
        uVar4 = 0xffffffffffffffff >> (-uVar21 & 0x3f);
      }
      uVar18 = *puVar16;
      uVar21 = puVar16[1];
      do {
        uVar22 = uVar18 ^ uVar21;
        uVar20 = uVar18 + uVar21;
        uVar21 = uVar22 >> 0x1b | uVar22 << 0x25;
        uVar18 = uVar22 ^ (uVar18 >> 0x28 | uVar18 << 0x18) ^ uVar22 << 0x10;
        uVar20 = uVar20 & uVar4;
      } while (uVar17 <= (uint)uVar20);
      *puVar16 = uVar18;
      puVar16[1] = uVar21;
    }
  }
joined_r0x010f3628:
  if (plVar10 == (long *)0x0) goto LAB_010f3600;
  lVar11 = *plVar10;
  goto joined_r0x010f35c4;
}


