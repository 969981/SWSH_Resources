/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00774010; name: FUN_00774010
 */


undefined4 FUN_00774010(long param_1)

{
  if (*(long *)(param_1 + 0x108) == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(long *)(*(long *)(param_1 + 0x100) + *(long *)(param_1 + 0x108) * 8 + -8) + 0x68);
}


