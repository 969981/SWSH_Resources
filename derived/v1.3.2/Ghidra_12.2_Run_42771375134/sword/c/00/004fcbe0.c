/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fcbe0; name: FUN_004fcbe0
 */


void FUN_004fcbe0(long *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  
  if (((*(int *)((long)param_1 + 0x8c) == 0) &&
      (uVar4 = (**(code **)(*param_1 + 0xe8))(param_1), *(ulong *)param_1[4] <= uVar4)) &&
     (*(char *)((long)param_1 + 0x69) != '\0')) {
    *(undefined1 *)((long)param_1 + 0x67) = 1;
    *(undefined1 *)((long)param_1 + 0x6c) = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 0x67) = 0;
    bVar5 = 0;
    if (*(char *)((long)param_1 + 0xba) != '\0') {
      bVar5 = *(byte *)(param_1 + 0xd) ^ 1;
    }
    *(byte *)((long)param_1 + 0x6c) = bVar5;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  cVar2 = *(char *)((long)param_1 + 0x6c);
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  if (((cVar2 == '\0') ||
      (uVar1 = *(uint *)((long)param_1 + 0x94), uVar3 = (**(code **)(*param_1 + 0x48))(param_1),
      uVar3 <= uVar1)) &&
     (((char)param_1[0xd] == '\0' ||
      (uVar4 = (**(code **)(*param_1 + 0x10))(param_1), (uVar4 & 1) == 0)))) {
    if (*(char *)((long)param_1 + 0x6a) != '\0') {
      *(undefined1 *)((long)param_1 + 0x6a) = 0;
      FUN_004ffe00(param_1[10]);
      return;
    }
  }
  else if (*(char *)((long)param_1 + 0x6a) == '\0') {
    *(undefined1 *)((long)param_1 + 0x6a) = 1;
    FUN_004ffda0(param_1[10]);
    return;
  }
  return;
}


