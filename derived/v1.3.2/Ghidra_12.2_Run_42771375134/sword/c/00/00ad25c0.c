/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad25c0; name: FUN_00ad25c0
 */


uint FUN_00ad25c0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long local_40;
  long local_38;
  long local_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_28 = *(long *)(param_1 + 0x510);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  uVar2 = FUN_00c7a070(lVar3,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_38 = *(long *)(param_1 + 0x518);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    uVar2 = FUN_00c7a070(lVar3,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      local_40 = *(long *)(param_1 + 0x598);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
      }
      uVar1 = FUN_00c7a070(lVar3,&local_40);
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
      }
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      goto LAB_00ad2738;
    }
  }
  uVar1 = 0;
LAB_00ad2738:
  return uVar1 & 1;
}


