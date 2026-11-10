/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b5340; name: FUN_007b5340
 */


void FUN_007b5340(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_02716a30;
  if (lVar1 != 0) {
    FUN_01940f80(lVar1);
    FUN_01941410(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007b5398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x200) + 0x18))
            (*(long **)(param_1 + 0x200),lVar1,*(undefined8 *)(param_1 + 0x208),
             *(undefined8 *)(param_1 + 0x210));
  return;
}


