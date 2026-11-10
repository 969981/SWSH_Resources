/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01182710; name: FUN_01182710
 */


void FUN_01182710(long param_1,undefined8 *param_2)

{
  *(undefined1 *)(param_1 + 0x698) = 0;
  *(undefined8 *)(param_1 + 0x678) = *param_2;
  *(undefined1 *)(param_1 + 0x699) = 1;
  *(undefined8 *)(param_1 + 0x680) = param_2[1];
  *(undefined1 *)(param_1 + 0x69a) = 2;
  *(undefined8 *)(param_1 + 0x688) = param_2[2];
  *(undefined1 *)(param_1 + 0x69b) = 3;
  *(undefined8 *)(param_1 + 0x690) = param_2[3];
  return;
}


