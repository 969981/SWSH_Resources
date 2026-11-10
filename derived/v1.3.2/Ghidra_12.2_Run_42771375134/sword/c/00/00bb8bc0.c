/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb8bc0; name: FUN_00bb8bc0
 */


void FUN_00bb8bc0(long param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long local_30;
  undefined8 local_28;
  
  param_1 = param_1 + 0x100;
  local_28 = param_2;
  if (param_3 == 1) {
    FUN_00bb9190(&local_30,&local_28,"_default");
    puVar2 = (undefined8 *)PTR_PTR_02710928;
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (local_30 != 0) {
      puVar1 = (undefined8 *)(local_30 + 0x60);
    }
    FUN_00ffd3a0(param_1,*puVar1);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    FUN_00bb9070(&local_30,&local_28,"_blue");
    puVar1 = puVar2;
    if (local_30 != 0) {
      puVar1 = (undefined8 *)(local_30 + 0x60);
    }
    FUN_00ffd3a0(param_1,*puVar1);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    FUN_00bb9100(&local_30,&local_28,&DAT_01d0dbdf);
  }
  else if (param_3 == 0) {
    FUN_00bb9070(&local_30,&local_28,"_blue");
    puVar2 = (undefined8 *)PTR_PTR_02710928;
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (local_30 != 0) {
      puVar1 = (undefined8 *)(local_30 + 0x60);
    }
    FUN_00ffd3a0(param_1,*puVar1);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    FUN_00bb9100(&local_30,&local_28,&DAT_01d0dbdf);
    puVar1 = puVar2;
    if (local_30 != 0) {
      puVar1 = (undefined8 *)(local_30 + 0x60);
    }
    FUN_00ffd3a0(param_1,*puVar1);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    FUN_00bb9190(&local_30,&local_28,"_default");
  }
  else {
    FUN_00bb9190(&local_30,&local_28,"_default");
    puVar2 = (undefined8 *)PTR_PTR_02710928;
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (local_30 != 0) {
      puVar1 = (undefined8 *)(local_30 + 0x60);
    }
    FUN_00ffd3a0(param_1,*puVar1);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    FUN_00bb9100(&local_30,&local_28,&DAT_01d0dbdf);
    puVar1 = puVar2;
    if (local_30 != 0) {
      puVar1 = (undefined8 *)(local_30 + 0x60);
    }
    FUN_00ffd3a0(param_1,*puVar1);
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
    FUN_00bb9070(&local_30,&local_28,"_blue");
  }
  if (local_30 != 0) {
    puVar2 = (undefined8 *)(local_30 + 0x60);
  }
  FUN_00ffcf80(param_1,*puVar2);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
  }
  return;
}


