/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f8ee0; name: FUN_014f8ee0
 */


void FUN_014f8ee0(long param_1)

{
  undefined1 auStack_40 [24];
  long local_28;
  
  FUN_006cf0a0(auStack_40,&DAT_026a80e8);
  FUN_016d3620(auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00ffcf80(param_1 + 0x100,"anime_L_iconSave_00_check");
  return;
}


