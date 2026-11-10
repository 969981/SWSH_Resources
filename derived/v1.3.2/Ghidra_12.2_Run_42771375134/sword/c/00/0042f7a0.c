/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042f7a0; name: FUN_0042f7a0
 */


void FUN_0042f7a0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x1000000000000ff;
  param_1[2] = 0x400003f800000;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = 0x40000000001;
  param_1[5] = 0x1000000040000;
  *(undefined2 *)((long)param_1 + 0x44) = 0x101;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = 1000;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  param_1[9] = 0;
  thunk_FUN_00468bb0(param_1 + 6);
  return;
}


