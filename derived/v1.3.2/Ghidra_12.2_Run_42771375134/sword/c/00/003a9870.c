/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9870; name: FUN_003a9870
 */


void FUN_003a9870(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  if (param_1[2] != 0) {
    FUN_00196190(param_1[2],param_2);
    return;
  }
  local_58 = 0xc;
  local_48 = 0xc;
  local_60 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 4;
  local_30 = 0;
  local_28 = 4;
  plVar1 = (long *)0x0;
  if (*param_1 != 0) {
    plVar1 = (long *)FUN_003aa860(*param_1);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,auStack_78,1,0);
  if (*param_1 == 0) {
    plVar1 = (long *)param_1[2];
  }
  else {
    plVar1 = (long *)FUN_003aa860();
  }
  (**(code **)(*plVar1 + 0x50))(auStack_90);
  uVar2 = FUN_001968d0(auStack_78,auStack_90);
  FUN_00196190(uVar2,param_2);
  FUN_00196b30(uVar2);
  return;
}


