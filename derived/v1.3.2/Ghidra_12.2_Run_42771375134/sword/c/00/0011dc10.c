/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011dc10; name: FUN_0011dc10
 */


void FUN_0011dc10(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long local_18;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = iVar1 - 1;
  local_18 = param_2 + (ulong)param_3;
  *(uint *)(param_1 + 0x10) = uVar2;
  *(long *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
  if (uVar2 < (*(uint *)(param_1 + 0x14) & 0x7fffffff)) {
    *(long *)(*(long *)(param_1 + 8) + (ulong)uVar2 * 8) = local_18;
    *(int *)(param_1 + 0x10) = iVar1;
    return;
  }
  FUN_00112510((long *)(param_1 + 8),&local_18);
  return;
}


