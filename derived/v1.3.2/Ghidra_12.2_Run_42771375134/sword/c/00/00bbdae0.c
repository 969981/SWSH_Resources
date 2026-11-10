/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbdae0; name: FUN_00bbdae0
 */


void FUN_00bbdae0(long param_1,undefined8 param_2)

{
  undefined8 local_40 [3];
  long local_28;
  
  FUN_00bc7650(param_1,param_2,0);
  FUN_00bc7770(param_1,0);
  *(char *)(param_1 + 0x691) = (char)param_2;
  FUN_00bc78a0(param_1,1);
  FUN_00bb48a0(param_1);
  local_40[0] = FUN_016b8190();
  FUN_00bb94c0(param_1,local_40);
  if (*(long *)(param_1 + 0x4c0) != 0) {
    FUN_016d2080();
  }
  FUN_006cf0a0(local_40,&DAT_02637c30);
  FUN_016d3620(local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


