/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013f6400; name: FUN_013f6400
 */


void FUN_013f6400(undefined1 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

{
  int param5;
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  char *__format;
  long lVar5;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  char local_c0 [8];
  char acStack_b8 [8];
  char local_b0 [8];
  char acStack_a8 [8];
  undefined2 local_a0;
  undefined8 local_9e;
  undefined8 local_96;
  undefined8 local_8e;
  undefined8 local_86;
  undefined8 local_7e;
  undefined8 local_76;
  undefined8 local_6e;
  undefined8 local_66;
  undefined8 local_5e;
  undefined8 local_56;
  undefined6 uStack_4e;
  undefined2 local_48;
  undefined6 uStack_46;
  
  switch(param_4) {
  case 0:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uStack_46 = 0;
    uStack_4e = 0;
    local_48 = 0;
    local_56 = 0;
    local_5e = 0;
    local_66 = 0;
    local_6e = 0;
    local_a0 = 0x2f;
    local_76 = 0;
    local_7e = 0;
    local_86 = 0;
    local_8e = 0;
    local_96 = 0;
    local_9e = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1e];
    acStack_a8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1f];
    local_c0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xf];
    iVar2 = FUN_008783b0(lVar5);
    uVar1 = FUN_008783c0(lVar5);
    param5 = FUN_0087ccf0(lVar5);
    snprintf((char *)((long)&local_a0 + 1),0x5e,"poke_motion_%04d_%02d_%01d.bin",iVar2,
             uVar1 & 0xffff,param5);
    FUN_00b1bbf0(&local_f0,local_c0);
    goto joined_r0x013f6750;
  case 1:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uStack_46 = 0;
    uStack_4e = 0;
    local_48 = 0;
    local_56 = 0;
    local_5e = 0;
    local_66 = 0;
    local_6e = 0;
    local_a0 = 0x2f;
    local_76 = 0;
    local_7e = 0;
    local_86 = 0;
    local_8e = 0;
    local_96 = 0;
    local_9e = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1e];
    acStack_a8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1f];
    local_c0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xf];
    uVar3 = FUN_008783b0(lVar5);
    uVar1 = FUN_008783c0(lVar5);
    uVar4 = (ulong)(uVar1 & 0xffff);
    __format = "poke_motion_%04d_%02d_0.bin";
    break;
  case 2:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uStack_46 = 0;
    uStack_4e = 0;
    local_48 = 0;
    local_56 = 0;
    local_5e = 0;
    local_66 = 0;
    local_6e = 0;
    local_a0 = 0x2f;
    local_76 = 0;
    local_7e = 0;
    local_86 = 0;
    local_8e = 0;
    local_96 = 0;
    local_9e = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1e];
    acStack_a8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1f];
    local_c0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xf];
    uVar3 = FUN_008783b0(lVar5);
    uVar4 = FUN_0087ccf0(lVar5);
    uVar4 = uVar4 & 0xffffffff;
    __format = "poke_motion_%04d_00_%01d.bin";
    break;
  case 3:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    uStack_46 = 0;
    uStack_4e = 0;
    local_48 = 0;
    local_56 = 0;
    local_5e = 0;
    local_66 = 0;
    local_6e = 0;
    local_a0 = 0x2f;
    local_76 = 0;
    local_7e = 0;
    local_86 = 0;
    local_8e = 0;
    local_96 = 0;
    local_9e = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1e];
    acStack_a8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0x1f];
    local_c0[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_motion_01d2da16[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_motion_01d2da16[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_motion_01d2da16[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_motion_01d2da16[0xf];
    iVar2 = FUN_008783b0(lVar5);
    snprintf((char *)((long)&local_a0 + 1),0x5e,"poke_motion_%04d_00_0.bin",iVar2);
    FUN_00b1bbf0(&local_f0,local_c0);
    goto joined_r0x013f6750;
  default:
    *param_1 = 0;
    return;
  }
  snprintf((char *)((long)&local_a0 + 1),0x5e,__format,uVar3 & 0xffffffff,uVar4);
  FUN_00b1bbf0(&local_f0,local_c0);
joined_r0x013f6750:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = local_e8;
  *(undefined8 *)(param_1 + 0x18) = uStack_e0;
  *(undefined8 *)(param_1 + 0x20) = local_d8;
  *(undefined8 *)(param_1 + 0x28) = local_d0;
  *(undefined4 *)(param_1 + 0x30) = local_c8;
  *(undefined8 *)(param_1 + 8) = local_f0;
  *param_1 = 1;
  return;
}


