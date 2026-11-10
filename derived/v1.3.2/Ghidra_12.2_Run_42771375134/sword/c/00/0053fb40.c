/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053fb40; name: FUN_0053fb40
 */


undefined8 FUN_0053fb40(long param_1,uint param_2)

{
  if (param_2 < 0x10) {
    return *(undefined8 *)(param_1 + (long)(int)param_2 * 8 + 0x14c88);
  }
  return 0;
}


