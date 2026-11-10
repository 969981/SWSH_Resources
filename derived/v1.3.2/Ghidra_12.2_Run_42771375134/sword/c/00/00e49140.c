/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e49140; name: FUN_00e49140
 */


undefined4 FUN_00e49140(long param_1,ulong param_2,uint param_3)

{
  return *(undefined4 *)
          (*(long *)(param_1 + 0x78) + (param_2 & 0xffffffff) * 0x20 + (ulong)param_3 * 4 + 0x90);
}


