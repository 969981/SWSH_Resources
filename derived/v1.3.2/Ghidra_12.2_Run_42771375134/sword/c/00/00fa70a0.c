/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa70a0; name: FUN_00fa70a0
 */


long FUN_00fa70a0(undefined8 param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0xc - (long)*param_2)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  if (param_3 < *puVar1) {
    puVar1 = puVar1 + (ulong)param_3 + 1;
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}


