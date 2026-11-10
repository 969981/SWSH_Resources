/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0056d560; name: FUN_0056d560
 */


undefined8 FUN_0056d560(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long *local_38;
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_1[0x533d] == 0) {
    FUN_005466d0(*param_1,&local_38);
    (**(code **)(*local_38 + 8))();
    local_d0 = 0;
    uStack_c8 = 2;
    local_60 = 0x10;
    local_b0 = 0x100000002;
    uStack_a8 = 0x10;
    local_a0 = 0;
    uStack_98 = 0x200000002;
    local_80 = 0x300000002;
    uStack_78 = 0x10;
    local_e0 = 0;
    uStack_d8 = 0x10;
    local_70 = 0;
    uStack_68 = 0x400000002;
    local_c0 = 0x10;
    uStack_b8 = 0;
    local_90 = 0x10;
    uStack_88 = 0;
    local_5c = 0;
    local_54 = 0x200000000;
    local_4c = 0x1000000005;
    local_44 = 0;
    local_3c = 0;
    uVar2 = (**(code **)(*(long *)*param_1 + 0x128))((long *)*param_1,0);
    uVar1 = (**(code **)(*(long *)*param_1 + 0x138))((long *)*param_1,0);
    uVar2 = (**(code **)(*local_38 + 0x230))(local_38,&local_e0,7,uVar2,uVar1,param_1 + 0x533d);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


