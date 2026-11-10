/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010645a0; name: FUN_010645a0
 */


void FUN_010645a0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long local_50;
  byte local_44 [4];
  undefined8 local_40;
  undefined1 auStack_38 [8];
  
  local_44[0] = param_5 & 1;
  uVar1 = *(undefined8 *)PTR_DAT_02710848;
  local_40 = param_2;
  local_50 = FUN_01064e90(auStack_38,param_2,&local_40,param_3,param_4,local_44);
  if (local_50 == 0) {
    *param_1 = 0;
  }
  else {
    plVar2 = (long *)(local_50 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    *param_1 = local_50;
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_0101b530(uVar1,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return;
}


