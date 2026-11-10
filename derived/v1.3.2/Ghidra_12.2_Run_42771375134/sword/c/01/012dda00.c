/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dda00; name: FUN_012dda00
 */


void FUN_012dda00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long local_60 [2];
  undefined1 *local_50;
  long local_48;
  long local_40;
  
  FUN_008d4da0(local_60,&PTR_DAT_02690170);
  FUN_012ddac0(param_1,param_2,local_60,param_3,param_4);
  if ((local_48 != 0) && (local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  local_60[0] = 0;
  local_60[1] = 0xcbf29ce484222645;
  local_50 = &DAT_01d38550;
  local_48 = 0;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  return;
}


