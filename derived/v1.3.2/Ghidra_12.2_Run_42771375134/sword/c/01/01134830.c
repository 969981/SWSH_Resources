/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01134830; name: FUN_01134830
 */


void FUN_01134830(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 8) = 0x101;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((long)param_1 + 0x42) = 0;
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x82) = 0xffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x12,0,0x201);
}


