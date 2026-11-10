/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f52230; name: FUN_00f52230
 */


/* WARNING: Removing unreachable block (ram,0x00f526c4) */
/* WARNING: Removing unreachable block (ram,0x00f52930) */

void FUN_00f52230(string *param_1)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  char *pcVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  string *psVar22;
  long lVar23;
  string *psVar24;
  ulong uVar25;
  uint uVar27;
  uint uVar26;
  ulong uVar28;
  uint uVar29;
  string *local_80;
  ulong local_78;
  ulong local_70;
  string *psStack_68;
  
  if ((*PTR_DAT_02720bc0 & 1) == 0) {
    iVar17 = __cxa_guard_acquire(PTR_DAT_02720bc0);
    puVar14 = PTR_DAT_02720bc8;
    uVar8 = s__anonymous__01cd7797._0_8_;
    if (iVar17 != 0) {
      *(undefined8 *)PTR_DAT_02720bc8 = 0;
      *(undefined8 *)(puVar14 + 8) = 0;
      *(undefined8 *)(puVar14 + 1) = uVar8;
      *puVar14 = 0x16;
      *(undefined8 *)(puVar14 + 0x10) = 0;
      *(undefined8 *)(puVar14 + 0x18) = 0;
      puVar14[0x18] = 0x2a;
      *(undefined4 *)(puVar14 + 9) = 0x7d7375;
      uVar8 = CONCAT53(s__anonymous_namespace__01d00fca._16_5_,
                       s__anonymous_namespace__01d00fca._13_3_);
      *(undefined8 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + 0x28) = 0;
      puVar14[0x2e] = 0;
      *(undefined8 *)(puVar14 + 0x26) = uVar8;
      uVar8 = s__anonymous_namespace__01d00fca._0_8_;
      *(ulong *)(puVar14 + 0x21) =
           CONCAT35(s__anonymous_namespace__01d00fca._13_3_,s__anonymous_namespace__01d00fca._8_5_);
      *(undefined8 *)(puVar14 + 0x19) = uVar8;
      FUN_001001c0(PTR_LAB_02720bd0,puVar14,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02720bc0);
    }
  }
  pcVar18 = operator_new(0x80);
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x73;
  *(char **)(param_1 + 0x10) = pcVar18;
  pcVar18[0x70] = 'n';
  uVar13 = s_std__string_sol__detail__ctti_ge_01cec357._24_8_;
  uVar12 = s_std__string_sol__detail__ctti_ge_01cec357._16_8_;
  uVar11 = s_std__string_sol__detail__ctti_ge_01cec357._8_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01cec357._0_8_;
  pcVar18[0x71] = 't';
  pcVar18[0x72] = ']';
  *(undefined8 *)pcVar18 = uVar8;
  *(undefined8 *)(pcVar18 + 8) = uVar11;
  pcVar18[0x73] = '\0';
  uVar11 = s_std__string_sol__detail__ctti_ge_01cec357._40_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01cec357._32_8_;
  *(undefined8 *)(pcVar18 + 0x10) = uVar12;
  *(undefined8 *)(pcVar18 + 0x18) = uVar13;
  uVar13 = s_std__string_sol__detail__ctti_ge_01cec357._72_8_;
  uVar12 = s_std__string_sol__detail__ctti_ge_01cec357._64_8_;
  *(undefined8 *)(pcVar18 + 0x20) = uVar8;
  *(undefined8 *)(pcVar18 + 0x28) = uVar11;
  uVar11 = s_std__string_sol__detail__ctti_ge_01cec357._56_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01cec357._48_8_;
  *(undefined8 *)(pcVar18 + 0x40) = uVar12;
  *(undefined8 *)(pcVar18 + 0x48) = uVar13;
  *(undefined8 *)(pcVar18 + 0x30) = uVar8;
  *(undefined8 *)(pcVar18 + 0x38) = uVar11;
  uVar12 = s_std__string_sol__detail__ctti_ge_01cec357._104_8_;
  uVar11 = s_std__string_sol__detail__ctti_ge_01cec357._88_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01cec357._80_8_;
  *(undefined8 *)(pcVar18 + 0x60) = s_std__string_sol__detail__ctti_ge_01cec357._96_8_;
  *(undefined8 *)(pcVar18 + 0x68) = uVar12;
  *(undefined8 *)(pcVar18 + 0x50) = uVar8;
  *(undefined8 *)(pcVar18 + 0x58) = uVar11;
  cVar16 = (char)param_1;
  std::string::find(cVar16,0x5b);
  uVar19 = std::string::find(cVar16,0x3d);
  uVar20 = std::string::rfind(cVar16,0x5d);
  sVar6 = *param_1;
  if (uVar20 == 0xffffffffffffffff) {
    if (((byte)sVar6 & 1) != 0) {
      uVar20 = *(ulong *)(param_1 + 8);
      uVar28 = 0;
      if (uVar19 != 0xffffffffffffffff) {
        uVar28 = uVar19;
      }
      uVar19 = uVar20;
      goto LAB_00f5234c;
    }
    uVar20 = (ulong)((byte)sVar6 >> 1);
    uVar28 = 0;
    if (uVar19 != 0xffffffffffffffff) {
      uVar28 = uVar19;
    }
  }
  else {
    uVar28 = 0;
    if (uVar19 != 0xffffffffffffffff) {
      uVar28 = uVar19;
    }
    if (((byte)sVar6 & 1) != 0) {
      uVar19 = *(ulong *)(param_1 + 8);
      goto LAB_00f5234c;
    }
  }
  uVar19 = (ulong)((byte)sVar6 >> 1);
