/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a1410; name: FUN_002a1410
 */


void FUN_002a1410(long param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,0x80);
                    /* WARNING: Could not recover jumptable at 0x002a145c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x58),*(int *)(param_1 + 0x50) * 0x70);
  return;
}


