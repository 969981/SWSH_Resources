/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f73220; name: FUN_00f73220
 */


/* WARNING: Removing unreachable block (ram,0x00f736ac) */
/* WARNING: Removing unreachable block (ram,0x00f73918) */

void FUN_00f73220(string *param_1)

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
  undefined *puVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  string *psVar20;
  long lVar21;
  string *psVar22;
  ulong uVar23;
  uint uVar25;
  uint uVar24;
  ulong uVar26;
  uint uVar27;
  string *local_80;
  ulong local_78;
  ulong local_70;
  string *psStack_68;
  
  if ((*PTR_DAT_02721c20 & 1) == 0) {
    iVar15 = __cxa_guard_acquire(PTR_DAT_02721c20);
    puVar12 = PTR_DAT_02721c28;
    uVar8 = s__anonymous__01cd7797._0_8_;
    if (iVar15 != 0) {
      *(undefined8 *)PTR_DAT_02721c28 = 0;
      *(undefined8 *)(puVar12 + 8) = 0;
      *(undefined8 *)(puVar12 + 1) = uVar8;
      *puVar12 = 0x16;
      *(undefined8 *)(puVar12 + 0x10) = 0;
      *(undefined8 *)(puVar12 + 0x18) = 0;
      puVar12[0x18] = 0x2a;
      *(undefined4 *)(puVar12 + 9) = 0x7d7375;
      uVar8 = CONCAT53(s__anonymous_namespace__01d00fca._16_5_,
                       s__anonymous_namespace__01d00fca._13_3_);
      *(undefined8 *)(puVar12 + 0x20) = 0;
      *(undefined8 *)(puVar12 + 0x28) = 0;
      puVar12[0x2e] = 0;
      *(undefined8 *)(puVar12 + 0x26) = uVar8;
      uVar8 = s__anonymous_namespace__01d00fca._0_8_;
      *(ulong *)(puVar12 + 0x21) =
           CONCAT35(s__anonymous_namespace__01d00fca._13_3_,s__anonymous_namespace__01d00fca._8_5_);
      *(undefined8 *)(puVar12 + 0x19) = uVar8;
      FUN_001001c0(PTR_LAB_02720bd0,puVar12,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02721c20);
    }
  }
  pcVar16 = operator_new(0x70);
  *(undefined8 *)param_1 = 0x71;
  *(undefined8 *)(param_1 + 8) = 0x69;
  *(char **)(param_1 + 0x10) = pcVar16;
  pcVar16[0x68] = ']';
  uVar11 = s_std__string_sol__detail__ctti_ge_01d34261._8_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d34261._0_8_;
  pcVar16[0x69] = '\0';
  *(undefined8 *)pcVar16 = uVar8;
  *(undefined8 *)(pcVar16 + 8) = uVar11;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d34261._40_8_;
  *(undefined8 *)(pcVar16 + 0x20) = s_std__string_sol__detail__ctti_ge_01d34261._32_8_;
  *(undefined8 *)(pcVar16 + 0x28) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d34261._24_8_;
  *(undefined8 *)(pcVar16 + 0x10) = s_std__string_sol__detail__ctti_ge_01d34261._16_8_;
  *(undefined8 *)(pcVar16 + 0x18) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d34261._72_8_;
  *(undefined8 *)(pcVar16 + 0x40) = s_std__string_sol__detail__ctti_ge_01d34261._64_8_;
  *(undefined8 *)(pcVar16 + 0x48) = uVar8;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d34261._56_8_;
  *(undefined8 *)(pcVar16 + 0x30) = s_std__string_sol__detail__ctti_ge_01d34261._48_8_;
  *(undefined8 *)(pcVar16 + 0x38) = uVar8;
  uVar11 = s_std__string_sol__detail__ctti_ge_01d34261._96_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d34261._80_8_;
  *(undefined8 *)(pcVar16 + 0x58) = s_std__string_sol__detail__ctti_ge_01d34261._88_8_;
  *(undefined8 *)(pcVar16 + 0x60) = uVar11;
  *(undefined8 *)(pcVar16 + 0x50) = uVar8;
  cVar14 = (char)param_1;
  std::string::find(cVar14,0x5b);
  uVar17 = std::string::find(cVar14,0x3d);
  uVar18 = std::string::rfind(cVar14,0x5d);
  sVar6 = *param_1;
  if (uVar18 == 0xffffffffffffffff) {
    if (((byte)sVar6 & 1) != 0) {
      uVar18 = *(ulong *)(param_1 + 8);
      uVar26 = 0;
      if (uVar17 != 0xffffffffffffffff) {
        uVar26 = uVar17;
      }
      uVar17 = uVar18;
      goto LAB_00f73334;
    }
    uVar18 = (ulong)((byte)sVar6 >> 1);
    uVar26 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar26 = uVar17;
    }
  }
  else {
    uVar26 = 0;
    if (uVar17 != 0xffffffffffffffff) {
      uVar26 = uVar17;
    }
    if (((byte)sVar6 & 1) != 0) {
      uVar17 = *(ulong *)(param_1 + 8);
      goto LAB_00f73334;
    }
  }
  uVar17 = (ulong)((byte)sVar6 >> 1);
