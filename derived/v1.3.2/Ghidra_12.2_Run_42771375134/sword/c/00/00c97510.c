/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c97510; name: FUN_00c97510
 */


long FUN_00c97510(undefined8 param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)param_2 * 4 + (ulong)*puVar2 + 4);
  return (long)puVar2 + (ulong)*puVar2;
}


