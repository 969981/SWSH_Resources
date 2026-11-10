/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00775de0; name: FUN_00775de0
 */


bool FUN_00775de0(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_44;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  if ((param_3 & 1) == 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0xd8))
                      (*(long **)(param_1 + 0x80),uVar3,0xffffffff,&local_44);
  }
  else {
    pMVar1 = (MutexType *)(*(long *)(param_1 + 0x20) + 0x188);
    nn::os::LockMutex(pMVar1);
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0xf8))
                      (*(long **)(param_1 + 0x80),uVar3,&LAB_00775ec0,
                       *(long *)(param_1 + 0x20) + 0x130,0xffffffff,&local_44);
    if ((param_4 != 0) && (iVar2 == 1)) {
      FUN_00775ee0(*(undefined8 *)(param_1 + 0x20),param_2,local_44,param_4,param_5);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return iVar2 == 1;
}


