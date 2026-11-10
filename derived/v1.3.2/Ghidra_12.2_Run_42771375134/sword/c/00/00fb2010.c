/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb2010; name: FUN_00fb2010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00fb2010(long param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ushort *puVar16;
  uint *puVar17;
  uint *puVar19;
  uint *puVar18;
  ulong uVar20;
  byte *pbVar21;
  undefined8 uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined8 local_eb0;
  undefined1 *puStack_ea8;
  undefined1 *local_ea0;
  ulong uStack_e98;
  long local_e90;
  ulong uStack_e88;
  undefined8 local_e80;
  ulong uStack_e78;
  undefined8 local_e70;
  ulong uStack_e68;
  long local_e58;
  long local_e50;
  long local_e48;
  long local_e40;
  long local_e38;
  undefined8 local_e30;
  long lStack_e28;
  long local_e20;
  long local_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined1 auStack_df0 [96];
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined1 auStack_d70 [96];
  long local_d10 [5];
  undefined4 local_ce8 [2];
  undefined1 auStack_ce0 [48];
  undefined1 auStack_cb0 [48];
  undefined1 auStack_c80 [48];
  undefined8 local_c50;
  undefined8 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined4 local_c30;
  undefined8 local_c20;
  undefined8 local_c10;
  ulong uStack_c08;
  undefined8 local_c00;
  ulong uStack_bf8;
  undefined8 local_bf0;
  ulong uStack_be8;
  undefined8 local_be0;
  ulong uStack_bd8;
  undefined8 local_bd0;
  ulong uStack_bc8;
  undefined8 local_bc0;
  ulong uStack_bb8;
  undefined8 local_bb0;
  ulong uStack_ba8;
  undefined8 local_ba0;
  ulong uStack_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined4 local_b80;
  undefined8 local_b70;
  ulong uStack_b68;
  undefined8 local_b60;
  ulong uStack_b58;
  undefined8 local_b50;
  ulong uStack_b48;
  undefined8 local_b40;
  ulong uStack_b38;
  undefined8 local_b30;
  ulong uStack_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined8 local_b00;
  undefined8 local_af0;
  ulong uStack_ae8;
  undefined8 local_ae0;
  undefined4 local_ad8;
  undefined8 local_ad4;
  undefined8 local_acc;
  undefined8 local_ac4;
  undefined8 local_abc;
  undefined8 local_ab4;
  undefined1 local_aa0 [4];
  undefined4 local_a9c;
  undefined8 local_a98;
  undefined4 local_a90;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined4 local_a70;
  undefined1 local_260;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 local_240;
  ulong uStack_238;
  undefined8 local_230;
  ulong uStack_228;
  undefined8 local_220;
  ulong uStack_218;
  undefined8 local_210;
  ulong uStack_208;
  undefined4 local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1d0 [5];
  undefined8 local_1a8;
  undefined8 local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  
  if (0x1d < (int)param_2) {
    return 0;
  }
  if (*(int *)(param_1 + 0x408) != 0) {
    return 0;
  }
  local_1d0[1] = "Set_State_Sunny";
  local_1d0[2] = (char *)0xf;
  local_1d0[3] = (char *)0xb297437d71a65eaa;
  local_1d0[4] = "Set_State_Cloudy";
  local_1a8 = 0x10;
  local_1a0 = 0x9a80632e719d3d50;
  local_190 = 0xe;
  local_160 = 0xe;
  local_158 = 0x5a26d69bfd3d601c;
  local_148 = 0x12;
  local_140 = 0x44936cccd2e58851;
  local_138 = "Set_State_Drought";
  local_198 = "Set_State_Rain";
  local_130 = 0x11;
  local_1d0[0] = (char *)0x382e817e19e806c5;
  local_170 = 0x3111a3347dbf4c0d;
  local_128 = 0x7ecb03c9625eef3d;
  local_188 = 0xca4274efc8f9bbf7;
  local_168 = "Set_State_Snow";
  local_120 = "Set_State_SandStorm";
  local_180 = "Set_State_HeavyRain";
  local_150 = "Set_State_Blizzard";
  uVar3 = param_2 - 0xf;
  if ((int)param_2 < 0xf) {
    uVar3 = param_2;
  }
  local_a0 = 0x19;
  local_178 = 0x13;
  local_118 = 0x13;
  local_110 = 0xa7406da37a658e5a;
  local_108 = "Set_State_Fog";
  local_f0 = "Set_State_BattleSunny";
  local_c8 = 0x1f1695d0b93e4cc6;
  local_98 = 0xf4bf5cc1bc016469;
  local_100 = 0xd;
  local_c0 = "Set_State_BattleHail";
  local_90 = "Set_State_BattleCloud";
  local_e0 = 0x316a30a83e5ace16;
  local_f8 = 0xe8fa39d00c343123;
  local_d8 = "Set_State_BattleRain";
  local_b0 = 0x754207fa9ce31673;
  local_80 = 0x986a04b349c3f713;
  local_e8 = 0x15;
  local_88 = 0x15;
  local_d0 = 0x14;
  local_b8 = 0x14;
  local_70 = 0x14;
  local_a8 = "Set_State_BattleSandStorm";
  local_78 = "Set_State_BattleSnow";
  local_e50 = *(long *)(param_1 + 0x88);
  if (local_e50 != 0) {
    (**(code **)(*(long *)(local_e50 + 0x48) + 0x10))();
  }
  local_e48 = *(long *)(param_1 + 0x90);
  if (local_e48 != 0) {
    (**(code **)(*(long *)(local_e48 + 0x48) + 0x10))();
  }
  local_e40 = *(long *)(param_1 + 0x98);
  if (local_e40 != 0) {
    (**(code **)(*(long *)(local_e40 + 0x48) + 0x10))();
  }
  local_e38 = *(long *)(param_1 + 0xa0);
  if (local_e38 != 0) {
    (**(code **)(*(long *)(local_e38 + 0x48) + 0x10))();
  }
  local_e30 = *(undefined8 *)(param_1 + 0xa8);
  lStack_e28 = *(long *)(param_1 + 0xb0);
  if (lStack_e28 != 0) {
    (**(code **)(*(long *)(lStack_e28 + 0x48) + 0x10))();
  }
  local_e20 = *(long *)(param_1 + 0xb8);
  if (local_e20 != 0) {
    (**(code **)(*(long *)(local_e20 + 0x48) + 0x10))();
  }
  local_e18 = *(long *)(param_1 + 0xc0);
  if (local_e18 != 0) {
    (**(code **)(*(long *)(local_e18 + 0x48) + 0x10))();
  }
  local_e00 = 0;
  uStack_df8 = 0;
  local_e10 = 0;
  uStack_e08 = 0;
  if (*(code **)(param_1 + 0xe0) != (code *)0x0) {
    (**(code **)(param_1 + 0xe0))(param_1 + 0xf0,auStack_df0);
    local_e10 = *(undefined8 *)(param_1 + 0xd0);
    uStack_e08 = *(undefined8 *)(param_1 + 0xd8);
    local_e00 = *(undefined8 *)(param_1 + 0xe0);
    uStack_df8 = *(undefined8 *)(param_1 + 0xe8);
  }
  local_d80 = 0;
  uStack_d78 = 0;
  local_d90 = 0;
  uStack_d88 = 0;
  if (*(code **)(param_1 + 0x160) != (code *)0x0) {
    (**(code **)(param_1 + 0x160))(param_1 + 0x170,auStack_d70);
    local_d90 = *(undefined8 *)(param_1 + 0x150);
    uStack_d88 = *(undefined8 *)(param_1 + 0x158);
    local_d80 = *(undefined8 *)(param_1 + 0x160);
    uStack_d78 = *(undefined8 *)(param_1 + 0x168);
  }
  FUN_00930240(local_d10,&DAT_01d38550);
  FUN_00930240(auStack_ce0,&DAT_01d38550);
  FUN_00930240(auStack_cb0,&DAT_01d38550);
  FUN_00930240(auStack_c80,&DAT_01d38550);
  local_ea0 = (undefined1 *)0x0;
  local_c38 = 0x100000050;
  local_c20 = 0x3f8000003f800000;
  local_b90 = 0xbe8c985fbe8c985f;
  local_b88 = 0xbe8c985fbe8c985f;
  local_b20 = 0xbe8c985fbe8c985f;
  local_b18 = 0xbe8c985fbe8c985f;
  local_b00 = 0x3f8000003f800000;
  local_ae0 = 0x3f80000000000000;
  local_a9c = 2;
  local_c40 = 0;
  local_c48 = 0;
  local_c50 = 0;
  local_c30 = 0;
  local_b80 = 0xbe8c985f;
  local_b10 = 0xbe8c985f;
  local_ad8 = 0x3f800000;
  local_a98 = 0;
  local_a90 = 0;
  local_a70 = 0x3f800000;
  uStack_b28 = _UNK_01d4a138;
  local_b30 = _DAT_01d4a130;
  uStack_ae8 = _UNK_01d4a138;
  local_af0 = _DAT_01d4a130;
  uStack_a78 = 0;
  local_a80 = 0;
  uStack_248 = _UNK_01d4a138;
  local_250 = _DAT_01d4a130;
  uStack_238 = _UNK_01d4a138;
  local_240 = _DAT_01d4a130;
  uStack_228 = _UNK_01d4a138;
  local_230 = _DAT_01d4a130;
  uStack_218 = _UNK_01d4a138;
  local_220 = _DAT_01d4a130;
  uStack_208 = _UNK_01d4a138;
  local_210 = _DAT_01d4a130;
  local_eb0 = 0xcbf29ce484222645;
  puStack_ea8 = &DAT_01d38550;
  uStack_c08 = _UNK_01d4a138;
  local_c10 = _DAT_01d4a130;
  uStack_bf8 = _UNK_01d4a138;
  local_c00 = _DAT_01d4a130;
  uStack_be8 = 0;
  local_bf0 = 0;
  uStack_bd8 = _UNK_01d4a138;
  local_be0 = _DAT_01d4a130;
  uStack_bc8 = _UNK_01d4a138;
  local_bd0 = _DAT_01d4a130;
  uStack_bb8 = _UNK_01d4a138;
  local_bc0 = _DAT_01d4a130;
  uStack_ba8 = _UNK_01d4a138;
  local_bb0 = _DAT_01d4a130;
  uStack_b98 = _UNK_01d4a138;
  local_ba0 = _DAT_01d4a130;
  uStack_b68 = _UNK_01d4a138;
  local_b70 = _DAT_01d4a130;
  uStack_b58 = _UNK_01d4a138;
  local_b60 = _DAT_01d4a130;
  uStack_b48 = _UNK_01d4a138;
  local_b50 = _DAT_01d4a130;
  uStack_b38 = _UNK_01d4a138;
  local_b40 = _DAT_01d4a130;
  local_ab4 = 0;
  local_abc = 0;
  local_ac4 = 0;
  local_ad4 = 0;
  local_acc = 0;
  local_260 = 1;
  local_aa0[0] = 0;
  local_200 = 0;
  FUN_006cf0a0(&local_1f8,&local_eb0);
  puVar14 = *(uint **)(*(long *)(param_1 + 0x2e8) + 400);
  piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
  uVar15 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar15);
  uVar20 = (ulong)*puVar2;
  puVar2 = (uint *)((long)puVar2 + uVar20);
  puVar11 = puVar2 + 1;
  uVar12 = (ulong)*puVar2;
  if (uVar12 != 0) {
    puVar2 = puVar11 + uVar12;
    lVar24 = (long)puVar14 + uVar20 + uVar15 + (ulong)*puVar14 + 0xd;
    do {
      puVar14 = (uint *)((long)puVar11 + (ulong)*puVar11);
      puVar16 = (ushort *)((long)puVar14 - (long)(int)*puVar14);
      if (*puVar16 < 5) {
        if (uVar3 == 0) goto LAB_00fb2598;
      }
      else {
        uVar29 = 0;
        if ((ulong)puVar16[2] != 0) {
          uVar29 = (uint)*(char *)((long)puVar14 + (ulong)puVar16[2]);
        }
        if (uVar29 == uVar3) {
LAB_00fb2598:
          puVar18 = (uint *)((long)puVar14 + (ulong)puVar16[3]);
          uVar15 = (ulong)*puVar18;
          puVar18 = (uint *)((long)puVar18 + uVar15);
          puVar17 = puVar18 + 1;
          uVar12 = (ulong)*puVar18;
          if (uVar12 != 0) {
            lVar25 = lVar24 + uVar15 + puVar16[3] + (ulong)*puVar11;
            puVar18 = puVar17;
            do {
              puVar19 = puVar18 + 1;
              uVar15 = 0xcbf29ce484222645;
              bVar4 = *(byte *)((long)puVar19 + (ulong)*puVar18);
              if (bVar4 != 0) {
                uVar15 = 0xcbf29ce484222645;
                pbVar21 = (byte *)(lVar25 + (ulong)*puVar18);
                do {
                  uVar15 = (uVar15 ^ bVar4) * 0x100000001b3;
                  bVar4 = *pbVar21;
                  pbVar21 = pbVar21 + 1;
                } while (bVar4 != 0);
              }
              if (uVar15 == *(ulong *)(param_1 + 0x3f0)) goto LAB_00fb2658;
              lVar25 = lVar25 + 4;
              puVar18 = puVar19;
            } while (puVar19 != puVar17 + uVar12);
          }
        }
      }
      puVar11 = puVar11 + 1;
      lVar24 = lVar24 + 4;
    } while (puVar11 != puVar2);
  }
  puVar11 = *(uint **)(*(long *)(param_1 + 0x1d8) + 400);
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  puVar14 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
  if (uVar3 < *puVar14) {
    puVar14 = puVar14 + (ulong)uVar3 + 1;
    puVar14 = (uint *)((long)puVar14 + (ulong)*puVar14);
LAB_00fb2658:
    if (puVar14 != (uint *)0x0) {
      uVar12 = (ulong)(int)*puVar14;
      lVar24 = 0;
      lVar13 = -uVar12;
      lVar25 = -4;
      puVar11 = puVar14;
      do {
        puVar11 = puVar11 + 1;
        puVar2 = (uint *)((long)puVar14 + (ulong)*(ushort *)((long)puVar14 + lVar13 + 8));
        if (lVar25 + 4U < (ulong)*(uint *)((long)puVar2 + (ulong)*puVar2)) {
          uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)(int)uVar12));
          lVar13 = uVar12 + *(uint *)((long)puVar14 + uVar12);
          local_e58 = (long)puVar11 + lVar13 + (ulong)*(uint *)((long)puVar11 + lVar13) + 4;
          FUN_008d4da0(&local_eb0,&local_e58);
          if ((*(long *)((long)local_d10 + lVar24 + 0x18) != 0) &&
             (*(long *)((long)local_d10 + lVar24) != 0)) {
            (**(code **)(*(long *)(*(long *)((long)local_d10 + lVar24) + 0x48) + 0x18))();
            *(undefined8 *)((long)local_d10 + lVar24) = 0;
          }
          lVar13 = *(long *)((long)local_d10 + lVar24 + 0x20);
          *(undefined8 *)((long)local_d10 + lVar24) = 0;
          *(undefined8 *)((long)local_d10 + lVar24 + 8) = 0xcbf29ce484222645;
          *(undefined1 **)((long)local_d10 + lVar24 + 0x10) = &DAT_01d38550;
          *(undefined8 *)((long)local_d10 + lVar24 + 0x18) = 0;
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
            *(undefined8 *)((long)local_d10 + lVar24 + 0x20) = 0;
          }
          lVar13 = local_e90;
          *(undefined1 **)((long)local_d10 + lVar24 + 8) = puStack_ea8;
          *(undefined1 **)((long)local_d10 + lVar24 + 0x10) = local_ea0;
          local_e90 = 0;
          *(ulong *)((long)local_d10 + lVar24 + 0x18) = uStack_e98;
          *(long *)((long)local_d10 + lVar24 + 0x20) = lVar13;
          *(undefined4 *)((long)local_ce8 + lVar24) = (undefined4)uStack_e88;
          if ((uStack_e98 != 0) && (*(long *)((long)local_d10 + lVar24) != 0)) {
            (**(code **)(*(long *)(*(long *)((long)local_d10 + lVar24) + 0x48) + 0x18))();
          }
          *(undefined8 *)((long)local_d10 + lVar24) = local_eb0;
          local_eb0 = 0;
          puStack_ea8 = (undefined1 *)0xcbf29ce484222645;
          local_ea0 = &DAT_01d38550;
          uStack_e98 = 0;
          if (local_e90 != 0) {
            (**(code **)(*(long *)(local_e90 + 0x48) + 0x18))();
            local_e90 = 0;
          }
          uVar12 = (ulong)*puVar14;
        }
        lVar13 = -(long)(int)uVar12;
        lVar24 = lVar24 + 0x30;
        lVar25 = lVar25 + 1;
      } while (lVar24 != 0xc0);
      uVar26 = 0;
      uVar27 = 0;
      if (10 < *(ushort *)((long)puVar14 + lVar13)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 + lVar13))[5];
        uVar27 = 0;
        if (uVar12 != 0) {
          uVar27 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      uVar28 = 0;
      if (0xc < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[6];
        uVar28 = 0;
        if (uVar12 != 0) {
          uVar28 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      local_c50 = CONCAT44(uVar28,uVar27);
      uVar27 = 0;
      if (0xe < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[7];
        uVar27 = 0;
        if (uVar12 != 0) {
          uVar27 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      uVar28 = 0;
      if (0x10 < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[8];
        uVar28 = 0;
        if (uVar12 != 0) {
          uVar28 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      local_c48 = CONCAT44(uVar28,uVar27);
      uVar27 = 0;
      if (0x12 < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[9];
        uVar27 = 0;
        if (uVar12 != 0) {
          uVar27 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      if ((0x14 < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) &&
         (uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[10], uVar12 != 0)) {
        uVar26 = *(undefined4 *)((long)puVar14 + uVar12);
      }
      local_c40 = CONCAT44(uVar26,uVar27);
      if (*(ushort *)((long)puVar14 - (long)(int)*puVar14) < 0x17) {
        uVar29 = 0;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0xb];
        uVar29 = 0;
        if (uVar12 != 0) {
          uVar29 = *(uint *)((long)puVar14 + uVar12);
        }
      }
      if ((*(ushort *)((long)puVar14 - (long)(int)*puVar14) < 0x19) ||
         (uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0xc], uVar12 == 0)) {
        local_c38 = (ulong)uVar29;
      }
      else {
        local_c38 = CONCAT44(*(undefined4 *)((long)puVar14 + uVar12),uVar29);
      }
      local_c30 = 0;
      if ((int)param_2 < 0xf) {
        local_c30 = 0;
        if ((0x1a < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) &&
           (uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0xd], uVar12 != 0)) {
          local_c30 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      if (*(ushort *)((long)puVar14 - (long)(int)*puVar14) < 0x35) {
        bVar7 = false;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x1a];
        bVar7 = false;
        if (uVar12 != 0) {
          bVar7 = *(char *)((long)puVar14 + uVar12) != '\0';
        }
      }
      if (*(ushort *)((long)puVar14 - (long)(int)*puVar14) < 0x37) {
        bVar8 = false;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x1b];
        bVar8 = false;
        if (uVar12 != 0) {
          bVar8 = *(char *)((long)puVar14 + uVar12) != '\0';
        }
      }
      if (*(ushort *)((long)puVar14 - (long)(int)*puVar14) < 0x39) {
        bVar9 = false;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x1c];
        bVar9 = false;
        if (uVar12 != 0) {
          bVar9 = *(char *)((long)puVar14 + uVar12) != '\0';
        }
      }
      if (*(ushort *)((long)puVar14 - (long)(int)*puVar14) < 0x3b) {
        bVar10 = false;
      }
      else {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x1d];
        bVar10 = false;
        if (uVar12 != 0) {
          bVar10 = *(char *)((long)puVar14 + uVar12) != '\0';
        }
      }
      local_200 = CONCAT13(bVar10,CONCAT12(bVar9,CONCAT11(bVar8,bVar7)));
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x1c - (long)(int)*puVar14)));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      uVar26 = 0;
      uVar27 = 0;
      if (4 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        uVar27 = 0;
        if (uVar12 != 0) {
          uVar27 = *(undefined4 *)((long)piVar1 + uVar12);
        }
      }
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x1c - (long)(int)*puVar14)));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      uVar28 = 0;
      if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
        uVar28 = 0;
        if (uVar12 != 0) {
          uVar28 = *(undefined4 *)((long)piVar1 + uVar12);
        }
      }
      local_c20 = CONCAT44(uVar28,uVar27);
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x1c - (long)(int)*puVar14)));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      puVar16 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar5 = *puVar16;
      uVar27 = 0;
      uVar29 = 0;
      if (8 < uVar5) {
        uVar26 = 0;
        uVar27 = 0;
        if ((ulong)puVar16[4] != 0) {
          uVar27 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[4]);
        }
        if (uVar5 < 0xb) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          uVar26 = 0;
          if ((ulong)puVar16[5] != 0) {
            uVar26 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[5]);
          }
          if ((0xc < uVar5) && ((ulong)puVar16[6] != 0)) {
            uVar29 = *(uint *)((long)piVar1 + (ulong)puVar16[6]);
          }
        }
      }
      local_c10 = CONCAT44(uVar26,uVar27);
      uStack_c08 = (ulong)uVar29;
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x1e - (long)(int)*puVar14)));
      uStack_bf8 = (ulong)*(uint *)((long)puVar11 + (ulong)*puVar11 + 0xc);
      local_c00 = *(undefined8 *)((long)puVar11 + (ulong)*puVar11 + 4);
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x20 - (long)(int)*puVar14)));
      uStack_be8 = (ulong)*(uint *)((long)puVar11 + (ulong)*puVar11 + 0xc);
      local_bf0 = *(undefined8 *)((long)puVar11 + (ulong)*puVar11 + 4);
      lVar24 = (long)puVar14 - (long)(int)*puVar14;
      puVar11 = (uint *)((long)puVar14 + (ulong)*(ushort *)(lVar24 + 0x22));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      iVar6 = *piVar1;
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
      if (4 < *(uint *)((long)puVar11 + (ulong)*puVar11)) {
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
        if (4 < *(uint *)((long)puVar2 + (ulong)*puVar2)) {
          puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
          if ((4 < *(uint *)((long)puVar18 + (ulong)*puVar18)) &&
             (puVar17 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (10 - (long)iVar6))),
             4 < *(uint *)((long)puVar17 + (ulong)*puVar17))) {
            uStack_bd8 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 4);
            local_be0 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 4),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 4));
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar11 = (uint *)((long)piVar1 +
                              (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            iVar6 = *piVar1;
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_bd0 = CONCAT44(*(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 8),
                                 *(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 8));
            uStack_bc8 = (ulong)*(uint *)((long)puVar17 + (ulong)*puVar17 + 8);
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1))
                             );
            local_b90 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 8),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 4));
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            iVar6 = *piVar1;
            puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_bc0 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0xc),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0xc));
            uStack_bb8 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0xc);
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar11 = (uint *)((long)piVar1 +
                              (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            iVar6 = *piVar1;
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_bb0 = CONCAT44(*(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 0x10),
                                 *(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x10));
            uStack_ba8 = (ulong)*(uint *)((long)puVar17 + (ulong)*puVar17 + 0x10);
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1))
                             );
            local_b88 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x10),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0xc));
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            iVar6 = *piVar1;
            puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_ba0 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x14),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x14));
            uStack_b98 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0x14);
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x22 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar11 = (uint *)((long)piVar1 +
                              (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
            local_b80 = *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x14);
            lVar24 = (long)puVar14 - (long)(int)*puVar14;
          }
        }
      }
      puVar11 = (uint *)((long)puVar14 + (ulong)*(ushort *)(lVar24 + 0x24));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      iVar6 = *piVar1;
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
      if (4 < *(uint *)((long)puVar11 + (ulong)*puVar11)) {
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
        if (4 < *(uint *)((long)puVar2 + (ulong)*puVar2)) {
          puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
          if ((4 < *(uint *)((long)puVar18 + (ulong)*puVar18)) &&
             (puVar17 = (uint *)((long)piVar1 +
                                (ulong)*(ushort *)((long)piVar1 + (10 - (long)iVar6))),
             4 < *(uint *)((long)puVar17 + (ulong)*puVar17))) {
            uStack_b68 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 4);
            local_b70 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 4),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 4));
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar11 = (uint *)((long)piVar1 +
                              (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            iVar6 = *piVar1;
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_b60 = CONCAT44(*(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 8),
                                 *(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 8));
            uStack_b58 = (ulong)*(uint *)((long)puVar17 + (ulong)*puVar17 + 8);
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1))
                             );
            local_b20 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 8),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 4));
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            iVar6 = *piVar1;
            puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_b50 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0xc),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0xc));
            uStack_b48 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0xc);
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar11 = (uint *)((long)piVar1 +
                              (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            iVar6 = *piVar1;
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar17 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_b40 = CONCAT44(*(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 0x10),
                                 *(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x10));
            uStack_b38 = (ulong)*(uint *)((long)puVar17 + (ulong)*puVar17 + 0x10);
            puVar2 = (uint *)((long)puVar14 +
                             (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1))
                             );
            local_b18 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x10),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0xc));
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            iVar6 = *piVar1;
            puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)iVar6)));
            puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)iVar6)));
            puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)iVar6)));
            local_b30 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x14),
                                 *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x14));
            uStack_b28 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0x14);
            puVar11 = (uint *)((long)puVar14 +
                              (ulong)*(ushort *)((long)puVar14 + (0x24 - (long)(int)*puVar14)));
            piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
            puVar11 = (uint *)((long)piVar1 +
                              (ulong)*(ushort *)((long)piVar1 + (10 - (long)*piVar1)));
            local_b10 = *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x14);
            lVar24 = (long)puVar14 - (long)(int)*puVar14;
          }
        }
      }
      puVar11 = (uint *)((long)puVar14 + (ulong)*(ushort *)(lVar24 + 0x26));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      local_ad8 = 0;
      uVar26 = 0;
      if (4 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        uVar26 = 0;
        if (uVar12 != 0) {
          uVar26 = *(undefined4 *)((long)piVar1 + uVar12);
        }
      }
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x26 - (long)(int)*puVar14)));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      uVar27 = 0;
      if (6 < *(ushort *)((long)piVar1 - (long)*piVar1)) {
        uVar12 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
        uVar27 = 0;
        if (uVar12 != 0) {
          uVar27 = *(undefined4 *)((long)piVar1 + uVar12);
        }
      }
      local_b00 = CONCAT44(uVar27,uVar26);
      puVar11 = (uint *)((long)puVar14 +
                        (ulong)*(ushort *)((long)puVar14 + (0x26 - (long)(int)*puVar14)));
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      puVar16 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar5 = *puVar16;
      uVar27 = 0;
      uVar26 = 0;
      uStack_ae8 = 0;
      if (8 < uVar5) {
        uVar27 = 0;
        uVar26 = 0;
        if ((ulong)puVar16[4] != 0) {
          uVar26 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[4]);
        }
        if (uVar5 < 0xb) {
          uStack_ae8 = 0;
        }
        else {
          uStack_ae8 = 0;
          uVar27 = 0;
          if ((ulong)puVar16[5] != 0) {
            uVar27 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[5]);
          }
          if ((0xc < uVar5) && ((ulong)puVar16[6] != 0)) {
            uStack_ae8 = (ulong)*(uint *)((long)piVar1 + (ulong)puVar16[6]);
          }
        }
      }
      uVar28 = 0;
      local_af0 = CONCAT44(uVar27,uVar26);
      if (0x28 < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x14];
        uVar28 = 0;
        if (uVar12 != 0) {
          uVar28 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      uVar26 = 0;
      if (0x2a < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) {
        uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x15];
        uVar26 = 0;
        if (uVar12 != 0) {
          uVar26 = *(undefined4 *)((long)puVar14 + uVar12);
        }
      }
      local_ae0 = CONCAT44(uVar26,uVar28);
      if ((0x2c < *(ushort *)((long)puVar14 - (long)(int)*puVar14)) &&
         (uVar12 = (ulong)((ushort *)((long)puVar14 - (long)(int)*puVar14))[0x16], uVar12 != 0)) {
        local_ad8 = *(undefined4 *)((long)puVar14 + uVar12);
      }
      lVar24 = (long)puVar14 - (long)(int)*puVar14;
      puVar11 = (uint *)((long)puVar14 + (ulong)*(ushort *)(lVar24 + 0x2e));
      if ((4 < *(uint *)((long)puVar11 + (ulong)*puVar11)) &&
         (puVar2 = (uint *)((long)puVar14 + (ulong)*(ushort *)(lVar24 + 0x30)),
         4 < *(uint *)((long)puVar2 + (ulong)*puVar2))) {
        puVar2 = (uint *)((long)puVar14 +
                         (ulong)*(ushort *)((long)puVar14 + (0x30 - (long)(int)*puVar14)));
        puVar18 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x2e - (long)(int)*puVar14)));
        local_ad4 = CONCAT44(*(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 8),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 4));
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x30 - (long)(int)*puVar14)));
        puVar18 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x2e - (long)(int)*puVar14)));
        puVar17 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x30 - (long)(int)*puVar14)));
        local_abc = CONCAT44(*(undefined4 *)((long)puVar17 + (ulong)*puVar17 + 0xc),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 8));
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x2e - (long)(int)*puVar14)));
        local_acc = CONCAT44(*(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x10),
                             *(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 0xc));
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x30 - (long)(int)*puVar14)));
        puVar18 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x2e - (long)(int)*puVar14)));
        local_ac4 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 4),
                             *(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 0x14));
        puVar2 = (uint *)((long)puVar14 +
                         (ulong)*(ushort *)((long)puVar14 + (0x30 - (long)(int)*puVar14)));
        local_ab4 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x14),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x10));
        lVar24 = (long)puVar14 - (long)(int)*puVar14;
      }
      puVar16 = (ushort *)(lVar24 + 0x32);
      puVar2 = (uint *)((long)puVar14 + (ulong)*puVar16);
      puVar11 = (uint *)((long)puVar2 + (ulong)*puVar2 + 4);
      uVar12 = (ulong)*puVar11;
      piVar1 = (int *)((long)puVar11 + uVar12);
      lVar24 = (long)*piVar1;
      puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - lVar24)));
      if (((4 < *(uint *)((long)puVar11 + (ulong)*puVar11)) &&
          (puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x10 - lVar24))),
          4 < *(uint *)((long)puVar11 + (ulong)*puVar11))) &&
         (puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x12 - lVar24))),
         4 < *(uint *)((long)puVar11 + (ulong)*puVar11))) {
        lVar25 = uVar12 + *puVar2 + 4;
        lVar24 = lVar25 - lVar24;
        puVar11 = (uint *)((long)puVar2 + (ulong)*(ushort *)((long)puVar2 + lVar24 + 0xe) + lVar25);
        puVar18 = (uint *)((long)puVar2 + (ulong)*(ushort *)((long)puVar2 + lVar24 + 0x10) + lVar25)
        ;
        puVar2 = (uint *)((long)puVar2 + (ulong)*(ushort *)((long)puVar2 + lVar24 + 0x12) + lVar25);
        local_eb0 = CONCAT44(*(undefined4 *)((long)puVar18 + (ulong)*puVar18 + 4),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 4));
        puStack_ea8 = (undefined1 *)(ulong)*(uint *)((long)puVar2 + (ulong)*puVar2 + 4);
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x32 - (long)(int)*puVar14)));
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11 + 4);
        piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
        iVar6 = *piVar1;
        puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - (long)iVar6)));
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x10 - (long)iVar6)));
        puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)iVar6)));
        local_ea0 = (undefined1 *)
                    CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 8),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 8));
        uStack_e98 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 8);
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x32 - (long)(int)*puVar14)));
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11 + 4);
        piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
        iVar6 = *piVar1;
        puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - (long)iVar6)));
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x10 - (long)iVar6)));
        puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)iVar6)));
        local_e90 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0xc),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0xc));
        uStack_e88 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0xc);
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x32 - (long)(int)*puVar14)));
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11 + 4);
        piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
        iVar6 = *piVar1;
        puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - (long)iVar6)));
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x10 - (long)iVar6)));
        puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)iVar6)));
        local_e80 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x10),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x10));
        uStack_e78 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0x10);
        puVar11 = (uint *)((long)puVar14 +
                          (ulong)*(ushort *)((long)puVar14 + (0x32 - (long)(int)*puVar14)));
        puVar11 = (uint *)((long)puVar11 + (ulong)*puVar11 + 4);
        piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
        iVar6 = *piVar1;
        puVar11 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0xe - (long)iVar6)));
        puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x10 - (long)iVar6)));
        puVar18 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (0x12 - (long)iVar6)));
        local_e70 = CONCAT44(*(undefined4 *)((long)puVar2 + (ulong)*puVar2 + 0x14),
                             *(undefined4 *)((long)puVar11 + (ulong)*puVar11 + 0x14));
        uStack_e68 = (ulong)*(uint *)((long)puVar18 + (ulong)*puVar18 + 0x14);
        puVar16 = (ushort *)((long)puVar14 + (0x32 - (long)(int)*puVar14));
      }
      puVar11 = (uint *)((long)((long)puVar14 + (ulong)*puVar16) +
                        (ulong)*(uint *)((long)puVar14 + (ulong)*puVar16) + 4);
      piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
      puVar16 = (ushort *)((long)piVar1 - (long)*piVar1);
      uVar5 = *puVar16;
      if (uVar5 < 5) {
        lVar24 = 0;
LAB_00fb3924:
        uVar26 = 0;
LAB_00fb3928:
        uVar27 = 0;
LAB_00fb392c:
        uVar30 = 0;
        uVar28 = uVar30;
      }
      else {
        if ((ulong)puVar16[2] == 0) {
          lVar24 = 0;
        }
        else {
          lVar24 = (long)*(char *)((long)piVar1 + (ulong)puVar16[2]);
        }
        if (uVar5 < 7) goto LAB_00fb3924;
        uVar26 = 0;
        if ((ulong)puVar16[3] != 0) {
          uVar26 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[3]);
        }
        if (uVar5 < 9) goto LAB_00fb3928;
        uVar27 = 0;
        if ((ulong)puVar16[4] != 0) {
          uVar27 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[4]);
        }
        if (uVar5 < 0xb) goto LAB_00fb392c;
        uVar30 = 0;
        if ((ulong)puVar16[5] != 0) {
          uVar30 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[5]);
        }
        uVar28 = 0;
        if ((0xc < uVar5) && ((ulong)puVar16[6] != 0)) {
          uVar28 = *(undefined4 *)((long)piVar1 + (ulong)puVar16[6]);
        }
      }
      FUN_00dab5a0(uVar26,uVar27,uVar30,uVar28,local_aa0,1,lVar24,&local_eb0);
      lVar24 = (long)(int)uVar3;
      local_1f8 = local_1d0[lVar24 * 3];
      local_1f0 = local_1d0[lVar24 * 3 + 1];
      local_1e8 = local_1d0[lVar24 * 3 + 2];
      lVar24 = *(long *)(param_1 + 0x3f8);
      *(undefined8 *)(param_1 + 0x3f8) = 0;
      if (lVar24 != 0) {
        (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))();
      }
      plVar23 = *(long **)(param_1 + 0x80);
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar24 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar24 + *(ulong *)(lVar24 + 0x80) * 8) = plVar23;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + 1;
      lVar25 = (**(code **)(*plVar23 + 0x10))(plVar23,0x2680,0x10);
      if (lVar25 == 0) {
        (**(code **)(*plVar23 + 0xb8))(plVar23);
      }
      FUN_00fb49c0(lVar25,&local_e50);
      *(long **)(lVar25 + 8) = plVar23;
      *(long *)(lVar25 + 0x10) = lVar25;
      *(undefined8 *)(lVar25 + 0x18) = 0x2680;
      *(undefined8 *)(lVar25 + 0x20) = 0x10;
      *(long *)(lVar24 + 0x80) = *(long *)(lVar24 + 0x80) + -1;
      if (lVar25 != 0) {
        (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x3f8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x3f8) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x3f8) = 0;
      }
      *(long *)(param_1 + 0x3f8) = lVar25;
      FUN_00fb4740(lVar25,uVar3,param_3 & 1);
      uVar22 = 1;
      *(uint *)(param_1 + 0x410) = param_2;
      *(undefined4 *)(param_1 + 0x408) = 1;
      goto LAB_00fb3a4c;
    }
  }
  uVar22 = 0;
LAB_00fb3a4c:
  FUN_00fb3a90(&local_e50);
  return uVar22;
}


