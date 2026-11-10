/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b0180; name: FUN_003b0180
 */


void FUN_003b0180(long param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
                    /* WARNING: Could not recover jumptable at 0x003b01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x1d0))
            (*(long **)(param_1 + 0x20),param_3,param_3 + (param_2 & 0xffffffff) * 0x10,param_5,
             param_5 + (param_4 & 0xffffffff) * 0xc);
  return;
}


