/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003df980; name: FUN_003df980
 */


undefined8 FUN_003df980(long param_1,uint param_2)

{
  return *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 0x10f0) + (ulong)(param_2 & 0xff) * 8) + 0x50);
}


