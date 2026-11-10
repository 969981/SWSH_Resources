/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa7b0; name: FUN_004fa7b0
 */


long * FUN_004fa7b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long *plVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x280));
  puVar4 = PTR_DAT_027137c8;
  plVar1 = (long *)(param_1 + 0x278);
  if (*(long **)(param_1 + 0x278) == (long *)0x0) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    bVar8 = false;
    plVar12 = *(long **)(param_1 + 0x278);
    plVar9 = (long *)0x0;
    do {
      while ((plVar10 = plVar12, (char)plVar10[0xd] != '\0' &&
             (uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10), (uVar7 & 1) != 0))) {
        plVar12 = (long *)plVar10[2];
        plVar2 = plVar1;
        if ((long *)*plVar1 != plVar10) {
          plVar2 = plVar9 + 2;
        }
        *plVar2 = (long)plVar12;
        uVar3 = *(undefined4 *)puVar4;
        (**(code **)*plVar10)(plVar10);
        FUN_00404870(uVar3,plVar10);
        bVar8 = true;
        if (plVar12 == (long *)0x0) goto LAB_004fa884;
      }
      iVar5 = (**(code **)(*plVar10 + 0x50))(plVar10);
      iVar11 = iVar5 + iVar11;
      plVar12 = (long *)plVar10[2];
      plVar9 = plVar10;
    } while ((long *)plVar10[2] != (long *)0x0);
LAB_004fa884:
    plVar12 = (long *)*plVar1;
    if (plVar12 != (long *)0x0) {
      if (bVar8) {
        plVar9 = (long *)0x0;
        do {
          (**(code **)(*plVar12 + 0x58))(plVar12);
          if ((*(char *)((long)plVar12 + 0x6a) != '\0') &&
             ((plVar9 == (long *)0x0 ||
              (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar12 + 100))))) {
            plVar9 = plVar12;
          }
          plVar12 = (long *)plVar12[2];
        } while (plVar12 != (long *)0x0);
      }
      else {
        plVar9 = (long *)0x0;
        do {
          if ((*(char *)((long)plVar12 + 0x6a) != '\0') &&
             ((plVar9 == (long *)0x0 ||
              (*(char *)((long)plVar9 + 100) < *(char *)((long)plVar12 + 100))))) {
            plVar9 = plVar12;
          }
          plVar12 = (long *)plVar12[2];
        } while (plVar12 != (long *)0x0);
      }
      if (plVar9 == (long *)0x0) goto LAB_004fa9f4;
      iVar5 = (**(code **)(*plVar9 + 0x48))(plVar9);
      iVar6 = (**(code **)(*plVar9 + 0x50))(plVar9);
      iVar5 = iVar5 - iVar6;
      if ((uint)(iVar5 + iVar11) <= *(uint *)(param_1 + 0x61c)) goto LAB_004fa9f4;
      do {
        plVar12 = (long *)*plVar1;
        if (plVar12 == (long *)0x0) {
LAB_004fa9cc:
          if (*(uint *)(param_1 + 0x61c) < (uint)(iVar11 + iVar5)) goto LAB_004fa9dc;
          goto LAB_004fa9f4;
        }
        plVar10 = (long *)0x0;
        do {
          iVar6 = (**(code **)(*plVar12 + 0x50))(plVar12);
          if (((iVar6 != 0) && (*(char *)((long)plVar12 + 100) < *(char *)((long)plVar9 + 100))) &&
             ((plVar10 == (long *)0x0 ||
              (*(char *)((long)plVar12 + 100) < *(char *)((long)plVar10 + 100))))) {
            plVar10 = plVar12;
          }
          plVar12 = (long *)plVar12[2];
        } while (plVar12 != (long *)0x0);
        if (plVar10 == (long *)0x0) goto LAB_004fa9cc;
        iVar6 = (**(code **)(*plVar10 + 0x60))(plVar10,iVar5);
        iVar11 = iVar11 - iVar6;
      } while (*(uint *)(param_1 + 0x61c) < (uint)(iVar11 + iVar5));
      if ((uint)(iVar11 + iVar5) <= *(uint *)(param_1 + 0x61c)) goto LAB_004fa9f4;
LAB_004fa9dc:
      (**(code **)(*plVar9 + 0x60))(plVar9,0);
    }
  }
  plVar9 = (long *)0x0;
LAB_004fa9f4:
  *(int *)(param_1 + 0x620) = iVar11;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x280));
  return plVar9;
}


