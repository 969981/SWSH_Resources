/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00116010; name: FUN_00116010
 */


void FUN_00116010(long param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint local_14;
  
  puVar2 = (ushort *)(*(long *)(param_1 + 0x38) + (ulong)param_2 * 0x10 + 4);
  uVar1 = *puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    if (*(uint *)(param_1 + 0x1a8) < (*(uint *)(param_1 + 0x1ac) & 0x7fffffff)) {
      *(uint *)(*(long *)(param_1 + 0x1a0) + (ulong)*(uint *)(param_1 + 0x1a8) * 4) = param_2;
      *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
    }
    else {
      local_14 = param_2;
      FUN_001b4230(param_1 + 0x1a0,&local_14);
      uVar1 = *puVar2;
    }
  }
  *puVar2 = uVar1 | 2;
  return;
}


