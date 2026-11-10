/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df2a40; name: FUN_00df2a40
 */


void FUN_00df2a40(long param_1,undefined8 *param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_2[1];
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_3;
  return;
}


