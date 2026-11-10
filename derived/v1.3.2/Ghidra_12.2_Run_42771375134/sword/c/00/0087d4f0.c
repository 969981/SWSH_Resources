/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d4f0; name: FUN_0087d4f0
 */


void FUN_0087d4f0(long param_1,undefined8 param_2)

{
  if (0xff < (uint)param_2) {
    param_2 = 0xff;
  }
  FUN_008741d0(*(undefined8 *)(param_1 + 0x98),param_2);
  return;
}


