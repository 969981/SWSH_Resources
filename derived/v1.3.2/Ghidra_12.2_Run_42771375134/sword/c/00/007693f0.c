/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007693f0; name: FUN_007693f0
 */


undefined8 FUN_007693f0(long param_1,undefined8 *param_2)

{
  if (param_2 == (undefined8 *)0x0) {
    return 0x100b;
  }
  *param_2 = *(undefined8 *)(param_1 + 0xa0);
  return 0;
}