LAB_00f73334:
  if (uVar26 < uVar17 - 1) {
    uVar26 = uVar26 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar26,uVar18 - uVar26,(allocator *)param_1);
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
  uVar26 = local_78 & 0xff;
  *(ulong *)param_1 = local_78;
  uVar18 = uVar26 >> 1;
  bVar13 = (local_78 & 1) != 0;
  uVar17 = uVar18;
  if (bVar13) {
    uVar17 = local_70;
  }
  uVar27 = (uint)uVar26 & 1;
  *(ulong *)(param_1 + 8) = local_70;
  *(string **)(param_1 + 0x10) = psStack_68;
  if (!bVar13) {
    psStack_68 = param_1 + 1;
  }
  if (0xd < (long)uVar17) {
    psVar2 = psStack_68 + uVar17;
    lVar19 = 1;
    psVar20 = psVar2;
    while (uVar17 != 0xd) {
      uVar17 = uVar17 - 1;
      if (psStack_68[uVar17] == (string)0x6b) {
        lVar21 = 0;
        do {
          if (lVar21 == -0xd) {
            if ((lVar19 != -0xd) &&
               (psVar2 + ((-0xd - lVar19) - (long)psStack_68) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,
                                 (ulong)(psVar2 + ((-0xd - lVar19) - (long)psStack_68) + -2));
              sVar6 = *param_1;
              uVar26 = (ulong)(byte)sVar6;
              local_70 = *(ulong *)(param_1 + 8);
              uVar27 = (byte)sVar6 & 1;
              uVar18 = (ulong)((byte)sVar6 >> 1);
            }
            goto LAB_00f73458;
          }
          lVar9 = lVar21 + -2;
          lVar10 = lVar21 + 0xc;
          lVar21 = lVar21 + -1;
        } while (psVar20[lVar9] == *(string *)("seperator_mark" + lVar10));
      }
      lVar19 = lVar19 + 1;
      psVar20 = psVar20 + -1;
    }
  }
LAB_00f73458:
  bVar13 = uVar27 == 0;
  psVar2 = param_1 + 1;
  uVar23 = local_70;
  uVar17 = uVar18;
  if (!bVar13) {
    uVar17 = local_70;
  }
  while (uVar24 = (uint)uVar26, uVar17 != 0) {
    psVar22 = *(string **)(param_1 + 0x10);
    psVar20 = psVar2;
    if (uVar27 != 0) {
      psVar20 = psVar22;
    }
    iVar15 = isblank((uint)(byte)*psVar20);
    if (iVar15 == 0) {
      uVar27 = uVar24 & 1;
      bVar13 = (uVar26 & 1) == 0;
      uVar18 = (ulong)(uVar24 >> 1);
      if (!bVar13) {
        uVar18 = uVar23;
      }
      goto joined_r0x00f734e4;
    }
    psVar3 = psVar2;
    if (!bVar13) {
      psVar3 = psVar22;
    }
    std::string::erase((ulong)param_1,(long)psVar3 - (long)psVar20);
    sVar6 = *param_1;
    uVar26 = (ulong)(byte)sVar6;
    uVar23 = *(ulong *)(param_1 + 8);
    bVar13 = ((byte)sVar6 & 1) == 0;
    uVar27 = (byte)sVar6 & 1;
    uVar18 = (ulong)((byte)sVar6 >> 1);
    uVar17 = uVar18;
    if (!bVar13) {
      uVar17 = uVar23;
    }
  }
  bVar13 = uVar27 == 0;
  if (!bVar13) {
    uVar18 = uVar23;
  }
