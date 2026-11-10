/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db18e0; name: FUN_00db18e0
 */


void FUN_00db18e0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  strncpy((char *)(param_3 + 8),(char *)param_4[1],0x40);
  *param_3 = *param_4;
  param_3[1] = param_5;
  *(undefined4 *)(param_3 + 0x10) = param_1;
  *(undefined4 *)((long)param_3 + 0x84) = param_2;
  param_3[0x11] = param_6;
  return;
}


