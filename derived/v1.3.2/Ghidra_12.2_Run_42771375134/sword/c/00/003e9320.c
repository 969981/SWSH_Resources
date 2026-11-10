/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9320; name: FUN_003e9320
 */


undefined2 FUN_003e9320(long param_1,uint param_2,uint param_3)

{
  return CONCAT11((*(uint *)(param_1 + 0x1208 + (ulong)(param_3 & 0xff) * 4) &
                  1 << (ulong)(param_2 & 0x1f)) != 0,
                  (*(uint *)(param_1 + 0x1208 + (ulong)(param_2 & 0xff) * 4) &
                  1 << (ulong)(param_3 & 0x1f)) != 0);
}


