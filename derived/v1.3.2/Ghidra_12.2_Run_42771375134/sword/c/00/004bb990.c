/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bb990; name: FUN_004bb990
 */


void FUN_004bb990(long param_1,undefined8 param_2)

{
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  
  FUN_004bb9f0();
  if (0 < *(int *)(param_1 + 0x40)) {
    local_38[0] = 1;
    local_28 = 0;
    local_30 = param_2;
    FUN_004bb750(param_1 + 0x30,local_38);
  }
  return;
}


