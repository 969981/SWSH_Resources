/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a1a60; name: FUN_008a1a60
 */


void FUN_008a1a60(undefined8 *param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long local_48;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x58);
    if (lVar2 == 0) {
      *param_3 = 0;
      local_48 = lVar2;
      goto LAB_008a1aa4;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar1 = *param_3;
    *param_3 = lVar2;
    if (lVar1 == 0) goto LAB_008a1a90;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    local_48 = *param_3;
    if (local_48 == 0) goto LAB_008a1aa4;
  }
  else {
LAB_008a1a90:
    local_48 = lVar2;
  }
  (**(code **)(*(long *)(local_48 + 0x48) + 0x10))((long *)(local_48 + 0x48));
LAB_008a1aa4:
  FUN_008a1b80(param_1,param_2,&local_48,param_5);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((param_4 == 0) && (param_4 = *(long *)(param_2 + 0x70), param_4 == 0)) {
    FUN_00ffa5a0(0,*param_1);
  }
  else {
    (**(code **)(*(long *)(param_4 + 0x48) + 0x10))();
    FUN_00ffa5a0(param_4,*param_1);
    (**(code **)(*(long *)(param_4 + 0x48) + 0x18))((long *)(param_4 + 0x48));
  }
  return;
}


