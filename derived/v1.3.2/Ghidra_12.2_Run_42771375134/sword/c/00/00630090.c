/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00630090; name: FUN_00630090
 */


void FUN_00630090(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (param_3 & 0xffff) * 0x10;
  *(long *)(*(long *)(param_2 + 0x10) + lVar1) =
       *(long *)(*(long *)(param_2 + 0x10) + lVar1) + param_4;
  return;
}


