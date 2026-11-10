/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323c10; name: FUN_01323c10
 */


void FUN_01323c10(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x378) = param_2[1];
  *(undefined8 *)(param_1 + 0x370) = *param_2;
  return;
}


