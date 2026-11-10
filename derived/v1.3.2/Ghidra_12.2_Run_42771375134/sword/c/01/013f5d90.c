/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013f5d90; name: FUN_013f5d90
 */


void FUN_013f5d90(undefined1 *param_1,undefined8 param_2,long *param_3,undefined4 param_4)

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
  char acStack_a8 [7];
  char cStack_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  switch(param_4) {
  case 0:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1e];
    cStack_a1 = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1f];
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_c0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xf];
    local_a0 = 0;
    uStack_98 = 0;
    iVar2 = FUN_008783b0(lVar5);
    uVar1 = FUN_008783c0(lVar5);
    param5 = FUN_0087ccf0(lVar5);
    snprintf(&cStack_a1,0x60,"poke_face_%04d_%02d_%01d.bin",iVar2,uVar1 & 0xffff,param5);
    FUN_00b1bbf0(&local_f0,local_c0);
    goto joined_r0x013f605c;
  case 1:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1e];
    cStack_a1 = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1f];
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_c0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xf];
    local_a0 = 0;
    uStack_98 = 0;
    uVar3 = FUN_008783b0(lVar5);
    uVar1 = FUN_008783c0(lVar5);
    uVar4 = (ulong)(uVar1 & 0xffff);
    __format = "poke_face_%04d_%02d_0.bin";
    break;
  case 2:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1e];
    cStack_a1 = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1f];
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_c0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xf];
    local_a0 = 0;
    uStack_98 = 0;
    uVar3 = FUN_008783b0(lVar5);
    uVar4 = FUN_0087ccf0(lVar5);
    uVar4 = uVar4 & 0xffffffff;
    __format = "poke_face_%04d_00_%01d.bin";
    break;
  case 3:
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_b0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x10];
    local_b0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x11];
    local_b0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x12];
    local_b0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x13];
    local_b0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x14];
    local_b0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x15];
    local_b0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x16];
    local_b0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x17];
    acStack_a8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x18];
    acStack_a8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x19];
    acStack_a8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1a];
    acStack_a8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1b];
    acStack_a8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1c];
    acStack_a8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1d];
    acStack_a8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1e];
    cStack_a1 = s_bin_pokemon_data_pokecamp_face__01ce94cc[0x1f];
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_c0[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0];
    local_c0[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[1];
    local_c0[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[2];
    local_c0[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[3];
    local_c0[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[4];
    local_c0[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[5];
    local_c0[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[6];
    local_c0[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[7];
    acStack_b8[0] = s_bin_pokemon_data_pokecamp_face__01ce94cc[8];
    acStack_b8[1] = s_bin_pokemon_data_pokecamp_face__01ce94cc[9];
    acStack_b8[2] = s_bin_pokemon_data_pokecamp_face__01ce94cc[10];
    acStack_b8[3] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xb];
    acStack_b8[4] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xc];
    acStack_b8[5] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xd];
    acStack_b8[6] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xe];
    acStack_b8[7] = s_bin_pokemon_data_pokecamp_face__01ce94cc[0xf];
    local_a0 = 0;
    uStack_98 = 0;
    iVar2 = FUN_008783b0(lVar5);
    snprintf(&cStack_a1,0x60,"poke_face_%04d_00_0.bin",iVar2);
    FUN_00b1bbf0(&local_f0,local_c0);
    goto joined_r0x013f605c;
  default:
    *param_1 = 0;
    return;
  }
  snprintf(&cStack_a1,0x60,__format,uVar3 & 0xffffffff,uVar4);
  FUN_00b1bbf0(&local_f0,local_c0);
joined_r0x013f605c:
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


