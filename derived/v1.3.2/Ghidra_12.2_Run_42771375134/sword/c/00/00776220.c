/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00776220; name: FUN_00776220
 */


bool FUN_00776220(long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5)

{
  MutexType *pMVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 8);
  if ((param_3 & 1) == 0) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x118))(*(long **)(param_1 + 0x80),uVar3,0,0)
    ;
  }
  else {
    pMVar1 = (MutexType *)(*(long *)(param_1 + 0x20) + 0x200);
    nn::os::LockMutex(pMVar1);
    iVar2 = (**(code **)(**(long **)(param_1 + 0x80) + 0x128))
                      (*(long **)(param_1 + 0x80),uVar3,0,&LAB_007762f0,
                       *(long *)(param_1 + 0x20) + 0x1a8);
    if ((param_4 != 0) && (iVar2 == 1)) {
      FUN_00776310(*(undefined8 *)(param_1 + 0x20),param_2,param_4,param_5);
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return iVar2 == 1;
}


