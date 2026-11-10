/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010a6a10; name: FUN_010a6a10
 */


void FUN_010a6a10(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [96];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  undefined4 local_44;
  
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_58 = 0;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  local_60 = 0;
  local_44 = 0;
  local_a0 = *param_2;
  local_98 = param_2[1];
  local_90 = param_2[2];
  local_88 = param_2[3];
  if (local_88 == 0) {
    FUN_010a68a0(local_80,&local_44,&local_a0);
  }
  else {
    plVar3 = (long *)(local_88 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_010a68a0(local_80,&local_44,&local_a0);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_88 = 0;
  }
  uVar2 = local_44;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  local_118 = (code *)0x0;
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,auStack_100);
    local_120 = *param_4;
    local_118 = (code *)param_4[1];
    local_110 = param_4[2];
    uStack_108 = param_4[3];
  }
  FUN_0168b180(param_1,local_80,uVar2,1,param_3,&local_120);
  pcVar1 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar1)(auStack_100);
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


