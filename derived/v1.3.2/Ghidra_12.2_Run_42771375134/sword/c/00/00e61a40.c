/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e61a40; name: FUN_00e61a40
 */


void FUN_00e61a40(long param_1,uint param_2)

{
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  long local_18;
  
  if (*(long *)(param_1 + 0xbe0) != 0 && param_2 < 10) {
    if ((1 << (ulong)(param_2 & 0x1f) & 0x155U) == 0) {
      if (param_2 != 9) {
        return;
      }
      local_30 = 0x2350b3d156633e4a;
      local_28 = "Play_UI_Common_runaway";
    }
    else {
      local_30 = 0x273a3f8725739637;
      local_28 = "Play_UI_common_encount";
    }
    local_20 = 0x16;
    local_18 = 0;
    FUN_00895fd0(*(long *)(param_1 + 0xbe0),&local_30);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


