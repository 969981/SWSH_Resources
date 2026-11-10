/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f530f0; name: FUN_00f530f0
 */


/* WARNING: Removing unreachable block (ram,0x00f5357c) */
/* WARNING: Removing unreachable block (ram,0x00f537e8) */

void FUN_00f530f0(string *param_1)

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
  undefined *puVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  string *psVar21;
  long lVar22;
  string *psVar23;
  ulong uVar24;
  uint uVar26;
  uint uVar25;
  ulong uVar27;
  uint uVar28;
  string *local_80;
  ulong local_78;
  ulong local_70;
  string *psStack_68;
  
  if ((*PTR_DAT_02720c28 & 1) == 0) {
    iVar16 = __cxa_guard_acquire(PTR_DAT_02720c28);
    puVar13 = PTR_DAT_02720c30;
    uVar8 = s__anonymous__01cd7797._0_8_;
    if (iVar16 != 0) {
      *(undefined8 *)PTR_DAT_02720c30 = 0;
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined8 *)(puVar13 + 1) = uVar8;
      *puVar13 = 0x16;
      *(undefined8 *)(puVar13 + 0x10) = 0;
      *(undefined8 *)(puVar13 + 0x18) = 0;
      puVar13[0x18] = 0x2a;
      *(undefined4 *)(puVar13 + 9) = 0x7d7375;
      uVar8 = CONCAT53(s__anonymous_namespace__01d00fca._16_5_,
                       s__anonymous_namespace__01d00fca._13_3_);
      *(undefined8 *)(puVar13 + 0x20) = 0;
      *(undefined8 *)(puVar13 + 0x28) = 0;
      puVar13[0x2e] = 0;
      *(undefined8 *)(puVar13 + 0x26) = uVar8;
      uVar8 = s__anonymous_namespace__01d00fca._0_8_;
      *(ulong *)(puVar13 + 0x21) =
           CONCAT35(s__anonymous_namespace__01d00fca._13_3_,s__anonymous_namespace__01d00fca._8_5_);
      *(undefined8 *)(puVar13 + 0x19) = uVar8;
      FUN_001001c0(PTR_LAB_02720bd0,puVar13,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02720c28);
    }
  }
  pcVar17 = operator_new(0x80);
  *(undefined8 *)param_1 = 0x81;
  *(undefined8 *)(param_1 + 8) = 0x71;
  *(char **)(param_1 + 0x10) = pcVar17;
  pcVar17[0x70] = ']';
  uVar11 = s_std__string_sol__detail__ctti_ge_01d340ed._8_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d340ed._0_8_;
  pcVar17[0x71] = '\0';
  *(undefined8 *)pcVar17 = uVar8;
  *(undefined8 *)(pcVar17 + 8) = uVar11;
  uVar12 = s_std__string_sol__detail__ctti_ge_01d340ed._40_8_;
  uVar11 = s_std__string_sol__detail__ctti_ge_01d340ed._24_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d340ed._16_8_;
  *(undefined8 *)(pcVar17 + 0x20) = s_std__string_sol__detail__ctti_ge_01d340ed._32_8_;
  *(undefined8 *)(pcVar17 + 0x28) = uVar12;
  *(undefined8 *)(pcVar17 + 0x10) = uVar8;
  *(undefined8 *)(pcVar17 + 0x18) = uVar11;
  uVar12 = s_std__string_sol__detail__ctti_ge_01d340ed._72_8_;
  uVar11 = s_std__string_sol__detail__ctti_ge_01d340ed._56_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d340ed._48_8_;
  *(undefined8 *)(pcVar17 + 0x40) = s_std__string_sol__detail__ctti_ge_01d340ed._64_8_;
  *(undefined8 *)(pcVar17 + 0x48) = uVar12;
  *(undefined8 *)(pcVar17 + 0x30) = uVar8;
  *(undefined8 *)(pcVar17 + 0x38) = uVar11;
  uVar12 = s_std__string_sol__detail__ctti_ge_01d340ed._104_8_;
  uVar11 = s_std__string_sol__detail__ctti_ge_01d340ed._88_8_;
  uVar8 = s_std__string_sol__detail__ctti_ge_01d340ed._80_8_;
  *(undefined8 *)(pcVar17 + 0x60) = s_std__string_sol__detail__ctti_ge_01d340ed._96_8_;
  *(undefined8 *)(pcVar17 + 0x68) = uVar12;
  *(undefined8 *)(pcVar17 + 0x50) = uVar8;
  *(undefined8 *)(pcVar17 + 0x58) = uVar11;
  cVar15 = (char)param_1;
  std::string::find(cVar15,0x5b);
  uVar18 = std::string::find(cVar15,0x3d);
  uVar19 = std::string::rfind(cVar15,0x5d);
  sVar6 = *param_1;
  if (uVar19 == 0xffffffffffffffff) {
    if (((byte)sVar6 & 1) != 0) {
      uVar19 = *(ulong *)(param_1 + 8);
      uVar27 = 0;
      if (uVar18 != 0xffffffffffffffff) {
        uVar27 = uVar18;
      }
      uVar18 = uVar19;
      goto LAB_00f53204;
    }
    uVar19 = (ulong)((byte)sVar6 >> 1);
    uVar27 = 0;
    if (uVar18 != 0xffffffffffffffff) {
      uVar27 = uVar18;
    }
  }
  else {
    uVar27 = 0;
    if (uVar18 != 0xffffffffffffffff) {
      uVar27 = uVar18;
    }
    if (((byte)sVar6 & 1) != 0) {
      uVar18 = *(ulong *)(param_1 + 8);
      goto LAB_00f53204;
    }
  }
  uVar18 = (ulong)((byte)sVar6 >> 1);
