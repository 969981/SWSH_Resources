/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00456c70; name: FUN_00456c70
 */


void FUN_00456c70(long param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  MutexType *pMVar10;
  
  *param_3 = -1;
  lVar5 = *(long *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_02712ae8;
  uVar1 = *(uint *)(lVar5 + 4);
  if (*(char *)(lVar5 + 9) == '\0') {
    pMVar10 = (MutexType *)(lVar8 + 0x268);
    nn::os::LockMutex(pMVar10);
    uVar2 = *(uint *)(lVar8 + 0x290);
    if (uVar2 == 0) {
      nn::os::UnlockMutex(pMVar10);
      return;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (plVar9 = *(long **)(*(long *)(lVar8 + 0x288) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      if (*(uint *)(plVar9 + 2) == uVar1) goto LAB_00456dbc;
    }
  }
  else {
    pMVar10 = (MutexType *)(lVar8 + 0x230);
    nn::os::LockMutex(pMVar10);
    uVar2 = *(uint *)(lVar8 + 600);
    if (uVar2 == 0) {
      plVar9 = (long *)0x0;
    }
    else {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      for (plVar9 = *(long **)(*(long *)(lVar8 + 0x250) + (ulong)(uVar1 - uVar3 * uVar2) * 8);
          plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        if (*(uint *)(plVar9 + 2) == uVar1) goto LAB_00456dbc;
      }
    }
  }
  nn::os::UnlockMutex(pMVar10);
joined_r0x00456dd0:
  if (plVar9 == (long *)0x0) {
    return;
  }
  piVar6 = (int *)plVar9[8];
  uVar1 = *(uint *)(plVar9 + 9);
  piVar7 = piVar6;
  if (uVar1 == 0) {
LAB_00456d80:
    if (piVar7 != piVar6 + (ulong)uVar1 * 2) {
      iVar4 = piVar7[1];
      goto LAB_00456d98;
    }
  }
  else {
    lVar5 = (ulong)uVar1 << 3;
    do {
      if (*piVar7 == param_2) goto LAB_00456d80;
      lVar5 = lVar5 + -8;
      piVar7 = piVar7 + 2;
    } while (lVar5 != 0);
  }
  iVar4 = 0;
LAB_00456d98:
  *param_3 = iVar4;
                    /* WARNING: Could not recover jumptable at 0x00456db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return;
LAB_00456dbc:
  *(int *)((long)plVar9 + 0x14) = *(int *)((long)plVar9 + 0x14) + 1;
  nn::os::UnlockMutex(pMVar10);
  goto joined_r0x00456dd0;
}


