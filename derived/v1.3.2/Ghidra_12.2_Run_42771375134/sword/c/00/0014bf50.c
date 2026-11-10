/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014bf50; name: FUN_0014bf50
 */


void FUN_0014bf50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  param_1[2] = param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_00147760(param_1 + 4,param_3,param_4);
                    /* try { // try from 0014bf9c to 0014bfab has its CatchHandler @ 0014bfdc */
  FUN_0014e700(param_1 + 0x40,param_3,param_4);
                    /* try { // try from 0014bfb0 to 0014bfc3 has its CatchHandler @ 0014bff0 */
  FUN_0014c010(param_1 + 0x4a,param_5,param_2);
  FUN_00147750(param_1[1]);
  return;
}


