/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014af910; name: FUN_014af910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014af910(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long *plVar22;
  long *plVar21;
  long lVar23;
  long *plVar24;
  ulong *puVar25;
  undefined4 *puVar26;
  long lVar27;
  long local_5a8;
  long local_5a0;
  long local_598;
  long local_590;
  long local_588;
  long local_580;
  long local_578;
  ulong local_570;
  long local_568;
  long local_560;
  long local_558;
  long local_550;
  long local_548;
  long local_540;
  long *local_538;
  undefined8 uStack_530;
  undefined4 local_528;
  long *local_520;
  long *local_518;
  long *local_510;
  long *local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  char *local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_468;
  char *local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 local_3e8;
  char *local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 local_368;
  char *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_2e8;
  char *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_1e8;
  char *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 auStack_e8 [136];
  
  lVar19 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  puVar2 = PTR_DAT_02710798;
  lVar18 = *(long *)(*(long *)PTR_DAT_02710798 + 0x220);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  lVar19 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar27 = *(long *)(*(long *)puVar2 + 0x228);
  if (lVar27 != 0) {
    (**(code **)(*(long *)(lVar27 + 0x48) + 0x10))();
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  iVar4 = FUN_01509eb0(lVar27);
  local_168 = 0xe1dec806459cfabd;
  local_150 = 0;
  local_160 = "BOX_WAZA1";
  local_158 = 9;
  FUN_014b0a00(auStack_e8,&local_168);
  local_1e8 = 0xe1dec506459cf5a4;
  local_1e0 = "BOX_WAZA2";
  local_1d8 = 9;
  local_1d0 = 0;
  FUN_014b0a00(&local_168,&local_1e8);
  local_268 = 0xe5cb8990710393ee;
  local_260 = "BOX_DREAM";
  local_258 = 9;
  local_250 = 0;
  FUN_014b0a00(&local_1e8,&local_268);
  local_2e8 = 0x17eb1153847b9d3d;
  local_2e0 = "BOX_POKE1";
  local_2d8 = 9;
  local_2d0 = 0;
  FUN_014b0a00(&local_268,&local_2e8);
  local_368 = 0x17eb0e53847b9824;
  local_360 = "BOX_POKE2";
  local_358 = 9;
  local_350 = 0;
  FUN_014b0a00(&local_2e8,&local_368);
  local_3e8 = 0x17eb0f53847b99d7;
  local_3e0 = "BOX_POKE3";
  uStack_3d8 = 9;
  local_3d0 = 0;
  FUN_014b0a00(&local_368,&local_3e8);
  local_468 = 0x16d8d79753177bd3;
  local_460 = "BOX_ITEM1";
  uStack_458 = 9;
  local_450 = 0;
  FUN_014b0a00(&local_3e8,&local_468);
  local_4e8 = 0x16d8d89753177d86;
  local_4e0 = "BOX_ITEM2";
  uStack_4d8 = 9;
  local_4d0 = 0;
  FUN_014b0a00(&local_468,&local_4e8);
  local_520 = (long *)0xbefcbf4b5702d1c6;
  local_518 = (long *)0x1d157e7;
  local_510 = (long *)0x9;
  local_508 = (long *)0x0;
  FUN_014b0a00(&local_4e8,&local_520);
  lVar19 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar23 = *(long *)(*(long *)puVar2 + 0x1c0);
  if (lVar23 == 0) {
    local_4f0 = _DAT_00000068;
  }
  else {
    plVar24 = (long *)(lVar23 + 0x48);
    (**(code **)(*plVar24 + 0x10))(plVar24);
    uVar20 = *(undefined8 *)(lVar23 + 0x68);
    (**(code **)(*plVar24 + 0x18))(plVar24);
    local_4f0 = uVar20;
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  }
  uVar5 = FUN_014af120(&local_4f0);
  local_518 = (long *)0x0;
  local_510 = (long *)0x0;
  local_520 = (long *)0x0;
  local_4f8 = 0;
  uStack_500 = 0;
  local_508 = param_1;
  plVar24 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x600,8);
  if (plVar24 == (long *)0x0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  puVar2 = PTR_DAT_02710860;
  local_510 = plVar24 + 0xc0;
  local_520 = plVar24;
  local_518 = plVar24;
  lVar19 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  puVar25 = (ulong *)(lVar19 + 0x80);
  uVar12 = *puVar25;
  if (uVar12 < 0x10) {
    lVar23 = -0x20;
    plVar21 = param_1;
    do {
      *(long **)(lVar19 + uVar12 * 8) = plVar21;
      *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
      plVar24[4] = 0;
      plVar24[5] = 0;
      plVar24[2] = 0;
      plVar24[3] = 0;
      *plVar24 = 0;
      plVar24[1] = 0;
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      if (((lVar19 == 0) || (*(long *)(lVar19 + 0x80) == 0)) ||
         (lVar19 = *(long *)(lVar19 + *(long *)(lVar19 + 0x80) * 8 + -8), lVar19 == 0)) {
        lVar19 = FUN_0075ecb0();
      }
      plVar21 = local_508;
      plVar24[3] = lVar19;
      plVar24[4] = 0;
      lVar23 = lVar23 + 1;
      *(undefined4 *)(plVar24 + 5) = 0;
      *puVar25 = *puVar25 - 1;
      plVar24 = local_518 + 6;
      local_518 = plVar24;
      if (lVar23 == 0) {
        if (iVar4 < 1) goto LAB_014b092c;
        uVar12 = 0;
        goto LAB_014afd4c;
      }
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
      puVar25 = (ulong *)(lVar19 + 0x80);
      uVar12 = *puVar25;
    } while (uVar12 < 0x10);
  }
LAB_014b09fc:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_014afd4c:
  plVar21 = local_508;
  plVar24 = local_518;
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_528 = 0;
  uStack_530 = 0;
  local_538 = param_1;
  if (local_518 < local_510) {
    lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_014b09fc;
    *(long **)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = plVar21;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
    *plVar24 = 0;
    plVar24[1] = 0;
    plVar24[2] = 0;
    plVar24[3] = (long)local_538;
    plVar24[4] = 0;
    *(undefined4 *)(plVar24 + 5) = 0;
    *plVar24 = local_550;
    plVar24[1] = local_548;
    plVar24[2] = local_540;
    local_548 = 0;
    local_540 = 0;
    local_550 = 0;
    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
    local_518 = local_518 + 6;
  }
  else {
    FUN_014b2510(&local_520,&local_550);
    if (local_550 != 0) {
      local_548 = local_550;
      (**(code **)(*local_538 + 0x18))(local_538,local_550,local_540 - local_550,4);
    }
  }
  uVar11 = 0;
  local_570 = local_570 & 0xffffffff00000000;
  do {
    FUN_01505f50(&local_550,lVar18,uVar12 & 0xffffffff,uVar11,param_1);
    uVar10 = FUN_015060c0(lVar18,uVar12 & 0xffffffff,local_570 & 0xffffffff,param_1,0);
    if ((uVar10 & 1) != 0) {
      plVar24 = local_520 + uVar12 * 6 + 1;
      puVar26 = (undefined4 *)*plVar24;
      if (puVar26 == (undefined4 *)local_520[uVar12 * 6 + 2]) {
        FUN_010181e0(local_520 + uVar12 * 6,&local_570);
      }
      else {
        lVar23 = local_520[uVar12 * 6 + 3];
        lVar19 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_014b09fc;
        *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar23;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
        *puVar26 = (int)local_570;
        *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        *plVar24 = *plVar24 + 4;
      }
    }
    if (local_550 != 0) {
      (**(code **)(*(long *)(local_550 + 0x48) + 0x18))();
      local_550 = 0;
    }
    uVar11 = (int)local_570 + 1;
    local_570 = CONCAT44(local_570._4_4_,uVar11);
  } while (uVar11 < 0x1e);
  uVar12 = uVar12 + 1;
  if ((long)iVar4 <= (long)uVar12) {
    uVar12 = 0;
    do {
      uVar11 = 0;
      do {
        FUN_01505f50(&local_550,lVar18,uVar12 & 0xffffffff,uVar11,param_1);
        uVar10 = FUN_015060c0(lVar18,uVar12 & 0xffffffff,uVar11,param_1,0);
        lVar19 = local_5a8;
        if (((uVar10 & 1) != 0) &&
           (uVar10 = FUN_0150aef0(lVar27,uVar12 & 0xffffffff,uVar11), lVar19 = local_5a8,
           (uVar10 & 1) == 0)) {
          uVar6 = FUN_0087b890(local_550);
          uVar6 = uVar6 & 0xff;
          if (uVar6 == 1) {
            uVar10 = 0;
          }
          else {
            puVar25 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
            if (uVar6 == 0) {
              uVar13 = *puVar25;
              uVar10 = (ulong)(uint)((int)puVar25[1] + (int)uVar13);
              uVar14 = puVar25[1] ^ uVar13;
              *puVar25 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
              puVar25[1] = uVar14 >> 0x1b | uVar14 << 0x25;
            }
            else {
              uVar13 = (0x20 - LZCOUNT(uVar6)) -
                       (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar6)) & 0x1f)
                               & uVar6) == 0);
              uVar10 = uVar13 >> 6;
              if ((uVar13 & 0x3f) != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar13 / uVar10;
              }
              uVar16 = 0;
              if (uVar10 <= uVar13) {
                uVar16 = 0xffffffffffffffff >> (-uVar14 & 0x3f);
              }
              uVar13 = *puVar25;
              uVar14 = puVar25[1];
              do {
                uVar15 = uVar13 ^ uVar14;
                uVar10 = uVar13 + uVar14;
                uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
                uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
                uVar10 = uVar10 & uVar16;
              } while (uVar6 <= (uint)uVar10);
              *puVar25 = uVar13;
              puVar25[1] = uVar14;
            }
          }
          uVar7 = FUN_0087b880(local_550,uVar10);
          local_558 = local_550;
          if (local_550 == 0) {
            uVar8 = FUN_014b0fc0(&local_558,auStack_e8,uVar7);
            if (uVar6 == 1) goto LAB_014b0080;
LAB_014b00a8:
            puVar25 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
            if (uVar6 == 0) {
              uVar13 = *puVar25;
              uVar10 = (ulong)(uint)((int)puVar25[1] + (int)uVar13);
              uVar14 = puVar25[1] ^ uVar13;
              *puVar25 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
              puVar25[1] = uVar14 >> 0x1b | uVar14 << 0x25;
            }
            else {
              uVar13 = (0x20 - LZCOUNT(uVar6)) -
                       (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar6)) & 0x1f)
                               & uVar6) == 0);
              uVar10 = uVar13 >> 6;
              if ((uVar13 & 0x3f) != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar13 / uVar10;
              }
              uVar16 = 0;
              if (uVar10 <= uVar13) {
                uVar16 = 0xffffffffffffffff >> (-uVar14 & 0x3f);
              }
              uVar13 = *puVar25;
              uVar14 = puVar25[1];
              do {
                uVar15 = uVar13 ^ uVar14;
                uVar10 = uVar13 + uVar14;
                uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
                uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
                uVar10 = uVar10 & uVar16;
              } while (uVar6 <= (uint)uVar10);
              *puVar25 = uVar13;
              puVar25[1] = uVar14;
            }
          }
          else {
            plVar24 = (long *)(local_550 + 0x48);
            (**(code **)(*plVar24 + 0x10))(plVar24);
            uVar8 = FUN_014b0fc0(&local_558,auStack_e8,uVar7);
            (**(code **)(*plVar24 + 0x18))(plVar24);
            local_558 = 0;
            if (uVar6 != 1) goto LAB_014b00a8;
LAB_014b0080:
            uVar10 = 0;
          }
          uVar7 = FUN_0087b880(local_550,uVar10);
          local_560 = local_550;
          if (local_550 == 0) {
            uVar9 = FUN_014b0fc0(&local_560,&local_168,uVar7);
            if (uVar6 == 1) goto LAB_014b01ac;
LAB_014b01d4:
            puVar25 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
            if (uVar6 == 0) {
              uVar13 = *puVar25;
              uVar10 = (ulong)(uint)((int)puVar25[1] + (int)uVar13);
              uVar14 = puVar25[1] ^ uVar13;
              *puVar25 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
              puVar25[1] = uVar14 >> 0x1b | uVar14 << 0x25;
            }
            else {
              uVar13 = (0x20 - LZCOUNT(uVar6)) -
                       (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar6)) & 0x1f)
                               & uVar6) == 0);
              uVar10 = uVar13 >> 6;
              if ((uVar13 & 0x3f) != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar14 = 0;
              if (uVar10 != 0) {
                uVar14 = uVar13 / uVar10;
              }
              uVar16 = 0;
              if (uVar10 <= uVar13) {
                uVar16 = 0xffffffffffffffff >> (-uVar14 & 0x3f);
              }
              uVar13 = *puVar25;
              uVar14 = puVar25[1];
              do {
                uVar15 = uVar13 ^ uVar14;
                uVar10 = uVar13 + uVar14;
                uVar14 = uVar15 >> 0x1b | uVar15 << 0x25;
                uVar13 = uVar15 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar15 << 0x10;
                uVar10 = uVar10 & uVar16;
              } while (uVar6 <= (uint)uVar10);
              *puVar25 = uVar13;
              puVar25[1] = uVar14;
            }
          }
          else {
            plVar24 = (long *)(local_550 + 0x48);
            (**(code **)(*plVar24 + 0x10))(plVar24);
            uVar9 = FUN_014b0fc0(&local_560,&local_168,uVar7);
            (**(code **)(*plVar24 + 0x18))(plVar24);
            local_560 = 0;
            if (uVar6 != 1) goto LAB_014b01d4;
LAB_014b01ac:
            uVar10 = 0;
          }
          uVar7 = FUN_0087b880(local_550,uVar10);
          local_568 = local_550;
          if (local_550 == 0) {
            uVar6 = FUN_014b0fc0(&local_568,&local_1e8,uVar7);
          }
          else {
            plVar24 = (long *)(local_550 + 0x48);
            (**(code **)(*plVar24 + 0x10))(plVar24);
            uVar6 = FUN_014b0fc0(&local_568,&local_1e8,uVar7);
            (**(code **)(*plVar24 + 0x18))(plVar24);
            local_568 = 0;
          }
          lVar19 = (local_520 + uVar12 * 6)[1] - local_520[uVar12 * 6];
          if (lVar19 == 4) {
            uVar10 = 0;
          }
          else {
            puVar25 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
            if (lVar19 == 0) {
              uVar13 = *puVar25;
              uVar10 = puVar25[1] + uVar13;
              uVar14 = puVar25[1] ^ uVar13;
              *puVar25 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
              puVar25[1] = uVar14 >> 0x1b | uVar14 << 0x25;
            }
            else {
              uVar13 = lVar19 >> 2;
              uVar14 = (0x40 - LZCOUNT(uVar13)) -
                       (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar13)) & 0x3f) &
                               uVar13) == 0);
              uVar10 = uVar14 >> 6;
              if ((uVar14 & 0x3f) != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar14 / uVar10;
              }
              uVar15 = 0;
              if (uVar10 <= uVar14) {
                uVar15 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
              }
              uVar14 = *puVar25;
              uVar16 = puVar25[1];
              do {
                uVar17 = uVar14 ^ uVar16;
                uVar10 = uVar14 + uVar16;
                uVar16 = uVar17 >> 0x1b | uVar17 << 0x25;
                uVar14 = uVar17 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar17 << 0x10;
                uVar10 = uVar10 & uVar15;
              } while (uVar13 <= uVar10);
              *puVar25 = uVar14;
              puVar25[1] = uVar16;
            }
          }
          lVar19 = local_520[uVar12 * 6];
          lVar23 = (local_520 + uVar12 * 6)[1];
          if ((ulong)(lVar23 - lVar19 >> 2) <= (ulong)(long)(int)uVar10) {
LAB_014b09f8:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          uVar1 = *(uint *)(lVar19 + (long)(int)uVar10 * 4);
          uVar6 = uVar8 | uVar9 | uVar6;
          if (uVar1 != uVar11) {
            FUN_01505f50(&local_570,lVar18,uVar12 & 0xffffffff,uVar1,param_1);
            lVar19 = local_550;
            local_578 = local_550;
            if (local_550 != 0) {
              (**(code **)(*(long *)(local_550 + 0x48) + 0x10))();
            }
            uVar7 = FUN_008783b0(local_570);
            uVar8 = FUN_014b0fc0(&local_578,&local_268,uVar7);
            if (lVar19 != 0) {
              plVar24 = (long *)(lVar19 + 0x48);
              (**(code **)(*plVar24 + 0x18))(plVar24);
              local_578 = 0;
            }
            uVar6 = uVar6 | uVar8;
            if (local_570 != 0) {
              (**(code **)(*(long *)(local_570 + 0x48) + 0x18))();
              local_570 = 0;
            }
            lVar19 = local_520[uVar12 * 6];
            lVar23 = (local_520 + uVar12 * 6)[1];
          }
          lVar23 = lVar23 - lVar19;
          if (lVar23 == 4) {
            uVar10 = 0;
          }
          else {
            puVar25 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
            if (lVar23 == 0) {
              uVar13 = *puVar25;
              uVar10 = puVar25[1] + uVar13;
              uVar14 = puVar25[1] ^ uVar13;
              *puVar25 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
              puVar25[1] = uVar14 >> 0x1b | uVar14 << 0x25;
            }
            else {
              uVar13 = lVar23 >> 2;
              uVar14 = (0x40 - LZCOUNT(uVar13)) -
                       (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar13)) & 0x3f) &
                               uVar13) == 0);
              uVar10 = uVar14 >> 6;
              if ((uVar14 & 0x3f) != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar14 / uVar10;
              }
              uVar15 = 0;
              if (uVar10 <= uVar14) {
                uVar15 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
              }
              uVar14 = *puVar25;
              uVar16 = puVar25[1];
              do {
                uVar17 = uVar14 ^ uVar16;
                uVar10 = uVar14 + uVar16;
                uVar16 = uVar17 >> 0x1b | uVar17 << 0x25;
                uVar14 = uVar17 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar17 << 0x10;
                uVar10 = uVar10 & uVar15;
              } while (uVar13 <= uVar10);
              *puVar25 = uVar14;
              puVar25[1] = uVar16;
            }
          }
          lVar19 = local_520[uVar12 * 6];
          lVar23 = (local_520 + uVar12 * 6)[1];
          if ((ulong)(lVar23 - lVar19 >> 2) <= (ulong)(long)(int)uVar10) goto LAB_014b09f8;
          uVar8 = *(uint *)(lVar19 + (long)(int)uVar10 * 4);
          if (uVar8 != uVar11) {
            FUN_01505f50(&local_570,lVar18,uVar12 & 0xffffffff,uVar8,param_1);
            lVar19 = local_550;
            local_580 = local_550;
            if (local_550 != 0) {
              (**(code **)(*(long *)(local_550 + 0x48) + 0x10))();
            }
            uVar7 = FUN_008783b0(local_570);
            uVar8 = FUN_014b0fc0(&local_580,&local_2e8,uVar7);
            if (lVar19 != 0) {
              plVar24 = (long *)(lVar19 + 0x48);
              (**(code **)(*plVar24 + 0x18))(plVar24);
              local_580 = 0;
            }
            uVar6 = uVar6 | uVar8;
            if (local_570 != 0) {
              (**(code **)(*(long *)(local_570 + 0x48) + 0x18))();
              local_570 = 0;
            }
            lVar19 = local_520[uVar12 * 6];
            lVar23 = (local_520 + uVar12 * 6)[1];
          }
          lVar23 = lVar23 - lVar19;
          if (lVar23 == 4) {
            uVar10 = 0;
          }
          else {
            puVar25 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
            if (lVar23 == 0) {
              uVar13 = *puVar25;
              uVar10 = puVar25[1] + uVar13;
              uVar14 = puVar25[1] ^ uVar13;
              *puVar25 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
              puVar25[1] = uVar14 >> 0x1b | uVar14 << 0x25;
            }
            else {
              uVar13 = lVar23 >> 2;
              uVar14 = (0x40 - LZCOUNT(uVar13)) -
                       (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar13)) & 0x3f) &
                               uVar13) == 0);
              uVar10 = uVar14 >> 6;
              if ((uVar14 & 0x3f) != 0) {
                uVar10 = uVar10 + 1;
              }
              uVar16 = 0;
              if (uVar10 != 0) {
                uVar16 = uVar14 / uVar10;
              }
              uVar15 = 0;
              if (uVar10 <= uVar14) {
                uVar15 = 0xffffffffffffffff >> (-uVar16 & 0x3f);
              }
              uVar14 = *puVar25;
              uVar16 = puVar25[1];
              do {
                uVar17 = uVar14 ^ uVar16;
                uVar10 = uVar14 + uVar16;
                uVar16 = uVar17 >> 0x1b | uVar17 << 0x25;
                uVar14 = uVar17 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar17 << 0x10;
                uVar10 = uVar10 & uVar15;
              } while (uVar13 <= uVar10);
              *puVar25 = uVar14;
              puVar25[1] = uVar16;
            }
          }
          lVar19 = local_520[uVar12 * 6];
          if ((ulong)((local_520 + uVar12 * 6)[1] - lVar19 >> 2) <= (ulong)(long)(int)uVar10)
          goto LAB_014b09f8;
          uVar8 = *(uint *)(lVar19 + (long)(int)uVar10 * 4);
          if (uVar8 != uVar11) {
            FUN_01505f50(&local_570,lVar18,uVar12 & 0xffffffff,uVar8,param_1);
            lVar19 = local_550;
            local_588 = local_550;
            if (local_550 != 0) {
              (**(code **)(*(long *)(local_550 + 0x48) + 0x10))();
            }
            uVar7 = FUN_008783b0(local_570);
            uVar8 = FUN_014b0fc0(&local_588,&local_368,uVar7);
            if (lVar19 != 0) {
              plVar24 = (long *)(lVar19 + 0x48);
              (**(code **)(*plVar24 + 0x18))(plVar24);
              local_588 = 0;
            }
            uVar6 = uVar6 | uVar8;
            if (local_570 != 0) {
              (**(code **)(*(long *)(local_570 + 0x48) + 0x18))();
              local_570 = 0;
            }
          }
          sVar3 = FUN_008787f0(local_550);
          if (sVar3 == 0) {
LAB_014b07fc:
            if (local_550 == 0) goto LAB_014b08dc;
LAB_014b0808:
            plVar24 = (long *)(local_550 + 0x48);
            local_5a0 = local_550;
            (**(code **)(*plVar24 + 0x10))(plVar24);
            uVar8 = FUN_014b0fc0(&local_5a0,&local_4e8,uVar5);
            uVar6 = uVar6 | uVar8;
            (**(code **)(*plVar24 + 0x18))(plVar24);
            local_5a0 = 0;
            lVar19 = local_5a8;
            local_5a8 = local_550;
          }
          else {
            local_590 = local_550;
            if (local_550 == 0) {
              uVar8 = FUN_014b0fc0(&local_590,&local_3e8,sVar3);
              local_598 = local_550;
            }
            else {
              plVar24 = (long *)(local_550 + 0x48);
              (**(code **)(*plVar24 + 0x10))(plVar24);
              uVar8 = FUN_014b0fc0(&local_590,&local_3e8,sVar3);
              (**(code **)(*plVar24 + 0x18))(plVar24);
              local_590 = 0;
              local_598 = local_550;
            }
            local_550 = local_598;
            if (local_598 != 0) {
              plVar24 = (long *)(local_598 + 0x48);
              (**(code **)(*plVar24 + 0x10))(plVar24);
              uVar9 = FUN_014b0fc0(&local_598,&local_468,sVar3);
              uVar6 = uVar6 | uVar8 | uVar9;
              (**(code **)(*plVar24 + 0x18))(plVar24);
              local_598 = 0;
              goto LAB_014b07fc;
            }
            uVar9 = FUN_014b0fc0(&local_598,&local_468,sVar3);
            uVar6 = uVar6 | uVar8 | uVar9;
            if (local_550 != 0) goto LAB_014b0808;
LAB_014b08dc:
            local_5a0 = local_550;
            uVar8 = FUN_014b0fc0(&local_5a0,&local_4e8,uVar5);
            uVar6 = uVar6 | uVar8;
            lVar19 = local_5a8;
            local_5a8 = local_550;
          }
          local_550 = local_5a8;
          if ((uVar6 & 1) != 0) {
            if (local_5a8 != 0) {
              (**(code **)(*(long *)(local_5a8 + 0x48) + 0x10))();
            }
            FUN_01505ea0(lVar18,&local_5a8,uVar12 & 0xffffffff,uVar11);
            lVar19 = 0;
            if (local_5a8 != 0) {
              (**(code **)(*(long *)(local_5a8 + 0x48) + 0x18))();
              local_5a8 = 0;
              lVar19 = local_5a8;
            }
          }
        }
        local_5a8 = lVar19;
        if (local_550 != 0) {
          (**(code **)(*(long *)(local_550 + 0x48) + 0x18))();
          local_550 = 0;
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 0x1e);
      uVar12 = uVar12 + 1;
    } while ((long)uVar12 < (long)iVar4);
LAB_014b092c:
    plVar24 = local_520;
    if (local_520 != (long *)0x0) {
      if (local_518 != local_520) {
        plVar21 = local_518;
        do {
          plVar22 = plVar21 + -6;
          lVar19 = *plVar22;
          if (lVar19 != 0) {
            plVar21[-5] = lVar19;
            (**(code **)(*(long *)plVar21[-3] + 0x18))
                      ((long *)plVar21[-3],lVar19,plVar21[-4] - lVar19,4);
          }
          plVar21 = plVar22;
        } while (plVar24 != plVar22);
      }
      local_518 = plVar24;
      (**(code **)(*local_508 + 0x18))(local_508,local_520,(long)local_510 - (long)local_520,8);
    }
    if (lVar27 != 0) {
      (**(code **)(*(long *)(lVar27 + 0x48) + 0x18))((long *)(lVar27 + 0x48));
    }
    if (lVar18 != 0) {
      (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
    }
    return;
  }
  goto LAB_014afd4c;
}


