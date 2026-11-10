/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f0980; name: FUN_006f0980
 */


int FUN_006f0980(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  iVar1 = FUN_006f06f0();
  if ((*param_5 != 0) && (puVar5 = *(undefined8 **)(*param_5 + 0x60), puVar5 != (undefined8 *)0x0))
  {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    lVar3 = FUN_006f10c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar5 = puVar5 + -10;
        goto LAB_006f09f8;
      }
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_006f09f8:
  puVar6 = *(undefined8 **)(*param_4 + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_006f10c0();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  iVar4 = iVar1;
  if (*(int *)(puVar5 + 0x28) < *(int *)(puVar6 + 0x1e)) {
    lVar7 = *param_4;
    *param_4 = 0;
    lVar3 = *param_5;
    *param_5 = 0;
    *param_4 = lVar3;
    if (*param_5 != 0) {
      (**(code **)(*(long *)(*param_5 + 0x48) + 0x18))();
      *param_5 = 0;
    }
    *param_5 = lVar7;
    if ((*param_4 != 0) && (puVar5 = *(undefined8 **)(*param_4 + 0x60), puVar5 != (undefined8 *)0x0)
       ) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      lVar3 = FUN_006f10c0();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) {
          puVar5 = puVar5 + -10;
          goto LAB_006f0ab0;
        }
      }
    }
    puVar5 = (undefined8 *)0x0;
LAB_006f0ab0:
    puVar6 = *(undefined8 **)(*param_3 + 0x60);
    iVar4 = iVar1 + 1;
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    lVar3 = FUN_006f10c0();
    for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
    }
    if (*(int *)(puVar5 + 0x28) < *(int *)(puVar6 + 0x1e)) {
      lVar7 = *param_3;
      *param_3 = 0;
      lVar3 = *param_4;
      *param_4 = 0;
      *param_3 = lVar3;
      if (*param_4 != 0) {
        (**(code **)(*(long *)(*param_4 + 0x48) + 0x18))();
        *param_4 = 0;
      }
      *param_4 = lVar7;
      if ((*param_3 != 0) &&
         (puVar5 = *(undefined8 **)(*param_3 + 0x60), puVar5 != (undefined8 *)0x0)) {
        plVar2 = (long *)(**(code **)*puVar5)(puVar5);
        lVar3 = FUN_006f10c0();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) {
            puVar5 = puVar5 + -10;
            goto LAB_006f0b68;
          }
        }
      }
      puVar5 = (undefined8 *)0x0;
LAB_006f0b68:
      puVar6 = *(undefined8 **)(*param_2 + 0x60);
      iVar4 = iVar1 + 2;
      plVar2 = (long *)(**(code **)*puVar6)(puVar6);
      lVar3 = FUN_006f10c0();
      for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
      }
      if (*(int *)(puVar5 + 0x28) < *(int *)(puVar6 + 0x1e)) {
        lVar7 = *param_2;
        *param_2 = 0;
        lVar3 = *param_3;
        *param_3 = 0;
        *param_2 = lVar3;
        if (*param_3 != 0) {
          (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
          *param_3 = 0;
        }
        *param_3 = lVar7;
        if ((*param_2 != 0) &&
           (puVar5 = *(undefined8 **)(*param_2 + 0x60), puVar5 != (undefined8 *)0x0)) {
          plVar2 = (long *)(**(code **)*puVar5)(puVar5);
          lVar3 = FUN_006f10c0();
          for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
            if (plVar2 == (long *)lVar3) {
              puVar5 = puVar5 + -10;
              goto LAB_006f0c20;
            }
          }
        }
        puVar5 = (undefined8 *)0x0;
LAB_006f0c20:
        puVar6 = *(undefined8 **)(*param_1 + 0x60);
        iVar4 = iVar1 + 3;
        plVar2 = (long *)(**(code **)*puVar6)(puVar6);
        lVar3 = FUN_006f10c0();
        for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
        }
        if (*(int *)(puVar5 + 0x28) < *(int *)(puVar6 + 0x1e)) {
          lVar7 = *param_1;
          *param_1 = 0;
          lVar3 = *param_2;
          *param_2 = 0;
          *param_1 = lVar3;
          if (*param_2 != 0) {
            (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
            *param_2 = 0;
          }
          iVar4 = iVar1 + 4;
          *param_2 = lVar7;
        }
      }
    }
  }
  return iVar4;
}


