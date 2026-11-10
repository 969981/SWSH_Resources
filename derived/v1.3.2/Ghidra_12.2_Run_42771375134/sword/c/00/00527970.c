/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00527970; name: FUN_00527970
 */


undefined8 FUN_00527970(long param_1,void *param_2)

{
  if (param_2 == (void *)0x0) {
    return 0xfffffffa;
  }
  *(undefined4 *)(param_1 + 0xf80) = 0xffffffff;
  memcpy((void *)(param_1 + 0xf84),param_2,0x84);
  return 0;
}


