/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0140a1c0; name: FUN_0140a1c0
 */


void FUN_0140a1c0(long param_1)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  void *__src;
  undefined8 uVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160 [4];
  undefined1 auStack_140 [8];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined4 local_134;
  undefined4 uStack_130;
  byte local_12c;
  undefined1 auStack_120 [44];
  undefined4 local_f4;
  undefined4 local_f0;
  byte local_ec;
  int local_e0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78 [3];
  
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_00ff86a0(local_160,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar8 = *(long *)(local_160[0] + 0x60);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (local_160[0] != 0) {
    (**(code **)(*(long *)(local_160[0] + 0x48) + 0x18))();
    local_160[0] = 0;
  }
  FUN_00ff86a0(local_160,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),1);
  lVar9 = *(long *)(local_160[0] + 0x60);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (local_160[0] != 0) {
    (**(code **)(*(long *)(local_160[0] + 0x48) + 0x18))();
    local_160[0] = 0;
  }
  FUN_00ff86a0(local_160,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),2);
  lVar10 = *(long *)(local_160[0] + 0x60);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (local_160[0] != 0) {
    (**(code **)(*(long *)(local_160[0] + 0x48) + 0x18))();
    local_160[0] = 0;
  }
  lVar12 = *(long *)(param_1 + 0x2b0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar12 + 0x2e0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  FUN_014c7840(lVar11,0,lVar9,*(undefined4 *)(param_1 + 0x5cc),0);
  local_78[0] = lVar8;
  if (lVar8 == 0) {
    FUN_01409560(param_1,0x2cfed057641a5081,0xb86e81016bd246b0,local_78,0);
  }
  else {
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_01409560(param_1,0x2cfed057641a5081,0xb86e81016bd246b0,local_78,0);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_78[0] = 0;
  }
  FUN_014ca220(lVar11,0,*(int *)(param_1 + 0x5cc) + 1,3,2,1);
  local_80 = lVar8;
  if (lVar8 == 0) {
    FUN_01409560(param_1,0x548e1946f231ba0a,0x80b5839dd1aafe55,&local_80,0);
  }
  else {
    plVar13 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_01409560(param_1,0x548e1946f231ba0a,0x80b5839dd1aafe55,&local_80,0);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_80 = 0;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  snprintf((char *)&local_c0,0x40,"msg_ui_pokecamp_cookinfo_01_%02d",*(int *)(param_1 + 0x5cc) + 1);
  local_c8 = lVar10;
  if ((byte)local_c0 == 0) {
    uVar14 = 0xcbf29ce484222645;
    if (lVar10 == 0) goto LAB_0140a550;
LAB_0140a4f4:
    plVar13 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_01409560(param_1,uVar14,0x49aa9227c2de343e,&local_c8,0);
    (**(code **)(*plVar13 + 0x18))(plVar13);
    local_c8 = 0;
  }
  else {
    uVar14 = 0xcbf29ce484222645;
    pbVar6 = (byte *)((ulong)&local_c0 | 1);
    bVar1 = (byte)local_c0;
    do {
      uVar14 = (uVar14 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    if (lVar10 != 0) goto LAB_0140a4f4;
LAB_0140a550:
    FUN_01409560(param_1,uVar14,0x49aa9227c2de343e,&local_c8,0);
  }
  __src = (void *)FUN_0152aa30(lVar7,*(undefined4 *)(param_1 + 0x5cc));
  memcpy(local_160,__src,0x98);
  FUN_014ca220(lVar11,0,local_138,2,2,1);
  FUN_014ca220(lVar11,1,local_137,2,2,1);
  FUN_014ca220(lVar11,2,local_136,2,2,1);
  lVar12 = *(long *)(param_1 + 0x2b0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(lVar12 + 0x2e8);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  FUN_0077d520(lVar15,local_160);
  FUN_014c8310(lVar11,4,lVar15,uStack_130,local_134);
  FUN_014ca220(lVar11,6,local_e0,3,0,1);
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar12 == 0) {
    lVar12 = FUN_01009790(0,auStack_140);
  }
  else {
    plVar13 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    lVar12 = FUN_01009790(lVar12,auStack_140);
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  if (lVar12 != -0x340d631b7bddd9bb) {
    FUN_014c9f10(lVar11,3,lVar12);
  }
  local_1a0 = lVar8;
  local_198 = lVar8;
  if (local_e0 < 2) {
    if (local_12c < 2) {
      local_190 = lVar8;
      if (lVar8 == 0) {
        uVar4 = 0x57e9434c1b0d8319;
        plVar13 = &local_190;
        goto LAB_0140aa24;
      }
      plVar13 = &local_190;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
      uVar4 = 0x57e9434c1b0d8319;
      plVar5 = &local_190;
    }
    else {
      local_188 = lVar8;
      if (lVar8 == 0) {
        uVar4 = 0x57e94c4c1b0d9264;
        plVar13 = &local_188;
LAB_0140aa24:
        FUN_01409560(param_1,uVar4,0x357c0c3d9fa65f2f,plVar13,0);
        goto LAB_0140abb0;
      }
      plVar13 = &local_188;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
      uVar4 = 0x57e94c4c1b0d9264;
      plVar5 = &local_188;
    }
    FUN_01409560(param_1,uVar4,0x357c0c3d9fa65f2f,plVar5,0);
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    *plVar13 = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x2b0);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar16 = *(long *)(lVar12 + 0x2e8);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    FUN_0077d520(lVar16,auStack_120);
    FUN_014c8310(lVar11,5,lVar16,local_f0,local_f4);
    if (local_12c < 2) {
      if (local_ec < 2) {
        if (lVar8 == 0) {
          uVar4 = 0x57e9414c1b0d7fb3;
          plVar13 = &local_180;
          local_180 = 0;
          goto LAB_0140aad8;
        }
        plVar13 = (long *)(lVar8 + 0x48);
        local_180 = lVar8;
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_01409560(param_1,0x57e9414c1b0d7fb3,0x357c0c3d9fa65f2f,&local_180,0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        local_180 = 0;
      }
      else {
        if (lVar8 == 0) {
          uVar4 = 0x57e9424c1b0d8166;
          plVar13 = &local_178;
          local_178 = 0;
          goto LAB_0140aad8;
        }
        plVar13 = (long *)(lVar8 + 0x48);
        local_178 = lVar8;
        (**(code **)(*plVar13 + 0x10))(plVar13);
        FUN_01409560(param_1,0x57e9424c1b0d8166,0x357c0c3d9fa65f2f,&local_178,0);
        (**(code **)(*plVar13 + 0x18))(plVar13);
        local_178 = 0;
      }
    }
    else if (local_ec < 2) {
      if (lVar8 == 0) {
        uVar4 = 0x57e94d4c1b0d9417;
        plVar13 = &local_170;
        local_170 = 0;
        goto LAB_0140aad8;
      }
      plVar13 = (long *)(lVar8 + 0x48);
      local_170 = lVar8;
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_01409560(param_1,0x57e94d4c1b0d9417,0x357c0c3d9fa65f2f,&local_170,0);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      local_170 = 0;
    }
    else if (lVar8 == 0) {
      uVar4 = 0x57ecca4c1b109e55;
      plVar13 = &local_168;
      local_168 = 0;
LAB_0140aad8:
      FUN_01409560(param_1,uVar4,0x357c0c3d9fa65f2f,plVar13,0);
    }
    else {
      plVar13 = (long *)(lVar8 + 0x48);
      local_168 = lVar8;
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_01409560(param_1,0x57ecca4c1b109e55,0x357c0c3d9fa65f2f,&local_168,0);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      local_168 = 0;
    }
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
    if (lVar8 == 0) {
LAB_0140abb0:
      FUN_01409560(param_1,0x291345340dbc0acc,0x194019119d7372aa,&local_198,0);
      FUN_01409560(param_1,0x789574a3a68c8687,0xe6e9feb58b7b128f,&local_1a0,0);
      goto LAB_0140ac14;
    }
  }
  plVar13 = (long *)(lVar8 + 0x48);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  FUN_01409560(param_1,0x291345340dbc0acc,0x194019119d7372aa,&local_198,0);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  local_198 = 0;
  (**(code **)(*plVar13 + 0x10))(plVar13);
  FUN_01409560(param_1,0x789574a3a68c8687,0xe6e9feb58b7b128f,&local_1a0,0);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  local_1a0 = 0;
LAB_0140ac14:
  sVar2 = *(short *)(param_1 + 0x5d4);
  local_78[1] = 0x55007dcba30e167e;
  lVar12 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_78 + 1);
  if (sVar2 == 0) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
    local_78[1] = 0xa26805c8bc954e36;
    lVar12 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_78 + 1);
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  else {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
    local_78[1] = 0xa26805c8bc954e36;
    lVar12 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_78 + 1);
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    local_218 = (code *)0x0;
    FUN_0141bc80(param_1 + 0x5f0,*(undefined2 *)(param_1 + 0x5d4),2,&local_220);
    pcVar3 = local_218;
    if (local_218 != (code *)0x0) {
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      local_218 = (code *)0x0;
      (*pcVar3)(&local_200);
    }
  }
  lVar12 = FUN_0152aa50(lVar7,*(undefined4 *)(param_1 + 0x5cc));
  uVar17 = NEON_ucvtf(*(undefined4 *)(lVar12 + 0x8c));
  FUN_00ffd450(uVar17,param_1 + 0x100,"anime_pattern_lv_medal");
  if (*(int *)(param_1 + 0x5cc) == 0x96) {
    uVar17 = 1;
  }
  else {
    uVar17 = *(undefined4 *)(param_1 + 0x5e0);
  }
  FUN_0140bf30(param_1 + 0x9e0,*(int *)(param_1 + 0x5cc),uVar17);
  (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


