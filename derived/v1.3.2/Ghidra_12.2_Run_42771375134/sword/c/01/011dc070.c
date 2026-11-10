/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dc070; name: FUN_011dc070
 */


undefined8 FUN_011dc070(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x30) == (long *)0x0) {
    return *(undefined8 *)(param_1 + 0x74);
  }
                    /* WARNING: Could not recover jumptable at 0x011dc084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x50))();
  return uVar1;
}


