/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f01b0; name: FUN_014f01b0
 */


void FUN_014f01b0(long param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  char *param3;
  long *plVar16;
  ulong uVar17;
  undefined4 uVar18;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  code *local_168;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar14 = *(long *)(param_1 + 0x10);
  if (*param_2 == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = FUN_008787d0();
    bVar4 = bVar4 ^ 1;
  }
  *(byte *)(*(long *)(param_1 + 200) + 0x58) =
       *(byte *)(*(long *)(param_1 + 200) + 0x58) & 0xfe | bVar4 & 1;
  if ((bVar4 & 1) != 0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
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
    local_168 = (code *)0x0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    FUN_0168c890(*(undefined8 *)(param_1 + 0x88),*param_2,0,0,&local_f0);
    pcVar1 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      local_e8 = (code *)0x0;
      (*pcVar1)(&local_d0);
    }
    pcVar1 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      (*pcVar1)(&local_150);
    }
    uVar6 = FUN_008787f0(*param_2);
    lVar11 = *(long *)(*(long *)(param_1 + 0x90) + 0x18);
    bVar2 = (uVar6 & 0xffff) != 0;
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar2;
    if ((uVar6 & 0xffff) != 0) {
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = (code *)0x0;
      FUN_0168c190(*(undefined8 *)(param_1 + 0x90),uVar6,0,&local_1f0);
      pcVar1 = local_1e8;
      if (local_1e8 != (code *)0x0) {
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1f0 = 0;
        local_1e8 = (code *)0x0;
        (*pcVar1)(&local_1d0);
      }
    }
    uVar7 = FUN_0087eca0(*param_2);
    uVar8 = FUN_0087ed40(*param_2);
    lVar11 = *(long *)(lVar14 + 0x438);
    if (lVar11 == 0) {
      FUN_016a7910(0,uVar7,1,*(undefined8 *)(param_1 + 0xd0),0,0);
    }
    else {
      plVar16 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      FUN_016a7910(lVar11,uVar7,1,*(undefined8 *)(param_1 + 0xd0),0,0);
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    bVar3 = (uVar7 & 0xff) != (uVar8 & 0xff);
    *(byte *)(*(long *)(param_1 + 0xd8) + 0x58) =
         *(byte *)(*(long *)(param_1 + 0xd8) + 0x58) & 0xfe | bVar3;
    if (bVar3) {
      lVar11 = *(long *)(lVar14 + 0x438);
      if (lVar11 == 0) {
        FUN_016a7910(0,uVar8,1,*(undefined8 *)(param_1 + 0xd8),0,0);
      }
      else {
        plVar16 = (long *)(lVar11 + 0x48);
        (**(code **)(*plVar16 + 0x10))(plVar16);
        FUN_016a7910(lVar11,uVar8,1,*(undefined8 *)(param_1 + 0xd8),0,0);
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    param3 = (char *)(param_1 + 0x20);
    if (*param3 == '\0') {
      snprintf((char *)&local_f0,100,"pane_%s","T_rental_poke_00");
    }
    else {
      snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_rental_poke_00");
    }
    uVar17 = 0xcbf29ce484222645;
    uVar13 = 0xcbf29ce484222645;
    if ((byte)local_f0 != 0) {
      uVar13 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        uVar13 = (uVar13 ^ (byte)local_f0) * 0x100000001b3;
        local_f0._0_1_ = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while ((byte)local_f0 != 0);
    }
    local_1f8 = *(long *)(param_1 + 0x98);
    local_f0 = uVar13;
    if (local_1f8 != 0) {
      (**(code **)(*(long *)(local_1f8 + 0x48) + 0x10))();
    }
    uVar9 = FUN_008783b0(*param_2);
    FUN_011425c0(lVar14,&local_f0,&local_1f8,param_1 + 0xa0,0,uVar9);
    if (local_1f8 != 0) {
      (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
      local_1f8 = 0;
    }
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if (*param3 == '\0') {
      snprintf((char *)&local_f0,100,"anime_%s","L_rental_icon_01_switch");
      uVar13 = local_f0;
    }
    else {
      snprintf((char *)&local_f0,100,"anime_%s_%s",param3,"L_rental_icon_01_switch");
      uVar13 = local_f0;
    }
    bVar3 = (byte)local_f0 != '\0';
    local_f0 = 0xcbf29ce484222645;
    if (bVar3) {
      uVar13 = uVar13 & 0xff;
      local_f0 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        local_f0 = (local_f0 ^ uVar13) * 0x100000001b3;
        bVar4 = *pbVar12;
        uVar13 = (ulong)bVar4;
        pbVar12 = pbVar12 + 1;
      } while (bVar4 != 0);
    }
    lVar11 = *param_2;
    if (lVar11 == 0) {
      iVar10 = FUN_0087ccf0(0);
      uVar9 = 0x3f800000;
      if (iVar10 != 1) {
        uVar9 = 0x40000000;
      }
      uVar18 = 0;
      if (iVar10 != 0) {
        uVar18 = uVar9;
      }
      FUN_00ffd510(uVar18,lVar14,&local_f0);
    }
    else {
      plVar16 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar16 + 0x10))(plVar16);
      iVar10 = FUN_0087ccf0(lVar11);
      uVar9 = 0x3f800000;
      if (iVar10 != 1) {
        uVar9 = 0x40000000;
      }
      uVar18 = 0;
      if (iVar10 != 0) {
        uVar18 = uVar9;
      }
      FUN_00ffd510(uVar18,lVar14,&local_f0);
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if (*param3 == '\0') {
      snprintf((char *)&local_f0,100,"pane_%s","T_rental_poke_01");
      bVar4 = (byte)local_f0;
    }
    else {
      snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_rental_poke_01");
      bVar4 = (byte)local_f0;
    }
    local_f0 = 0xcbf29ce484222645;
    if (bVar4 != 0) {
      local_f0 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        local_f0 = (local_f0 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar4 != 0);
    }
    local_200 = *(long *)(param_1 + 0x98);
    if (local_200 != 0) {
      (**(code **)(*(long *)(local_200 + 0x48) + 0x10))();
    }
    uVar9 = FUN_0087a5f0(*param_2);
    FUN_014f0a20(lVar14,&local_f0,&local_200,param_1 + 0xa8,0,uVar9);
    if (local_200 != 0) {
      (**(code **)(*(long *)(local_200 + 0x48) + 0x18))();
      local_200 = 0;
    }
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if (*param3 == '\0') {
      snprintf((char *)&local_f0,100,"pane_%s","T_rental_poke_02");
      bVar4 = (byte)local_f0;
    }
    else {
      snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_rental_poke_02");
      bVar4 = (byte)local_f0;
    }
    local_f0 = 0xcbf29ce484222645;
    if (bVar4 != 0) {
      local_f0 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        local_f0 = (local_f0 ^ bVar4) * 0x100000001b3;
        bVar4 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar4 != 0);
    }
    local_208 = *(long *)(param_1 + 0x98);
    if (local_208 != 0) {
      (**(code **)(*(long *)(local_208 + 0x48) + 0x10))();
    }
    uVar9 = FUN_0087cdb0(*param_2);
    FUN_014f0b40(lVar14,&local_f0,&local_208,param_1 + 0xb0,0,uVar9);
    if (local_208 != 0) {
      (**(code **)(*(long *)(local_208 + 0x48) + 0x18))();
      local_208 = 0;
    }
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    if (*param3 == '\0') {
      snprintf((char *)&local_f0,100,"pane_%s","T_rental_poke_03");
    }
    else {
      snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_rental_poke_03");
    }
    if ((byte)local_f0 != '\0') {
      local_f0 = local_f0 & 0xff;
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        uVar17 = (uVar17 ^ local_f0) * 0x100000001b3;
        bVar4 = *pbVar12;
        local_f0 = (ulong)bVar4;
        pbVar12 = pbVar12 + 1;
      } while (bVar4 != 0);
    }
    local_f0 = uVar17;
    lVar11 = FUN_0167b6b0(*(undefined8 *)(lVar14 + 0x1b0),&local_f0);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar2;
    if ((uVar6 & 0xffff) != 0) {
      local_210 = *(long *)(param_1 + 0x98);
      if (local_210 != 0) {
        (**(code **)(*(long *)(local_210 + 0x48) + 0x10))();
      }
      uVar5 = FUN_008787f0(*param_2);
      FUN_008cf360(lVar14,&local_f0,&local_210,param_1 + 0xb8,0,uVar5,1);
      if (local_210 != 0) {
        (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
        local_210 = 0;
      }
    }
    uVar15 = *(undefined8 *)(param_1 + 0xe8);
    uVar9 = FUN_0087b880(*param_2,0);
    FUN_014eef60(uVar15,uVar9);
    lVar11 = *(long *)(param_1 + 0xe8);
    uVar9 = FUN_0087b880(*param_2,1);
    FUN_014eef60(lVar11 + 0xa8,uVar9);
    lVar11 = *(long *)(param_1 + 0xe8);
    uVar9 = FUN_0087b880(*param_2,2);
    FUN_014eef60(lVar11 + 0x150,uVar9);
    lVar11 = *(long *)(param_1 + 0xe8);
    uVar9 = FUN_0087b880(*param_2,3);
    FUN_014eef60(lVar11 + 0x1f8,uVar9);
    FUN_00ffd840(lVar14,*(undefined8 *)(param_1 + 0xe0));
  }
  return;
}


