/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e65a90; name: FUN_00e65a90
 */


void FUN_00e65a90(undefined4 param_1,long param_2,uint param_3,undefined4 param_4)

{
  if ((param_3 != 0) && (*(char *)(param_2 + 0x4b0) != '\0')) {
    *(undefined1 *)(param_2 + 0x4f0) = 1;
    *(undefined4 *)(param_2 + 0x4f4) = 0;
    *(float *)(param_2 + 0x4f8) = 1.0 / (float)param_3;
    *(undefined4 *)(param_2 + 0x4fc) = *(undefined4 *)(param_2 + 0x490);
    *(undefined4 *)(param_2 + 0x500) = param_1;
    *(undefined4 *)(param_2 + 0x504) = param_4;
  }
  return;
}


