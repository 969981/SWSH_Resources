/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa9ee0; name: FUN_00aa9ee0
 */


uint FUN_00aa9ee0(long param_1)

{
  uint uVar1;
  long lVar2;
  long local_28;
  
  if ((*(long *)(param_1 + 0x4c0) == 0) || (*(int *)(*(long *)(param_1 + 0x4c0) + 0x54) == 0)) {
    uVar1 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    local_28 = *(long *)(param_1 + 0x4c0);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00c79fb0(lVar2,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  return uVar1 & 1;
}


