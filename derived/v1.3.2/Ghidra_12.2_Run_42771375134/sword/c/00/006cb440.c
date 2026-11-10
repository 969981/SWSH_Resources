/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cb440; name: FUN_006cb440
 */


void FUN_006cb440(undefined4 param_1,long param_2,undefined8 *param_3)

{
  if (*(int *)(param_2 + 0x90) == 0) {
    *(undefined8 *)(param_2 + 0xa8) = param_3[1];
    *(undefined8 *)(param_2 + 0xa0) = *param_3;
    *(undefined4 *)(param_2 + 0xb0) = param_1;
    *(undefined4 *)(param_2 + 0x90) = 1;
    return;
  }
  return;
}


