/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e19500; name: FUN_00e19500
 */


void FUN_00e19500(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00e19510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x38))(*(long **)(param_1 + 0xe8),param_2 & 1);
  return;
}


