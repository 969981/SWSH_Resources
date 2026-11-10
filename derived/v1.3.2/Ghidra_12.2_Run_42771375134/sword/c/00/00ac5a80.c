/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac5a80; name: FUN_00ac5a80
 */


undefined1  [16] FUN_00ac5a80(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_4_ = (float)*(undefined8 *)(param_1 + 0x3d0) + (float)*(undefined8 *)(param_1 + 0x3e0) +
                 (float)*(undefined8 *)(param_1 + 0x3f0) + (float)*(undefined8 *)(param_1 + 0x430) +
                 (float)*(undefined8 *)(param_1 + 0x440);
  auVar1._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x3d0) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x3e0) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x3f0) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x440) >> 0x20);
  auVar1._8_4_ = (float)*(undefined8 *)(param_1 + 0x3d8) + (float)*(undefined8 *)(param_1 + 1000) +
                 (float)*(undefined8 *)(param_1 + 0x3f8) + (float)*(undefined8 *)(param_1 + 0x438) +
                 (float)*(undefined8 *)(param_1 + 0x448);
  auVar1._12_4_ =
       (float)((ulong)*(undefined8 *)(param_1 + 0x3d8) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 1000) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x3f8) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20) +
       (float)((ulong)*(undefined8 *)(param_1 + 0x448) >> 0x20);
  return auVar1;
}


