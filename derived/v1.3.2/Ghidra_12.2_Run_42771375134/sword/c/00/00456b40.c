/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00456b40; name: FUN_00456b40
 */


void FUN_00456b40(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  MutexType *pMVar6;
  long lVar7;
  
  plVar4 = (long *)*param_2;
  *param_2 = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *(undefined2 *)(param_2 + 1) = 0;
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar5 + 4);
  if (uVar1 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_02712ae8;
  if (*(char *)(lVar5 + 9) == '\0') {
    pMVar6 = (MutexType *)(lVar7 + 0x268);
    nn::os::LockMutex(pMVar6);
    uVar2 = *(uint *)(lVar7 + 0x290);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(lVar7 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) goto LAB_00456c20;
      }
      goto LAB_00456c2c;
    }
  }
  else {
    pMVar6 = (MutexType *)(lVar7 + 0x230);
    nn::os::LockMutex(pMVar6);
    uVar2 = *(uint *)(lVar7 + 600);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (lVar5 = *(long *)(*(long *)(lVar7 + 0x250) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == uVar1) goto LAB_00456c20;
      }
      goto LAB_00456c2c;
    }
  }
  lVar5 = 0;
LAB_00456c2c:
  nn::os::UnlockMutex(pMVar6);
  plVar4 = (long *)*param_2;
  *param_2 = lVar5;
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00456c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x18))();
  return;
LAB_00456c20:
  *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
  goto LAB_00456c2c;
}


