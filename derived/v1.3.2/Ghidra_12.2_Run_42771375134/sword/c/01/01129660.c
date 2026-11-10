/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01129660; name: FUN_01129660
 */


void FUN_01129660(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  param_1[8] = 0;
  if (param_1[0x1c] == '\0') {
    *(ulong *)(param_1 + 0x20) = CONCAT44(param_3,param_2);
    param_1[0x1c] = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(undefined4 *)(param_1 + 0x24) = param_3;
  }
  if ((param_4 & 1) == 0) {
    return;
  }
  *param_1 = 0;
  param_1[8] = 0;
  if (param_1[0x10] == '\0') {
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_1 + 0x20);
    param_1[0x10] = 1;
    param_1[0x1c] = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  param_1[0x1c] = 0;
  return;
}


