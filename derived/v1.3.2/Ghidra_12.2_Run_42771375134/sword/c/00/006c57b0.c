/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006c57b0; name: FUN_006c57b0
 */


void FUN_006c57b0(undefined4 *param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xa8) = *param_1;
  *(undefined4 *)(param_2 + 0xa0) = param_1[1];
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(param_1 + 0xc);
  return;
}


