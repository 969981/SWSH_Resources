/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a27b0; name: FUN_014a27b0
 */


void FUN_014a27b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_40 = 0xcbf29ce484222645;
  local_38 = &DAT_01d38550;
  uStack_30 = 0;
  local_28 = 0;
  uVar1 = FUN_014a2840(param_1,param_3,&local_40);
  if ((uVar1 & 1) != 0) {
    FUN_014a29e0(param_1,&local_40,param_2);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


