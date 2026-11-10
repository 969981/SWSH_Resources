/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac7610; name: FUN_00ac7610
 */


undefined1  [16] FUN_00ac7610(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x400) >> 0x20) *
                 (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20);
  auVar1._0_4_ = (float)*(undefined8 *)(param_1 + 0x400) * (float)*(undefined8 *)(param_1 + 0x410);
  auVar1._8_4_ = (float)*(undefined8 *)(param_1 + 0x408) * (float)*(undefined8 *)(param_1 + 0x418);
  auVar1._12_4_ = 0;
  return auVar1;
}


