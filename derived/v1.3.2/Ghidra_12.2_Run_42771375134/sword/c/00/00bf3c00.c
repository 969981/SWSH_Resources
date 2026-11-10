/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf3c00; name: FUN_00bf3c00
 */


void FUN_00bf3c00(long param_1)

{
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [24];
  long local_18;
  
  if (*(int *)(param_1 + 0x68) == 0x23) {
    local_48 = 0x4c28dd8b15d040d9;
    local_40 = "Play_me_or_st_item_get";
    local_38 = 0x16;
  }
  else {
    if (*(int *)(param_1 + 0x68) != 0x22) {
      return;
    }
    local_48 = 0x9c1add5fc8a26048;
    local_40 = "Play_me_or_st_bp_get";
    local_38 = 0x14;
  }
  FUN_006cf0a0(auStack_30,&local_48);
  FUN_016d3620(auStack_30);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


