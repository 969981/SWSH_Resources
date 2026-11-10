/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073b6f0; name: FUN_0073b6f0
 */


void FUN_0073b6f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_198;
  long local_190;
  char *local_188;
  undefined1 *local_180;
  long local_178;
  long local_170;
  undefined *local_160;
  long local_158;
  long local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  long local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  undefined4 local_48;
  undefined4 uStack_44;
  
  *(undefined4 *)(param_1 + 3) = 0;
  puVar8 = PTR_DAT_02715cf8;
  param_1[0xbe] = 0;
  param_1[0xc1] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 4;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc6] = 0x2d0050000000001;
  puVar8 = PTR_DAT_027159c0;
  lVar10 = *(long *)PTR_DAT_027159c0;
  lVar3 = *(long *)(PTR_DAT_027159c0 + 8);
  lVar11 = *(long *)(PTR_DAT_027159c0 + 0x10);
  lVar4 = *(long *)(PTR_DAT_027159c0 + 0x18);
  param_1[0xcb] = lVar4;
  param_1[0xc9] = lVar3;
  lVar1 = *(long *)(puVar8 + 0x20);
  lVar5 = *(long *)(puVar8 + 0x28);
  lVar2 = *(long *)(puVar8 + 0x30);
  lVar6 = *(long *)(puVar8 + 0x38);
  param_1[0xcf] = lVar6;
  param_1[0xd7] = lVar6;
  param_1[0xd8] = 0xffffffff;
  param_1[0xcd] = lVar5;
  param_1[0xca] = lVar11;
  param_1[200] = lVar10;
  param_1[0xce] = lVar2;
  param_1[0xcc] = lVar1;
  param_1[0xd0] = lVar10;
  param_1[0xd2] = lVar11;
  param_1[0xd6] = lVar2;
  param_1[0xd4] = lVar1;
  param_1[0xd3] = lVar4;
  param_1[0xd1] = lVar3;
  param_1[0xd5] = lVar5;
  *(undefined4 *)(param_1 + 0xd9) = 0x3f800000;
  param_1[0xdc] = 0;
  puVar8 = PTR_DAT_02710860;
  param_1[0xdb] = 0;
  param_1[0xda] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xdd] = lVar10;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xe2] = lVar10;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe5] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xe6] = lVar10;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0x3f800000;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xee] = lVar10;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xf4] = lVar10;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0xfa] = lVar10;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) {
    lVar10 = FUN_0075ecb0();
  }
  param_1[0x100] = lVar10;
  param_1[0x101] = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0x103] = -0x100000000;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined1 *)((long)param_1 + 0x824) = 0;
  param_1[0x105] = -0x100000000;
  *(undefined4 *)(param_1 + 0x106) = 0;
  *(undefined1 *)((long)param_1 + 0x834) = 0;
  param_1[0x107] = -0x100000000;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)((long)param_1 + 0x844) = 0;
  param_1[0x109] = -0x100000000;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)((long)param_1 + 0x854) = 0;
  param_1[0x10b] = -0x100000000;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((long)param_1 + 0x864) = 0;
  param_1[0x10d] = -0x100000000;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)((long)param_1 + 0x874) = 0;
  param_1[0x10f] = 0;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar8);
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar10 + 0x80) != 0) {
      lVar11 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8);
    }
  }
  param_1[2] = lVar11;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_160 = PTR_DAT_02710810 + 0x10;
  local_158 = 0;
  FUN_0010cf60(&local_190,PTR_DAT_02710908,"shader/primitive_renderer_shader.bnsh",&DAT_01d38550);
  puVar8 = PTR_DAT_02710788;
  lVar10 = *(long *)PTR_DAT_02710788;
  lVar11 = *(long *)(lVar10 + 0x1e8);
  if (lVar11 == 0) {
    lVar11 = *(long *)(lVar10 + 8);
  }
  local_198 = *(undefined8 *)(*(long *)PTR_DAT_027154f0 + 0x10);
  FUN_0073f8c0(&local_48,lVar10,0,&local_190,0,lVar11,0,&local_198);
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  lVar10 = CONCAT44(uStack_44,local_48);
  local_158 = lVar10;
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if ((local_150 != 0) || (local_d0 != 0)) {
      FUN_006e1e70(lVar10,&local_160,1);
    }
    FUN_006e1be0(lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if ((local_178 != 0) && (local_190 != 0)) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
  }
  local_190 = 0;
  local_188 = (char *)0xcbf29ce484222645;
  local_180 = &DAT_01d38550;
  local_178 = 0;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  local_48 = 0;
  uVar9 = FUN_0073bf40(param_1,&local_160,&local_48);
  local_190 = CONCAT44(local_190._4_4_,uVar9);
  plVar12 = (long *)FUN_0073d4c0(param_1 + 0xe0,&local_190);
  lVar10 = *plVar12;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  lVar11 = param_1[0xc0];
  param_1[0xc0] = lVar10;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  FUN_0073c500(param_1 + 4,param_1[2]);
  local_160 = PTR_DAT_02710800 + 0x10;
  if (local_158 == 0) {
    local_158 = 0;
    pcVar7 = local_c8;
  }
  else {
    FUN_006e2100(local_158,&local_160);
    lVar10 = local_158;
    local_158 = 0;
    pcVar7 = local_c8;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      pcVar7 = local_c8;
    }
  }
  local_c8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar7)(auStack_b0);
  }
  pcVar7 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar7)(auStack_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_160 = PTR_DAT_02710818 + 0x10;
  local_158 = 0;
  FUN_0010eac0(&local_190,PTR_DAT_02710908,"texture/primitive_renderer_texture.bntx",&DAT_01d38550);
  lVar10 = *(long *)puVar8;
  lVar11 = *(long *)(lVar10 + 0x1e8);
  if (lVar11 == 0) {
    lVar11 = *(long *)(lVar10 + 8);
  }
  FUN_0010ecd0(&local_48,lVar10,0,&local_190,0,lVar11,0);
  lVar10 = CONCAT44(uStack_44,local_48);
  local_158 = lVar10;
  if (lVar10 != 0) {
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    if ((local_150 != 0) || (local_d0 != 0)) {
      FUN_006e1e70(lVar10,&local_160,1);
    }
    FUN_006e1be0(lVar10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  if ((local_178 != 0) && (local_190 != 0)) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
  }
  local_190 = 0;
  local_188 = (char *)0xcbf29ce484222645;
  local_180 = &DAT_01d38550;
  local_178 = 0;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
    local_170 = 0;
  }
  local_190 = 0x5bae12b9d510ec90;
  local_188 = "DummyTex";
  local_180 = (undefined1 *)0x8;
  local_178 = 0;
  uVar9 = FUN_0073c650(param_1,&local_160,&local_190);
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  local_190 = CONCAT44(local_190._4_4_,uVar9);
  local_48 = 0;
  FUN_0073c7b0(param_1,&local_48,&local_190);
  local_48 = 1;
  FUN_0073c7b0(param_1,&local_48,&local_190);
  local_48 = 2;
  FUN_0073c7b0(param_1,&local_48,&local_190);
  local_160 = PTR_DAT_02710808 + 0x10;
  if (local_158 == 0) {
    local_158 = 0;
    pcVar7 = local_c8;
  }
  else {
    FUN_006e2100(local_158,&local_160);
    lVar10 = local_158;
    local_158 = 0;
    pcVar7 = local_c8;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      pcVar7 = local_c8;
    }
  }
  local_c8 = pcVar7;
  if (pcVar7 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar7)(auStack_b0);
  }
  pcVar7 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar7)(auStack_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = 0;
  }
  *(undefined4 *)(param_1 + 0x103) = 2;
  *(undefined4 *)(param_1 + 0x107) = 2;
  *(undefined4 *)(param_1 + 0x105) = 3;
  *(undefined4 *)(param_1 + 0x109) = 1;
  *(undefined4 *)(param_1 + 0x10b) = 1;
  *(undefined4 *)(param_1 + 0x10d) = 1;
  FUN_00743d10(param_1);
  FUN_007428d0(param_1);
  return;
}


