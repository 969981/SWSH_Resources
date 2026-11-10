/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004faa20; name: FUN_004faa20
 */


long * FUN_004faa20(long param_1,float *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x280));
  uVar8 = nn::os::GetSystemTick();
  *(undefined8 *)(param_1 + 0x268) = uVar8;
  puVar5 = PTR_DAT_027137c8;
  if (*(char *)(param_1 + 0x210) != '\0') {
    plVar9 = (long *)FUN_004facf0(param_1,param_2);
    goto LAB_004facc4;
  }
  if (*(long **)(param_1 + 0x270) != (long *)0x0) {
    plVar1 = (long *)(param_1 + 0x270);
    plVar13 = (long *)0x0;
    plVar9 = *(long **)(param_1 + 0x270);
LAB_004faa8c:
    do {
      if ((char)plVar9[0xd] == '\0') {
        nn::os::LockMutex((MutexType *)(plVar9 + 5));
        cVar4 = *(char *)((long)plVar9 + 0x6c);
        nn::os::UnlockMutex((MutexType *)(plVar9 + 5));
        if (cVar4 != '\0') {
          fVar14 = (float)(**(code **)(*plVar9 + 0x38))(plVar9);
          bVar6 = *(char *)((long)plVar9 + 0x6a) != '\0';
          if ((long *)plVar9[2] == (long *)0x0) goto LAB_004facac;
          plVar13 = (long *)plVar9[2];
          plVar12 = plVar9;
          goto LAB_004fab4c;
        }
        plVar12 = (long *)plVar9[2];
      }
      else {
        uVar10 = (**(code **)(*plVar9 + 0x10))(plVar9);
        plVar12 = (long *)plVar9[2];
        if ((uVar10 & 1) != 0) {
          plVar11 = plVar1;
          if ((long *)*plVar1 != plVar9) {
            plVar11 = plVar13 + 2;
          }
          *plVar11 = (long)plVar12;
          uVar3 = *(undefined4 *)puVar5;
          (**(code **)*plVar9)(plVar9);
          FUN_00404870(uVar3,plVar9);
          plVar9 = plVar12;
          if (plVar12 == (long *)0x0) break;
          goto LAB_004faa8c;
        }
      }
      plVar13 = plVar9;
      plVar9 = plVar12;
    } while (plVar12 != (long *)0x0);
  }
  goto LAB_004facb8;
LAB_004fab4c:
  do {
    plVar11 = plVar13;
    if ((char)plVar11[0xd] != '\0') {
      uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11);
      plVar13 = (long *)plVar11[2];
      if ((uVar10 & 1) != 0) {
        plVar2 = plVar1;
        if ((long *)*plVar1 != plVar11) {
          plVar2 = plVar12 + 2;
        }
        *plVar2 = (long)plVar13;
        uVar3 = *(undefined4 *)puVar5;
        (**(code **)*plVar11)(plVar11);
        FUN_00404870(uVar3,plVar11);
        plVar11 = plVar12;
      }
joined_r0x004fabac:
      plVar12 = plVar11;
      if (plVar13 == (long *)0x0) break;
      goto LAB_004fab4c;
    }
    nn::os::LockMutex((MutexType *)(plVar11 + 5));
    cVar4 = *(char *)((long)plVar11 + 0x6c);
    nn::os::UnlockMutex((MutexType *)(plVar11 + 5));
    if (cVar4 != '\0') {
      fVar15 = (float)(**(code **)(*plVar11 + 0x38))(plVar11);
      cVar4 = *(char *)((long)plVar11 + 0x6a);
      bVar7 = cVar4 != '\0';
      if (bVar6) {
        if (cVar4 == '\0') {
          bVar6 = true;
          plVar13 = (long *)plVar11[2];
          goto joined_r0x004fabac;
        }
LAB_004fac20:
        if (fVar15 == 0.0) {
          if (fVar14 <= 0.0) {
            if (*(char *)((long)plVar11 + 100) <= *(char *)((long)plVar9 + 100)) {
              if ((*(char *)((long)plVar11 + 100) != *(char *)((long)plVar9 + 100)) ||
                 ((float)(*(long *)(param_1 + 0x268) - plVar11[9]) / *(float *)PTR_DAT_02712db0 <=
                  (float)(*(long *)(param_1 + 0x268) - plVar9[9]) / *(float *)PTR_DAT_02712db0))
              goto LAB_004fac94;
            }
          }
        }
        else if (fVar14 <= fVar15) goto LAB_004fac94;
      }
      else {
        if (cVar4 == '\0') goto LAB_004fac20;
        bVar7 = true;
      }
      bVar6 = bVar7;
      plVar9 = plVar11;
      fVar14 = fVar15;
    }
LAB_004fac94:
    plVar13 = (long *)plVar11[2];
    plVar12 = plVar11;
  } while ((long *)plVar11[2] != (long *)0x0);
LAB_004facac:
  *param_2 = fVar14;
  if (bVar6) goto LAB_004facc4;
LAB_004facb8:
  plVar9 = (long *)FUN_004fa7b0(param_1);
LAB_004facc4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x280));
  return plVar9;
}


