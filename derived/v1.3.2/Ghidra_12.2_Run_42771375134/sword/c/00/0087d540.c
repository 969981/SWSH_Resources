/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087d540; name: FUN_0087d540
 */


void FUN_0087d540(long param_1,uint param_2)

{
  if (0xfe < param_2) {
    param_2 = 0xff;
  }
  FUN_00875460(*(undefined8 *)(param_1 + 0x98),param_2);
  return;
}


