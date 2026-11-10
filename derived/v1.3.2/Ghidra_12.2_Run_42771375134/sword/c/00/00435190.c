/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00435190; name: FUN_00435190
 */


void FUN_00435190(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x1c0));
  puVar1 = PTR_DAT_02712ad0;
  if (*(uint *)(param_1 + 0x1e8) != 0) {
    plVar3 = (long *)**(undefined8 **)(param_1 + 0x1e0);
    if (plVar3 == (long *)0x0) {
      uVar2 = 0;
      do {
        uVar2 = uVar2 + 1;
        if (*(uint *)(param_1 + 0x1e8) <= uVar2) goto LAB_00435248;
        plVar3 = (long *)(*(undefined8 **)(param_1 + 0x1e0))[uVar2];
      } while (plVar3 == (long *)0x0);
    }
    else {
      uVar2 = 0;
    }
    do {
      plVar4 = (long *)plVar3[1];
      if (plVar4 == (long *)0x0) {
        do {
          uVar2 = uVar2 + 1;
          if (*(uint *)(param_1 + 0x1e8) <= uVar2) {
            plVar4 = (long *)0x0;
            break;
          }
          plVar4 = *(long **)(*(long *)(param_1 + 0x1e0) + (ulong)uVar2 * 8);
        } while (plVar4 == (long *)0x0);
      }
      FUN_0048fd60(*(undefined8 *)puVar1,*(undefined4 *)((long)plVar3 + 0x6c));
      (**(code **)(*plVar3 + 0x18))(plVar3);
      plVar3 = plVar4;
    } while (plVar4 != (long *)0x0);
  }
LAB_00435248:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1c0));
  return;
}


