/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00233550; name: FUN_00233550
 */


void FUN_00233550(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x800000000;
  param_2[2] = 6;
  param_2[3] = param_1 + 0xd;
  param_2[4] = param_1 + 1;
  param_2[5] = &DAT_01d4d014;
  param_2[6] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = *param_1;
  param_2[0xb] = &LAB_002335a0;
  param_2[0xc] = &LAB_00233670;
  return;
}


