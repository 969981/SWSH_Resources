/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00217ff0; name: FUN_00217ff0
 */


void FUN_00217ff0(undefined8 *param_1,long *param_2)

{
  if (*(ushort *)(param_1 + 1) < 2) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x00218044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,*param_1,(ulong)*(ushort *)(param_1 + 1) << 3);
  return;
}


