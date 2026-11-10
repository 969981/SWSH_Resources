/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0086eb40; name: FUN_0086eb40
 */


void FUN_0086eb40(long param_1,ushort param_2)

{
  *(ushort *)(*(long *)(param_1 + 0x10) + 4) =
       *(ushort *)(*(long *)(param_1 + 0x10) + 4) & 0xfffb | (param_2 & 1) << 2;
  return;
}