LAB_00f53204:
  if (uVar27 < uVar18 - 1) {
    uVar27 = uVar27 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar27,uVar19 - uVar27,(allocator *)param_1);
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
  uVar27 = local_78 & 0xff;
  *(ulong *)param_1 = local_78;
  uVar19 = uVar27 >> 1;
  bVar14 = (local_78 & 1) != 0;
  uVar18 = uVar19;
  if (bVar14) {
    uVar18 = local_70;
  }
  uVar28 = (uint)uVar27 & 1;
  *(ulong *)(param_1 + 8) = local_70;
  *(string **)(param_1 + 0x10) = psStack_68;
  if (!bVar14) {
    psStack_68 = param_1 + 1;
  }
  if (0xd < (long)uVar18) {
    psVar2 = psStack_68 + uVar18;
    lVar20 = 1;
    psVar21 = psVar2;
    while (uVar18 != 0xd) {
      uVar18 = uVar18 - 1;
      if (psStack_68[uVar18] == (string)0x6b) {
        lVar22 = 0;
        do {
          if (lVar22 == -0xd) {
            if ((lVar20 != -0xd) &&
               (psVar2 + ((-0xd - lVar20) - (long)psStack_68) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,
                                 (ulong)(psVar2 + ((-0xd - lVar20) - (long)psStack_68) + -2));
              sVar6 = *param_1;
              uVar27 = (ulong)(byte)sVar6;
              local_70 = *(ulong *)(param_1 + 8);
              uVar28 = (byte)sVar6 & 1;
              uVar19 = (ulong)((byte)sVar6 >> 1);
            }
            goto LAB_00f53328;
          }
          lVar9 = lVar22 + -2;
          lVar10 = lVar22 + 0xc;
          lVar22 = lVar22 + -1;
        } while (psVar21[lVar9] == *(string *)("seperator_mark" + lVar10));
      }
      lVar20 = lVar20 + 1;
      psVar21 = psVar21 + -1;
    }
  }
LAB_00f53328:
  bVar14 = uVar28 == 0;
  psVar2 = param_1 + 1;
  uVar24 = local_70;
  uVar18 = uVar19;
  if (!bVar14) {
    uVar18 = local_70;
  }
  while (uVar25 = (uint)uVar27, uVar18 != 0) {
    psVar23 = *(string **)(param_1 + 0x10);
    psVar21 = psVar2;
    if (uVar28 != 0) {
      psVar21 = psVar23;
    }
    iVar16 = isblank((uint)(byte)*psVar21);
    if (iVar16 == 0) {
      uVar28 = uVar25 & 1;
      bVar14 = (uVar27 & 1) == 0;
      uVar19 = (ulong)(uVar25 >> 1);
      if (!bVar14) {
        uVar19 = uVar24;
      }
      goto joined_r0x00f533b4;
    }
    psVar3 = psVar2;
    if (!bVar14) {
      psVar3 = psVar23;
    }
    std::string::erase((ulong)param_1,(long)psVar3 - (long)psVar21);
    sVar6 = *param_1;
    uVar27 = (ulong)(byte)sVar6;
    uVar24 = *(ulong *)(param_1 + 8);
    bVar14 = ((byte)sVar6 & 1) == 0;
    uVar28 = (byte)sVar6 & 1;
    uVar19 = (ulong)((byte)sVar6 >> 1);
    uVar18 = uVar19;
    if (!bVar14) {
      uVar18 = uVar24;
    }
  }
  bVar14 = uVar28 == 0;
  if (!bVar14) {
    uVar19 = uVar24;
  }
