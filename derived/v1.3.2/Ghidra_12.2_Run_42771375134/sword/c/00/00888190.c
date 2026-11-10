/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888190; name: FUN_00888190
 */


undefined2 FUN_00888190(long param_1,byte param_2)

{
  if (param_2 < 200) {
    return *(undefined2 *)
            (*(long *)(param_1 + 0x160) + (ulong)*(ushort *)(*(long *)(param_1 + 0x160) + 2) * 2 +
             (ulong)param_2 * 4 + 0x46);
  }
  return 0;
}


