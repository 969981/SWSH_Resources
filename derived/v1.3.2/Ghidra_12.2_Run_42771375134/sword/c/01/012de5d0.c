/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012de5d0; name: FUN_012de5d0
 */


long FUN_012de5d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  long local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x470));
  if (*(char *)(param_1 + 0x228) == '\0') {
    lVar2 = *(long *)(param_1 + 0x118);
    if ((lVar2 == 0) || (*(char *)(lVar2 + 0x170) == '\0')) {
      lVar2 = 0;
      goto LAB_012de66c;
    }
    FUN_006e2db0(&local_40,lVar2,*(undefined8 *)(lVar2 + 400));
    lVar2 = local_38;
    if (*(char *)(param_1 + 0x228) == '\0') {
      *(undefined8 *)(param_1 + 0x230) = local_40;
      *(long *)(param_1 + 0x238) = local_38;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      *(undefined1 *)(param_1 + 0x228) = 1;
    }
    else {
      *(undefined8 *)(param_1 + 0x230) = local_40;
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
      }
      lVar1 = *(long *)(param_1 + 0x238);
      *(long *)(param_1 + 0x238) = lVar2;
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  lVar2 = param_1 + 0x230;
LAB_012de66c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x470));
  return lVar2;
}


