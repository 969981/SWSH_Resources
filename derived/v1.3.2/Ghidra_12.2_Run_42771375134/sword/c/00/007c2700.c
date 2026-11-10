/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c2700; name: FUN_007c2700
 */


void FUN_007c2700(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  char local_70 [24];
  undefined1 auStack_58 [16];
  uint local_48 [6];
  
  pMVar1 = (MutexType *)(param_1 + 0x188);
  nn::os::LockMutex(pMVar1);
  local_48[0] = local_48[0] & 0xffffff00;
  if (*(char *)(param_1 + 0x168) != '\0') {
    FUN_018724d0((ulong)local_48 | 4,param_1 + 0x16c);
    local_48[0] = CONCAT31(local_48[0]._1_3_,1);
  }
  nn::os::UnlockMutex(pMVar1);
  if ((char)local_48[0] != '\0') {
    FUN_018724d0(auStack_58,(ulong)local_48 | 4);
    if ((*(long *)(param_1 + 0x158) != 0) && (*(int *)(*(long *)(param_1 + 0x158) + 0x54) != 0)) {
      (**(code **)**(undefined8 **)(param_1 + 0x160))(*(undefined8 **)(param_1 + 0x160),auStack_58);
    }
    local_70[0] = '\0';
    FUN_007c2fb0(param_1,local_70);
    if (local_70[0] != '\0') {
      local_70[0] = '\0';
    }
    if ((char)local_48[0] != '\0') {
      local_48[0] = local_48[0] & 0xffffff00;
    }
  }
  nn::os::LockMutex(pMVar1);
  if (*(char *)(param_1 + 0x17c) != '\0') {
    uVar2 = *(uint *)(param_1 + 0x180);
    nn::os::UnlockMutex(pMVar1);
    local_48[0] = uVar2;
    if ((*(long *)(param_1 + 0x158) != 0) && (*(int *)(*(long *)(param_1 + 0x158) + 0x54) != 0)) {
      (**(code **)(**(long **)(param_1 + 0x160) + 8))(*(long **)(param_1 + 0x160),local_48);
    }
    nn::os::LockMutex(pMVar1);
    if (*(char *)(param_1 + 0x17c) != '\0') {
      *(undefined1 *)(param_1 + 0x17c) = 0;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}


