/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b4930; name: FUN_006b4930
 */


undefined1  [16] FUN_006b4930(long *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long *local_28;
  
  if ((*param_1 == 0) || (FUN_006b4b10(&local_28), local_28 == (long *)0x0)) {
    auVar2 = ZEXT816(0);
  }
  else {
    auVar2 = (**(code **)(*local_28 + 0x80))(local_28,(long)param_1 + 0xc);
    uVar3 = auVar2._8_8_;
    uVar1 = auVar2._0_8_;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
      auVar2._8_8_ = uVar3;
      auVar2._0_8_ = uVar1;
    }
  }
  return auVar2;
}


