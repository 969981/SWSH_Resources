/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f1ab0; name: FUN_006f1ab0
 */


void FUN_006f1ab0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_027154f0;
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = *(long **)(*(long *)puVar1 + 0x10);
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      *param_1 = 0;
      lVar4 = plVar3[1];
    }
    else {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
      lVar2 = *param_1;
      *param_1 = lVar4;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
      lVar4 = plVar3[1];
    }
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    lVar2 = param_1[1];
    param_1[1] = lVar4;
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f1b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


