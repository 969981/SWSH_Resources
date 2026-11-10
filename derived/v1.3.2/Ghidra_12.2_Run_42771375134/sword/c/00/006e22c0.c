/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e22c0; name: FUN_006e22c0
 */


void FUN_006e22c0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *__dest;
  long *plVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x110));
  nn::os::LockMutex((MutexType *)(param_1 + 0x130));
  plVar6 = *(long **)(param_1 + 0xb0);
  plVar1 = *(long **)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x170) = 1;
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    puVar5 = *(undefined8 **)(param_1 + 0xe0);
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    puVar3 = (undefined8 *)*plVar6;
    if ((puVar5 != puVar2) && ((undefined8 *)*puVar5 != puVar3)) {
      do {
        puVar5 = puVar5 + 1;
        if (puVar2 == puVar5) goto LAB_006e2358;
      } while ((undefined8 *)*puVar5 != puVar3);
    }
    if (puVar5 == puVar2) {
LAB_006e2358:
      (**(code **)*puVar3)();
    }
  }
  plVar6 = *(long **)(param_1 + 0xe0);
  plVar1 = *(long **)(param_1 + 0xe8);
  if (plVar6 != plVar1) {
    plVar4 = *(long **)(param_1 + 0xb8);
    do {
      __dest = *(long **)(param_1 + 0xb0);
      if (__dest != plVar4) {
        if (*__dest != *plVar6) {
          do {
            __dest = __dest + 1;
            if (plVar4 == __dest) goto LAB_006e23d8;
          } while (*__dest != *plVar6);
        }
        if (__dest != plVar4) {
          __n = (long)plVar4 - (long)(__dest + 1);
          if (__n != 0) {
            memmove(__dest,__dest + 1,__n);
          }
          plVar4 = __dest + ((long)__n >> 3);
          *(long **)(param_1 + 0xb8) = plVar4;
        }
      }
LAB_006e23d8:
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = *(long **)(param_1 + 0xe0);
  }
  *(long **)(param_1 + 0xe8) = plVar6;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0x150));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x130));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x110));
  return;
}


