/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dacf30; name: FUN_00dacf30
 */


void FUN_00dacf30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long local_68 [2];
  undefined1 *local_58;
  long local_50;
  long local_48;
  char *local_38;
  long local_28;
  
  local_38 = "bin/field/draw_env/lightpreset/fel_999_99_chara_g2.gfbmad";
  uVar1 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,1);
  FUN_008d4da0(local_68,&local_38);
  FUN_006dccd0(&local_28,*(undefined8 *)PTR_DAT_02710788,1,local_68,0,param_2,uVar1);
  plVar2 = (long *)(param_1 + 0xa228);
  if (*plVar2 != 0) {
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
    *plVar2 = 0;
  }
  *plVar2 = local_28;
  if (local_28 != 0) {
    plVar2 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    if ((*(long *)(param_1 + 0xa230) != 0) || (*(long *)(param_1 + 0xa2b0) != 0)) {
      FUN_006e1e70(local_28,param_1 + 0xa220,1);
    }
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if ((local_50 != 0) && (local_68[0] != 0)) {
    (**(code **)(*(long *)(local_68[0] + 0x48) + 0x18))();
  }
  local_68[0] = 0;
  local_68[1] = 0xcbf29ce484222645;
  local_58 = &DAT_01d38550;
  local_50 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


