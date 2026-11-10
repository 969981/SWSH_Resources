/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f6a280; name: FUN_00f6a280
 */


/* WARNING: Removing unreachable block (ram,0x00f6a714) */
/* WARNING: Removing unreachable block (ram,0x00f6a980) */

void FUN_00f6a280(string *param_1)

{
  size_t sVar1;
  string *psVar2;
  string *psVar3;
  size_t sVar4;
  byte *pbVar5;
  string sVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  string *psVar19;
  long lVar20;
  string *psVar21;
  ulong uVar22;
  uint uVar24;
  uint uVar23;
  ulong uVar25;
  uint uVar26;
  string *local_80;
  ulong local_78;
  ulong local_70;
  string *psStack_68;
  
  if ((*PTR_DAT_02721880 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_02721880);
    pbVar5 = DAT_02721888;
    uVar8 = s__anonymous__01cd7797._0_8_;
    if (iVar14 != 0) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      pbVar5[8] = 0;
      pbVar5[9] = 0;
      pbVar5[10] = 0;
      pbVar5[0xb] = 0;
      pbVar5[0xc] = 0;
      pbVar5[0xd] = 0;
      pbVar5[0xe] = 0;
      pbVar5[0xf] = 0;
      *(undefined8 *)(pbVar5 + 1) = uVar8;
      *pbVar5 = 0x16;
      pbVar5[0x10] = 0;
      pbVar5[0x11] = 0;
      pbVar5[0x12] = 0;
      pbVar5[0x13] = 0;
      pbVar5[0x14] = 0;
      pbVar5[0x15] = 0;
      pbVar5[0x16] = 0;
      pbVar5[0x17] = 0;
      pbVar5[0x18] = 0;
      pbVar5[0x19] = 0;
      pbVar5[0x1a] = 0;
      pbVar5[0x1b] = 0;
      pbVar5[0x1c] = 0;
      pbVar5[0x1d] = 0;
      pbVar5[0x1e] = 0;
      pbVar5[0x1f] = 0;
      pbVar5[0x18] = 0x2a;
      pbVar5[9] = 0x75;
      pbVar5[10] = 0x73;
      pbVar5[0xb] = 0x7d;
      pbVar5[0xc] = 0;
      uVar8 = CONCAT53(s__anonymous_namespace__01d00fca._16_5_,
                       s__anonymous_namespace__01d00fca._13_3_);
      pbVar5[0x20] = 0;
      pbVar5[0x21] = 0;
      pbVar5[0x22] = 0;
      pbVar5[0x23] = 0;
      pbVar5[0x24] = 0;
      pbVar5[0x25] = 0;
      pbVar5[0x26] = 0;
      pbVar5[0x27] = 0;
      pbVar5[0x28] = 0;
      pbVar5[0x29] = 0;
      pbVar5[0x2a] = 0;
      pbVar5[0x2b] = 0;
      pbVar5[0x2c] = 0;
      pbVar5[0x2d] = 0;
      pbVar5[0x2e] = 0;
      pbVar5[0x2f] = 0;
      pbVar5[0x2e] = 0;
      *(undefined8 *)(pbVar5 + 0x26) = uVar8;
      uVar8 = s__anonymous_namespace__01d00fca._0_8_;
      *(ulong *)(pbVar5 + 0x21) =
           CONCAT35(s__anonymous_namespace__01d00fca._13_3_,s__anonymous_namespace__01d00fca._8_5_);
      *(undefined8 *)(pbVar5 + 0x19) = uVar8;
      FUN_001001c0(PTR_LAB_02720bd0,pbVar5,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02721880);
    }
  }
  pcVar15 = operator_new(0x80);
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x7a;
  *(char **)(param_1 + 0x10) = pcVar15;
  pcVar15[0x78] = 't';
  uVar11 = s_std__string_sol__detail__ctti_ge_01ce59db._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._16_8_;
  pcVar15[0x79] = ']';
  pcVar15[0x7a] = '\0';
  *(undefined8 *)(pcVar15 + 0x10) = uVar8;
  *(undefined8 *)(pcVar15 + 0x18) = uVar11;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._8_8_;
  *(undefined8 *)pcVar15 = s_std__string_sol__detail__ctti_ge_01ce59db._0_8_;
  *(undefined8 *)(pcVar15 + 8) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._56_8_;
  *(undefined8 *)(pcVar15 + 0x30) = s_std__string_sol__detail__ctti_ge_01ce59db._48_8_;
  *(undefined8 *)(pcVar15 + 0x38) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._40_8_;
  *(undefined8 *)(pcVar15 + 0x20) = s_std__string_sol__detail__ctti_ge_01ce59db._32_8_;
  *(undefined8 *)(pcVar15 + 0x28) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._88_8_;
  *(undefined8 *)(pcVar15 + 0x50) = s_std__string_sol__detail__ctti_ge_01ce59db._80_8_;
  *(undefined8 *)(pcVar15 + 0x58) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._72_8_;
  *(undefined8 *)(pcVar15 + 0x40) = s_std__string_sol__detail__ctti_ge_01ce59db._64_8_;
  *(undefined8 *)(pcVar15 + 0x48) = uVar8;
  uVar11 = s_std__string_sol__detail__ctti_ge_01ce59db._112_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01ce59db._96_8_;
  *(undefined8 *)(pcVar15 + 0x68) = s_std__string_sol__detail__ctti_ge_01ce59db._104_8_;
  *(undefined8 *)(pcVar15 + 0x70) = uVar11;
  *(undefined8 *)(pcVar15 + 0x60) = uVar8;
  cVar13 = (char)param_1;
  std::string::find(cVar13,0x5b);
  uVar16 = std::string::find(cVar13,0x3d);
  uVar17 = std::string::rfind(cVar13,0x5d);
  sVar6 = *param_1;
  if (uVar17 == 0xffffffffffffffff) {
    if (((byte)sVar6 & 1) != 0) {
      uVar17 = *(ulong *)(param_1 + 8);
      uVar25 = 0;
      if (uVar16 != 0xffffffffffffffff) {
        uVar25 = uVar16;
      }
      uVar16 = uVar17;
      goto LAB_00f6a39c;
    }
    uVar17 = (ulong)((byte)sVar6 >> 1);
    uVar25 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar25 = uVar16;
    }
  }
  else {
    uVar25 = 0;
    if (uVar16 != 0xffffffffffffffff) {
      uVar25 = uVar16;
    }
    if (((byte)sVar6 & 1) != 0) {
      uVar16 = *(ulong *)(param_1 + 8);
      goto LAB_00f6a39c;
    }
  }
  uVar16 = (ulong)((byte)sVar6 >> 1);
