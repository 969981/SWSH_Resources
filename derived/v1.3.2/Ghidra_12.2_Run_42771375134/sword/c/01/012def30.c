/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012def30; name: FUN_012def30
 */


void FUN_012def30(long *param_1,byte param_2)

{
  *(byte *)(param_1 + 0x13) = param_2 & 1;
  if (*(uint *)(param_1 + 0x11) < 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x012def4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}