joined_r0x00f533b4:
  if (uVar19 != 0) {
    do {
      uVar25 = (uint)uVar27;
      psVar21 = *(string **)(param_1 + 0x10);
      uVar27 = uVar27 >> 1;
      uVar18 = uVar27;
      psVar23 = psVar2;
      if (!bVar14) {
        uVar18 = uVar24;
        psVar23 = psVar21;
      }
      iVar16 = isblank((uint)(byte)psVar23[uVar18 - 1]);
      if (iVar16 == 0) break;
      if (bVar14) {
        psVar21 = param_1 + uVar27;
        *param_1 = (string)(((char)uVar27 + -1) * '\x02');
      }
      else {
        *(ulong *)(param_1 + 8) = uVar24 - 1;
        psVar21 = psVar21 + (uVar24 - 1);
      }
      *psVar21 = (string)0x0;
      sVar6 = *param_1;
      uVar27 = (ulong)(byte)sVar6;
      uVar25 = (uint)(byte)sVar6;
      uVar24 = *(ulong *)(param_1 + 8);
      bVar14 = ((byte)sVar6 & 1) == 0;
      uVar18 = (ulong)((byte)sVar6 >> 1);
      if (!bVar14) {
        uVar18 = uVar24;
      }
    } while (uVar18 != 0);
    uVar28 = uVar25 & 1;
  }
  local_80 = psVar2;
  if (uVar28 != 0) {
    local_80 = *(string **)(param_1 + 0x10);
  }
  sVar4 = *(size_t *)(PTR_DAT_02720c30 + 8);
  pbVar5 = *(byte **)(PTR_DAT_02720c30 + 0x10);
  if ((*PTR_DAT_02720c30 & 1) == 0) {
    pbVar5 = PTR_DAT_02720c30 + 1;
    sVar4 = (ulong)((byte)*PTR_DAT_02720c30 >> 1);
  }
  if (sVar4 == 0) {
    uVar18 = 0;
    goto LAB_00f534bc;
  }
  uVar18 = (ulong)(uVar25 >> 1);
  if (uVar28 != 0) {
    uVar18 = uVar24;
  }
  if ((long)sVar4 <= (long)uVar18) {
    bVar7 = *pbVar5;
    psVar23 = local_80 + uVar18;
    psVar21 = local_80;
    do {
      sVar1 = (uVar18 - sVar4) + 1;
      uVar26 = uVar25;
      if ((sVar1 == 0) || (psVar21 = memchr(psVar21,(uint)bVar7,sVar1), psVar21 == (string *)0x0))
      break;
      iVar16 = memcmp(psVar21,pbVar5,sVar4);
      if (iVar16 == 0) {
        if (psVar21 != psVar23) {
          uVar18 = (long)psVar21 - (long)local_80;
          goto joined_r0x00f535b0;
        }
        break;
      }
      psVar21 = psVar21 + 1;
      uVar18 = (long)psVar23 - (long)psVar21;
    } while ((long)sVar4 <= (long)uVar18);
LAB_00f535b8:
    uVar25 = uVar26;
  }