joined_r0x00f734e4:
  if (uVar18 != 0) {
    do {
      uVar24 = (uint)uVar26;
      psVar20 = *(string **)(param_1 + 0x10);
      uVar26 = uVar26 >> 1;
      uVar17 = uVar26;
      psVar22 = psVar2;
      if (!bVar13) {
        uVar17 = uVar23;
        psVar22 = psVar20;
      }
      iVar15 = isblank((uint)(byte)psVar22[uVar17 - 1]);
      if (iVar15 == 0) break;
      if (bVar13) {
        psVar20 = param_1 + uVar26;
        *param_1 = (string)(((char)uVar26 + -1) * '\x02');
      }
      else {
        *(ulong *)(param_1 + 8) = uVar23 - 1;
        psVar20 = psVar20 + (uVar23 - 1);
      }
      *psVar20 = (string)0x0;
      sVar6 = *param_1;
      uVar26 = (ulong)(byte)sVar6;
      uVar24 = (uint)(byte)sVar6;
      uVar23 = *(ulong *)(param_1 + 8);
      bVar13 = ((byte)sVar6 & 1) == 0;
      uVar17 = (ulong)((byte)sVar6 >> 1);
      if (!bVar13) {
        uVar17 = uVar23;
      }
    } while (uVar17 != 0);
    uVar27 = uVar24 & 1;
  }
  local_80 = psVar2;
  if (uVar27 != 0) {
    local_80 = *(string **)(param_1 + 0x10);
  }
  sVar4 = *(size_t *)(PTR_DAT_02721c28 + 8);
  pbVar5 = *(byte **)(PTR_DAT_02721c28 + 0x10);
  if ((*PTR_DAT_02721c28 & 1) == 0) {
    pbVar5 = PTR_DAT_02721c28 + 1;
    sVar4 = (ulong)((byte)*PTR_DAT_02721c28 >> 1);
  }
  if (sVar4 == 0) {
    uVar17 = 0;
    goto LAB_00f735ec;
  }
  uVar17 = (ulong)(uVar24 >> 1);
  if (uVar27 != 0) {
    uVar17 = uVar23;
  }
  if ((long)sVar4 <= (long)uVar17) {
    bVar7 = *pbVar5;
    psVar22 = local_80 + uVar17;
    psVar20 = local_80;
    do {
      sVar1 = (uVar17 - sVar4) + 1;
      uVar25 = uVar24;
      if ((sVar1 == 0) || (psVar20 = memchr(psVar20,(uint)bVar7,sVar1), psVar20 == (string *)0x0))
      break;
      iVar15 = memcmp(psVar20,pbVar5,sVar4);
      if (iVar15 == 0) {
        if (psVar20 != psVar22) {
          uVar17 = (long)psVar20 - (long)local_80;
          goto joined_r0x00f736e0;
        }
        break;
      }
      psVar20 = psVar20 + 1;
      uVar17 = (long)psVar22 - (long)psVar20;
    } while ((long)sVar4 <= (long)uVar17);
LAB_00f736e8:
    uVar24 = uVar25;
  }
