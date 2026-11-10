/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a610; name: FUN_0130a610
 */


void FUN_0130a610(long *param_1,byte param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_38;
  
  *(byte *)(param_1 + 0x76) = param_2 & 1;
  puVar1 = PTR_DAT_02727760;
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    puVar1 = PTR_DAT_02727760;
    if (*(long *)PTR_DAT_02727760 != 0) {
      (**(code **)(*(long *)(*(long *)PTR_DAT_02727760 + 0x48) + 0x18))();
      *(undefined8 *)puVar1 = 0;
    }
    *(undefined8 *)puVar1 = local_38;
    return;
  }
  if (*(long *)PTR_DAT_02727760 == 0) {
LAB_0130a6bc:
    bVar2 = param_1 != (long *)0x0;
joined_r0x0130a704:
    if (bVar2) {
      return;
    }
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)PTR_DAT_02727760 + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      plVar4 = (long *)FUN_0130d560();
      if (plVar3 != (long *)0x0) {
        do {
          if (plVar3 == plVar4) {
            bVar2 = puVar6 + -10 != param_1;
            goto joined_r0x0130a704;
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
        goto LAB_0130a6bc;
      }
    }
    if (param_1 != (long *)0x0) {
      return;
    }
  }
  lVar5 = *(long *)puVar1;
  *(undefined8 *)puVar1 = 0;
  if (lVar5 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0130a6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  return;
}


