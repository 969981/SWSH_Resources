/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6d2f0; name: FUN_00a6d2f0
 */


void FUN_00a6d2f0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x928) != 0) {
    FUN_00adca50();
    lVar1 = *(long *)(param_1 + 0x928);
    *(undefined8 *)(param_1 + 0x928) = 0;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a6d328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      return;
    }
  }
  return;
}


