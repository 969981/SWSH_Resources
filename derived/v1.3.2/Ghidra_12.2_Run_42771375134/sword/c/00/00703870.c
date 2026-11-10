/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00703870; name: FUN_00703870
 */


/* WARNING: Type propagation algorithm not settling */

long * FUN_00703870(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar2 = PTR_DAT_02715940;
  puVar1 = PTR_DAT_02715938;
  if (param_1 != param_2) {
    do {
      if ((*param_1 == 0) ||
         (puVar8 = *(undefined8 **)(*param_1 + 0x60), puVar8 == (undefined8 *)0x0))
      goto LAB_00703944;
      plVar4 = (long *)(**(code **)*puVar8)(puVar8);
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar5 = FUN_00702f00();
        *(undefined8 *)puVar2 = uVar5;
        __cxa_guard_release(puVar1);
      }
      while( true ) {
        if (plVar4 == (long *)0x0) goto LAB_00703944;
        if (plVar4 == (long *)puVar2) break;
        plVar4 = (long *)*plVar4;
      }
      if (*(char *)(puVar8 + 0x11) != '\0') {
        *param_3 = (long)(puVar8 + -10);
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
LAB_00703944:
  puVar2 = PTR_DAT_02715940;
  puVar1 = PTR_DAT_02715938;
  plVar4 = param_1;
  if (param_1 != param_2) {
joined_r0x00703954:
    plVar4 = plVar4 + 1;
    if (plVar4 != param_2) {
      while ((*plVar4 != 0 &&
             (puVar8 = *(undefined8 **)(*plVar4 + 0x60), puVar8 != (undefined8 *)0x0))) {
        plVar6 = (long *)(**(code **)*puVar8)(puVar8);
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar5 = FUN_00702f00();
          *(undefined8 *)puVar2 = uVar5;
          __cxa_guard_release(puVar1);
        }
        while( true ) {
          if (plVar6 == (long *)0x0) goto joined_r0x00703954;
          if (plVar6 == (long *)puVar2) break;
          plVar6 = (long *)*plVar6;
        }
        if (*(char *)(puVar8 + 0x11) != '\0') {
          *param_3 = (long)(puVar8 + -10);
        }
        if (*param_1 != 0) {
          (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
          *param_1 = 0;
        }
        lVar7 = *plVar4;
        *plVar4 = 0;
        plVar6 = param_1 + 1;
        *param_1 = lVar7;
        plVar4 = plVar4 + 1;
        param_1 = plVar6;
        if (plVar4 == param_2) {
          return plVar6;
        }
      }
      goto joined_r0x00703954;
    }
  }
  return param_1;
}


