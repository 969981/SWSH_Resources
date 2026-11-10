/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007056f0; name: FUN_007056f0
 */


int FUN_007056f0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  iVar3 = FUN_00705180();
  if ((*param_4 != 0) && (puVar8 = *(undefined8 **)(*param_4 + 0x60), puVar8 != (undefined8 *)0x0))
  {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    if (((*PTR_DAT_02715888 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *(undefined8 *)PTR_DAT_02715890 = uVar6;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)PTR_DAT_02715890) {
        puVar8 = puVar8 + -10;
        goto LAB_00705774;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_00705774:
  puVar9 = *(undefined8 **)(*param_3 + 0x60);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  puVar2 = PTR_DAT_02715888;
  puVar1 = (undefined8 *)PTR_DAT_02715890;
  if (((*PTR_DAT_02715888 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), puVar1 = (undefined8 *)PTR_DAT_02715890,
     iVar4 != 0)) {
    uVar6 = FUN_00702ff0();
    *(undefined8 *)PTR_DAT_02715890 = uVar6;
    __cxa_guard_release(PTR_DAT_02715888);
    puVar1 = (undefined8 *)PTR_DAT_02715890;
  }
  for (; plVar5 != puVar1; plVar5 = (long *)*plVar5) {
  }
  PTR_DAT_02715890 = (undefined *)puVar1;
  iVar4 = iVar3;
  if (*(int *)(puVar8 + 0x35) < *(int *)(puVar9 + 0x2b)) {
    lVar10 = *param_3;
    *param_3 = 0;
    lVar7 = *param_4;
    *param_4 = 0;
    *param_3 = lVar7;
    if (*param_4 != 0) {
      (**(code **)(*(long *)(*param_4 + 0x48) + 0x18))();
      *param_4 = 0;
    }
    *param_4 = lVar10;
    if ((*param_3 != 0) && (puVar8 = *(undefined8 **)(*param_3 + 0x60), puVar8 != (undefined8 *)0x0)
       ) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *puVar1 = uVar6;
        __cxa_guard_release(PTR_DAT_02715888);
      }
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == puVar1) {
          puVar8 = puVar8 + -10;
          goto LAB_00705840;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_00705840:
    puVar9 = *(undefined8 **)(*param_2 + 0x60);
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
      uVar6 = FUN_00702ff0();
      *puVar1 = uVar6;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar5 != puVar1; plVar5 = (long *)*plVar5) {
    }
    iVar4 = iVar3 + 1;
    if (*(int *)(puVar8 + 0x35) < *(int *)(puVar9 + 0x2b)) {
      lVar10 = *param_2;
      *param_2 = 0;
      lVar7 = *param_3;
      *param_3 = 0;
      *param_2 = lVar7;
      if (*param_3 != 0) {
        (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar10;
      if ((*param_2 != 0) &&
         (puVar8 = *(undefined8 **)(*param_2 + 0x60), puVar8 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar8)(puVar8);
        if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
          uVar6 = FUN_00702ff0();
          *puVar1 = uVar6;
          __cxa_guard_release(PTR_DAT_02715888);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == puVar1) {
            puVar8 = puVar8 + -10;
            goto LAB_00705900;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_00705900:
      puVar9 = *(undefined8 **)(*param_1 + 0x60);
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02715888), iVar4 != 0)) {
        uVar6 = FUN_00702ff0();
        *puVar1 = uVar6;
        __cxa_guard_release(PTR_DAT_02715888);
      }
      for (; plVar5 != puVar1; plVar5 = (long *)*plVar5) {
      }
      iVar4 = iVar3 + 2;
      if (*(int *)(puVar8 + 0x35) < *(int *)(puVar9 + 0x2b)) {
        lVar10 = *param_1;
        *param_1 = 0;
        lVar7 = *param_2;
        *param_2 = 0;
        *param_1 = lVar7;
        if (*param_2 != 0) {
          (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
          *param_2 = 0;
        }
        iVar4 = iVar3 + 3;
        *param_2 = lVar10;
      }
    }
  }
  return iVar4;
}


