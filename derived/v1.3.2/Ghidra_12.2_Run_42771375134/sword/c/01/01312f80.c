/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01312f80; name: FUN_01312f80
 */


void FUN_01312f80(undefined4 param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 local_40 [4];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  local_40[0] = 0;
  local_30 = *param_4;
  uStack_28 = param_4[1];
  local_20 = param_1;
  (**(code **)(*param_2 + 0xa0))(param_2,param_3,local_40);
  return;
}


