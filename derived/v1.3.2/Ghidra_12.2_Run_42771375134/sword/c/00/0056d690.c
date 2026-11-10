/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056d690; name: FUN_0056d690
 */


undefined8 FUN_0056d690(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  long *local_28;
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_3c = 0;
    local_c0 = 0;
    uStack_b8 = 0x10;
    local_90 = 0x100000002;
    uStack_88 = 2;
    local_40 = 2;
    local_34 = 0;
    local_80 = 0;
    uStack_78 = 0x200000002;
    local_60 = 0x300000002;
    uStack_58 = 2;
    local_b0 = 0;
    uStack_a8 = 2;
    local_a0 = 2;
    uStack_98 = 0;
    local_70 = 2;
    uStack_68 = 0;
    local_50 = 0;
    uStack_48 = 0x400000002;
    if (param_1[0x5342] == 0) {
      FUN_005466d0(*param_1,&local_28);
      (**(code **)(*local_28 + 8))();
      uVar2 = (**(code **)(*(long *)*param_1 + 0x128))((long *)*param_1,0);
      uVar1 = (**(code **)(*(long *)*param_1 + 0x138))((long *)*param_1,0);
      uVar2 = (**(code **)(*local_28 + 0x230))(local_28,&local_c0,6,uVar2,uVar1,param_1 + 0x5342);
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}


