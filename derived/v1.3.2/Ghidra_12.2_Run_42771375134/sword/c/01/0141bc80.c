/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141bc80; name: FUN_0141bc80
 */


void FUN_0141bc80(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 local_44;
  
  local_58 = 0;
  local_60 = 0;
  local_44 = 0;
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  FUN_0141bb30(local_80,&local_44,param_2);
  uVar2 = local_44;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  local_f8 = (code *)0x0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_e0);
    local_100 = *param_4;
    local_f8 = (code *)param_4[1];
    local_f0 = param_4[2];
    uStack_e8 = param_4[3];
  }
  FUN_0168b180(param_1,local_80,uVar2,1,param_3,&local_100);
  pcVar1 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    (*pcVar1)(auStack_e0);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


