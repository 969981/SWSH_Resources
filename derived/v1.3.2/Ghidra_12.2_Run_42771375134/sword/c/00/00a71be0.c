/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a71be0; name: FUN_00a71be0
 */


void FUN_00a71be0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50 [2];
  undefined8 auStack_40 [2];
  
  local_5c = 0;
  FUN_00a70400(param_1,auStack_40,local_50,&uStack_54,&local_58,&local_5c);
  FUN_00a71c60(auStack_40[0],local_50[0],uStack_54,local_58,local_5c,param_1,param_2,param_3,param_4
              );
  return;
}


