/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c700; name: FUN_0069c700
 */


undefined4 FUN_0069c700(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x230) == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(long *)(*(long *)(param_1 + 0x230) + 0x10) + (ulong)param_2 * 0xf0 + 0x24);
}


