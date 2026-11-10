/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f8e40; name: FUN_014f8e40
 */


void FUN_014f8e40(long param_1)

{
  undefined1 auStack_40 [24];
  long local_28;
  
  if (*(char *)(param_1 + 0x5cd) != '\0') {
    FUN_010364c0(param_1,0);
    return;
  }
  FUN_006cf0a0(auStack_40,&DAT_026a80b8);
  FUN_016d3620(auStack_40);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_010364c0(param_1,2);
  return;
}


