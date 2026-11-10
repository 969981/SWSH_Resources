/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013542d0; name: FUN_013542d0
 */


undefined1  [16] FUN_013542d0(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_01346f20();
  iVar1 = FUN_0131bab0();
  if (iVar1 != param_2) {
    FUN_01346f20(param_1);
    uVar2 = FUN_0131bab0();
    *(undefined4 *)(param_1 + 0xac) = uVar2;
    if (param_2 == 1) {
      uVar3 = FUN_012ecf00(1);
      auVar5._8_8_ = uVar3;
      auVar5._0_8_ = 0x700c23cb6f47e15b;
      return auVar5;
    }
    if (param_2 == 2) {
      uVar3 = FUN_012ecf00(1);
      auVar6._8_8_ = uVar3;
      auVar6._0_8_ = 0xa9f427d82acb43f3;
      return auVar6;
    }
    if (param_2 == 3) {
      uVar3 = FUN_012ecf00(1);
      auVar4._8_8_ = uVar3;
      auVar4._0_8_ = 0x59cc2dcbc8e6af53;
      return auVar4;
    }
  }
  return *(undefined1 (*) [16])PTR_DAT_02727b60;
}


