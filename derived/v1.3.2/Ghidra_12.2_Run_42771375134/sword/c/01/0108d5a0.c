/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108d5a0; name: FUN_0108d5a0
 */


void FUN_0108d5a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined1 auStack_48 [24];
  
  if (*(int *)(param_1 + 0xd0) == 1) {
    lVar1 = *(long *)(param_1 + 0xf0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_009fc1c0(auStack_48,*(undefined8 *)(param_1 + 8));
    local_50 = *(long *)(*(long *)(param_1 + 0x90) + 0x4d0);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN_009fc400(auStack_48,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    local_58 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_009fd2e0(auStack_48,&local_58);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_60 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_009fd4a0(auStack_48,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    FUN_008859b0(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    local_68 = lVar1;
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    FUN_0108f440(uVar2,&local_68,1);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined4 *)(param_1 + 0x68) = 3;
    FUN_009fc1e0(auStack_48);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 6;
  }
  return;
}


