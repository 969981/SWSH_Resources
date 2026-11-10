/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6e8d0; name: FUN_00d6e8d0
 */


void FUN_00d6e8d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  long lVar1;
  long local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_00d6e6b0(&local_60,param_4);
  FUN_00d6e970(local_60,param_2,param_3,param_4,param_5);
  FUN_00d6fba0(param_1 + 0x40,&local_60);
  lVar1 = local_60;
  local_60 = 0;
  if (lVar1 != 0) {
    FUN_00d6f2e0(lVar1);
    (**(code **)(*local_58 + 0x18))(local_58,lVar1,uStack_50,local_48);
  }
  return;
}


