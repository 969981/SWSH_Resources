/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029cf20; name: FUN_0029cf20
 */


void FUN_0029cf20(long *param_1)

{
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  param_1[5] = 0x7e7fffff7e7fffff;
  param_1[6] = -0x180000081800001;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = -0x180000001800001;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(PTR_DAT_02711f70 + 0x10);
  param_1[0x10] = 0;
                    /* try { // try from 0029cf84 to 0029cf8b has its CatchHandler @ 0029cfc8 */
  FUN_0029f550(param_1 + 0x11);
                    /* try { // try from 0029cf90 to 0029cf93 has its CatchHandler @ 0029cfac */
  FUN_0029f600(param_1 + 0x17);
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}