LAB_00f5234c:
  if (uVar28 < uVar19 - 1) {
    uVar28 = uVar28 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar28,uVar20 - uVar28,(allocator *)param_1);
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
  uVar28 = local_78 & 0xff;
  *(ulong *)param_1 = local_78;
  uVar20 = uVar28 >> 1;
  bVar15 = (local_78 & 1) != 0;
  uVar19 = uVar20;
  if (bVar15) {
    uVar19 = local_70;
  }
  uVar29 = (uint)uVar28 & 1;
  *(ulong *)(param_1 + 8) = local_70;
  *(string **)(param_1 + 0x10) = psStack_68;
  if (!bVar15) {
    psStack_68 = param_1 + 1;
  }
  if (0xd < (long)uVar19) {
    psVar2 = psStack_68 + uVar19;
    lVar21 = 1;
    psVar22 = psVar2;
    while (uVar19 != 0xd) {
      uVar19 = uVar19 - 1;
      if (psStack_68[uVar19] == (string)0x6b) {
        lVar23 = 0;
        do {
          if (lVar23 == -0xd) {
            if ((lVar21 != -0xd) &&
               (psVar2 + ((-0xd - lVar21) - (long)psStack_68) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,
                                 (ulong)(psVar2 + ((-0xd - lVar21) - (long)psStack_68) + -2));
              sVar6 = *param_1;
              uVar28 = (ulong)(byte)sVar6;
              local_70 = *(ulong *)(param_1 + 8);
              uVar29 = (byte)sVar6 & 1;
              uVar20 = (ulong)((byte)sVar6 >> 1);
            }
            goto LAB_00f52470;
          }
          lVar9 = lVar23 + -2;
          lVar10 = lVar23 + 0xc;
          lVar23 = lVar23 + -1;
        } while (psVar22[lVar9] == *(string *)("seperator_mark" + lVar10));
      }
      lVar21 = lVar21 + 1;
      psVar22 = psVar22 + -1;
    }
  }
LAB_00f52470:
  bVar15 = uVar29 == 0;
  psVar2 = param_1 + 1;
  uVar25 = local_70;
  uVar19 = uVar20;
  if (!bVar15) {
    uVar19 = local_70;
  }
  while (uVar26 = (uint)uVar28, uVar19 != 0) {
    psVar24 = *(string **)(param_1 + 0x10);
    psVar22 = psVar2;
    if (uVar29 != 0) {
      psVar22 = psVar24;
    }
    iVar17 = isblank((uint)(byte)*psVar22);
    if (iVar17 == 0) {
      uVar29 = uVar26 & 1;
      bVar15 = (uVar28 & 1) == 0;
      uVar20 = (ulong)(uVar26 >> 1);
      if (!bVar15) {
        uVar20 = uVar25;
      }
      goto joined_r0x00f524fc;
    }
    psVar3 = psVar2;
    if (!bVar15) {
      psVar3 = psVar24;
    }
    std::string::erase((ulong)param_1,(long)psVar3 - (long)psVar22);
    sVar6 = *param_1;
    uVar28 = (ulong)(byte)sVar6;
    uVar25 = *(ulong *)(param_1 + 8);
    bVar15 = ((byte)sVar6 & 1) == 0;
    uVar29 = (byte)sVar6 & 1;
    uVar20 = (ulong)((byte)sVar6 >> 1);
    uVar19 = uVar20;
    if (!bVar15) {
      uVar19 = uVar25;
    }
  }
  bVar15 = uVar29 == 0;
  if (!bVar15) {
    uVar20 = uVar25;
  }
