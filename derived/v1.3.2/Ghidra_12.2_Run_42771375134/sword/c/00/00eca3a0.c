/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eca3a0; name: FUN_00eca3a0
 */


void FUN_00eca3a0(int param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long local_28;
  
  if (param_1 == 1) {
    FUN_010a6d60(param_2);
    return;
  }
  if (param_1 == 0) {
    lVar1 = *(long *)(param_2 + 0x90);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_28 = *(long *)(lVar1 + 0x410);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00ef0e90(param_2,&local_28,param_3);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


