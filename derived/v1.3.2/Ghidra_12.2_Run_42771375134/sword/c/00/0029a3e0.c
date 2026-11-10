/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a3e0; name: FUN_0029a3e0
 */


void FUN_0029a3e0(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4,
                 undefined2 *param_5)

{
  undefined2 local_18 [4];
  
  local_18[0] = *param_5;
  (**(code **)(PTR_PTR_02711f58 + (long)*param_3 * 8))(param_3,param_4,param_1,param_2,local_18);
  return;
}


