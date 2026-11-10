/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008798b0; name: FUN_008798b0
 */


void FUN_008798b0(long param_1,uint param_2)

{
  if (9 < (param_2 & 0xff)) {
    param_2 = 10;
  }
  FUN_00871920(*(undefined8 *)(param_1 + 0x98),param_2);
  return;
}


