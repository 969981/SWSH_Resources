/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fc530; name: FUN_004fc530
 */


void FUN_004fc530(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x23;
  long lVar12;
  
  (**(code **)(*param_1 + 0xf0))();
  bVar4 = *(byte *)(param_1 + 0x17);
  if ((uint)bVar4 < *(uint *)(param_1 + 0x14)) {
    plVar11 = (long *)param_1[0x16];
    uVar8 = (uint)bVar4;
    if (uVar8 == 0) {
      unaff_x23 = (long *)0x0;
    }
    else {
      if (2 < uVar8 - 1) {
        iVar9 = (uVar8 & 3) - uVar8;
        do {
          unaff_x23 = (long *)**(long **)*plVar11;
          plVar11 = (long *)*unaff_x23;
          iVar9 = iVar9 + 4;
        } while (iVar9 != 0);
      }
      if ((bVar4 & 3) != 0) {
        iVar9 = -(uVar8 & 3);
        do {
          unaff_x23 = plVar11;
          plVar11 = (long *)*unaff_x23;
          iVar9 = iVar9 + 1;
        } while (iVar9 != 0);
      }
    }
    lVar6 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar6 + 0x1e0));
    puVar5 = PTR_DAT_027137c8;
    while (plVar11 != (long *)0x0) {
      lVar12 = *plVar11;
      plVar2 = param_1 + 0x16;
      if ((long *)param_1[0x16] != plVar11) {
        plVar2 = unaff_x23;
      }
      *plVar2 = lVar12;
      if ((long *)param_1[0x15] == plVar11) {
        param_1[0x15] = (long)unaff_x23;
      }
      *(int *)(param_1 + 0x14) = (int)param_1[0x14] + -1;
      lVar10 = *(long *)plVar11[1];
      uVar8 = *(uint *)((long *)plVar11[1] + 3);
      uVar3 = *(uint *)((long)param_1 + 0x8c);
      uVar1 = lVar10 + (ulong)*(uint *)(plVar11 + 2);
      iVar9 = uVar8 - *(uint *)(plVar11 + 2);
      if (uVar1 < uVar3 && (ulong)uVar3 < lVar10 + (ulong)uVar8) {
        iVar9 = uVar3 - (int)uVar1;
      }
      *(int *)((long)param_1 + 0x94) = *(int *)((long)param_1 + 0x94) - iVar9;
      lVar7 = param_1[10];
      lVar10 = plVar11[1];
      plVar11[1] = 0;
      if (lVar10 != 0) {
        FUN_004fe6b0(lVar7 + 0x2a0);
      }
      FUN_00404870(*(undefined4 *)puVar5,plVar11);
      plVar11 = (long *)lVar12;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e0));
  }
  FUN_004fcbe0(param_1);
  return;
}


