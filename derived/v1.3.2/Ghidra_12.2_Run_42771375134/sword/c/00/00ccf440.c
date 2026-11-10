/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccf440; name: FUN_00ccf440
 */


void FUN_00ccf440(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  float fVar3;
  
  lVar1 = param_1 + 0x100;
  if (param_2 == 2) {
    param_2 = (uint)(*(int *)(param_1 + 0x658) == 0);
  }
  *(uint *)(param_1 + 0x658) = param_2;
  puVar2 = PTR_DAT_0271c828;
  fVar3 = (float)(int)param_2;
  FUN_00ffd010(lVar1,PTR_DAT_0271c828);
  FUN_00ffd510(fVar3,lVar1,puVar2);
  FUN_00ffd010(lVar1,puVar2 + 8);
  FUN_00ffd510(fVar3,lVar1,puVar2 + 8);
  FUN_00ffd010(lVar1,puVar2 + 0x10);
  FUN_00ffd510(fVar3,lVar1,puVar2 + 0x10);
  return;
}


