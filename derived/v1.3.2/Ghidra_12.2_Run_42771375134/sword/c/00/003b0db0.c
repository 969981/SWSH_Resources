/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0db0; name: FUN_003b0db0
 */


undefined1  [16] FUN_003b0db0(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x228))();
  uVar2 = auVar1._8_8_;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x230))();
  (**(code **)(**(long **)(param_1 + 0x20) + 0x240))();
  auVar1._8_8_ = uVar2;
  return auVar1;
}


