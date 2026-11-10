/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056d350; name: FUN_0056d350
 */


undefined8 FUN_0056d350(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  else if (param_1[0x533b] == 0) {
    FUN_005466d0(*param_1,&local_28);
    (**(code **)(*local_28 + 8))();
    local_98 = 0;
    uStack_90 = 2;
    local_38 = 0;
    local_78 = 0x100000002;
    uStack_70 = 0x10;
    local_68 = 0;
    uStack_60 = 0x200000002;
    local_a8 = 0;
    uStack_a0 = 0x10;
    local_88 = 0x10;
    uStack_80 = 0;
    local_58 = 0x10;
    uStack_50 = 0;
    local_48 = 0x300000002;
    uStack_40 = 0x10;
    uVar2 = (**(code **)(*(long *)*param_1 + 0x128))((long *)*param_1,0);
    uVar1 = (**(code **)(*(long *)*param_1 + 0x138))((long *)*param_1,0);
    uVar2 = (**(code **)(*local_28 + 0x230))(local_28,&local_a8,5,uVar2,uVar1,param_1 + 0x533b);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


