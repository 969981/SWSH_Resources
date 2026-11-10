/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c2620; name: FUN_013c2620
 */


void FUN_013c2620(long param_1)

{
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x114) = 3;
  FUN_013c21e0(*(undefined8 *)(param_1 + 0x68),param_1 + 0x100);
                    /* WARNING: Could not recover jumptable at 0x013c265c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x70) + 0x28))();
  return;
}


