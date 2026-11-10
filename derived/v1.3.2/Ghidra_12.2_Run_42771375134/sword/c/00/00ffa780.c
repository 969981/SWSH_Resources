/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffa780; name: FUN_00ffa780
 */


undefined8 FUN_00ffa780(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  plVar5 = *(long **)(param_1 + 0x20);
  if (plVar4 != plVar5) {
    do {
      if ((*plVar4 != 0) && (puVar3 = *(undefined8 **)(*plVar4 + 0x60), puVar3 != (undefined8 *)0x0)
         ) {
        plVar1 = (long *)(**(code **)*puVar3)(puVar3);
        lVar2 = FUN_00ffb220();
        for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
          if (plVar1 == (long *)lVar2) {
            if (puVar3 + -10 == param_2) goto LAB_00ffa824;
            goto LAB_00ffa7f0;
          }
        }
      }
      if (param_2 == (undefined8 *)0x0) goto LAB_00ffa824;
LAB_00ffa7f0:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5);
    plVar4 = plVar5;
LAB_00ffa824:
    plVar5 = *(long **)(param_1 + 0x20);
  }
  if (plVar5 == plVar4) {
    return 0;
  }
  if (plVar4 + 1 != plVar5) {
    plVar1 = plVar4;
    do {
      if (*plVar1 != 0) {
        (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
        *plVar1 = 0;
      }
      plVar4 = plVar1 + 1;
      lVar2 = *plVar4;
      *plVar4 = 0;
      *plVar1 = lVar2;
      plVar1 = plVar4;
    } while (plVar5 + -1 != plVar4);
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 == plVar4) goto LAB_00ffa8b8;
  }
  do {
    plVar1 = plVar5 + -1;
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      plVar5[-1] = 0;
    }
    plVar5 = plVar1;
  } while (plVar4 != plVar1);
LAB_00ffa8b8:
  *(long **)(param_1 + 0x20) = plVar4;
  lVar2 = param_2[0xb4];
  if (*(long *)(lVar2 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  *(undefined8 *)(lVar2 + 0x10) = 0;
  return 1;
}


