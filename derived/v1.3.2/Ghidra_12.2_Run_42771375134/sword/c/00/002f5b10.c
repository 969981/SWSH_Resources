/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f5b10; name: FUN_002f5b10
 */


void FUN_002f5b10(long *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_027120a0 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = -0xc0c00000;
  param_1[8] = 0;
                    /* try { // try from 002f5b58 to 002f5b63 has its CatchHandler @ 002f5bec */
  FUN_002f6800(param_1 + 2,0x40);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = -0xc0c00000;
  param_1[0xf] = 0;
                    /* try { // try from 002f5b78 to 002f5b83 has its CatchHandler @ 002f5bdc */
  FUN_002f69a0(param_1 + 9,0x40);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
                    /* try { // try from 002f5b88 to 002f5bc7 has its CatchHandler @ 002f5bf8 */
  FUN_00211e90(param_1);
  FUN_002f9c30(param_1);
  (**(code **)(*param_1 + 0x10))(param_1,PTR_LAB_027120a8);
  (**(code **)(*param_1 + 0x10))(param_1,PTR_LAB_027120b0);
  return;
}


