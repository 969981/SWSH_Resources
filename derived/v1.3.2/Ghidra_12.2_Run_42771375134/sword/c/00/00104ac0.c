/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00104ac0; name: FUN_00104ac0
 */


void FUN_00104ac0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  puVar1 = PTR_DAT_02710788;
  *(undefined8 *)(*(long *)PTR_DAT_02710788 + 0x1e8) =
       *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x248);
  FUN_0010cf60(local_78,PTR_DAT_02710908,"shader/primitive_renderer_shader.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x178) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x180) != 0) || (*(long *)(param_1 + 0x200) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x170,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010eac0(local_78,PTR_DAT_02710908,"texture/primitive_renderer_texture.bntx",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010ecd0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x288) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x288) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x288) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x290) != 0) || (*(long *)(param_1 + 0x310) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x280,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010f560(local_78,PTR_DAT_02710908,"shader/gamma_correction.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x4a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x4a8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x4b0) != 0) || (*(long *)(param_1 + 0x530) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x4a0,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010f770(local_78,PTR_DAT_02710908,"shader/fog.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x5b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5b8) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x5b8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x5c0) != 0) || (*(long *)(param_1 + 0x640) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x5b0,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010f980(local_78,PTR_DAT_02710908,"shader/ssao.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x6c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x6c8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x6d0) != 0) || (*(long *)(param_1 + 0x750) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x6c0,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010fb90(local_78,PTR_DAT_02710908,"shader/movie.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x7d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x7d8) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x7d8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x7e0) != 0) || (*(long *)(param_1 + 0x860) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 2000,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010fda0(local_78,PTR_DAT_02710908,"shader/blend_cubemap.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x8e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8e8) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x8e8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0x8f0) != 0) || (*(long *)(param_1 + 0x970) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x8e0,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010ffb0(local_78,PTR_DAT_02710908,"shader/collisionmap_shader.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0x9f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x9f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x9f8) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x9f8) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xa00) != 0) || (*(long *)(param_1 + 0xa80) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x9f0,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_0010f980(local_78,PTR_DAT_02710908,"shader/copy.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0xb08) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb08) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb08) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0xb08) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xb10) != 0) || (*(long *)(param_1 + 0xb90) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0xb00,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_001101c0(local_78,PTR_DAT_02710908,"shader/pingpong_blend_shader.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0xc18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc18) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0xc18) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xc20) != 0) || (*(long *)(param_1 + 0xca0) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0xc10,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_001103d0(local_78,PTR_DAT_02710908,"shader/outline.bnsh",&DAT_01d38550);
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0xd28) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd28) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd28) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0xd28) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xd30) != 0) || (*(long *)(param_1 + 0xdb0) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0xd20,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_00105f80(local_78,"bin/graphics/mask_shader/mask_path.bnsh");
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0xe38) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xe38) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xe38) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0xe38) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xe40) != 0) || (*(long *)(param_1 + 0xec0) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0xe30,1);
    }
    FUN_006e1be0(lVar2);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  FUN_001060b0(local_78,"bin/graphics/blend_shader/blend_path.bnsh");
  lVar2 = *(long *)puVar1;
  lVar3 = *(long *)(lVar2 + 0x1e8);
  if (lVar3 == 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  FUN_0010d7b0(&local_48,lVar2,0,local_78,0,lVar3,0);
  if (*(long *)(param_1 + 0xf48) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xf48) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xf48) = 0;
  }
  *(long *)(param_1 + 0xf48) = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xf50) != 0) || (*(long *)(param_1 + 0xfd0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0xf40,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if ((local_60 != 0) && (local_78[0] != 0)) {
    (**(code **)(*(long *)(local_78[0] + 0x48) + 0x18))();
  }
  local_78[0] = 0;
  local_78[1] = 0xcbf29ce484222645;
  local_68 = &DAT_01d38550;
  local_60 = 0;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


