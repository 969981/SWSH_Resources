/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c87a40; name: FUN_00c87a40
 */


void FUN_00c87a40(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 local_40;
  long local_38;
  
  local_40 = FUN_00c89870(*param_3,param_2,param_1 + 0x110);
  uVar1 = FUN_00c89980(*param_3,param_2,param_1 + 0x220);
  FUN_007733c0(uVar1,param_4);
  uVar1 = *param_3;
  local_38 = FUN_00c89a80(&local_38,param_2,&local_40);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_006d9640(uVar1,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


