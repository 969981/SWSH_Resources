/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e875f0; name: FUN_00e875f0
 */


void FUN_00e875f0(undefined8 *param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  void *pvVar3;
  
  pvVar3 = (void *)param_2[0xb];
  if (pvVar3 != (void *)0x0) {
    FUN_00daf9b0(pvVar3,*(undefined8 *)((long)pvVar3 + 8));
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)param_2[5];
  if (pvVar3 != (void *)0x0) {
    plVar2 = (long *)*param_2;
    if (plVar2 == (long *)0x0) {
      operator_delete__(pvVar3);
      cVar1 = (char)param_2[1];
      param_2[5] = 0;
      goto joined_r0x00e87678;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,pvVar3,param_2[4]);
  }
  cVar1 = (char)param_2[1];
  param_2[5] = 0;
joined_r0x00e87678:
  if ((cVar1 != '\0') && ((long *)*param_2 != (long *)0x0)) {
    (**(code **)(*(long *)*param_2 + 8))();
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e876a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]);
  return;
}


