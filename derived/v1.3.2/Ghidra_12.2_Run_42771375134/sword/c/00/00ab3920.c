/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab3920; name: FUN_00ab3920
 */


void FUN_00ab3920(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  param_2 = *(int *)(param_1 + 0x134) + param_2;
  iVar2 = *(int *)(param_1 + 0x138);
  iVar1 = iVar2;
  if (param_2 <= iVar2) {
    iVar1 = param_2;
  }
  *(int *)(param_1 + 0x134) = iVar1;
  puVar4 = PTR_PTR_02718e90;
  if (iVar2 == 0) {
    fVar13 = 1.0;
  }
  else {
    fVar13 = (float)iVar1 / (float)iVar2;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  uVar8 = *(undefined8 *)(param_1 + 0x100);
  lVar5 = (ulong)*(uint *)(param_1 + 0x130) * 8;
  uVar11 = *(undefined8 *)(param_1 + 0x118);
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  fVar6 = (float)(**(code **)(PTR_PTR_02718e90 + lVar5))(fVar13);
  fVar12 = (float)((ulong)uVar8 >> 0x20);
  fVar7 = (float)(**(code **)(puVar4 + lVar5))(fVar13);
  fVar3 = (float)uVar10;
  fVar13 = (float)(**(code **)(puVar4 + lVar5))(fVar13,uVar9,uVar8);
  *(ulong *)(param_1 + 0x128) = (ulong)(uint)(fVar3 + ((float)uVar11 - fVar3) * fVar13);
  *(ulong *)(param_1 + 0x120) =
       CONCAT44(fVar12 + ((float)((ulong)uVar9 >> 0x20) - fVar12) * fVar7,
                (float)uVar8 + ((float)uVar9 - (float)uVar8) * fVar6);
  (**(code **)(param_1 + 0x80))(param_1 + 0xa0,param_1 + 0x120);
  if (*(int *)(param_1 + 0x134) < *(int *)(param_1 + 0x138)) {
    return;
  }
  FUN_015f5e80(param_1);
  return;
}