LAB_00f6a39c:
  if (uVar25 < uVar16 - 1) {
    uVar25 = uVar25 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar25,uVar17 - uVar25,(allocator *)param_1);
  if (((byte)*param_1 & 1) == 0) {
    *(undefined2 *)param_1 = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    if (((byte)*param_1 & 1) != 0) {
      operator_delete(*(void **)(param_1 + 0x10));
      *(undefined8 *)param_1 = 0;
    }
  }
  uVar25 = local_78 & 0xff;
  *(ulong *)param_1 = local_78;
  uVar17 = uVar25 >> 1;
  bVar12 = (local_78 & 1) != 0;
  uVar16 = uVar17;
  if (bVar12) {
    uVar16 = local_70;
  }
  uVar26 = (uint)uVar25 & 1;
  *(ulong *)(param_1 + 8) = local_70;
  *(string **)(param_1 + 0x10) = psStack_68;
  if (!bVar12) {
    psStack_68 = param_1 + 1;
  }
  if (0xd < (long)uVar16) {
    psVar2 = psStack_68 + uVar16;
    lVar18 = 1;
    psVar19 = psVar2;
    while (uVar16 != 0xd) {
      uVar16 = uVar16 - 1;
      if (psStack_68[uVar16] == (string)0x6b) {
        lVar20 = 0;
        do {
          if (lVar20 == -0xd) {
            if ((lVar18 != -0xd) &&
               (psVar2 + ((-0xd - lVar18) - (long)psStack_68) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,
                                 (ulong)(psVar2 + ((-0xd - lVar18) - (long)psStack_68) + -2));
              sVar6 = *param_1;
              uVar25 = (ulong)(byte)sVar6;
              local_70 = *(ulong *)(param_1 + 8);
              uVar26 = (byte)sVar6 & 1;
              uVar17 = (ulong)((byte)sVar6 >> 1);
            }
            goto LAB_00f6a4c0;
          }
          lVar9 = lVar20 + -2;
          lVar10 = lVar20 + 0xc;
          lVar20 = lVar20 + -1;
        } while (psVar19[lVar9] == *(string *)("seperator_mark" + lVar10));
      }
      lVar18 = lVar18 + 1;
      psVar19 = psVar19 + -1;
    }
  }
