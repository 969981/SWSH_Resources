/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01323bf0; name: FUN_01323bf0
 */


void FUN_01323bf0(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x368) = param_2[1];
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  return;
}


