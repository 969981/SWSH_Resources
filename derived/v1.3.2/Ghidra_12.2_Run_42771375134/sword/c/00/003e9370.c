/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9370; name: FUN_003e9370
 */


void FUN_003e9370(undefined4 param_1,long param_2,int param_3)

{
  *(undefined1 *)(param_2 + 0x128c) = 1;
  FUN_0011e9a0(*(undefined8 *)(param_2 + 0x720));
  if (param_3 == 0) {
    *(undefined4 *)(param_2 + 0x1288) = param_1;
    return;
  }
  return;
}


