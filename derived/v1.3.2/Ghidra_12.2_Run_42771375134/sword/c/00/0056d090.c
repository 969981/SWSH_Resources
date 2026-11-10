/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056d090; name: FUN_0056d090
 */


undefined8 FUN_0056d090(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_28;
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_50 = 0;
    uStack_48 = 2;
    local_60 = 0;
    uStack_58 = 0x10;
    local_40 = 0x10;
    uStack_38 = 0;
    if (param_1[0x5338] == 0) {
      FUN_005466d0(*param_1,&local_28);
      (**(code **)(*local_28 + 8))();
      uVar2 = (**(code **)(*(long *)*param_1 + 0x128))((long *)*param_1,0);
      uVar1 = (**(code **)(*(long *)*param_1 + 0x138))((long *)*param_1,0);
      uVar2 = (**(code **)(*local_28 + 0x230))(local_28,&local_60,2,uVar2,uVar1,param_1 + 0x5338);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


