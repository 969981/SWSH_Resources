/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f440; name: FUN_0029f440
 */


void FUN_0029f440(long param_1,long *param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,0x10);
    (**(code **)(*param_2 + 0x10))
              (param_2,*(undefined8 *)(param_1 + 8),(ulong)*(ushort *)(param_1 + 2) << 1);
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2,0x10);
                    /* WARNING: Could not recover jumptable at 0x0029f4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,*(undefined8 *)(param_1 + 0x18),
             (*(int *)(param_1 + 0x10) * 4 + 0xcU & 0xfffffff0) + *(int *)(param_1 + 0x14));
  return;
}