LAB_00f535bc:
  sVar4 = (ulong)((byte)PTR_DAT_02720c30[0x18] >> 1);
  pbVar5 = PTR_DAT_02720c30 + 0x19;
  if ((PTR_DAT_02720c30[0x18] & 1) != 0) {
    sVar4 = *(size_t *)(PTR_DAT_02720c30 + 0x20);
    pbVar5 = *(byte **)(PTR_DAT_02720c30 + 0x28);
  }
  if (sVar4 != 0) {
    uVar18 = (ulong)(uVar25 >> 1);
    if (uVar28 != 0) {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar4 <= (long)uVar18) {
      bVar7 = *pbVar5;
      psVar23 = local_80 + uVar18;
      psVar21 = local_80;
      do {
        sVar1 = (uVar18 - sVar4) + 1;
        if (sVar1 == 0) {
          return;
        }
        psVar21 = memchr(psVar21,(uint)bVar7,sVar1);
        if (psVar21 == (string *)0x0) {
          return;
        }
        iVar16 = memcmp(psVar21,pbVar5,sVar4);
        if (iVar16 == 0) {
          if (psVar21 == psVar23) {
            return;
          }
          uVar18 = (long)psVar21 - (long)local_80;
          if (uVar18 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_00f53728;
        }
        psVar21 = psVar21 + 1;
        uVar18 = (long)psVar23 - (long)psVar21;
      } while ((long)sVar4 <= (long)uVar18);
    }
    return;
  }
  uVar18 = 0;
LAB_00f53728:
  do {
    while( true ) {
      std::string::erase((ulong)param_1,uVar18);
      sVar6 = *param_1;
      psVar21 = psVar2;
      if (((byte)sVar6 & 1) != 0) {
        psVar21 = *(string **)(param_1 + 0x10);
      }
      sVar4 = (ulong)((byte)PTR_DAT_02720c30[0x18] >> 1);
      pbVar5 = PTR_DAT_02720c30 + 0x19;
      if ((PTR_DAT_02720c30[0x18] & 1) != 0) {
        sVar4 = *(size_t *)(PTR_DAT_02720c30 + 0x20);
        pbVar5 = *(byte **)(PTR_DAT_02720c30 + 0x28);
      }
      if (sVar4 != 0) break;
      uVar18 = 0;
    }
    uVar18 = (ulong)((byte)sVar6 >> 1);
    if (((byte)sVar6 & 1) != 0) {
      uVar18 = *(ulong *)(param_1 + 8);
    }
    if ((long)uVar18 < (long)sVar4) {
      return;
    }
    bVar7 = *pbVar5;
    psVar3 = psVar21 + uVar18;
    psVar23 = psVar21;
    while( true ) {
      sVar1 = (uVar18 - sVar4) + 1;
      if (sVar1 == 0) {
        return;
      }
      psVar23 = memchr(psVar23,(uint)bVar7,sVar1);
      if (psVar23 == (string *)0x0) {
        return;
      }
      iVar16 = memcmp(psVar23,pbVar5,sVar4);
      if (iVar16 == 0) break;
      psVar23 = psVar23 + 1;
      uVar18 = (long)psVar3 - (long)psVar23;
      if ((long)uVar18 < (long)sVar4) {
        return;
      }
    }
    if (psVar23 == psVar3) {
      return;
    }
    uVar18 = (long)psVar23 - (long)psVar21;
  } while (uVar18 != 0xffffffffffffffff);
  return;
joined_r0x00f535b0:
  if (uVar18 == 0xffffffffffffffff) goto LAB_00f535bc;
LAB_00f534bc:
  while( true ) {
    std::string::erase((ulong)param_1,uVar18);
    sVar6 = *param_1;
    uVar26 = (uint)(byte)sVar6;
    uVar25 = (uint)(byte)sVar6;
    local_80 = psVar2;
    if (((byte)sVar6 & 1) != 0) {
      local_80 = *(string **)(param_1 + 0x10);
    }
    sVar4 = *(size_t *)(PTR_DAT_02720c30 + 8);
    pbVar5 = *(byte **)(PTR_DAT_02720c30 + 0x10);
    uVar28 = (byte)sVar6 & 1;
    if ((*PTR_DAT_02720c30 & 1) == 0) {
      pbVar5 = PTR_DAT_02720c30 + 1;
      sVar4 = (ulong)((byte)*PTR_DAT_02720c30 >> 1);
    }
    if (sVar4 != 0) break;
    uVar18 = 0;
  }
  uVar18 = (ulong)((byte)sVar6 >> 1);
  if (((byte)sVar6 & 1) != 0) {
    uVar18 = *(ulong *)(param_1 + 8);
  }
  if ((long)uVar18 < (long)sVar4) goto LAB_00f535bc;
  bVar7 = *pbVar5;
  psVar23 = local_80 + uVar18;
  psVar21 = local_80;
  while( true ) {
    sVar1 = (uVar18 - sVar4) + 1;
    if (sVar1 == 0) goto LAB_00f535b8;
    psVar21 = memchr(psVar21,(uint)bVar7,sVar1);
    if (psVar21 == (string *)0x0) goto LAB_00f535b8;
    iVar16 = memcmp(psVar21,pbVar5,sVar4);
    if (iVar16 == 0) break;
    psVar21 = psVar21 + 1;
    uVar18 = (long)psVar23 - (long)psVar21;
    if ((long)uVar18 < (long)sVar4) goto LAB_00f535b8;
  }
  if (psVar21 == psVar23) goto LAB_00f535b8;
  uVar18 = (long)psVar21 - (long)local_80;
  goto joined_r0x00f535b0;
}


