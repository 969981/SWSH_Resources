/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da5a80; name: FUN_00da5a80
 */


void FUN_00da5a80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long local_78 [2];
  undefined1 *local_68;
  long local_60;
  long local_58;
  long local_48;
  
  uVar3 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,1);
  FUN_00a75450(local_78,"bin/field/draw_env/lightpreset/fel_900_00_chara.gfbmad");
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_78,0,param_2,uVar3);
  plVar4 = (long *)(param_1 + 0xa008);
  if (*plVar4 != 0) {
    (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  lVar2 = local_48;
  *plVar4 = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xa010) != 0) || (*(long *)(param_1 + 0xa090) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0xa000,1);
    }
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
  FUN_00a75450(local_78,"bin/field/draw_env/lightpreset/fel_900_03_chara.gfbmad");
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,1,local_78,0,param_2,uVar3);
  plVar4 = (long *)(param_1 + 0xa118);
  if (*plVar4 != 0) {
    (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
    *plVar4 = 0;
  }
  *plVar4 = local_48;
  if (local_48 != 0) {
    plVar4 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((*(long *)(param_1 + 0xa120) != 0) || (*(long *)(param_1 + 0xa1a0) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0xa110,1);
    }
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


