/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e49120; name: FUN_00e49120
 */


void FUN_00e49120(undefined4 param_1,long param_2,ulong param_3,uint param_4)

{
  *(undefined4 *)
   (*(long *)(param_2 + 0x78) + (param_3 & 0xffffffff) * 0x20 + (ulong)param_4 * 4 + 0x90) = param_1
  ;
  return;
}


