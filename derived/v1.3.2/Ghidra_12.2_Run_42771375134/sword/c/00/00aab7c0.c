/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aab7c0; name: FUN_00aab7c0
 */


void FUN_00aab7c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = (long *)param_1[0x93];
  puVar1 = PTR_DAT_02719760 + 0x250;
  puVar2 = PTR_DAT_02719760 + 0x290;
  *param_1 = (long)(PTR_DAT_02719760 + 0x10);
  param_1[0x93] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(*(long *)param_1[0x94] + 0x18))
              ((long *)param_1[0x94],plVar3,param_1[0x95],param_1[0x96]);
  }
  plVar3 = (long *)param_1[0x8f];
  param_1[0x8f] = 0;
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != 0) {
      (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
      *plVar3 = 0;
    }
    (**(code **)(*(long *)param_1[0x90] + 0x18))
              ((long *)param_1[0x90],plVar3,param_1[0x91],param_1[0x92]);
  }
  FUN_00aab880(param_1);
  return;
}


