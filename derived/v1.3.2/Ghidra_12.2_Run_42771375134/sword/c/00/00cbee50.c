/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbee50; name: FUN_00cbee50
 */


void FUN_00cbee50(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long local_70 [2];
  undefined1 *local_60;
  long local_58;
  long local_50;
  char *local_40;
  long local_38;
  
  *(undefined **)(param_1 + 4) = PTR_DAT_027194a8 + 0x10;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  puVar1 = PTR_DAT_02710ac8 + 0x10;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined **)(param_1 + 0x4c) = puVar1;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  local_40 = "bin/archive/chara/data/resident_chara_table_nx64.gfpak";
  *(undefined1 **)(param_1 + 8) = &LAB_00cbf6b0;
  *(undefined1 **)(param_1 + 10) = &LAB_00cbf750;
  *(undefined1 **)(param_1 + 0xc) = &LAB_00cbf760;
  *param_1 = 1;
  *(undefined1 **)(param_1 + 0xe) = &LAB_00cbf770;
  *(undefined4 **)(param_1 + 0x10) = param_1;
  FUN_008d4da0(local_70,&local_40);
  uVar2 = FUN_00c65260();
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,0,local_70,0,uVar2,0);
  if (*(long *)(param_1 + 6) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 6) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 6) = 0;
  }
  *(long *)(param_1 + 6) = local_38;
  if (local_38 != 0) {
    plVar3 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 8) != 0) || (*(long *)(param_1 + 0x28) != 0)) {
      FUN_006e1e70(local_38,param_1 + 4,1);
    }
    FUN_006e1be0(local_38);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((local_58 != 0) && (local_70[0] != 0)) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  local_70[0] = 0;
  local_70[1] = 0xcbf29ce484222645;
  local_60 = &DAT_01d38550;
  local_58 = 0;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


