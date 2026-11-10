/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c52c0; name: FUN_003c52c0
 */


bool FUN_003c52c0(long param_1)

{
  return *(int *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + 0x750) + 0xe8) +
                  (ulong)*(uint *)(param_1 + 0x4c) * 0x20 + 0xc) == 0 &&
         (**(byte **)(param_1 + 0x68) & 6) != 0;
}