LAB_00f6a4c0:
  bVar12 = uVar26 == 0;
  psVar2 = param_1 + 1;
  uVar22 = local_70;
  uVar16 = uVar17;
  if (!bVar12) {
    uVar16 = local_70;
  }
  while (uVar23 = (uint)uVar25, uVar16 != 0) {
    psVar21 = *(string **)(param_1 + 0x10);
    psVar19 = psVar2;
    if (uVar26 != 0) {
      psVar19 = psVar21;
    }
    iVar14 = isblank((uint)(byte)*psVar19);
    if (iVar14 == 0) {
      uVar26 = uVar23 & 1;
      bVar12 = (uVar25 & 1) == 0;
      uVar17 = (ulong)(uVar23 >> 1);
      if (!bVar12) {
        uVar17 = uVar22;
      }
      goto joined_r0x00f6a54c;
    }
    psVar3 = psVar2;
    if (!bVar12) {
      psVar3 = psVar21;
    }
    std::string::erase((ulong)param_1,(long)psVar3 - (long)psVar19);
    sVar6 = *param_1;
    uVar25 = (ulong)(byte)sVar6;
    uVar22 = *(ulong *)(param_1 + 8);
    bVar12 = ((byte)sVar6 & 1) == 0;
    uVar26 = (byte)sVar6 & 1;
    uVar17 = (ulong)((byte)sVar6 >> 1);
    uVar16 = uVar17;
    if (!bVar12) {
      uVar16 = uVar22;
    }
  }
  bVar12 = uVar26 == 0;
  if (!bVar12) {
    uVar17 = uVar22;
  }
joined_r0x00f6a54c:
  if (uVar17 != 0) {
    do {
      uVar23 = (uint)uVar25;
      psVar19 = *(string **)(param_1 + 0x10);
      uVar25 = uVar25 >> 1;
      uVar16 = uVar25;
      psVar21 = psVar2;
      if (!bVar12) {
        uVar16 = uVar22;
        psVar21 = psVar19;
      }
      iVar14 = isblank((uint)(byte)psVar21[uVar16 - 1]);
      if (iVar14 == 0) break;
      if (bVar12) {
        psVar19 = param_1 + uVar25;
        *param_1 = (string)(((char)uVar25 + -1) * '\x02');
      }
      else {
        *(ulong *)(param_1 + 8) = uVar22 - 1;
        psVar19 = psVar19 + (uVar22 - 1);
      }
      *psVar19 = (string)0x0;
      sVar6 = *param_1;
      uVar25 = (ulong)(byte)sVar6;
      uVar23 = (uint)(byte)sVar6;
      uVar22 = *(ulong *)(param_1 + 8);
      bVar12 = ((byte)sVar6 & 1) == 0;
      uVar16 = (ulong)((byte)sVar6 >> 1);
      if (!bVar12) {
        uVar16 = uVar22;
      }
    } while (uVar16 != 0);
    uVar26 = uVar23 & 1;
  }
  local_80 = psVar2;
  if (uVar26 != 0) {
    local_80 = *(string **)(param_1 + 0x10);
  }
  sVar4 = *(size_t *)(DAT_02721888 + 8);
  pbVar5 = *(byte **)(DAT_02721888 + 0x10);
  if ((*DAT_02721888 & 1) == 0) {
    pbVar5 = DAT_02721888 + 1;
    sVar4 = (ulong)(*DAT_02721888 >> 1);
  }
  if (sVar4 == 0) {
    uVar16 = 0;
    goto LAB_00f6a654;
  }
  uVar16 = (ulong)(uVar23 >> 1);
  if (uVar26 != 0) {
    uVar16 = uVar22;
  }
  if ((long)sVar4 <= (long)uVar16) {
    bVar7 = *pbVar5;
    psVar21 = local_80 + uVar16;
    psVar19 = local_80;
    do {
      sVar1 = (uVar16 - sVar4) + 1;
      uVar24 = uVar23;
      if ((sVar1 == 0) || (psVar19 = memchr(psVar19,(uint)bVar7,sVar1), psVar19 == (string *)0x0))
      break;
      iVar14 = memcmp(psVar19,pbVar5,sVar4);
      if (iVar14 == 0) {
        if (psVar19 != psVar21) {
          uVar16 = (long)psVar19 - (long)local_80;
          goto joined_r0x00f6a748;
        }
        break;
      }
      psVar19 = psVar19 + 1;
      uVar16 = (long)psVar21 - (long)psVar19;
    } while ((long)sVar4 <= (long)uVar16);
LAB_00f6a750:
    uVar23 = uVar24;
  }
