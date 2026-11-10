/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131b4b0; name: FUN_0131b4b0
 */


void FUN_0131b4b0(long param_1,int *param_2)

{
  uint *puVar1;
  
  if (param_2 != (int *)0x0) {
    puVar1 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (4 - (long)*param_2)));
    *(bool *)(param_1 + 0x38) = *(char *)((long)puVar1 + (ulong)*puVar1 + 0x1f) != '\0';
  }
  return;
}


