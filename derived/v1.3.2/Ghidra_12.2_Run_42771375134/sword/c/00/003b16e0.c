/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b16e0; name: FUN_003b16e0
 */


undefined1  [16] FUN_003b16e0(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x200))();
  uVar2 = auVar1._8_8_;
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1f0))();
  auVar1._8_8_ = uVar2;
  return auVar1;
}