LAB_00f6a754:
  sVar4 = (ulong)(DAT_02721888[0x18] >> 1);
  pbVar5 = DAT_02721888 + 0x19;
  if ((DAT_02721888[0x18] & 1) != 0) {
    sVar4 = *(size_t *)(DAT_02721888 + 0x20);
    pbVar5 = *(byte **)(DAT_02721888 + 0x28);
  }
  if (sVar4 != 0) {
    uVar16 = (ulong)(uVar23 >> 1);
    if (uVar26 != 0) {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar4 <= (long)uVar16) {
      bVar7 = *pbVar5;
      psVar21 = local_80 + uVar16;
      psVar19 = local_80;
      do {
        sVar1 = (uVar16 - sVar4) + 1;
        if (sVar1 == 0) {
          return;
        }
        psVar19 = memchr(psVar19,(uint)bVar7,sVar1);
        if (psVar19 == (string *)0x0) {
          return;
        }
        iVar14 = memcmp(psVar19,pbVar5,sVar4);
        if (iVar14 == 0) {
          if (psVar19 == psVar21) {
            return;
          }
          uVar16 = (long)psVar19 - (long)local_80;
          if (uVar16 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_00f6a8c0;
        }
        psVar19 = psVar19 + 1;
        uVar16 = (long)psVar21 - (long)psVar19;
      } while ((long)sVar4 <= (long)uVar16);
    }
    return;
  }
  uVar16 = 0;
LAB_00f6a8c0:
  do {
    while( true ) {
      std::string::erase((ulong)param_1,uVar16);
      sVar6 = *param_1;
      psVar19 = psVar2;
      if (((byte)sVar6 & 1) != 0) {
        psVar19 = *(string **)(param_1 + 0x10);
      }
      sVar4 = (ulong)(DAT_02721888[0x18] >> 1);
      pbVar5 = DAT_02721888 + 0x19;
      if ((DAT_02721888[0x18] & 1) != 0) {
        sVar4 = *(size_t *)(DAT_02721888 + 0x20);
        pbVar5 = *(byte **)(DAT_02721888 + 0x28);
      }
      if (sVar4 != 0) break;
      uVar16 = 0;
    }
    uVar16 = (ulong)((byte)sVar6 >> 1);
    if (((byte)sVar6 & 1) != 0) {
      uVar16 = *(ulong *)(param_1 + 8);
    }
    if ((long)uVar16 < (long)sVar4) {
      return;
    }
    bVar7 = *pbVar5;
    psVar3 = psVar19 + uVar16;
    psVar21 = psVar19;
    while( true ) {
      sVar1 = (uVar16 - sVar4) + 1;
      if (sVar1 == 0) {
        return;
      }
      psVar21 = memchr(psVar21,(uint)bVar7,sVar1);
      if (psVar21 == (string *)0x0) {
        return;
      }
      iVar14 = memcmp(psVar21,pbVar5,sVar4);
      if (iVar14 == 0) break;
      psVar21 = psVar21 + 1;
      uVar16 = (long)psVar3 - (long)psVar21;
      if ((long)uVar16 < (long)sVar4) {
        return;
      }
    }
    if (psVar21 == psVar3) {
      return;
    }
    uVar16 = (long)psVar21 - (long)psVar19;
  } while (uVar16 != 0xffffffffffffffff);
  return;
joined_r0x00f6a748:
  if (uVar16 == 0xffffffffffffffff) goto LAB_00f6a754;
LAB_00f6a654:
  while( true ) {
    std::string::erase((ulong)param_1,uVar16);
    sVar6 = *param_1;
    uVar24 = (uint)(byte)sVar6;
    uVar23 = (uint)(byte)sVar6;
    local_80 = psVar2;
    if (((byte)sVar6 & 1) != 0) {
      local_80 = *(string **)(param_1 + 0x10);
    }
    sVar4 = *(size_t *)(DAT_02721888 + 8);
    pbVar5 = *(byte **)(DAT_02721888 + 0x10);
    uVar26 = (byte)sVar6 & 1;
    if ((*DAT_02721888 & 1) == 0) {
      pbVar5 = DAT_02721888 + 1;
      sVar4 = (ulong)(*DAT_02721888 >> 1);
    }
    if (sVar4 != 0) break;
    uVar16 = 0;
  }
  uVar16 = (ulong)((byte)sVar6 >> 1);
  if (((byte)sVar6 & 1) != 0) {
    uVar16 = *(ulong *)(param_1 + 8);
  }
  if ((long)uVar16 < (long)sVar4) goto LAB_00f6a754;
  bVar7 = *pbVar5;
  psVar21 = local_80 + uVar16;
  psVar19 = local_80;
  while( true ) {
    sVar1 = (uVar16 - sVar4) + 1;
    if (sVar1 == 0) goto LAB_00f6a750;
    psVar19 = memchr(psVar19,(uint)bVar7,sVar1);
    if (psVar19 == (string *)0x0) goto LAB_00f6a750;
    iVar14 = memcmp(psVar19,pbVar5,sVar4);
    if (iVar14 == 0) break;
    psVar19 = psVar19 + 1;
    uVar16 = (long)psVar21 - (long)psVar19;
    if ((long)uVar16 < (long)sVar4) goto LAB_00f6a750;
  }
  if (psVar19 == psVar21) goto LAB_00f6a750;
  uVar16 = (long)psVar19 - (long)local_80;
  goto joined_r0x00f6a748;
}


