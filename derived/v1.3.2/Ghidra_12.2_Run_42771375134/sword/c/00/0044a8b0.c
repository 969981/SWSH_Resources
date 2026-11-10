/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044a8b0; name: FUN_0044a8b0
 */


void FUN_0044a8b0(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar1 = (int)param_2 + (int)param_3;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(uVar1 - uVar2 * uVar3) * 8); lVar4 != 0;
        lVar4 = *(long *)(lVar4 + 0x20)) {
      if ((*(int *)(lVar4 + 0x10) == (int)param_2) && (*(long *)(lVar4 + 0x18) == param_3))
      goto LAB_0044a98c;
    }
  }
  *(undefined8 *)(param_4 + 0x10) = param_2;
  *(long *)(param_4 + 0x18) = param_3;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) ||
     (fVar5 = (float)NEON_ucvtf((int)param_1[2]), DAT_01d4bee0 < fVar5 / (float)uVar3)) {
    FUN_0044ab00(param_1);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 == 0) goto LAB_0044a98c;
    param_2 = *(undefined8 *)(param_4 + 0x10);
    param_3 = *(long *)(param_4 + 0x18);
  }
  uVar1 = (int)param_3 + (int)param_2;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  lVar4 = (ulong)(uVar1 - uVar2 * uVar3) * 8;
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*param_1 + lVar4);
  *(long *)(*param_1 + lVar4) = param_4;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_0044a98c:
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  return;
}


