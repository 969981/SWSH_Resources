/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539280; name: FUN_01539280
 */


void FUN_01539280(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x68) =
       *(uint *)(param_1 + 0x68) & 0xffffffc0 |
       *(uint *)(param_1 + 0x68) & 0x1f | (~param_2 & 1) << 5;
  return;
}


