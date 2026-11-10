/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e56c0; name: FUN_008e56c0
 */


undefined8 FUN_008e56c0(long param_1,char *param_2,undefined4 *param_3)

{
  if (*(char *)(param_1 + 0x45c) == '\x1f') {
    return 0;
  }
  *param_2 = *(char *)(param_1 + 0x45c);
  *param_3 = *(undefined4 *)(param_1 + 0x458);
  return 1;
}


