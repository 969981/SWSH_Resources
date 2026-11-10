/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0154fa70; name: FUN_0154fa70
 */


void FUN_0154fa70(long param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  long local_28;
  undefined4 local_14;
  
  local_14 = 0;
  uVar1 = FUN_0153bf80(*(undefined8 *)PTR_DAT_02710798,&local_14);
  local_28 = param_1 + 0x60;
  local_30 = 0xd50;
  FUN_0154f930(uVar1,PTR_DAT_0272ada8,&local_28,&local_30);
  return;
}


