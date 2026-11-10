/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069c730; name: FUN_0069c730
 */


void FUN_0069c730(undefined4 param_1,long param_2,uint param_3)

{
  if (*(long *)(param_2 + 0x230) != 0) {
    *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x230) + 0x10) + (ulong)param_3 * 0xf0 + 0x24) =
         param_1;
  }
  return;
}


