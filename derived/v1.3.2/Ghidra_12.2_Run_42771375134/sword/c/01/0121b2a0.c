/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b2a0; name: FUN_0121b2a0
 */


undefined1  [16] FUN_0121b2a0(ushort *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 == (ushort *)0x0) {
    return ZEXT816(0);
  }
  uVar3 = *param_2 << 3;
  if (uVar3 < 0x10) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)*param_1;
    if (0x17 < uVar3) {
      uVar2 = (ulong)(byte)param_1[1];
      if (uVar3 < 0x38) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar1 | uVar2 << 0x20;
        return auVar6;
      }
      if (uVar3 < 0x48) {
        auVar7._8_4_ = *(undefined4 *)((long)param_1 + 3);
        auVar7._0_8_ = uVar1 | uVar2 << 0x20;
        auVar7._12_4_ = 0;
        return auVar7;
      }
      auVar4._12_2_ = *(undefined2 *)((long)param_1 + 7);
      auVar4._8_4_ = *(undefined4 *)((long)param_1 + 3);
      auVar4._0_8_ = uVar1 | uVar2 << 0x20;
      auVar4._14_2_ = 0;
      return auVar4;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar1;
  return auVar5;
}


