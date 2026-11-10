/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077bd30; name: FUN_0077bd30
 */


undefined8 FUN_0077bd30(long param_1,long param_2,uint param_3)

{
  long lVar1;
  
  if ((ulong)param_3 <
      (ulong)*(uint *)(param_2 + 0xc) + (ulong)*(uint *)(param_2 + 0x10) +
      (ulong)*(uint *)(param_2 + 0x14) + (ulong)*(uint *)(param_2 + 0x18) + 0x1c) {
    return 2;
  }
  if (*(int *)(param_2 + 8) == 0) {
    return 2;
  }
  *(long *)(param_1 + 0x10) = param_2 + 0x1c;
  lVar1 = param_2 + 0x1c + (ulong)*(uint *)(param_2 + 0xc);
  *(long *)(param_1 + 0x18) = lVar1;
  lVar1 = lVar1 + (ulong)*(uint *)(param_2 + 0x10);
  *(long *)(param_1 + 0x20) = lVar1;
  *(ulong *)(param_1 + 0x28) = lVar1 + (ulong)*(uint *)(param_2 + 0x14);
  return 1;
}


