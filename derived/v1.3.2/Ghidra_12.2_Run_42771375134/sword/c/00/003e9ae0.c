/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9ae0; name: FUN_003e9ae0
 */


void FUN_003e9ae0(long param_1,uint param_2,undefined1 *param_3)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)(param_2 & 0xff) * 8) + 0x40) =
       *param_3;
  return;
}


