/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010f1e20; name: FUN_010f1e20
 */


void FUN_010f1e20(undefined8 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined8 local_18;
  
  *param_1 = 0;
  plVar1 = *(long **)(param_2 + 0x60);
  if (plVar1 != (long *)0x0) {
    if ((ulong)param_3 < (ulong)(plVar1[1] - *plVar1 >> 3)) {
      (**(code **)(**(long **)(*plVar1 + (ulong)param_3 * 8) + 0x10))(&local_18);
      *param_1 = local_18;
    }
  }
  return;
}


