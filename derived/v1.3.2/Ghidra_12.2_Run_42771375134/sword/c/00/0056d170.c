/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056d170; name: FUN_0056d170
 */


undefined8 FUN_0056d170(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_28;
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_68 = 0;
    uStack_60 = 2;
    local_38 = 0;
    local_48 = 0x100000002;
    uStack_40 = 0x10;
    local_78 = 0;
    uStack_70 = 0x10;
    local_58 = 0x10;
    uStack_50 = 0;
    if (param_1[0x5339] == 0) {
      FUN_005466d0(*param_1,&local_28);
      (**(code **)(*local_28 + 8))();
      uVar2 = (**(code **)(*(long *)*param_1 + 0x128))((long *)*param_1,0);
      uVar1 = (**(code **)(*(long *)*param_1 + 0x138))((long *)*param_1,0);
      uVar2 = (**(code **)(*local_28 + 0x230))(local_28,&local_78,3,uVar2,uVar1,param_1 + 0x5339);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


