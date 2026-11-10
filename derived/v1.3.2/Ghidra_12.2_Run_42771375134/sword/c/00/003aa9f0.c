/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa9f0; name: FUN_003aa9f0
 */


void FUN_003aa9f0(long param_1,long param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x003aaa08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x58) + 0x58))
            (*(long **)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x50),
             *(long *)(param_3 + 0x40) + 0x20);
  return;
}


