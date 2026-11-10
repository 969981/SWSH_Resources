/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013f6910; name: FUN_013f6910
 */


void FUN_013f6910(undefined1 *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int param3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  char local_58 [8];
  char acStack_50 [8];
  char local_48 [8];
  char acStack_40 [8];
  char local_38 [2];
  char acStack_36 [6];
  char acStack_30 [7];
  char local_29;
  char acStack_28 [8];
  
  if (param_4 < 1) {
    local_48 = (char  [8])s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._16_8_;
    acStack_40 = (char  [8])s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._24_8_;
    local_58 = (char  [8])s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._0_8_;
    acStack_50 = (char  [8])s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._8_8_;
    acStack_28._0_7_ = s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._48_7_;
    _local_38 = s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._32_8_;
    acStack_30 = (char  [7])s_bin_pokemon_data_pokecamp_seikak_01d0e6b9._40_7_;
    local_29 = s_bin_pokemon_data_pokecamp_seikak_01d0e6b9[0x2f];
    param3 = FUN_0087cd00(*param_3);
    snprintf(acStack_36,0x15,"poke_seikaku_%03d.bin",param3);
    FUN_00a75450(&local_88,local_58);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = local_80;
    *(undefined8 *)(param_1 + 0x18) = uStack_78;
    *(undefined8 *)(param_1 + 0x20) = local_70;
    *(undefined8 *)(param_1 + 0x28) = local_68;
    *(undefined4 *)(param_1 + 0x30) = local_60;
    *(undefined8 *)(param_1 + 8) = local_88;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}


