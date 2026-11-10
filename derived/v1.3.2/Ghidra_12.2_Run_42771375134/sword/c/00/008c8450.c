/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c8450; name: FUN_008c8450
 */


void FUN_008c8450(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_30;
  undefined1 auStack_24 [4];
  
  lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = FUN_015200a0(lVar3,*(undefined4 *)(param_1 + (long)*(int *)(param_1 + 0x640) * 4 + 0x64c),
                       auStack_24);
  lVar2 = (ulong)*(uint *)(param_1 + 0x738) * 4;
  *(uint *)(lVar1 + lVar2) = *(uint *)(lVar1 + lVar2) ^ 0x80000000;
  local_30 = *(undefined8 *)(PTR_DAT_02717ad0 + (ulong)*(uint *)(param_1 + 0x73c) * 0x88 + 0x38);
  FUN_00ffd510((float)(*(uint *)(lVar1 + (ulong)*(uint *)(param_1 + 0x738) * 4) >> 0x1f),
               param_1 + 0x100,&local_30);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


