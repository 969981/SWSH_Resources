/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f9ced0; name: FUN_00f9ced0
 */


/* WARNING: Removing unreachable block (ram,0x00f9d328) */
/* WARNING: Removing unreachable block (ram,0x00f9d594) */

void FUN_00f9ced0(string *param_1)

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
  undefined *puVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  void *__dest;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  string *psVar18;
  long lVar19;
  string *psVar20;
  ulong uVar21;
  uint uVar23;
  uint uVar22;
  ulong uVar24;
  uint uVar25;
  string *local_80;
  ulong local_78;
  ulong local_70;
  string *psStack_68;
  
  if ((*PTR_DAT_02722d20 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(PTR_DAT_02722d20);
    puVar11 = PTR_DAT_02722d28;
    uVar8 = s__anonymous__01cd7797._0_8_;
    if (iVar14 != 0) {
      *(undefined8 *)PTR_DAT_02722d28 = 0;
      *(undefined8 *)(puVar11 + 8) = 0;
      *(undefined8 *)(puVar11 + 1) = uVar8;
      *puVar11 = 0x16;
      *(undefined8 *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      puVar11[0x18] = 0x2a;
      *(undefined4 *)(puVar11 + 9) = 0x7d7375;
      uVar8 = CONCAT53(s__anonymous_namespace__01d00fca._16_5_,
                       s__anonymous_namespace__01d00fca._13_3_);
      *(undefined8 *)(puVar11 + 0x20) = 0;
      *(undefined8 *)(puVar11 + 0x28) = 0;
      puVar11[0x2e] = 0;
      *(undefined8 *)(puVar11 + 0x26) = uVar8;
      uVar8 = s__anonymous_namespace__01d00fca._0_8_;
      *(ulong *)(puVar11 + 0x21) =
           CONCAT35(s__anonymous_namespace__01d00fca._13_3_,s__anonymous_namespace__01d00fca._8_5_);
      *(undefined8 *)(puVar11 + 0x19) = uVar8;
      FUN_001001c0(PTR_LAB_02720bd0,puVar11,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02722d20);
    }
  }
  __dest = operator_new(0x29a0);
  *(undefined8 *)param_1 = 0x29a1;
  *(undefined8 *)(param_1 + 8) = 0x2998;
  *(void **)(param_1 + 0x10) = __dest;
  memcpy(__dest,
         "std::string sol::detail::ctti_get_type_name() [T = sol::usertype_metatable<field::content::HaxeSymbolPokemonObject, std::__1::integer_sequence<unsigned long, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117>, char const (&)[12], void (field::content::HaxeSymbolPokemonObject::*)(field::content::HaxeVector3), char const (&)[12], field::content::HaxeVector3 (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[12], void (field::content::HaxeSymbolPokemonObject::*)(field::content::HaxeVector3), char const (&)[12], field::content::HaxeVector3 (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[9], void (field::content::HaxeSymbolPokemonObject::*)(field::content::HaxeVector3) const, char const (&)[9], field::content::HaxeVector3 (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[11], void (field::content::HaxeSymbolPokemonObject::*)(bool), char const (&)[10], bool (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[14], const char *(field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[11], bool (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[14], void (field::content::HaxeSymbolPokemonObject::*)(), char const (&)[10], int (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[10], int (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[14], const char *(field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[17], int (field::content::HaxeSymbolPokemonObject::*)() const, char const (&)[11], bool (field::content::HaxeSymbolPokemonObject::*)() const, char c..." /* TRUNCATED STRING LITERAL */
         ,0x2998);
  *(undefined1 *)((long)__dest + 0x2998) = 0;
  cVar13 = (char)param_1;
  std::string::find(cVar13,0x5b);
  uVar15 = std::string::find(cVar13,0x3d);
  uVar16 = std::string::rfind(cVar13,0x5d);
  sVar6 = *param_1;
  if (uVar16 == 0xffffffffffffffff) {
    if (((byte)sVar6 & 1) != 0) {
      uVar16 = *(ulong *)(param_1 + 8);
      uVar24 = 0;
      if (uVar15 != 0xffffffffffffffff) {
        uVar24 = uVar15;
      }
      uVar15 = uVar16;
      goto LAB_00f9cfb0;
    }
    uVar16 = (ulong)((byte)sVar6 >> 1);
    uVar24 = 0;
    if (uVar15 != 0xffffffffffffffff) {
      uVar24 = uVar15;
    }
  }
  else {
    uVar24 = 0;
    if (uVar15 != 0xffffffffffffffff) {
      uVar24 = uVar15;
    }
    if (((byte)sVar6 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 8);
      goto LAB_00f9cfb0;
    }
  }
  uVar15 = (ulong)((byte)sVar6 >> 1);
LAB_00f9cfb0:
  if (uVar24 < uVar15 - 1) {
    uVar24 = uVar24 + 1;
  }
  std::string::string((string *)&local_78,param_1,uVar24,uVar16 - uVar24,(allocator *)param_1);
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
  uVar24 = local_78 & 0xff;
  *(ulong *)param_1 = local_78;
  uVar16 = uVar24 >> 1;
  bVar12 = (local_78 & 1) != 0;
  uVar15 = uVar16;
  if (bVar12) {
    uVar15 = local_70;
  }
  uVar25 = (uint)uVar24 & 1;
  *(ulong *)(param_1 + 8) = local_70;
  *(string **)(param_1 + 0x10) = psStack_68;
  if (!bVar12) {
    psStack_68 = param_1 + 1;
  }
  if (0xd < (long)uVar15) {
    psVar2 = psStack_68 + uVar15;
    lVar17 = 1;
    psVar18 = psVar2;
    while (uVar15 != 0xd) {
      uVar15 = uVar15 - 1;
      if (psStack_68[uVar15] == (string)0x6b) {
        lVar19 = 0;
        do {
          if (lVar19 == -0xd) {
            if ((lVar17 != -0xd) &&
               (psVar2 + ((-0xd - lVar17) - (long)psStack_68) != (string *)0xffffffffffffffff)) {
              std::string::erase((ulong)param_1,
                                 (ulong)(psVar2 + ((-0xd - lVar17) - (long)psStack_68) + -2));
              sVar6 = *param_1;
              uVar24 = (ulong)(byte)sVar6;
              local_70 = *(ulong *)(param_1 + 8);
              uVar25 = (byte)sVar6 & 1;
              uVar16 = (ulong)((byte)sVar6 >> 1);
            }
            goto LAB_00f9d0d4;
          }
          lVar9 = lVar19 + -2;
          lVar10 = lVar19 + 0xc;
          lVar19 = lVar19 + -1;
        } while (psVar18[lVar9] == *(string *)("seperator_mark" + lVar10));
      }
      lVar17 = lVar17 + 1;
      psVar18 = psVar18 + -1;
    }
  }
LAB_00f9d0d4:
  bVar12 = uVar25 == 0;
  psVar2 = param_1 + 1;
  uVar21 = local_70;
  uVar15 = uVar16;
  if (!bVar12) {
    uVar15 = local_70;
  }
  while (uVar22 = (uint)uVar24, uVar15 != 0) {
    psVar20 = *(string **)(param_1 + 0x10);
    psVar18 = psVar2;
    if (uVar25 != 0) {
      psVar18 = psVar20;
    }
    iVar14 = isblank((uint)(byte)*psVar18);
    if (iVar14 == 0) {
      uVar25 = uVar22 & 1;
      bVar12 = (uVar24 & 1) == 0;
      uVar16 = (ulong)(uVar22 >> 1);
      if (!bVar12) {
        uVar16 = uVar21;
      }
      goto joined_r0x00f9d160;
    }
    psVar3 = psVar2;
    if (!bVar12) {
      psVar3 = psVar20;
    }
    std::string::erase((ulong)param_1,(long)psVar3 - (long)psVar18);
    sVar6 = *param_1;
    uVar24 = (ulong)(byte)sVar6;
    uVar21 = *(ulong *)(param_1 + 8);
    bVar12 = ((byte)sVar6 & 1) == 0;
    uVar25 = (byte)sVar6 & 1;
    uVar16 = (ulong)((byte)sVar6 >> 1);
    uVar15 = uVar16;
    if (!bVar12) {
      uVar15 = uVar21;
    }
  }
  bVar12 = uVar25 == 0;
  if (!bVar12) {
    uVar16 = uVar21;
  }
joined_r0x00f9d160:
  if (uVar16 != 0) {
    do {
      uVar22 = (uint)uVar24;
      psVar18 = *(string **)(param_1 + 0x10);
      uVar24 = uVar24 >> 1;
      uVar15 = uVar24;
      psVar20 = psVar2;
      if (!bVar12) {
        uVar15 = uVar21;
        psVar20 = psVar18;
      }
      iVar14 = isblank((uint)(byte)psVar20[uVar15 - 1]);
      if (iVar14 == 0) break;
      if (bVar12) {
        psVar18 = param_1 + uVar24;
        *param_1 = (string)(((char)uVar24 + -1) * '\x02');
      }
      else {
        *(ulong *)(param_1 + 8) = uVar21 - 1;
        psVar18 = psVar18 + (uVar21 - 1);
      }
      *psVar18 = (string)0x0;
      sVar6 = *param_1;
      uVar24 = (ulong)(byte)sVar6;
      uVar22 = (uint)(byte)sVar6;
      uVar21 = *(ulong *)(param_1 + 8);
      bVar12 = ((byte)sVar6 & 1) == 0;
      uVar15 = (ulong)((byte)sVar6 >> 1);
      if (!bVar12) {
        uVar15 = uVar21;
      }
    } while (uVar15 != 0);
    uVar25 = uVar22 & 1;
  }
  local_80 = psVar2;
  if (uVar25 != 0) {
    local_80 = *(string **)(param_1 + 0x10);
  }
  sVar4 = *(size_t *)(PTR_DAT_02722d28 + 8);
  pbVar5 = *(byte **)(PTR_DAT_02722d28 + 0x10);
  if ((*PTR_DAT_02722d28 & 1) == 0) {
    pbVar5 = PTR_DAT_02722d28 + 1;
    sVar4 = (ulong)((byte)*PTR_DAT_02722d28 >> 1);
  }
  if (sVar4 == 0) {
    uVar15 = 0;
    goto LAB_00f9d268;
  }
  uVar15 = (ulong)(uVar22 >> 1);
  if (uVar25 != 0) {
    uVar15 = uVar21;
  }
  if ((long)sVar4 <= (long)uVar15) {
    bVar7 = *pbVar5;
    psVar20 = local_80 + uVar15;
    psVar18 = local_80;
    do {
      sVar1 = (uVar15 - sVar4) + 1;
      uVar23 = uVar22;
      if ((sVar1 == 0) || (psVar18 = memchr(psVar18,(uint)bVar7,sVar1), psVar18 == (string *)0x0))
      break;
      iVar14 = memcmp(psVar18,pbVar5,sVar4);
      if (iVar14 == 0) {
        if (psVar18 != psVar20) {
          uVar15 = (long)psVar18 - (long)local_80;
          goto joined_r0x00f9d35c;
        }
        break;
      }
      psVar18 = psVar18 + 1;
      uVar15 = (long)psVar20 - (long)psVar18;
    } while ((long)sVar4 <= (long)uVar15);
LAB_00f9d364:
    uVar22 = uVar23;
  }
LAB_00f9d368:
  sVar4 = (ulong)((byte)PTR_DAT_02722d28[0x18] >> 1);
  pbVar5 = PTR_DAT_02722d28 + 0x19;
  if ((PTR_DAT_02722d28[0x18] & 1) != 0) {
    sVar4 = *(size_t *)(PTR_DAT_02722d28 + 0x20);
    pbVar5 = *(byte **)(PTR_DAT_02722d28 + 0x28);
  }
  if (sVar4 != 0) {
    uVar15 = (ulong)(uVar22 >> 1);
    if (uVar25 != 0) {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar4 <= (long)uVar15) {
      bVar7 = *pbVar5;
      psVar20 = local_80 + uVar15;
      psVar18 = local_80;
      do {
        sVar1 = (uVar15 - sVar4) + 1;
        if (sVar1 == 0) {
          return;
        }
        psVar18 = memchr(psVar18,(uint)bVar7,sVar1);
        if (psVar18 == (string *)0x0) {
          return;
        }
        iVar14 = memcmp(psVar18,pbVar5,sVar4);
        if (iVar14 == 0) {
          if (psVar18 == psVar20) {
            return;
          }
          uVar15 = (long)psVar18 - (long)local_80;
          if (uVar15 == 0xffffffffffffffff) {
            return;
          }
          goto LAB_00f9d4d4;
        }
        psVar18 = psVar18 + 1;
        uVar15 = (long)psVar20 - (long)psVar18;
      } while ((long)sVar4 <= (long)uVar15);
    }
    return;
  }
  uVar15 = 0;
LAB_00f9d4d4:
  do {
    while( true ) {
      std::string::erase((ulong)param_1,uVar15);
      sVar6 = *param_1;
      psVar18 = psVar2;
      if (((byte)sVar6 & 1) != 0) {
        psVar18 = *(string **)(param_1 + 0x10);
      }
      sVar4 = (ulong)((byte)PTR_DAT_02722d28[0x18] >> 1);
      pbVar5 = PTR_DAT_02722d28 + 0x19;
      if ((PTR_DAT_02722d28[0x18] & 1) != 0) {
        sVar4 = *(size_t *)(PTR_DAT_02722d28 + 0x20);
        pbVar5 = *(byte **)(PTR_DAT_02722d28 + 0x28);
      }
      if (sVar4 != 0) break;
      uVar15 = 0;
    }
    uVar15 = (ulong)((byte)sVar6 >> 1);
    if (((byte)sVar6 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    if ((long)uVar15 < (long)sVar4) {
      return;
    }
    bVar7 = *pbVar5;
    psVar3 = psVar18 + uVar15;
    psVar20 = psVar18;
    while( true ) {
      sVar1 = (uVar15 - sVar4) + 1;
      if (sVar1 == 0) {
        return;
      }
      psVar20 = memchr(psVar20,(uint)bVar7,sVar1);
      if (psVar20 == (string *)0x0) {
        return;
      }
      iVar14 = memcmp(psVar20,pbVar5,sVar4);
      if (iVar14 == 0) break;
      psVar20 = psVar20 + 1;
      uVar15 = (long)psVar3 - (long)psVar20;
      if ((long)uVar15 < (long)sVar4) {
        return;
      }
    }
    if (psVar20 == psVar3) {
      return;
    }
    uVar15 = (long)psVar20 - (long)psVar18;
  } while (uVar15 != 0xffffffffffffffff);
  return;
joined_r0x00f9d35c:
  if (uVar15 == 0xffffffffffffffff) goto LAB_00f9d368;
LAB_00f9d268:
  while( true ) {
    std::string::erase((ulong)param_1,uVar15);
    sVar6 = *param_1;
    uVar23 = (uint)(byte)sVar6;
    uVar22 = (uint)(byte)sVar6;
    local_80 = psVar2;
    if (((byte)sVar6 & 1) != 0) {
      local_80 = *(string **)(param_1 + 0x10);
    }
    sVar4 = *(size_t *)(PTR_DAT_02722d28 + 8);
    pbVar5 = *(byte **)(PTR_DAT_02722d28 + 0x10);
    uVar25 = (byte)sVar6 & 1;
    if ((*PTR_DAT_02722d28 & 1) == 0) {
      pbVar5 = PTR_DAT_02722d28 + 1;
      sVar4 = (ulong)((byte)*PTR_DAT_02722d28 >> 1);
    }
    if (sVar4 != 0) break;
    uVar15 = 0;
  }
  uVar15 = (ulong)((byte)sVar6 >> 1);
  if (((byte)sVar6 & 1) != 0) {
    uVar15 = *(ulong *)(param_1 + 8);
  }
  if ((long)uVar15 < (long)sVar4) goto LAB_00f9d368;
  bVar7 = *pbVar5;
  psVar20 = local_80 + uVar15;
  psVar18 = local_80;
  while( true ) {
    sVar1 = (uVar15 - sVar4) + 1;
    if (sVar1 == 0) goto LAB_00f9d364;
    psVar18 = memchr(psVar18,(uint)bVar7,sVar1);
    if (psVar18 == (string *)0x0) goto LAB_00f9d364;
    iVar14 = memcmp(psVar18,pbVar5,sVar4);
    if (iVar14 == 0) break;
    psVar18 = psVar18 + 1;
    uVar15 = (long)psVar20 - (long)psVar18;
    if ((long)uVar15 < (long)sVar4) goto LAB_00f9d364;
  }
  if (psVar18 == psVar20) goto LAB_00f9d364;
  uVar15 = (long)psVar18 - (long)local_80;
  goto joined_r0x00f9d35c;
}


