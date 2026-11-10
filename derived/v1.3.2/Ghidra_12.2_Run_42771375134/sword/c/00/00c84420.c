/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c84420; name: FUN_00c84420
 */


undefined8 FUN_00c84420(long param_1,int param_2)

{
  if (param_2 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) <= param_2) {
    return 0;
  }
  if (*(ulong *)(*(long *)(param_1 + 0x38) + 0x48) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 0x40) + (long)param_2 * 0x20);
}


