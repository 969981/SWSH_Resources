/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007884d0; name: FUN_007884d0
 */


void FUN_007884d0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  FUN_019ab930(param_1 + 4);
  param_1[0xc] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xe) = 0;
  return;
}


