/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148d470; name: FUN_0148d470
 */


void FUN_0148d470(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  char *pcVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong local_70 [2];
  
  lVar20 = *(long *)(param_1 + 0x2b0);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  lVar25 = *(long *)(lVar20 + 0x2e0);
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  uVar13 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5e0));
  FUN_00ff86a0(local_70,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar20 = *(long *)(local_70[0] + 0x60);
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  lVar21 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
  }
  bVar3 = FUN_0087d610(uVar13,2);
  local_90 = lVar20;
  local_88 = lVar20;
  if ((bVar3 & 1) == 0) {
    FUN_014c84c0(lVar25,0,uVar13);
    local_80 = lVar20;
    if (lVar20 == 0) {
      plVar22 = &local_80;
      uVar16 = 0x619e252ac53d2974;
      goto LAB_0148d710;
    }
    plVar19 = &local_80;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
    plVar22 = &local_80;
    uVar16 = 0x619e252ac53d2974;
LAB_0148d668:
    plVar23 = (long *)(lVar20 + 0x48);
    FUN_0148d250(param_1,uVar16,0xf97db3efb146909,plVar22);
    (**(code **)(*plVar23 + 0x18))(plVar23);
    *plVar19 = 0;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(plVar23);
    FUN_0148d250(param_1,0x619e262ac53d2b27,0x3fc1ceaaa08d346f,&local_88);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar23);
    local_88 = 0;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(plVar23);
    FUN_0148d250(param_1,0xa6727a7dfab99fbc,0x21fd8ed2c3e4de4d,&local_90);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar23);
    local_90 = 0;
  }
  else {
    uVar16 = 0x619e242ac53d27c1;
    local_78 = lVar20;
    if (lVar20 != 0) {
      plVar19 = &local_78;
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
      plVar22 = &local_78;
      uVar16 = 0x619e242ac53d27c1;
      goto LAB_0148d668;
    }
    plVar22 = &local_78;
LAB_0148d710:
    FUN_0148d250(param_1,uVar16,0xf97db3efb146909,plVar22);
    FUN_0148d250(param_1,0x619e262ac53d2b27,0x3fc1ceaaa08d346f,&local_88);
    FUN_0148d250(param_1,0xa6727a7dfab99fbc,0x21fd8ed2c3e4de4d,&local_90);
  }
  local_a8 = lVar20;
  if ((bVar3 & 1) == 0) {
    lVar26 = *(long *)(param_1 + 0x2b0);
    if (lVar26 != 0) {
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
    }
    lVar24 = *(long *)(lVar26 + 0x2e8);
    if (lVar24 == 0) {
      FUN_0087d330(uVar13,0);
    }
    else {
      plVar22 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0087d330(uVar13,lVar24);
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
    lVar26 = *(long *)(param_1 + 0x2b0);
    if (lVar26 != 0) {
      (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
    }
    lVar24 = *(long *)(lVar26 + 0x2e8);
    plVar22 = (long *)(lVar24 + 0x48);
    if (lVar24 != 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    uVar11 = FUN_0087d390(uVar13);
    uVar6 = FUN_00878a50(uVar13);
    FUN_014c9110(lVar25,0,lVar24,uVar11,uVar6);
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))(plVar22);
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
    local_a0 = lVar20;
    if (lVar20 == 0) {
      FUN_0148d250(param_1,0x6a925e115a9f0ac9,0x598b3f889f9a5bc4,&local_a0);
      goto LAB_0148d9b8;
    }
    plVar22 = (long *)(lVar20 + 0x48);
    plVar19 = &local_a0;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0148d250(param_1,0x6a925e115a9f0ac9,0x598b3f889f9a5bc4,&local_a0);
    (**(code **)(*plVar22 + 0x18))(plVar22);
LAB_0148d94c:
    *plVar19 = 0;
    plVar22 = (long *)(lVar20 + 0x48);
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0148d250(param_1,0x6a925d115a9f0916,0xd59da3b2fb33b6f2,&local_a8);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar22);
    local_a8 = 0;
  }
  else {
    local_98 = lVar20;
    if (lVar20 != 0) {
      plVar22 = (long *)(lVar20 + 0x48);
      plVar19 = &local_98;
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0148d250(param_1,0x6a925b115a9f05b0,0x598b3f889f9a5bc4,&local_98);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      goto LAB_0148d94c;
    }
    FUN_0148d250(param_1,0x6a925b115a9f05b0,0x598b3f889f9a5bc4,&local_98);
LAB_0148d9b8:
    FUN_0148d250(param_1,0x6a925d115a9f0916,0xd59da3b2fb33b6f2,&local_a8);
  }
  if ((bVar3 & 1) == 0) {
    uVar16 = 0xcc81a6a0286ae2df;
    local_70[0] = local_70[0] & 0xffffffff00000000;
    uVar17 = FUN_014adbd0(uVar13,local_70);
    uVar11 = 5;
    if ((uVar17 & 1) != 0) {
      uVar11 = 6;
    }
    FUN_014ca220(lVar25,0,local_70[0] & 0xffffffff,uVar11,2,1);
    if (lVar20 == 0) {
      plVar22 = &local_b8;
      local_b8 = 0;
      goto LAB_0148db3c;
    }
    plVar22 = (long *)(lVar20 + 0x48);
    local_b8 = lVar20;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0148d250(param_1,0xcc81a6a0286ae2df,0xcf3d9486fea9466,&local_b8);
    (**(code **)(*plVar22 + 0x18))(plVar22);
    local_b8 = 0;
LAB_0148daf0:
    plVar22 = (long *)(lVar20 + 0x48);
    local_c0 = lVar20;
    (**(code **)(*plVar22 + 0x10))(plVar22);
    FUN_0148d250(param_1,0xcc81a5a0286ae12c,0x31bd594fa8f17ec,&local_c0);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar22);
    local_c0 = 0;
  }
  else {
    uVar16 = 0xcc81a7a0286ae492;
    if (lVar20 != 0) {
      plVar22 = (long *)(lVar20 + 0x48);
      local_b0 = lVar20;
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0148d250(param_1,0xcc81a7a0286ae492,0xcf3d9486fea9466,&local_b0);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      local_b0 = 0;
      goto LAB_0148daf0;
    }
    plVar22 = &local_b0;
    local_b0 = 0;
LAB_0148db3c:
    FUN_0148d250(param_1,uVar16,0xcf3d9486fea9466,plVar22);
    local_c0 = 0;
    FUN_0148d250(param_1,0xcc81a5a0286ae12c,0x31bd594fa8f17ec,&local_c0);
  }
  iVar7 = FUN_0087b3e0(uVar13);
  iVar8 = FUN_0087b490(uVar13);
  iVar9 = FUN_0087b350(uVar13);
  local_e0 = lVar20;
  local_d8 = lVar20;
  if ((bVar3 & 1) == 0) {
    FUN_014ca220(lVar25,0,iVar9,8,0,1);
    local_d0 = lVar20;
    if (lVar20 == 0) {
      plVar22 = &local_d0;
      uVar16 = 0x6a007f49c83decbb;
      goto LAB_0148dd54;
    }
    plVar19 = &local_d0;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
    plVar22 = &local_d0;
    uVar17 = 0x7f49c83decbb;
LAB_0148dc94:
    plVar23 = (long *)(lVar20 + 0x48);
    FUN_0148d250(param_1,uVar17 | 0x6a00000000000000,0x30256be617a7405d,plVar22);
    (**(code **)(*plVar23 + 0x18))(plVar23);
    *plVar19 = 0;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(plVar23);
    FUN_0148d250(param_1,0x6a007e49c83deb08,0x86a22e2278794cc3,&local_d8);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar23);
    local_d8 = 0;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(plVar23);
    FUN_0148d250(param_1,0x9369126eb947025a,0x3ce2edc730021c58,&local_e0);
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar23);
    local_e0 = 0;
  }
  else {
    uVar16 = 0x6a008049c83dee6e;
    local_c8 = lVar20;
    if (lVar20 != 0) {
      plVar19 = &local_c8;
      (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
      plVar22 = &local_c8;
      uVar17 = 0x8049c83dee6e;
      goto LAB_0148dc94;
    }
    plVar22 = &local_c8;
LAB_0148dd54:
    FUN_0148d250(param_1,uVar16,0x30256be617a7405d,plVar22);
    FUN_0148d250(param_1,0x6a007e49c83deb08,0x86a22e2278794cc3,&local_d8);
    FUN_0148d250(param_1,0x9369126eb947025a,0x3ce2edc730021c58,&local_e0);
  }
  local_f8 = lVar20;
  if ((bVar3 & 1) == 0) {
    FUN_014ca220(lVar25,0,(iVar8 - iVar7) - (iVar9 - iVar7),8,0,1);
    local_f0 = lVar20;
    if (lVar20 == 0) {
      plVar22 = &local_f0;
      uVar16 = 0x9369106eb946fef4;
      goto LAB_0148e0c8;
    }
    plVar22 = &local_f0;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
    plVar19 = &local_f0;
    uVar17 = 0x106eb946fef4;
  }
  else {
    uVar16 = 0x93690f6eb946fd41;
    local_e8 = lVar20;
    if (lVar20 == 0) {
      plVar22 = &local_e8;
LAB_0148e0c8:
      FUN_0148d250(param_1,uVar16,0x3ce2eec730021e0b,plVar22);
      FUN_0148d250(param_1,0x9369136eb947040d,0xa8504686508ad926,&local_f8);
      lVar26 = *(long *)(param_1 + 0x2b0);
      goto joined_r0x0148e0f4;
    }
    plVar22 = &local_e8;
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))((long *)(lVar20 + 0x48));
    plVar19 = &local_e8;
    uVar17 = 0xf6eb946fd41;
  }
  plVar23 = (long *)(lVar20 + 0x48);
  FUN_0148d250(param_1,uVar17 | 0x9369000000000000,0x3ce2eec730021e0b,plVar19);
  (**(code **)(*plVar23 + 0x18))(plVar23);
  *plVar22 = 0;
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))(plVar23);
  FUN_0148d250(param_1,0x9369136eb947040d,0xa8504686508ad926,&local_f8);
  (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))(plVar23);
  local_f8 = 0;
  lVar26 = *(long *)(param_1 + 0x2b0);
