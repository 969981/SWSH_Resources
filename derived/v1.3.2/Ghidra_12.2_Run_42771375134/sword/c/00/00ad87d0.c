/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad87d0; name: FUN_00ad87d0
 */


void FUN_00ad87d0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if ((*(long *)(param_1 + 0x518) != 0) && (*(int *)(*(long *)(param_1 + 0x518) + 0x54) != 0)) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_38 = *(long *)(param_1 + 0x518);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x3f8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x58);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_40 = lVar3;
    FUN_00c7a130(lVar1,&local_38,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    lVar1 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_58 = *(long *)(param_1 + 0x518);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    FUN_00c7a1d0(&local_50,lVar1,&local_58);
    FUN_00ad2020(&local_48,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    local_60 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_01066f60(lVar1,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
    *(undefined1 *)(param_1 + 0x4e1) = 1;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


