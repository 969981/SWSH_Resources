/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050f710; name: FUN_0050f710
 */


void FUN_0050f710(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  param_1[0xb] = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_1[10] = 0x3f800000;
    param_1[5] = 0x3f800000;
    *param_1 = 0x3f800000;
    param_1[0xf] = 0x3f800000;
  }
  else {
    *param_1 = *param_2;
    param_1[5] = param_2[1];
    param_1[10] = param_2[2];
    param_1[0xf] = 0x3f800000;
  }
  if (param_3 == (undefined4 *)0x0) {
    param_1[0xe] = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    return;
  }
  param_1[0xc] = *param_3;
  param_1[0xd] = param_3[1];
  param_1[0xe] = param_3[2];
  return;
}


