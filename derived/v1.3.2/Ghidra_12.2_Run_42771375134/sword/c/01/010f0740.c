/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f0740; name: FUN_010f0740
 */


void FUN_010f0740(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = param_4;
  uStack_30 = param_2;
  uVar1 = FUN_00ff93c0();
  FUN_00ff8620(&local_28,uVar1,param_3,10);
  lVar2 = *(long *)(local_28 + 0x60);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar2 != 0) {
    local_40 = lVar2;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    FUN_008c4e70(param_1 + 0x100,&uStack_30,&local_40,&local_38,10);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


