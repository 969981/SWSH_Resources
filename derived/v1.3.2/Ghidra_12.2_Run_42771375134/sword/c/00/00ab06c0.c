/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab06c0; name: FUN_00ab06c0
 */


void FUN_00ab06c0(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_14;
  
  param_2 = *(int *)(param_1 + 0x110) + param_2;
  iVar2 = *(int *)(param_1 + 0x10c);
  iVar1 = iVar2;
  if (param_2 <= iVar2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x110) = iVar1;
  if (iVar2 == 0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = (float)iVar1 / (float)iVar2;
  }
  fVar4 = *(float *)(param_1 + 0x100);
  fVar5 = *(float *)(param_1 + 0x104);
  fVar3 = (float)(**(code **)(PTR_PTR_02718e90 + (ulong)*(uint *)(param_1 + 0x108) * 8))(fVar3);
  local_14 = fVar4 + (fVar5 - fVar4) * fVar3;
  (**(code **)(param_1 + 0x80))(param_1 + 0xa0,&local_14);
  if (*(int *)(param_1 + 0x10c) <= *(int *)(param_1 + 0x110)) {
    FUN_015f5e80(param_1);
  }
  return;
}


