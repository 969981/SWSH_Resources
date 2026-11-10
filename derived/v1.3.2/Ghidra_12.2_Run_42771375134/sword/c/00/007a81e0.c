/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a81e0; name: FUN_007a81e0
 */


void FUN_007a81e0(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  char cVar3;
  char local_70 [24];
  undefined1 auStack_58 [16];
  uint local_48 [6];
  
  pMVar1 = (MutexType *)(param_1 + 0xb0);
  nn::os::LockMutex(pMVar1);
  local_48[0] = local_48[0] & 0xffffff00;
  if (*(char *)(param_1 + 0x90) != '\0') {
    FUN_018724d0((ulong)local_48 | 4,param_1 + 0x94);
    local_48[0] = CONCAT31(local_48[0]._1_3_,1);
  }
  nn::os::UnlockMutex(pMVar1);
  if ((char)local_48[0] != '\0') {
    FUN_018724d0(auStack_58,(ulong)local_48 | 4);
    if ((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 0x54) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x88) + 8))(*(long **)(param_1 + 0x88),auStack_58);
    }
    local_70[0] = '\0';
    FUN_007a8040(param_1,local_70);
    if (local_70[0] != '\0') {
      local_70[0] = '\0';
    }
    if ((char)local_48[0] != '\0') {
      local_48[0] = local_48[0] & 0xffffff00;
    }
  }
  nn::os::LockMutex(pMVar1);
  if (*(char *)(param_1 + 0xa4) != '\0') {
    uVar2 = *(uint *)(param_1 + 0xa8);
    nn::os::UnlockMutex(pMVar1);
    local_48[0] = uVar2;
    if ((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 0x54) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x10))(*(long **)(param_1 + 0x88),local_48);
    }
    nn::os::LockMutex(pMVar1);
    if (*(char *)(param_1 + 0xa4) != '\0') {
      *(undefined1 *)(param_1 + 0xa4) = 0;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  nn::os::LockMutex(pMVar1);
  cVar3 = *(char *)(param_1 + 0xac);
  nn::os::UnlockMutex(pMVar1);
  if (cVar3 != '\0') {
    if ((*(long *)(param_1 + 0x80) != 0) && (*(int *)(*(long *)(param_1 + 0x80) + 0x54) != 0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x88))();
    }
    nn::os::LockMutex(pMVar1);
    *(undefined1 *)(param_1 + 0xac) = 0;
    nn::os::UnlockMutex(pMVar1);
  }
  return;
}


