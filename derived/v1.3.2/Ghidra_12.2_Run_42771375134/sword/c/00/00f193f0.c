/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f193f0; name: FUN_00f193f0
 */


void FUN_00f193f0(undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  *(undefined4 *)(param_3 + 0x130) = param_2;
  *(undefined4 *)(param_3 + 0x134) = param_2;
  *(undefined8 *)(param_3 + 0x148) = param_4[1];
  *(undefined8 *)(param_3 + 0x140) = *param_4;
  *(undefined4 *)(param_3 + 0x138) = param_1;
  return;
}


