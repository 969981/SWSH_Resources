/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004facf0; name: FUN_004facf0
 */


long * FUN_004facf0(long param_1,float *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  
  puVar6 = PTR_DAT_027137c8;
  if (*(long **)(param_1 + 0x270) != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x270);
    plVar9 = (long *)0x0;
    plVar8 = *(long **)(param_1 + 0x270);
    do {
      while ((char)plVar8[0xd] != '\0') {
        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
        plVar10 = (long *)plVar8[2];
        if ((uVar7 & 1) != 0) {
          plVar11 = plVar1;
          if ((long *)*plVar1 != plVar8) {
            plVar11 = plVar9 + 2;
          }
          *plVar11 = (long)plVar10;
          uVar3 = *(undefined4 *)puVar6;
          (**(code **)*plVar8)(plVar8);
          FUN_00404870(uVar3,plVar8);
          plVar8 = plVar9;
        }
        plVar9 = plVar8;
        plVar8 = plVar10;
        if (plVar10 == (long *)0x0) {
          return (long *)0x0;
        }
      }
      if (*(char *)((long)plVar8 + 0x65) == '\0') {
        nn::os::LockMutex((MutexType *)(plVar8 + 5));
        cVar4 = *(char *)((long)plVar8 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar8 + 5));
        if (cVar4 != '\0') {
          fVar12 = (float)(**(code **)(*plVar8 + 0x38))(plVar8);
          puVar5 = PTR_DAT_02712db0;
          plVar9 = (long *)plVar8[2];
          if (plVar9 == (long *)0x0) goto LAB_004faf4c;
          plVar10 = plVar8;
          goto LAB_004fae1c;
        }
      }
      plVar10 = plVar8 + 2;
      plVar9 = plVar8;
      plVar8 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  return (long *)0x0;
LAB_004fae1c:
  if ((char)plVar9[0xd] == '\0') {
    if (*(char *)((long)plVar9 + 0x65) == '\0') {
      nn::os::LockMutex((MutexType *)(plVar9 + 5));
      cVar4 = *(char *)((long)plVar9 + 0x6c);
      nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
      if (cVar4 != '\0') {
        fVar13 = (float)(**(code **)(*plVar9 + 0x38))(plVar9);
        if (fVar13 == 0.0) {
          if (((0.0 < fVar12) || (*(char *)((long)plVar8 + 100) < *(char *)((long)plVar9 + 100))) ||
             ((*(char *)((long)plVar9 + 100) == *(char *)((long)plVar8 + 100) &&
              ((float)(*(long *)(param_1 + 0x268) - plVar8[9]) / *(float *)puVar5 <
               (float)(*(long *)(param_1 + 0x268) - plVar9[9]) / *(float *)puVar5))))
          goto LAB_004faf2c;
        }
        else if (fVar13 < fVar12) {
LAB_004faf2c:
          plVar11 = (long *)plVar9[2];
          plVar8 = plVar9;
          fVar12 = fVar13;
          goto joined_r0x004faf40;
        }
      }
    }
    plVar11 = (long *)plVar9[2];
  }
  else {
    uVar7 = (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar11 = (long *)plVar9[2];
    if ((uVar7 & 1) != 0) {
      plVar2 = plVar1;
      if ((long *)*plVar1 != plVar9) {
        plVar2 = plVar10 + 2;
      }
      *plVar2 = (long)plVar11;
      uVar3 = *(undefined4 *)puVar6;
      (**(code **)*plVar9)(plVar9);
      FUN_00404870(uVar3,plVar9);
      plVar9 = plVar10;
    }
  }
joined_r0x004faf40:
  plVar10 = plVar9;
  plVar9 = plVar11;
  if (plVar9 == (long *)0x0) {
LAB_004faf4c:
    *param_2 = fVar12;
    return plVar8;
  }
  goto LAB_004fae1c;
}


