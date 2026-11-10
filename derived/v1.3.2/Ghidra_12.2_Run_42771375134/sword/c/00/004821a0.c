/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004821a0; name: FUN_004821a0
 */


void FUN_004821a0(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  MutexType *pMVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  
  pMVar3 = (MutexType *)
           FUN_00435370(*(undefined8 *)PTR_DAT_02712ae8,*(uint *)(param_1 + 0x9c) >> 0x11 & 1);
  nn::os::LockMutex(pMVar3);
  uVar4 = *(uint *)(pMVar3 + 0x28);
  pMVar1 = pMVar3 + 0x20;
  if ((uVar4 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(pMVar3 + 0x30)), DAT_01d4bee0 < fVar6 / (float)uVar4
     )) {
    FUN_004354d0(pMVar1);
    uVar4 = *(uint *)(pMVar3 + 0x28);
    if (uVar4 == 0) goto LAB_00482248;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) / uVar4;
  }
  lVar5 = (ulong)(*(uint *)(param_1 + 0x10) - uVar2 * uVar4) * 8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)pMVar1 + lVar5);
  *(long *)(*(long *)pMVar1 + lVar5) = param_1;
  *(int *)(pMVar3 + 0x30) = *(int *)(pMVar3 + 0x30) + 1;
LAB_00482248:
  nn::os::UnlockMutex(pMVar3);
  return;
}


