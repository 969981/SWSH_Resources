/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005036a0; name: FUN_005036a0
 */


void FUN_005036a0(long param_1,long *param_2,ulong param_3,char *param_4)

{
  MutexType *pMVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  pMVar1 = (MutexType *)(lVar4 + 0x1e0);
  nn::os::LockMutex(pMVar1);
  lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  if (((lVar3 == 0) || (*(long *)(*(long *)(lVar3 + 0x38) + 0x18) != 0)) ||
     (*(long *)(*(long *)(lVar3 + 0x38) + 0x20) != *(long *)(lVar3 + 0x40))) goto LAB_00503778;
  if (*(int *)(*(long *)(param_1 + 8) + 0x20) != -1) {
    FUN_004fea90(lVar4 + 0x2a0);
  }
  cVar2 = *param_4;
  if ((param_3 & 1) == 0) {
LAB_0050375c:
    *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  }
  else {
    if ((*(byte *)(lVar3 + 0x48) & 1) != 0) {
      *param_4 = '\0';
      goto LAB_0050375c;
    }
    (**(code **)(*param_2 + 0x40))
              (param_2,*(undefined8 *)(*(long *)(lVar3 + 0x40) + 0x20),lVar3 + 8,param_4);
    *(byte *)(lVar3 + 0x48) = *(byte *)(lVar3 + 0x48) | 1;
  }
  if ((cVar2 == '\0') && (*param_4 != '\0')) {
    *param_4 = '\0';
  }
LAB_00503778:
  nn::os::UnlockMutex(pMVar1);
  return;
}


