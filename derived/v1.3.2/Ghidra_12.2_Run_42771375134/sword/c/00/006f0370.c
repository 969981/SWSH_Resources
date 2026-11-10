/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f0370; name: FUN_006f0370
 */


undefined8 FUN_006f0370(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if ((*param_2 != 0) && (puVar8 = *(undefined8 **)(*param_2 + 0x60), puVar8 != (undefined8 *)0x0))
  {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_006f10c0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar8 = puVar8 + -10;
        goto LAB_006f03d4;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_006f03d4:
  puVar9 = *(undefined8 **)(*param_1 + 0x60);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  lVar6 = FUN_006f10c0();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  iVar1 = *(int *)(puVar8 + 0x28);
  iVar2 = *(int *)(puVar9 + 0x1e);
  if ((*param_3 != 0) && (puVar8 = *(undefined8 **)(*param_3 + 0x60), puVar8 != (undefined8 *)0x0))
  {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    lVar6 = FUN_006f10c0();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar8 = puVar8 + -10;
        goto LAB_006f0450;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_006f0450:
  puVar9 = *(undefined8 **)(*param_2 + 0x60);
  plVar5 = (long *)(**(code **)*puVar9)(puVar9);
  lVar6 = FUN_006f10c0();
  for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
  }
  iVar3 = *(int *)(puVar8 + 0x28);
  iVar4 = *(int *)(puVar9 + 0x1e);
  if (iVar1 < iVar2) {
    lVar6 = *param_1;
    *param_1 = 0;
    if (iVar3 < iVar4) {
      lVar7 = *param_3;
      *param_3 = 0;
      *param_1 = lVar7;
      if (*param_3 != 0) {
        (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar6;
    }
    else {
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      if (*param_2 != 0) {
        (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar6;
      if ((*param_3 != 0) &&
         (puVar8 = *(undefined8 **)(*param_3 + 0x60), puVar8 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar8)(puVar8);
        lVar6 = FUN_006f10c0();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar6) {
            puVar8 = puVar8 + -10;
            goto LAB_006f0628;
          }
        }
      }
      puVar8 = (undefined8 *)0x0;
LAB_006f0628:
      puVar9 = *(undefined8 **)(*param_2 + 0x60);
      plVar5 = (long *)(**(code **)*puVar9)(puVar9);
      lVar6 = FUN_006f10c0();
      for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
      }
      if (*(int *)(puVar8 + 0x28) < *(int *)(puVar9 + 0x1e)) {
        lVar7 = *param_2;
        *param_2 = 0;
        lVar6 = *param_3;
        *param_3 = 0;
        *param_2 = lVar6;
        if (*param_3 != 0) {
          (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
          *param_3 = 0;
        }
        *param_3 = lVar7;
        return 2;
      }
    }
  }
  else {
    if (iVar4 <= iVar3) {
      return 0;
    }
    lVar7 = *param_2;
    *param_2 = 0;
    lVar6 = *param_3;
    *param_3 = 0;
    *param_2 = lVar6;
    if (*param_3 != 0) {
      (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
      *param_3 = 0;
    }
    *param_3 = lVar7;
    if ((*param_2 != 0) && (puVar8 = *(undefined8 **)(*param_2 + 0x60), puVar8 != (undefined8 *)0x0)
       ) {
      plVar5 = (long *)(**(code **)*puVar8)(puVar8);
      lVar6 = FUN_006f10c0();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar6) {
          puVar8 = puVar8 + -10;
          goto LAB_006f0548;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
LAB_006f0548:
    puVar9 = *(undefined8 **)(*param_1 + 0x60);
    plVar5 = (long *)(**(code **)*puVar9)(puVar9);
    lVar6 = FUN_006f10c0();
    for (; plVar5 != (long *)lVar6; plVar5 = (long *)*plVar5) {
    }
    if (*(int *)(puVar8 + 0x28) < *(int *)(puVar9 + 0x1e)) {
      lVar7 = *param_1;
      *param_1 = 0;
      lVar6 = *param_2;
      *param_2 = 0;
      *param_1 = lVar6;
      if (*param_2 != 0) {
        (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar7;
      return 2;
    }
  }
  return 1;
}


