/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fdf30; name: FUN_004fdf30
 */


void FUN_004fdf30(long param_1,undefined8 *param_2,uint param_3)

{
  MutexType *pMVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(char *)(param_1 + 0xbb) == '\0')) {
    *(byte *)((long)param_2 + 0x14) = *(byte *)((long)param_2 + 0x14) & 0xf8 | 3;
    *param_2 = 0;
    if (*(long *)(param_1 + 0xb0) == 0) {
      *(undefined8 **)(param_1 + 0xb0) = param_2;
    }
    else {
      **(undefined8 **)(param_1 + 0xa8) = param_2;
    }
    *(undefined8 **)(param_1 + 0xa8) = param_2;
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
    return;
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e0);
  nn::os::LockMutex(pMVar1);
  lVar7 = *(long *)param_2[1];
  uVar4 = *(uint *)((long *)param_2[1] + 3);
  uVar5 = *(uint *)(param_1 + 0x8c);
  uVar2 = lVar7 + (ulong)*(uint *)(param_2 + 2);
  iVar3 = uVar4 - *(uint *)(param_2 + 2);
  if (uVar2 < uVar5 && (ulong)uVar5 < lVar7 + (ulong)uVar4) {
    iVar3 = uVar5 - (int)uVar2;
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - iVar3;
  lVar6 = *(long *)(param_1 + 0x50);
  lVar7 = param_2[1];
  param_2[1] = 0;
  if (lVar7 != 0) {
    FUN_004fe6b0(lVar6 + 0x2a0);
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


