/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f207e0; name: FUN_00f207e0
 */


undefined8 FUN_00f207e0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long local_68;
  
  puVar5 = PTR_DAT_0271f860;
  puVar4 = PTR_DAT_0271f858;
  puVar3 = PTR_DAT_0271e818;
  puVar2 = PTR_DAT_0271e810;
  puVar9 = (undefined8 *)(param_1 + 8);
  plVar11 = (long *)*puVar9;
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar11 != plVar12) {
    do {
      lVar10 = *plVar11;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      plVar7 = (long *)(*(code *)**(undefined8 **)(lVar10 + 0x50))();
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        if (((*PTR_DAT_0271e808 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0271e808), iVar6 != 0)) {
          if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar3), iVar6 != 0)) {
            uVar8 = FUN_00db8eb0();
            *(undefined8 *)PTR_DAT_0271e820 = uVar8;
            __cxa_guard_release(puVar3);
          }
          *(undefined **)puVar2 = PTR_DAT_0271e820;
          __cxa_guard_release(PTR_DAT_0271e808);
        }
        *(undefined **)puVar5 = puVar2;
        __cxa_guard_release(puVar4);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == (long *)puVar5) {
          bVar1 = true;
          goto joined_r0x00f208ac;
        }
      }
      bVar1 = false;
joined_r0x00f208ac:
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
      }
      if (bVar1) goto LAB_00f20954;
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
    plVar11 = plVar12;
LAB_00f20954:
    plVar12 = *(long **)(param_1 + 0x10);
  }
  if ((plVar12 == plVar11) || ((long *)*puVar9 == plVar11)) {
    return 0;
  }
  local_68 = *plVar11;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    plVar12 = *(long **)(param_1 + 0x10);
  }
  if (plVar11 + 1 != plVar12) {
    plVar7 = plVar11;
    do {
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
        *plVar7 = 0;
      }
      plVar11 = plVar7 + 1;
      lVar10 = *plVar11;
      *plVar11 = 0;
      *plVar7 = lVar10;
      plVar7 = plVar11;
    } while (plVar12 + -1 != plVar11);
    plVar12 = *(long **)(param_1 + 0x10);
    if (plVar12 == plVar11) goto LAB_00f20a10;
  }
  do {
    plVar7 = plVar12 + -1;
    if (*plVar7 != 0) {
      (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
      plVar12[-1] = 0;
    }
    plVar12 = plVar7;
  } while (plVar11 != plVar7);
LAB_00f20a10:
  *(long **)(param_1 + 0x10) = plVar11;
  FUN_00f10390(puVar9,*(undefined8 *)(param_1 + 8),&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return 1;
}