joined_r0x0148e0f4:
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  uVar10 = FUN_0087a5f0(uVar13);
  lVar24 = *(long *)(param_1 + 0x5d8);
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar24 + 0x58);
  *(long *)(lVar24 + 0x58) = lVar26;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  }
  *(bool *)(lVar24 + 0x70) = 99 < uVar10;
  *(undefined8 *)(lVar24 + 0x60) = 0x5bc7396e683f9bdd;
  *(undefined8 *)(lVar24 + 0x68) = 0xde17e718006c16f0;
  (**(code **)(**(long **)(param_1 + 0x5d8) + 0x28))
            ((float)(uint)(iVar9 - iVar7),*(long **)(param_1 + 0x5d8),iVar8 - iVar7);
  local_70[0] = 0x5bc7396e683f9bdd;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_70);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe | ~bVar3 & 1;
  puVar1 = PTR_DAT_0272a150;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0272a150);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 8);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x10);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x18);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x20);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x28);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x30);
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
  if ((bVar3 & 1) == 0) {
    FUN_00878a60(uVar13);
    uVar11 = FUN_014b3340();
    switch(uVar11) {
    case 0:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x10);
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      pcVar18 = "anime_L_icon_generat_00_generation_02";
      break;
    case 1:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x18);
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      pcVar18 = "anime_L_icon_generat_00_generation_03";
      break;
    default:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 8);
      pcVar18 = "anime_L_icon_generat_00_generation_01";
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      break;
    case 3:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0272a150);
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      pcVar18 = "anime_L_icon_generat_00_generation_00";
      break;
    case 4:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x30);
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      pcVar18 = "anime_L_icon_generat_00_generation_06";
      break;
    case 5:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x28);
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      pcVar18 = "anime_L_icon_generat_00_generation_05";
      break;
    case 6:
      lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + 0x20);
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      pcVar18 = "anime_L_icon_generat_00_generation_04";
    }
    FUN_00ffcf80(param_1 + 0x100,pcVar18);
  }
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0272a158);
  if (lVar24 != 0) {
    bVar4 = FUN_014adfd0(uVar13);
    *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe | bVar4 & 1;
  }
  FUN_0148c830(param_1);
  sVar5 = FUN_008787f0(uVar13);
  local_70[0] = 0x9d9e2aca00e4fd1d;
  lVar24 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_70);
  bVar4 = *(byte *)(lVar24 + 0x58) & 0xfe;
  *(byte *)(lVar24 + 0x58) = bVar4 | sVar5 != 0;
  if (sVar5 == 0) {
    *(byte *)(lVar24 + 0x58) = bVar4;
  }
  else {
    local_100 = lVar20;
    if (lVar20 == 0) {
      FUN_0148d250(param_1,0x9557830d353683ae,0xc8d53af1bf4076d3,&local_100);
      FUN_014c9900(lVar25,0,sVar5,1);
      local_108 = 0;
      FUN_0148d250(param_1,0x9557840d35368561,0xb8c7955ca9a80f7a,&local_108);
    }
    else {
      plVar22 = (long *)(lVar20 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0148d250(param_1,0x9557830d353683ae,0xc8d53af1bf4076d3,&local_100);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      local_100 = 0;
      FUN_014c9900(lVar25,0,sVar5,1);
      local_108 = lVar20;
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0148d250(param_1,0x9557840d35368561,0xb8c7955ca9a80f7a,&local_108);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      local_108 = 0;
    }
    FUN_00ff86a0(local_70,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),1);
    lVar24 = *(long *)(local_70[0] + 0x60);
    if (lVar24 != 0) {
      (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
    }
    if (local_70[0] != 0) {
      (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      local_70[0] = 0;
    }
    local_110 = lVar24;
    if (lVar24 == 0) {
      FUN_0148d360(param_1,sVar5,0xb5f8eb38ab077de1,&local_110);
    }
    else {
      plVar22 = (long *)(lVar24 + 0x48);
      (**(code **)(*plVar22 + 0x10))(plVar22);
      FUN_0148d360(param_1,sVar5,0xb5f8eb38ab077de1,&local_110);
      (**(code **)(*plVar22 + 0x18))(plVar22);
      local_110 = 0;
      (**(code **)(*plVar22 + 0x18))(plVar22);
    }
  }
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  local_188 = (code *)0x0;
  FUN_0168c190(*(undefined8 *)(param_1 + 0x4e8),sVar5,0,&local_190);
  pcVar2 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar2)(&local_170);
  }
  lVar24 = *(long *)(param_1 + 0x538);
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x10))();
  }
  local_70[0] = 0xb65a076c70065ece;
  lVar14 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_70);
  local_70[0] = 0xb65a086c70066081;
  lVar15 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_70);
  uVar17 = FUN_0087d610(uVar13,2);
  if ((uVar17 & 1) == 0) {
    uVar10 = FUN_0087eca0(uVar13);
    FUN_016a7910(lVar24,uVar10,1,lVar14,0,0);
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
    uVar12 = FUN_0087ed40(uVar13);
    if ((uVar12 & 0xff) == (uVar10 & 0xff)) {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
    }
    else {
      *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) | 1;
      FUN_016a7910(lVar24,uVar12,1,lVar15,0,0);
    }
  }
  else {
    *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
    *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe;
  }
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  local_70[0] = 0x5e4e72037b37499f;
  lVar24 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_70);
  if ((bVar3 & 1) == 0) {
    bVar4 = FUN_0087ee60(uVar13);
    bVar4 = bVar4 & 1;
  }
  else {
    bVar4 = 0;
  }
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe | bVar4;
  FUN_0148e720(param_1);
  local_70[0] = 0xaa9746b0d29093b6;
  FUN_00a0e830(*(undefined8 *)(param_1 + 0x2b0),local_70);
  FUN_019a65b0();
  local_70[0] = 0xb02f871f33d1aed5;
  lVar24 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_70);
  if ((bVar3 & 1) == 0) {
    bVar3 = FUN_0087ea90(uVar13);
    bVar3 = bVar3 & 1;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe | bVar3;
  if (lVar26 != 0) {
    (**(code **)(*(long *)(lVar26 + 0x48) + 0x18))((long *)(lVar26 + 0x48));
  }
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))();
  }
  if (lVar20 != 0) {
    (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
  }
  if (lVar25 != 0) {
    (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
  }
  return;
}


