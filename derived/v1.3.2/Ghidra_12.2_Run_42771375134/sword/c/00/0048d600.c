/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048d600; name: FUN_0048d600
 */


void FUN_0048d600(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x16d) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0048d61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x160) + 0x1c8))
              (*(long **)(param_1 + 0x160),param_2,param_3,*(undefined8 *)(param_1 + 0x28));
    return;
  }
  plVar1 = (long *)*param_3;
  *param_3 = 0;
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048d634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))();
  return;
}


