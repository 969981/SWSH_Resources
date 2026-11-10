/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00802bd0; name: FUN_00802bd0
 */


void FUN_00802bd0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  puVar3 = (undefined8 *)(param_1 + 0x20);
  plVar4 = (long *)*puVar3;
  while (plVar4 != (long *)(param_1 + 0x28)) {
    if ((long *)plVar4[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar4[5] + 8))();
    }
    plVar1 = (long *)plVar4[1];
    if ((long *)plVar4[1] == (long *)0x0) {
      plVar1 = plVar4 + 2;
      if (*(long **)*plVar1 == plVar4) {
        plVar4 = (long *)*plVar1;
      }
      else {
        do {
          lVar2 = *plVar1;
          plVar1 = (long *)(lVar2 + 0x10);
          plVar4 = (long *)*plVar1;
        } while (*plVar4 != lVar2);
      }
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  FUN_00809630(puVar3,*(undefined8 *)(param_1 + 0x28));
  *(long **)(param_1 + 0x20) = (long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_00809630(puVar3,0);
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00802c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 8))();
  return;
}


