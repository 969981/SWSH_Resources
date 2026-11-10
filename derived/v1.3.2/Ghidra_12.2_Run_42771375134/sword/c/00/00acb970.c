/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00acb970; name: FUN_00acb970
 */


uint FUN_00acb970(long *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  
  puVar8 = PTR_DAT_02715410;
  local_58 = 0;
  local_70 = 0xcbf29ce484222645;
  local_68 = "";
  local_60 = 0;
  switch(param_2) {
  case 0:
  case 0x23:
    uVar1 = *(undefined8 *)(PTR_DAT_02715410 + 0x10);
    param_3[3] = *(undefined8 *)(PTR_DAT_02715410 + 0x18);
    uVar2 = *(undefined8 *)puVar8;
    param_3[1] = *(undefined8 *)(puVar8 + 8);
    uVar3 = *(undefined8 *)(puVar8 + 0x30);
    param_3[7] = *(undefined8 *)(puVar8 + 0x38);
    uVar4 = *(undefined8 *)(puVar8 + 0x20);
    uVar5 = *(undefined8 *)(puVar8 + 0x28);
    param_3[2] = uVar1;
    param_3[5] = uVar5;
    param_3[6] = uVar3;
    *param_3 = uVar2;
    param_3[4] = uVar4;
    uVar12 = 1;
    goto LAB_00acc0c8;
  case 1:
  case 2:
    iVar9 = (**(code **)(*param_1 + 0x228))(param_1);
    if (*(int *)(param_1[0x78] + 0x177c) != 0xf) {
      iVar9 = *(int *)(param_1[0x78] + 0x177c);
    }
    switch(iVar9) {
    case 4:
      goto switchD_00acba5c_caseD_4;
    case 5:
      local_70 = 0x295209b6eafc7338;
      local_68 = "EffAttack02_01";
      break;
    case 6:
      local_70 = 0x570c15bd4dd820cd;
      local_68 = "EffAttack03_01";
      break;
    case 7:
      local_70 = 0x2c20fdc896e3d5d6;
      local_68 = "EffAttack04_01";
      break;
    case 8:
switchD_00acba5c_caseD_8:
      local_70 = 0xc14dcb702c1835b2;
      local_68 = "EffShoot01_01";
      goto LAB_00acc08c;
    case 9:
      local_70 = 0x6ed38b8be70cb945;
      local_68 = "EffShoot02_01";
      goto LAB_00acc08c;
    case 10:
      local_70 = 0x99be7f809e00c710;
      local_68 = "EffShoot03_01";
      goto LAB_00acc08c;
    case 0xb:
      local_70 = 0xf2863f99e4f51ba3;
      local_68 = "EffShoot04_01";
LAB_00acc08c:
      local_60 = 0xd;
      goto LAB_00acc098;
    default:
      if (param_2 != 1) goto switchD_00acba5c_caseD_8;
      goto switchD_00acba5c_caseD_4;
    }
    goto LAB_00acc064;
  default:
    local_70 = 0xa5a3289dce9ffc4a;
    local_68 = "EffCenter01";
    local_60 = 0xb;
    goto LAB_00acc098;
  case 4:
    local_70 = 0xdd91a0edd6764c0b;
    local_68 = "EffOverHead01";
    goto LAB_00acc08c;
  case 5:
    local_70 = 0x68bd6fce617ac370;
    local_68 = "EffFront01";
    goto LAB_00acbe74;
  case 6:
    local_70 = 0x113052c096300d8;
    local_68 = "EffHeadCenter01";
    local_60 = 0xf;
    goto LAB_00acc098;
  case 7:
    local_f0 = 0x9b86c417a8bb4fae;
    local_e8 = "EffEye01";
    local_e0 = 8;
    local_d8 = 0;
    uVar12 = FUN_00ac70c0(param_1,&local_f0,&local_b0);
    if (local_d8 != 0) {
      (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
      local_d8 = 0;
    }
    local_130 = 0x9b86c317a8bb4dfb;
    local_128 = "EffEye02";
    local_120 = 8;
    local_118 = 0;
    uVar10 = FUN_00ac70c0(param_1,&local_130,&local_f0);
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
      local_118 = 0;
    }
    local_150 = 0x9b86c217a8bb4c48;
    local_148 = "EffEye03";
    local_140 = 8;
    local_138 = 0;
    uVar11 = FUN_00ac70c0(param_1,&local_150,&local_130);
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    if (((uVar11 | uVar12 & uVar10 ^ 0xffffffff) & 1) == 0) {
      param_3[4] = uStack_d0;
      param_3[5] = local_c8;
      param_3[2] = local_e0;
      param_3[3] = local_d8;
      param_3[1] = local_e8;
      *param_3 = local_f0;
      param_3[7] = CONCAT44(((float)(uStack_78 >> 0x20) + fStack_b4) * 0.5,
                            ((float)uStack_78 + fStack_b8) * 0.5);
      param_3[6] = CONCAT44(((float)((ulong)local_80 >> 0x20) + fStack_bc) * 0.5,
                            ((float)local_80 + local_c0) * 0.5);
      goto joined_r0x00acbe30;
    }
    local_60 = 8;
    local_70 = 0x9b86c417a8bb4fae;
    local_68 = "EffEye01";
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    goto LAB_00acc098;
  case 8:
    local_70 = 0x791abfaf3a0f16c;
    local_68 = "EffMouth01";
LAB_00acbe74:
    local_60 = 10;
    goto LAB_00acc098;
  case 9:
    local_70 = 0x7575dda0deecea32;
    local_68 = "EffHorn01";
    break;
  case 10:
    local_70 = 0x11a17e0fa4084d31;
    local_68 = "EffTail01";
    break;
  case 0xb:
    local_70 = 0xc786aec568e2a392;
    local_68 = "EffHand01";
    break;
  case 0xc:
    local_70 = 0xc786adc568e2a1df;
    local_68 = "EffHand02";
    break;
  case 0xd:
    local_70 = 0x55059d085c8f7333;
    local_68 = "EffFoot01";
    break;
  case 0xe:
    local_70 = 0x55059e085c8f74e6;
    local_68 = "EffFoot02";
    break;
  case 0x1e:
    local_70 = 0x68bd6fce617ac370;
    local_68 = "EffFront01";
    local_60 = 10;
    local_58 = 0;
    uVar13 = FUN_00ac70c0(param_1,&local_70,&local_b0);
    if ((uVar13 & 1) != 0) {
      (**(code **)(*param_1 + 0x1d8))(&local_f0,param_1);
      uVar1 = *(undefined8 *)(PTR_DAT_02715410 + 0x10);
      uVar2 = *(undefined8 *)(PTR_DAT_02715410 + 0x18);
      local_b0 = *(undefined8 *)PTR_DAT_02715410;
      uStack_a8 = *(undefined8 *)(PTR_DAT_02715410 + 8);
      local_90 = *(undefined8 *)(PTR_DAT_02715410 + 0x20);
      uStack_88 = *(undefined8 *)(PTR_DAT_02715410 + 0x28);
      local_a0 = (float)uVar1;
      fStack_9c = (float)((ulong)uVar1 >> 0x20);
      fStack_98 = (float)uVar2;
      fStack_94 = (float)((ulong)uVar2 >> 0x20);
      uStack_78 = local_d8 & 0xffffffff;
      param_3[2] = uVar1;
      param_3[3] = uVar2;
      *param_3 = local_b0;
      param_3[1] = uStack_a8;
      param_3[7] = uStack_78;
      param_3[4] = local_90;
      param_3[5] = uStack_88;
      param_3[6] = local_80;
      goto joined_r0x00acbe30;
    }
    goto LAB_00acc09c;
  case 0x1f:
    (**(code **)(*param_1 + 0x1d8))(&local_b0,param_1);
    puVar14 = (undefined8 *)PTR_DAT_02715410;
    fVar15 = ((float)local_b0 + local_a0) * 0.5;
    fVar16 = ((float)((ulong)local_b0 >> 0x20) + fStack_9c) * 0.5;
    uVar1 = *(undefined8 *)(PTR_DAT_02715410 + 0x28);
    param_3[4] = *(undefined8 *)(PTR_DAT_02715410 + 0x20);
    param_3[5] = uVar1;
    fVar17 = fStack_98;
    goto LAB_00acbf30;
  case 0x20:
    (**(code **)(*param_1 + 0x1d8))(&local_b0,param_1);
    puVar14 = (undefined8 *)PTR_DAT_02715410;
    fVar15 = ((float)local_b0 + local_a0) * 0.5;
    fVar16 = ((float)((ulong)local_b0 >> 0x20) + fStack_9c) * 0.5;
    fVar17 = ((float)uStack_a8 + fStack_98) * 0.5;
    fVar18 = ((float)((ulong)uStack_a8 >> 0x20) + fStack_94) * 0.5;
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar15;
    auVar6._8_4_ = fVar17;
    auVar6._12_4_ = fVar18;
    auVar7._4_4_ = fVar16;
    auVar7._0_4_ = fVar15;
    auVar7._8_4_ = fVar17;
    auVar7._12_4_ = fVar18;
    auVar19 = NEON_ext(auVar6,auVar7,8,1);
    uVar1 = *(undefined8 *)(PTR_DAT_02715410 + 0x28);
    param_3[4] = *(undefined8 *)(PTR_DAT_02715410 + 0x20);
    param_3[5] = uVar1;
    fVar17 = auVar19._0_4_;
LAB_00acbf30:
    uVar1 = puVar14[3];
    param_3[2] = puVar14[2];
    param_3[3] = uVar1;
    uVar1 = *puVar14;
    uVar2 = puVar14[1];
    param_3[7] = (ulong)(uint)fVar17;
    param_3[6] = CONCAT44(fVar16,fVar15);
    *param_3 = uVar1;
    param_3[1] = uVar2;
    goto joined_r0x00acbe30;
  case 0x21:
    (**(code **)(*param_1 + 0x1d8))(&local_b0,param_1);
    puVar8 = PTR_DAT_02715410;
    uVar12 = *(uint *)((ulong)&local_b0 | 4);
    uVar1 = *(undefined8 *)(PTR_DAT_02715410 + 0x28);
    param_3[4] = *(undefined8 *)(PTR_DAT_02715410 + 0x20);
    param_3[5] = uVar1;
    uVar1 = *(undefined8 *)(puVar8 + 0x18);
    param_3[2] = *(undefined8 *)(puVar8 + 0x10);
    param_3[3] = uVar1;
    uVar1 = *(undefined8 *)puVar8;
    uVar2 = *(undefined8 *)(puVar8 + 8);
    param_3[7] = 0;
    param_3[6] = (ulong)uVar12 << 0x20;
    *param_3 = uVar1;
    param_3[1] = uVar2;
    goto joined_r0x00acbe30;
  case 0x22:
    (**(code **)(*param_1 + 0x1d8))(&local_b0,param_1);
    puVar8 = PTR_DAT_02715410;
    auVar19._4_4_ = fStack_9c;
    auVar19._0_4_ = local_a0;
    auVar19._8_4_ = fStack_98;
    auVar19._12_4_ = fStack_94;
    auVar19 = NEON_ext(auVar19,auVar19,8,1);
    uVar1 = *(undefined8 *)(PTR_DAT_02715410 + 0x28);
    param_3[4] = *(undefined8 *)(PTR_DAT_02715410 + 0x20);
    param_3[5] = uVar1;
    uVar1 = *(undefined8 *)(puVar8 + 0x18);
    param_3[2] = *(undefined8 *)(puVar8 + 0x10);
    param_3[3] = uVar1;
    uVar1 = *(undefined8 *)puVar8;
    uVar2 = *(undefined8 *)(puVar8 + 8);
    param_3[7] = (ulong)auVar19._0_4_;
    param_3[6] = CONCAT44((int)((ulong)local_b0 >> 0x20),((float)local_b0 + local_a0) * 0.5);
    *param_3 = uVar1;
    param_3[1] = uVar2;
joined_r0x00acbe30:
    uVar12 = 1;
    uVar10 = 1;
    if (local_58 == 0) goto LAB_00acc0c8;
    goto LAB_00acc0b8;
  }
  local_60 = 9;
LAB_00acc098:
  local_58 = 0;
LAB_00acc09c:
  uVar12 = FUN_00ac70c0(param_1,&local_70,param_3);
  uVar10 = uVar12;
  if (local_58 != 0) {
LAB_00acc0b8:
    uVar12 = uVar10;
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
LAB_00acc0c8:
  return uVar12 & 1;
switchD_00acba5c_caseD_4:
  local_70 = 0x7e9bc1acdbf0328f;
  local_68 = "EffAttack01_01";
LAB_00acc064:
  local_60 = 0xe;
  goto LAB_00acc098;
}


