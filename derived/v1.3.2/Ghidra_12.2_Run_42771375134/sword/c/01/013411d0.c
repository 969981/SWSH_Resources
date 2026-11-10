/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013411d0; name: FUN_013411d0
 */


void FUN_013411d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  uVar1 = *param_2;
  local_40 = 0x55c0d7a581349f0f;
  local_38 = "Origin";
  local_30 = 6;
  FUN_00794450(uVar1,&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00794680(uVar1);
  return;
}


