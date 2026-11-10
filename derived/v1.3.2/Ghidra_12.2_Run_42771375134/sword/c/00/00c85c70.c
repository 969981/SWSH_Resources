/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c85c70; name: FUN_00c85c70
 */


void FUN_00c85c70(long *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long local_80;
  long local_78;
  undefined1 local_6c [4];
  undefined *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_68 = PTR_DAT_0271c400 + 0x10;
  local_40 = 0;
  uStack_38 = 0;
  local_6c[0] = 0;
  local_28 = 0;
  local_60 = 6;
  FUN_00c85db0(param_1,param_3,&local_68,local_6c);
  if (param_1[0xe] == 0) {
    local_80 = 0;
  }
  else {
    FUN_00c62ba0(&local_80);
  }
  FUN_00cb0000(&local_78,local_80,param_2 & 1,&local_68,local_6c[0],0,0);
  if (param_1[0x1c] != 0) {
    (**(code **)(*(long *)(param_1[0x1c] + 0x48) + 0x18))();
    param_1[0x1c] = 0;
  }
  lVar1 = local_78;
  local_78 = 0;
  param_1[0x1c] = lVar1;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if ((param_2 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x94) = 3;
    if (*(char *)((long)param_1 + 0x7c) != '\0') {
      (**(code **)(*param_1 + 0x80))(param_1,param_1[0xd]);
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x94) = 2;
  }
  local_68 = PTR_DAT_0271c260 + 0x10;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


