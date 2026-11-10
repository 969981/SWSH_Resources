/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00603340; name: FUN_00603340
 */


void FUN_00603340(long param_1,int param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1);
    }
    if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00603398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x10))(lVar1,param_1);
      return;
    }
  }
  return;
}


