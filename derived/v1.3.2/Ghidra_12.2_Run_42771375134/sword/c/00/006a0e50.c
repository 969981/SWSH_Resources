/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a0e50; name: FUN_006a0e50
 */


void FUN_006a0e50(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_006a9880(param_1 + 0x10);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_0069a8a0(param_1 + 0x130);
    if (0.0 < fVar2) {
                    /* WARNING: Could not recover jumptable at 0x006a0ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x1b0) + 0x20))
                (*(long **)(param_1 + 0x1b0),param_1 + 0x130,lVar1);
      return;
    }
  }
  return;
}


