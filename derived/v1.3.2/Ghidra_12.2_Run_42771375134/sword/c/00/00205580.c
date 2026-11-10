/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00205580; name: FUN_00205580
 */


void FUN_00205580(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_003ff490(param_1 + 0x20);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002055bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    return;
  }
  return;
}


