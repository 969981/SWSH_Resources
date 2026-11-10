/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004881f0; name: FUN_004881f0
 */


undefined8 FUN_004881f0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == param_2) || (*(long **)(param_1 + 0x78) == (long *)0x0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00488208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x228))();
  return uVar1;
}


