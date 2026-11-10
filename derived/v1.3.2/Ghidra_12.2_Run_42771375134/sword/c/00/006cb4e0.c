/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cb4e0; name: FUN_006cb4e0
 */


void FUN_006cb4e0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    *(undefined8 *)(param_1 + 0x148) = param_2[1];
    *(undefined8 *)(param_1 + 0x140) = *param_2;
    *(undefined8 *)(param_1 + 0x150) = param_3;
    *(undefined4 *)(param_1 + 0x90) = 4;
    return;
  }
  return;
}


