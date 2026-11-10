/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e37ce0; name: FUN_00e37ce0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e37ce0(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  byte bVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *__s;
  byte *pbVar9;
  bool bVar10;
  int iVar11;
  size_t __n;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  void *__dest;
  long lVar19;
  byte *pbVar20;
  long lVar21;
  byte *pbVar22;
  undefined8 uVar23;
  uint param5;
  byte *pbVar24;
  long local_2a0;
  undefined8 uStack_298;
  undefined1 *local_290;
  long local_288;
  long local_280;
  undefined *local_1a0;
  long local_198;
  undefined8 local_190;
  code *local_188;
  code *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  code *local_108;
  code *local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [96];
  undefined1 auStack_90 [8];
  char *local_88;
  long local_78;
  byte *local_70 [2];
  
  lVar19 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar19 + 0x578) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_02715558), iVar11 != 0)) {
      lVar14 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar14;
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_2a0 = *(long *)PTR_DAT_02715560;
    if (local_2a0 != 0) {
      (**(code **)(*(long *)(local_2a0 + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(&local_2a0,*(long *)(lVar19 + 0x578),param_1 + 0x3a8);
  }
  FUN_006cf0c0(auStack_90,&local_2a0);
  if (local_2a0 != 0) {
    (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
    local_2a0 = 0;
  }
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  lVar14 = *(long *)PTR_DAT_0271e8d0;
  puVar1 = PTR_DAT_02715de8 + 0x10;
  lVar19 = lVar14 + (long)param_4 * 0x58;
  plVar2 = (long *)(lVar19 + 0x48);
  bVar5 = false;
  param5 = 0;
  puVar3 = PTR_DAT_02715de0 + 0x10;
LAB_00e37e80:
  uVar12 = 0xcbf29ce484222645;
  local_100 = (code *)0x0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = (code *)0x0;
  local_180 = (code *)0x0;
  local_178 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = (code *)0x0;
  local_1a0 = puVar1;
  snprintf((char *)&local_2a0,0x100,"bin/field/model/%s/%s_%02d.gfbprb",local_88,local_88,param5);
  if ((byte)local_2a0 != 0) {
    pbVar20 = (byte *)((ulong)&local_2a0 | 1);
    bVar4 = (byte)local_2a0;
    do {
      uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
      bVar4 = *pbVar20;
      pbVar20 = pbVar20 + 1;
    } while (bVar4 != 0);
  }
  if ((param_4 != -1) && (uVar16 = *(ulong *)(lVar19 + 0x50), uVar16 != 0)) {
    uVar17 = uVar16 - 1;
    if ((uVar17 & uVar16) == 0) {
      uVar13 = uVar17 & uVar12;
      plVar15 = *(long **)(*plVar2 + uVar13 * 8);
    }
    else {
      uVar13 = uVar12;
      if (uVar16 <= uVar12) {
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar12 / uVar16;
        }
        uVar13 = uVar12 - uVar13 * uVar16;
      }
      plVar15 = *(long **)(*plVar2 + uVar13 * 8);
    }
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if ((uVar17 & uVar16) == 0) {
        do {
          uVar16 = plVar15[1];
          if (uVar12 != uVar16 && (uVar16 & uVar17) != uVar13) break;
          if ((uVar12 == uVar16) && (plVar15[2] == uVar12)) goto LAB_00e37fc4;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar15[1];
          if (uVar12 == uVar17) {
            if (plVar15[2] == uVar12) goto LAB_00e37fc4;
          }
          else {
            if (uVar16 <= uVar17) {
              uVar6 = 0;
              if (uVar16 != 0) {
                uVar6 = uVar17 / uVar16;
              }
              uVar17 = uVar17 - uVar6 * uVar16;
            }
            if (uVar17 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_00e380b0;
LAB_00e37fc4:
  lVar18 = plVar15[3];
  if (lVar18 != 0) {
    lVar21 = *(long *)(lVar18 + 0x18);
    if (lVar21 != 0) {
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
    }
    if (local_198 != 0) {
      plVar15 = (long *)(local_198 + 0x48);
      local_198 = lVar21;
      (**(code **)(*plVar15 + 0x18))();
      lVar21 = local_198;
    }
    local_198 = lVar21;
    pcVar7 = local_188;
    if (local_188 != (code *)0x0) {
      local_180 = (code *)0x0;
      local_178 = 0;
      local_190 = 0;
      local_188 = (code *)0x0;
      (*pcVar7)(auStack_170);
    }
    if (*(code **)(lVar18 + 0x30) != (code *)0x0) {
      (**(code **)(lVar18 + 0x30))(lVar18 + 0x40,auStack_170);
      local_190 = *(undefined8 *)(lVar18 + 0x20);
      local_188 = *(code **)(lVar18 + 0x28);
      local_180 = *(code **)(lVar18 + 0x30);
      local_178 = *(undefined8 *)(lVar18 + 0x38);
    }
    pcVar7 = local_108;
    if (local_108 != (code *)0x0) {
      local_100 = (code *)0x0;
      local_f8 = 0;
      local_110 = 0;
      local_108 = (code *)0x0;
      (*pcVar7)(auStack_f0);
    }
    if (*(code **)(lVar18 + 0xb0) != (code *)0x0) {
      (**(code **)(lVar18 + 0xb0))(lVar18 + 0xc0,auStack_f0);
      local_110 = *(undefined8 *)(lVar18 + 0xa0);
      local_108 = *(code **)(lVar18 + 0xa8);
      local_100 = *(code **)(lVar18 + 0xb0);
      local_f8 = *(undefined8 *)(lVar18 + 0xb8);
    }
  }
LAB_00e380b0:
  bVar10 = local_198 != 0;
  __dest = *(void **)(param_1 + 0x448);
  if (__dest == *(void **)(param_1 + 0x450)) {
    FUN_00e39580(param_1 + 0x440,&local_2a0);
  }
  else {
    uVar23 = *(undefined8 *)(param_1 + 0x458);
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar18 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar23;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
    memcpy(__dest,&local_2a0,0x100);
    *(undefined **)((long)__dest + 0x100) = PTR_DAT_02715de0 + 0x10;
    *(long *)((long)__dest + 0x108) = local_198;
    if (local_198 != 0) {
      (**(code **)(*(long *)(local_198 + 0x48) + 0x10))();
    }
    *(undefined8 *)((long)__dest + 0x120) = 0;
    *(undefined8 *)((long)__dest + 0x128) = 0;
    *(undefined8 *)((long)__dest + 0x110) = 0;
    *(undefined8 *)((long)__dest + 0x118) = 0;
    if (local_180 != (code *)0x0) {
      (*local_180)(auStack_170,(long)__dest + 0x130);
      *(undefined8 *)((long)__dest + 0x128) = local_178;
      *(code **)((long)__dest + 0x118) = local_188;
      *(code **)((long)__dest + 0x120) = local_180;
      *(undefined8 *)((long)__dest + 0x110) = local_190;
    }
    *(undefined8 *)((long)__dest + 0x1a0) = 0;
    *(undefined8 *)((long)__dest + 0x1a8) = 0;
    *(undefined8 *)((long)__dest + 400) = 0;
    *(undefined8 *)((long)__dest + 0x198) = 0;
    if (local_100 != (code *)0x0) {
      (*local_100)(auStack_f0,(long)__dest + 0x1b0);
      *(undefined8 *)((long)__dest + 0x1a8) = local_f8;
      *(code **)((long)__dest + 0x198) = local_108;
      *(code **)((long)__dest + 0x1a0) = local_100;
      *(undefined8 *)((long)__dest + 400) = local_110;
    }
    *(undefined **)((long)__dest + 0x100) = PTR_DAT_02715de8 + 0x10;
    *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
    *(long *)(param_1 + 0x448) = *(long *)(param_1 + 0x448) + 0x210;
  }
  local_1a0 = puVar3;
  if (local_198 == 0) {
    local_198 = 0;
    pcVar7 = local_108;
  }
  else {
    FUN_006e2100(local_198,&local_1a0);
    lVar18 = local_198;
    local_198 = 0;
    pcVar7 = local_108;
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
      pcVar7 = local_108;
    }
  }
  local_108 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_100 = (code *)0x0;
    local_f8 = 0;
    local_110 = 0;
    local_108 = (code *)0x0;
    (*pcVar7)(auStack_f0);
  }
  pcVar7 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (code *)0x0;
    local_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar7)(auStack_170);
  }
  if (local_198 != 0) {
    (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
    local_198 = 0;
  }
  __s = PTR_s_data___02710918;
  puVar8 = PTR_DAT_02710788;
  param5 = param5 + 1;
  bVar5 = (bool)(bVar5 | bVar10);
  if (3 < param5) {
    if (!bVar5) {
      pbVar20 = *(byte **)(param_1 + 0x440);
      pbVar24 = *(byte **)(param_1 + 0x448);
      if (pbVar20 != pbVar24) {
        do {
          uVar12 = 0xcbf29ce484222645;
          bVar4 = *pbVar20;
          if (bVar4 != 0) {
            lVar19 = 1;
            do {
              uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
              bVar4 = pbVar20[lVar19];
              lVar19 = lVar19 + 1;
            } while (bVar4 != 0);
          }
          lVar19 = FUN_006e2ec0(param_3 + 0x120,uVar12);
          if (0 < lVar19) {
            __n = strlen(__s);
            iVar11 = strncmp((char *)pbVar20,__s,__n);
            if (iVar11 == 0) {
              local_70[0] = pbVar20;
              FUN_00d99c10(&local_2a0,local_70,0);
            }
            else {
              FUN_008802d0(local_70,__s,pbVar20);
              FUN_006e5870(&local_2a0,local_70,0);
              if (local_70[0] != (byte *)0x0) {
                (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
                local_70[0] = (byte *)0x0;
              }
            }
            lVar19 = 0;
            if (*(long *)(param_3 + 0x18) != 0) {
              lVar19 = param_3 + 0x120;
            }
            FUN_00e39a80(local_70,*(undefined8 *)puVar8,1,&local_2a0,0,param_2,lVar19);
            if (*(long *)(pbVar20 + 0x108) != 0) {
              (**(code **)(*(long *)(*(long *)(pbVar20 + 0x108) + 0x48) + 0x18))();
              pbVar20[0x108] = 0;
              pbVar20[0x109] = 0;
              pbVar20[0x10a] = 0;
              pbVar20[0x10b] = 0;
              pbVar20[0x10c] = 0;
              pbVar20[0x10d] = 0;
              pbVar20[0x10e] = 0;
              pbVar20[0x10f] = 0;
            }
            pbVar9 = local_70[0];
            *(byte **)(pbVar20 + 0x108) = local_70[0];
            if (local_70[0] != (byte *)0x0) {
              pbVar22 = local_70[0] + 0x48;
              (**(code **)(*(long *)pbVar22 + 0x10))(pbVar22);
              if ((*(long *)(pbVar20 + 0x110) != 0) || (*(long *)(pbVar20 + 400) != 0)) {
                FUN_006e1e70(pbVar9,pbVar20 + 0x100,1);
              }
              (**(code **)(*(long *)pbVar22 + 0x18))(pbVar22);
            }
            FUN_00e38500(lVar14,pbVar20 + 0x100,param_4);
            if ((local_288 != 0) && (local_2a0 != 0)) {
              (**(code **)(*(long *)(local_2a0 + 0x48) + 0x18))();
            }
            local_2a0 = 0;
            uStack_298 = 0xcbf29ce484222645;
            local_290 = &DAT_01d38550;
            local_288 = 0;
            if (local_280 != 0) {
              (**(code **)(*(long *)(local_280 + 0x48) + 0x18))();
              local_280 = 0;
            }
          }
          pbVar20 = pbVar20 + 0x210;
        } while (pbVar20 != pbVar24);
      }
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    }
    return;
  }
  goto LAB_00e37e80;
}


