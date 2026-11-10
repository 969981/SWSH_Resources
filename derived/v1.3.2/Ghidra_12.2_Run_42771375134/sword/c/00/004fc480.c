/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fc480; name: FUN_004fc480
 */


void FUN_004fc480(long param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  *(undefined1 *)(param_1 + 0x68) = 1;
  cVar5 = *(char *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  if (cVar5 != '\0') {
    uVar3 = *(uint *)(param_1 + 0x8c);
    plVar6 = (long *)(param_1 + 0xb0);
    do {
      plVar6 = (long *)*plVar6;
      lVar7 = *(long *)plVar6[1];
      uVar4 = *(uint *)((long *)plVar6[1] + 3);
      uVar1 = lVar7 + (ulong)*(uint *)(plVar6 + 2);
      iVar2 = uVar4 - *(uint *)(plVar6 + 2);
      if (uVar1 < uVar3 && (ulong)uVar3 < lVar7 + (ulong)uVar4) {
        iVar2 = uVar3 - (int)uVar1;
      }
      cVar5 = cVar5 + -1;
      *(char *)(param_1 + 0xb8) = cVar5;
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + iVar2;
    } while (cVar5 != '\0');
  }
  FUN_004fc530(param_1);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


