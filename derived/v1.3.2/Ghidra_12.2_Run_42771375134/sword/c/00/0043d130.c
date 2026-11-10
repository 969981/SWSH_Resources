/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043d130; name: FUN_0043d130
 */


undefined8 FUN_0043d130(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  
  plVar1 = (long *)FUN_0043e8c0();
  if (plVar1 == (long *)0x0) {
    uVar2 = 0xf;
  }
  else {
    local_54 = 0;
    local_48 = 0;
    local_4c = 0;
    local_50 = 0;
    local_58 = *(byte *)((long)param_1 + 0x36) & 0x1f;
    local_70[0] = param_2;
    local_68 = param_3;
    local_60 = param_4;
    local_5c = FUN_0043e380(param_1);
    (**(code **)(*param_1 + 0x70))(param_1,local_70);
    (**(code **)(*plVar1 + 0x98))(plVar1,local_70);
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar2 = 1;
  }
  return uVar2;
}


