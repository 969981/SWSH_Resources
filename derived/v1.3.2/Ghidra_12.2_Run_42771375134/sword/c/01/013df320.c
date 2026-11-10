/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013df320; name: FUN_013df320
 */


void FUN_013df320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = *param_1;
  uVar1 = param_1[1];
  param_1[1] = 0;
  param_2[1] = uVar1;
  param_2[2] = param_1[2];
  return;
}


