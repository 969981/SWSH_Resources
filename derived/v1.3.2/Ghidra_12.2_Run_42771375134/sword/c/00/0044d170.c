/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044d170; name: FUN_0044d170
 */


undefined8 FUN_0044d170(long *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 2));
  puVar5 = PTR_DAT_02712a90;
  plVar7 = (long *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  uVar11 = (ulong)uVar4;
  plVar3 = plVar7 + uVar11 * 2;
  plVar8 = plVar7;
  if (uVar4 == 0) {
LAB_0044d1dc:
    if (plVar8 != plVar3) {
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      uVar10 = 1;
      goto LAB_0044d300;
    }
  }
  else {
    lVar9 = uVar11 << 4;
    do {
      if (*plVar8 == param_2) goto LAB_0044d1dc;
      lVar9 = lVar9 + -0x10;
      plVar8 = plVar8 + 2;
    } while (lVar9 != 0);
  }
  if (uVar4 == 0) {
LAB_0044d224:
    if (plVar7 != plVar3) {
      uVar10 = 1;
      goto LAB_0044d300;
    }
  }
  else {
    lVar9 = uVar11 << 4;
    do {
      if (*plVar7 == param_2) goto LAB_0044d224;
      lVar9 = lVar9 + -0x10;
      plVar7 = plVar7 + 2;
    } while (lVar9 != 0);
  }
  uVar12 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 < uVar12) {
LAB_0044d2c8:
    if (uVar4 < uVar12) {
      uVar4 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar4 + 1;
      plVar3 = (long *)(*param_1 + (ulong)uVar4 * 0x10);
      if (plVar3 != (long *)0x0) {
        uVar10 = 1;
        *(undefined8 *)(*param_1 + (ulong)uVar4 * 0x10 + 8) = 1;
        *plVar3 = param_2;
        goto LAB_0044d300;
      }
    }
  }
  else {
    uVar12 = uVar12 + 1;
    lVar9 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar12 << 4);
    if (lVar9 != 0) {
      lVar6 = *param_1;
      if ((lVar6 != 0) && (lVar6 != lVar9)) {
        uVar11 = (ulong)*(uint *)(param_1 + 1);
        if (*(uint *)(param_1 + 1) != 0) {
          lVar6 = 0;
          do {
            puVar1 = (undefined8 *)(lVar9 + lVar6);
            if (puVar1 != (undefined8 *)0x0) {
              *(undefined8 *)(lVar9 + lVar6 + 8) = 1;
            }
            puVar2 = (undefined8 *)(*param_1 + lVar6);
            lVar6 = lVar6 + 0x10;
            puVar1[1] = puVar2[1];
            uVar11 = uVar11 - 1;
            *puVar1 = *puVar2;
          } while (uVar11 != 0);
          lVar6 = *param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,lVar6);
      }
      *param_1 = lVar9;
      *(uint *)((long)param_1 + 0xc) = uVar12;
      goto LAB_0044d2c8;
    }
  }
  uVar10 = 0x34;
LAB_0044d300:
  nn::os::UnlockMutex((MutexType *)(param_1 + 2));
  return uVar10;
}


