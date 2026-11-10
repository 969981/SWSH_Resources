/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00621820; name: FUN_00621820
 */


undefined8 FUN_00621820(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  FUN_006028c0(*param_1,param_2[2]);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return 0;
}


