/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b35b0; name: FUN_014b35b0
 */


undefined4 FUN_014b35b0(void)

{
  undefined4 uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long local_28;
  
  local_40 = 0x2f1492fb9fb5ea81;
  pcStack_38 = "Stop_Event_PM_Voice";
  local_30 = 0x13;
  local_28 = 0;
  uVar1 = FUN_008962c0(*(long *)PTR_DAT_027107a8 + 0x108,&local_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar1;
}


