/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a910; name: FUN_0130a910
 */


void FUN_0130a910(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  local_28 = param_1;
  if (param_1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))();
  }
  uVar1 = FUN_012f3580(&local_28,param_2);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (((((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x3c0) != '\0')) && (param_2 == 1)) &&
     (*(char *)(param_1 + 0x3b1) == '\0')) {
    local_40 = 0xb3950b703bb41ba1;
    uStack_38 = 0;
    FUN_0130ff30(param_1,&local_40);
  }
  return;
}


