/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075ec80; name: FUN_0075ec80
 */


void FUN_0075ec80(long *param_1)

{
  *(long **)PTR_DAT_02716008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0075ec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,"DebugHeap");
  return;
}


