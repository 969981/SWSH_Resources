/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef2e90; name: FUN_00ef2e90
 */


void FUN_00ef2e90(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  char *__src;
  long *plVar1;
  undefined8 local_140;
  undefined8 local_130 [8];
  char acStack_f0 [80];
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 local_50;
  
  local_140 = 0;
  FUN_00db17d0(local_130);
  local_50 = 0;
  local_a0 = 0x10100;
  local_98 = 0xffffffff;
  local_90 = 0xcbf29ce484222645;
  local_70 = 0xcbf29ce484222645;
  local_9c = 0;
  local_68 = &DAT_01d38550;
  uStack_60 = 0;
  local_58 = 0;
  local_140 = CONCAT44(1,param_2);
  local_80 = 0;
  uStack_78 = 0;
  local_130[0] = *param_3;
  __src = (char *)param_3[1];
  if (param_3[3] == 0) {
    strncpy(acStack_f0,__src,0x40);
  }
  else {
    plVar1 = (long *)(param_3[3] + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    strncpy(acStack_f0,__src,0x40);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  local_a0 = CONCAT31(local_a0._1_3_,1);
  local_9c = CONCAT11(local_9c._1_1_,1);
  FUN_00ef2ca0(param_1,&local_140);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


