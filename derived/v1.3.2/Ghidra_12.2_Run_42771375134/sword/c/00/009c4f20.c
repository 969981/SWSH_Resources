/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c4f20; name: FUN_009c4f20
 */


void FUN_009c4f20(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  if (*(int *)(param_1 + 0x4e5c) == 0) {
    *(int *)(param_1 + 0x4e5c) = 1;
    *(undefined1 *)(param_1 + 0x4e58) = param_4;
    FUN_009151b0(param_1 + 8);
    FUN_00915100(param_1 + 0x2730);
    *(undefined1 *)(param_1 + 0x4e60) = 0;
    return;
  }
  return;
}


