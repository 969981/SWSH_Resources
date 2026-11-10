/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dca90; name: FUN_005dca90
 */


undefined8 FUN_005dca90(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_005c9020();
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
  return 1;
}


