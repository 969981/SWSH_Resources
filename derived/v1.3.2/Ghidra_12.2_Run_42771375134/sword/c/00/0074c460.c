/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0074c460; name: FUN_0074c460
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0074c460(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  puVar2 = PTR_DAT_02715da8;
  puVar1 = PTR_DAT_02715da0;
  plVar10 = *(long **)(param_1 + 0x710);
  plVar12 = *(long **)(param_1 + 0x718);
  if (plVar10 != plVar12) {
    do {
      if ((*plVar10 == 0) ||
         (puVar4 = *(undefined8 **)(*plVar10 + 0x60), puVar4 == (undefined8 *)0x0))
      goto LAB_0074c520;
      plVar5 = (long *)(**(code **)*puVar4)();
      if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
        uVar6 = FUN_00706e40();
        *(undefined8 *)puVar2 = uVar6;
        __cxa_guard_release(puVar1);
      }
      while( true ) {
        if (plVar5 == (long *)0x0) goto LAB_0074c520;
        if (plVar5 == (long *)puVar2) break;
        plVar5 = (long *)*plVar5;
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar12);
    plVar10 = plVar12;
  }
LAB_0074c520:
  puVar2 = PTR_DAT_02715da8;
  puVar1 = PTR_DAT_02715da0;
  plVar5 = plVar10;
  if (plVar10 != plVar12) {
joined_r0x0074c530:
    plVar5 = plVar5 + 1;
    plVar11 = plVar10;
    if (plVar5 != plVar12) {
      while ((plVar10 = plVar11, *plVar5 != 0 &&
             (puVar4 = *(undefined8 **)(*plVar5 + 0x60), puVar4 != (undefined8 *)0x0))) {
        plVar7 = (long *)(**(code **)*puVar4)();
        if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(puVar1), iVar3 != 0)) {
          uVar6 = FUN_00706e40();
          *(undefined8 *)puVar2 = uVar6;
          __cxa_guard_release(puVar1);
        }
        while( true ) {
          if (plVar7 == (long *)0x0) goto joined_r0x0074c530;
          if (plVar7 == (long *)puVar2) break;
          plVar7 = (long *)*plVar7;
        }
        if (*plVar11 != 0) {
          (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
          *plVar11 = 0;
        }
        lVar8 = *plVar5;
        *plVar5 = 0;
        plVar10 = plVar11 + 1;
        *plVar11 = lVar8;
        plVar5 = plVar5 + 1;
        plVar11 = plVar10;
        if (plVar5 == plVar12) goto LAB_0074c5f4;
      }
      goto joined_r0x0074c530;
    }
  }
LAB_0074c5f4:
  plVar12 = *(long **)(param_1 + 0x718);
  if (plVar10 != plVar12) {
    if ((long *)((long)plVar10 + ((long)plVar12 - (long)plVar10)) != plVar12) {
      lVar8 = (long)plVar12 - (long)plVar10 >> 3;
      plVar5 = plVar10;
      do {
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          *plVar5 = 0;
        }
        lVar9 = plVar5[lVar8];
        plVar5[lVar8] = 0;
        plVar10 = plVar5 + 1;
        *plVar5 = lVar9;
        plVar5 = plVar10;
      } while (plVar12 + -lVar8 != plVar10);
      plVar12 = *(long **)(param_1 + 0x718);
    }
    if (plVar12 != plVar10) {
      do {
        plVar5 = plVar12 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar12[-1] = 0;
        }
        plVar12 = plVar5;
      } while (plVar10 != plVar5);
    }
    *(long **)(param_1 + 0x718) = plVar10;
  }
  return;
}


