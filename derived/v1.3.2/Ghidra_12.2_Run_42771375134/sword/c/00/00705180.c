/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00705180; name: FUN_00705180
 */


undefined8 FUN_00705180(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  if ((*param_2 != 0) && (puVar10 = *(undefined8 **)(*param_2 + 0x60), puVar10 != (undefined8 *)0x0)
     ) {
    plVar7 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*PTR_DAT_02715888 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_02715888), iVar6 != 0)) {
      uVar8 = FUN_00702ff0();
      *(undefined8 *)PTR_DAT_02715890 = uVar8;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_02715890) {
        puVar10 = puVar10 + -10;
        goto LAB_007051f8;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_007051f8:
  puVar11 = *(undefined8 **)(*param_1 + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  puVar4 = PTR_DAT_02715888;
  puVar3 = (undefined8 *)PTR_DAT_02715890;
  if (((*PTR_DAT_02715888 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_02715888), puVar3 = (undefined8 *)PTR_DAT_02715890,
     iVar6 != 0)) {
    uVar8 = FUN_00702ff0();
    *(undefined8 *)PTR_DAT_02715890 = uVar8;
    __cxa_guard_release(PTR_DAT_02715888);
    puVar3 = (undefined8 *)PTR_DAT_02715890;
  }
  for (; plVar7 != puVar3; plVar7 = (long *)*plVar7) {
  }
  iVar6 = *(int *)(puVar10 + 0x35);
  iVar1 = *(int *)(puVar11 + 0x2b);
  PTR_DAT_02715890 = (undefined *)puVar3;
  if ((*param_3 != 0) && (puVar10 = *(undefined8 **)(*param_3 + 0x60), puVar10 != (undefined8 *)0x0)
     ) {
    plVar7 = (long *)(**(code **)*puVar10)(puVar10);
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02715888), iVar5 != 0)) {
      uVar8 = FUN_00702ff0();
      *puVar3 = uVar8;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == puVar3) {
        puVar10 = puVar10 + -10;
        goto LAB_00705284;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_00705284:
  puVar11 = *(undefined8 **)(*param_2 + 0x60);
  plVar7 = (long *)(**(code **)*puVar11)(puVar11);
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_02715888), iVar5 != 0)) {
    uVar8 = FUN_00702ff0();
    *puVar3 = uVar8;
    __cxa_guard_release(PTR_DAT_02715888);
  }
  for (; plVar7 != puVar3; plVar7 = (long *)*plVar7) {
  }
  iVar5 = *(int *)(puVar10 + 0x35);
  iVar2 = *(int *)(puVar11 + 0x2b);
  if (iVar6 < iVar1) {
    lVar12 = *param_1;
    *param_1 = 0;
    if (iVar5 < iVar2) {
      lVar9 = *param_3;
      *param_3 = 0;
      *param_1 = lVar9;
      if (*param_3 != 0) {
        (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar12;
    }
    else {
      lVar9 = *param_2;
      *param_2 = 0;
      *param_1 = lVar9;
      if (*param_2 != 0) {
        (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar12;
      if (*param_3 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        puVar10 = *(undefined8 **)(*param_3 + 0x60);
        if (puVar10 != (undefined8 *)0x0) {
          plVar7 = (long *)(**(code **)*puVar10)(puVar10);
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_02715888), iVar6 != 0)) {
            uVar8 = FUN_00702ff0();
            *puVar3 = uVar8;
            __cxa_guard_release(PTR_DAT_02715888);
          }
          for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            if (plVar7 == puVar3) {
              puVar10 = puVar10 + -10;
              goto LAB_007054c4;
            }
          }
        }
        puVar10 = (undefined8 *)0x0;
LAB_007054c4:
        lVar12 = *param_2;
      }
      puVar11 = *(undefined8 **)(lVar12 + 0x60);
      plVar7 = (long *)(**(code **)*puVar11)(puVar11);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_02715888), iVar6 != 0)) {
        uVar8 = FUN_00702ff0();
        *puVar3 = uVar8;
        __cxa_guard_release(PTR_DAT_02715888);
      }
      for (; plVar7 != puVar3; plVar7 = (long *)*plVar7) {
      }
      if (*(int *)(puVar10 + 0x35) < *(int *)(puVar11 + 0x2b)) {
        lVar9 = *param_2;
        *param_2 = 0;
        lVar12 = *param_3;
        *param_3 = 0;
        *param_2 = lVar12;
        if (*param_3 != 0) {
          (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
          *param_3 = 0;
        }
        *param_3 = lVar9;
        return 2;
      }
    }
  }
  else {
    if (iVar2 <= iVar5) {
      return 0;
    }
    lVar9 = *param_2;
    *param_2 = 0;
    lVar12 = *param_3;
    *param_3 = 0;
    *param_2 = lVar12;
    if (*param_3 != 0) {
      (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
      *param_3 = 0;
    }
    *param_3 = lVar9;
    if ((*param_2 != 0) &&
       (puVar10 = *(undefined8 **)(*param_2 + 0x60), puVar10 != (undefined8 *)0x0)) {
      plVar7 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_02715888), iVar6 != 0)) {
        uVar8 = FUN_00702ff0();
        *puVar3 = uVar8;
        __cxa_guard_release(PTR_DAT_02715888);
      }
      for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        if (plVar7 == puVar3) {
          puVar10 = puVar10 + -10;
          goto LAB_007053b8;
        }
      }
    }
    puVar10 = (undefined8 *)0x0;
LAB_007053b8:
    puVar11 = *(undefined8 **)(*param_1 + 0x60);
    plVar7 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_02715888), iVar6 != 0)) {
      uVar8 = FUN_00702ff0();
      *puVar3 = uVar8;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar7 != puVar3; plVar7 = (long *)*plVar7) {
    }
    if (*(int *)(puVar10 + 0x35) < *(int *)(puVar11 + 0x2b)) {
      lVar9 = *param_1;
      *param_1 = 0;
      lVar12 = *param_2;
      *param_2 = 0;
      *param_1 = lVar12;
      if (*param_2 != 0) {
        (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar9;
      return 2;
    }
  }
  return 1;
}