joined_r0x00f524fc:
  if (uVar20 != 0) {
    do {
      uVar26 = (uint)uVar28;
      psVar22 = *(string **)(param_1 + 0x10);
      uVar28 = uVar28 >> 1;
      uVar19 = uVar28;
      psVar24 = psVar2;
      if (!bVar15) {
        uVar19 = uVar25;
        psVar24 = psVar22;
      }
      iVar17 = isblank((uint)(byte)psVar24[uVar19 - 1]);
      if (iVar17 == 0) break;
      if (bVar15) {
        psVar22 = param_1 + uVar28;
        *param_1 = (string)(((char)uVar28 + -1) * '\x02');
      }
      else {
        *(ulong *)(param_1 + 8) = uVar25 - 1;
        psVar22 = psVar22 + (uVar25 - 1);
      }
      *psVar22 = (string)0x0;
      sVar6 = *param_1;
      uVar28 = (ulong)(byte)sVar6;
      uVar26 = (uint)(byte)sVar6;
      uVar25 = *(ulong *)(param_1 + 8);
      bVar15 = ((byte)sVar6 & 1) == 0;
      uVar19 = (ulong)((byte)sVar6 >> 1);
      if (!bVar15) {
        uVar19 = uVar25;
      }
    } while (uVar19 != 0);
    uVar29 = uVar26 & 1;
  }
  local_80 = psVar2;
  if (uVar29 != 0) {
    local_80 = *(string **)(param_1 + 0x10);
  }
  sVar4 = *(size_t *)(PTR_DAT_02720bc8 + 8);
  pbVar5 = *(byte **)(PTR_DAT_02720bc8 + 0x10);
  if ((*PTR_DAT_02720bc8 & 1) == 0) {
    pbVar5 = PTR_DAT_02720bc8 + 1;
    sVar4 = (ulong)((byte)*PTR_DAT_02720bc8 >> 1);
  }
  if (sVar4 == 0) {
    uVar19 = 0;
    goto LAB_00f52604;
  }
  uVar19 = (ulong)(uVar26 >> 1);
  if (uVar29 != 0) {
    uVar19 = uVar25;
  }
  if ((long)sVar4 <= (long)uVar19) {
    bVar7 = *pbVar5;
    psVar24 = local_80 + uVar19;
    psVar22 = local_80;
    do {
      sVar1 = (uVar19 - sVar4) + 1;
      uVar27 = uVar26;
      if ((sVar1 == 0) || (psVar22 = memchr(psVar22,(uint)bVar7,sVar1), psVar22 == (string *)0x0))
      break;
      iVar17 = memcmp(psVar22,pbVar5,sVar4);
      if (iVar17 == 0) {
        if (psVar22 != psVar24) {
          uVar19 = (long)psVar22 - (long)local_80;
          goto joined_r0x00f526f8;
        }
        break;
      }
      psVar22 = psVar22 + 1;
      uVar19 = (long)psVar24 - (long)psVar22;
    } while ((long)sVar4 <= (long)uVar19);
LAB_00f52700:
    uVar26 = uVar27;
  }
