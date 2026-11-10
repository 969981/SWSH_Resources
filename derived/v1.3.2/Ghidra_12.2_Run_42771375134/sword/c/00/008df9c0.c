/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df9c0; name: FUN_008df9c0
 */


void FUN_008df9c0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[3] = auVar1._8_8_;
  param_1[2] = auVar1._0_8_;
  return;
}


