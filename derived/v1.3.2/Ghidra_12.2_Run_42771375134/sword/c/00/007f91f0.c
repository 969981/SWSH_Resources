/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f91f0; name: FUN_007f91f0
 */


undefined1  [16] FUN_007f91f0(long *param_1,long *param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if ((long *)*param_1 == param_2) {
    lVar3 = 0;
LAB_007f923c:
    bVar1 = true;
  }
  else {
    lVar3 = *param_2;
    if (lVar3 == 0) goto LAB_007f923c;
    FUN_00801420(lVar3);
    bVar1 = false;
  }
  auVar6 = FUN_007e2eb0(param_2[4],param_3);
  uVar4 = auVar6._8_8_;
  uVar5 = auVar6._0_8_ >> 0x20;
  if (auVar6._0_4_ == 0) {
    if (param_2[3] != 0) {
      auVar6 = FUN_007f91f0(param_1,param_2[3],param_3);
      uVar4 = auVar6._8_8_;
      uVar5 = auVar6._0_8_ >> 0x20;
      if (auVar6._0_4_ != 0) goto joined_r0x007f92d8;
    }
    uVar2 = FUN_007e3000(param_2,param_3);
    if ((uVar2 & 1) == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar4;
      auVar6 = auVar6 << 0x40;
    }
    else {
      auVar6 = FUN_007e2eb0(param_2[4],param_3);
      uVar5 = auVar6._0_8_ >> 0x20;
    }
  }
joined_r0x007f92d8:
  if (!bVar1) {
    FUN_008014c0(lVar3);
  }
  auVar7._8_8_ = auVar6._8_8_;
  auVar7._0_8_ = auVar6._0_8_ & 0xffffffff | uVar5 << 0x20;
  return auVar7;
}


