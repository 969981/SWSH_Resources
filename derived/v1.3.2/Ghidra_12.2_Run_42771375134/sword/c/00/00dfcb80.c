/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfcb80; name: FUN_00dfcb80
 */


void FUN_00dfcb80(undefined8 param_1,int param_2,long *param_3)

{
  long local_28;
  long local_18;
  
  if ((*param_3 != 0) && (*(int *)(*param_3 + 0x54) != 0)) {
    if (param_2 == 2) {
      local_28 = *param_3;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      }
      FUN_00dfce50(param_1,&local_28);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
    else if (param_2 == 1) {
      local_18 = *param_3;
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
      }
      FUN_00dfcc50(param_1,&local_18);
      if (local_18 != 0) {
        (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
        return;
      }
    }
  }
  return;
}


