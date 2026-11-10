/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d0640; name: FUN_002d0640
 */


void FUN_002d0640(long *param_1)

{
  *param_1 = (long)(PTR_DAT_02712048 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = -0xc0c00000;
  param_1[7] = 0;
                    /* try { // try from 002d0680 to 002d068b has its CatchHandler @ 002d0718 */
  FUN_002f5670(param_1 + 1,0x40);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = -0xc0c00000;
  param_1[0xe] = 0;
                    /* try { // try from 002d06a0 to 002d06a7 has its CatchHandler @ 002d06b8 */
  FUN_002f54d0(param_1 + 8,0x40);
  return;
}


