/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a9f0; name: FUN_0130a9f0
 */


void FUN_0130a9f0(long param_1,long *param_2)

{
  long lVar1;
  undefined8 local_18;
  
  if ((long *)*param_2 == (long *)0x0) {
    lVar1 = *(long *)(param_1 + 0x3c8);
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0130aa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  else {
    (**(code **)(*(long *)*param_2 + 0x10))(&local_18);
    if (*(long *)(param_1 + 0x3c8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3c8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x3c8) = 0;
    }
    *(undefined8 *)(param_1 + 0x3c8) = local_18;
  }
  return;
}


