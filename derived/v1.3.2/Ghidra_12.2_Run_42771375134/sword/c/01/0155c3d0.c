/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155c3d0; name: FUN_0155c3d0
 */


undefined1  [16] FUN_0155c3d0(long *param_1)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  char local_28 [4];
  undefined4 local_24;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,1,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,local_28,1,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  auVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  *(long *)(auVar6._0_8_ + 8) = *(long *)(auVar6._0_8_ + 8) + 1;
  if (((uVar4 & 1) == 0) || (local_28[0] != '\x05')) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar6._8_8_;
    return auVar1 << 0x40;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x18))(param_1);
  plVar3 = (long *)(**(code **)(*plVar2 + 0x28))();
  uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,4,plVar2[1]);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_24,4,0);
    uVar4 = uVar4 & 0xffffffff;
  }
  auVar6 = (**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = auVar6._8_8_;
  *(long *)(auVar6._0_8_ + 8) = *(long *)(auVar6._0_8_ + 8) + 4;
  if (((uVar4 & 1) == 0) ||
     (auVar6 = FUN_0155c550(param_1,local_24), uVar5 = auVar6._8_8_, (auVar6._0_8_ & 0xff) == 0)) {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar5;
    return auVar6 << 0x40;
  }
  auVar7._8_8_ = uVar5 + 5;
  auVar7._0_8_ = 1;
  return auVar7;
}


