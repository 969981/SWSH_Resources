/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fa3c0; name: FUN_006fa3c0
 */


void FUN_006fa3c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_019a30f0(param_1 + 0x58,PTR_DAT_027155e8);
  FUN_0199e6b0(param_2);
  FUN_0199e720(param_2,*(undefined4 *)(param_1 + 0xe0),param_1 + 0x58);
  FUN_0199e760(param_2,param_1 + 0xd0,*(undefined4 *)(param_1 + 0xe0));
  FUN_0199e6c0(param_2);
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  return;
}