LAB_00f736ec:
  sVar4 = (ulong)((byte)PTR_DAT_02721c28[0x18] >> 1);
  pbVar5 = PTR_DAT_02721c28 + 0x19;
  if ((PTR_DAT_02721c28[0x18] & 1) != 0) {
    sVar4 = *(size_t *)(PTR_DAT_02721c28 + 0x20);
    pbVar5 = *(byte **)(PTR_DAT_02721c28 + 0x28);
  }
  if (sVar4 != 0) {
    uVar17 = (ulong)(uVar24 >> 1);
    if (uVar27 != 0) {
      uVar17 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar4 <= (long)uVar17) {
      bVar7 = *pbVar5;
      psVar22 = local_80 + uVar17;
      psVar20 = local_80;
      do {
        sVar1 = (uVar17 - sVar4) + 1;
        if (sVar1 == 0) {
          return;
        }
        psVar20 = memchr(psVar20,(uint)bVar7,sVar1);
        if (psVar20 == (string *)0x0) {
          return;
        }
        iVar15 = memcmp(psVar20,pbVar5,sVar4);
        if (iVar15 == 0) {
          if (psVar20 == psVar22) {
            return;
          }
          uVar17 = (long)psVar20 - (long)local_80;
          if (uVar17 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_00f73858;
        }
        psVar20 = psVar20 + 1;
        uVar17 = (long)psVar22 - (long)psVar20;
      } while ((long)sVar4 <= (long)uVar17);
    }
    return;
  }
  uVar17 = 0;
LAB_00f73858:
  do {
    while( true ) {
      std::string::erase((ulong)param_1,uVar17);
      sVar6 = *param_1;
      psVar20 = psVar2;
      if (((byte)sVar6 & 1) != 0) {
        psVar20 = *(string **)(param_1 + 0x10);
      }
      sVar4 = (ulong)((byte)PTR_DAT_02721c28[0x18] >> 1);
      pbVar5 = PTR_DAT_02721c28 + 0x19;
      if ((PTR_DAT_02721c28[0x18] & 1) != 0) {
        sVar4 = *(size_t *)(PTR_DAT_02721c28 + 0x20);
        pbVar5 = *(byte **)(PTR_DAT_02721c28 + 0x28);
      }
      if (sVar4 != 0) break;
      uVar17 = 0;
    }
    uVar17 = (ulong)((byte)sVar6 >> 1);
    if (((byte)sVar6 & 1) != 0) {
      uVar17 = *(ulong *)(param_1 + 8);
    }
    if ((long)uVar17 < (long)sVar4) {
      return;
    }
    bVar7 = *pbVar5;
    psVar3 = psVar20 + uVar17;
    psVar22 = psVar20;
    while( true ) {
      sVar1 = (uVar17 - sVar4) + 1;
      if (sVar1 == 0) {
        return;
      }
      psVar22 = memchr(psVar22,(uint)bVar7,sVar1);
      if (psVar22 == (string *)0x0) {
        return;
      }
      iVar15 = memcmp(psVar22,pbVar5,sVar4);
      if (iVar15 == 0) break;
      psVar22 = psVar22 + 1;
      uVar17 = (long)psVar3 - (long)psVar22;
      if ((long)uVar17 < (long)sVar4) {
        return;
      }
    }
    if (psVar22 == psVar3) {
      return;
    }
    uVar17 = (long)psVar22 - (long)psVar20;
  } while (uVar17 != 0xffffffffffffffff);
  return;
joined_r0x00f736e0:
  if (uVar17 == 0xffffffffffffffff) goto LAB_00f736ec;
LAB_00f735ec:
  while( true ) {
    std::string::erase((ulong)param_1,uVar17);
    sVar6 = *param_1;
    uVar25 = (uint)(byte)sVar6;
    uVar24 = (uint)(byte)sVar6;
    local_80 = psVar2;
    if (((byte)sVar6 & 1) != 0) {
      local_80 = *(string **)(param_1 + 0x10);
    }
    sVar4 = *(size_t *)(PTR_DAT_02721c28 + 8);
    pbVar5 = *(byte **)(PTR_DAT_02721c28 + 0x10);
    uVar27 = (byte)sVar6 & 1;
    if ((*PTR_DAT_02721c28 & 1) == 0) {
      pbVar5 = PTR_DAT_02721c28 + 1;
      sVar4 = (ulong)((byte)*PTR_DAT_02721c28 >> 1);
    }
    if (sVar4 != 0) break;
    uVar17 = 0;
  }
  uVar17 = (ulong)((byte)sVar6 >> 1);
  if (((byte)sVar6 & 1) != 0) {
    uVar17 = *(ulong *)(param_1 + 8);
  }
  if ((long)uVar17 < (long)sVar4) goto LAB_00f736ec;
  bVar7 = *pbVar5;
  psVar22 = local_80 + uVar17;
  psVar20 = local_80;
  while( true ) {
    sVar1 = (uVar17 - sVar4) + 1;
    if (sVar1 == 0) goto LAB_00f736e8;
    psVar20 = memchr(psVar20,(uint)bVar7,sVar1);
    if (psVar20 == (string *)0x0) goto LAB_00f736e8;
    iVar15 = memcmp(psVar20,pbVar5,sVar4);
    if (iVar15 == 0) break;
    psVar20 = psVar20 + 1;
    uVar17 = (long)psVar22 - (long)psVar20;
    if ((long)uVar17 < (long)sVar4) goto LAB_00f736e8;
  }
  if (psVar20 == psVar22) goto LAB_00f736e8;
  uVar17 = (long)psVar20 - (long)local_80;
  goto joined_r0x00f736e0;
}