LAB_00f52704:
  sVar4 = (ulong)((byte)PTR_DAT_02720bc8[0x18] >> 1);
  pbVar5 = PTR_DAT_02720bc8 + 0x19;
  if ((PTR_DAT_02720bc8[0x18] & 1) != 0) {
    sVar4 = *(size_t *)(PTR_DAT_02720bc8 + 0x20);
    pbVar5 = *(byte **)(PTR_DAT_02720bc8 + 0x28);
  }
  if (sVar4 != 0) {
    uVar19 = (ulong)(uVar26 >> 1);
    if (uVar29 != 0) {
      uVar19 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar4 <= (long)uVar19) {
      bVar7 = *pbVar5;
      psVar24 = local_80 + uVar19;
      psVar22 = local_80;
      do {
        sVar1 = (uVar19 - sVar4) + 1;
        if (sVar1 == 0) {
          return;
        }
        psVar22 = memchr(psVar22,(uint)bVar7,sVar1);
        if (psVar22 == (string *)0x0) {
          return;
        }
        iVar17 = memcmp(psVar22,pbVar5,sVar4);
        if (iVar17 == 0) {
          if (psVar22 == psVar24) {
            return;
          }
          uVar19 = (long)psVar22 - (long)local_80;
          if (uVar19 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_00f52870;
        }
        psVar22 = psVar22 + 1;
        uVar19 = (long)psVar24 - (long)psVar22;
      } while ((long)sVar4 <= (long)uVar19);
    }
    return;
  }
  uVar19 = 0;
LAB_00f52870:
  do {
    while( true ) {
      std::string::erase((ulong)param_1,uVar19);
      sVar6 = *param_1;
      psVar22 = psVar2;
      if (((byte)sVar6 & 1) != 0) {
        psVar22 = *(string **)(param_1 + 0x10);
      }
      sVar4 = (ulong)((byte)PTR_DAT_02720bc8[0x18] >> 1);
      pbVar5 = PTR_DAT_02720bc8 + 0x19;
      if ((PTR_DAT_02720bc8[0x18] & 1) != 0) {
        sVar4 = *(size_t *)(PTR_DAT_02720bc8 + 0x20);
        pbVar5 = *(byte **)(PTR_DAT_02720bc8 + 0x28);
      }
      if (sVar4 != 0) break;
      uVar19 = 0;
    }
    uVar19 = (ulong)((byte)sVar6 >> 1);
    if (((byte)sVar6 & 1) != 0) {
      uVar19 = *(ulong *)(param_1 + 8);
    }
    if ((long)uVar19 < (long)sVar4) {
      return;
    }
    bVar7 = *pbVar5;
    psVar3 = psVar22 + uVar19;
    psVar24 = psVar22;
    while( true ) {
      sVar1 = (uVar19 - sVar4) + 1;
      if (sVar1 == 0) {
        return;
      }
      psVar24 = memchr(psVar24,(uint)bVar7,sVar1);
      if (psVar24 == (string *)0x0) {
        return;
      }
      iVar17 = memcmp(psVar24,pbVar5,sVar4);
      if (iVar17 == 0) break;
      psVar24 = psVar24 + 1;
      uVar19 = (long)psVar3 - (long)psVar24;
      if ((long)uVar19 < (long)sVar4) {
        return;
      }
    }
    if (psVar24 == psVar3) {
      return;
    }
    uVar19 = (long)psVar24 - (long)psVar22;
  } while (uVar19 != 0xffffffffffffffff);
  return;
joined_r0x00f526f8:
  if (uVar19 == 0xffffffffffffffff) goto LAB_00f52704;
LAB_00f52604:
  while( true ) {
    std::string::erase((ulong)param_1,uVar19);
    sVar6 = *param_1;
    uVar27 = (uint)(byte)sVar6;
    uVar26 = (uint)(byte)sVar6;
    local_80 = psVar2;
    if (((byte)sVar6 & 1) != 0) {
      local_80 = *(string **)(param_1 + 0x10);
    }
    sVar4 = *(size_t *)(PTR_DAT_02720bc8 + 8);
    pbVar5 = *(byte **)(PTR_DAT_02720bc8 + 0x10);
    uVar29 = (byte)sVar6 & 1;
    if ((*PTR_DAT_02720bc8 & 1) == 0) {
      pbVar5 = PTR_DAT_02720bc8 + 1;
      sVar4 = (ulong)((byte)*PTR_DAT_02720bc8 >> 1);
    }
    if (sVar4 != 0) break;
    uVar19 = 0;
  }
  uVar19 = (ulong)((byte)sVar6 >> 1);
  if (((byte)sVar6 & 1) != 0) {
    uVar19 = *(ulong *)(param_1 + 8);
  }
  if ((long)uVar19 < (long)sVar4) goto LAB_00f52704;
  bVar7 = *pbVar5;
  psVar24 = local_80 + uVar19;
  psVar22 = local_80;
  while( true ) {
    sVar1 = (uVar19 - sVar4) + 1;
    if (sVar1 == 0) goto LAB_00f52700;
    psVar22 = memchr(psVar22,(uint)bVar7,sVar1);
    if (psVar22 == (string *)0x0) goto LAB_00f52700;
    iVar17 = memcmp(psVar22,pbVar5,sVar4);
    if (iVar17 == 0) break;
    psVar22 = psVar22 + 1;
    uVar19 = (long)psVar24 - (long)psVar22;
    if ((long)uVar19 < (long)sVar4) goto LAB_00f52700;
  }
  if (psVar22 == psVar24) goto LAB_00f52700;
  uVar19 = (long)psVar22 - (long)local_80;
  goto joined_r0x00f526f8;
}


