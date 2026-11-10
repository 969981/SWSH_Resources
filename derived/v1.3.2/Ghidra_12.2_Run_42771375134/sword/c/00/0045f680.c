/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045f680; name: FUN_0045f680
 */


void FUN_0045f680(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  
  lVar5 = *(long *)PTR_DAT_02712ae8;
  nn::os::LockMutex((MutexType *)(lVar5 + 0xa8));
  uVar3 = *(uint *)(lVar5 + 0xd0);
  plVar1 = (long *)(lVar5 + 200);
  if ((uVar3 == 0) ||
     (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0xd8)), DAT_01d4bee0 < fVar6 / (float)uVar3)
     ) {
    FUN_004354d0(plVar1);
    uVar3 = *(uint *)(lVar5 + 0xd0);
    if (uVar3 == 0) goto LAB_0045f720;
  }
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x10) / uVar3;
  }
  lVar4 = (ulong)(*(uint *)(param_1 + 0x10) - uVar2 * uVar3) * 8;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*plVar1 + lVar4);
  *(long *)(*plVar1 + lVar4) = param_1;
  *(int *)(lVar5 + 0xd8) = *(int *)(lVar5 + 0xd8) + 1;
LAB_0045f720:
  nn::os::UnlockMutex((MutexType *)(lVar5 + 0xa8));
  return;
}


