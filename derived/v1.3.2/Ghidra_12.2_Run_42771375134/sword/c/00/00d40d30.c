/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d40d30; name: FUN_00d40d30
 */


void FUN_00d40d30(undefined4 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(param_2 + 0x4b8) = param_3[1];
  *(undefined8 *)(param_2 + 0x4b0) = *param_3;
  *(undefined8 *)(param_2 + 0x4c8) = param_4[1];
  *(undefined8 *)(param_2 + 0x4c0) = *param_4;
  fVar2 = *(float *)(param_2 + 0x4f0);
  *(undefined4 *)(param_2 + 0x4d0) = param_1;
  fVar3 = (float)*(undefined8 *)(param_2 + 0x4c0);
  fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x4c0) >> 0x20);
  fVar5 = (float)*(undefined8 *)(param_2 + 0x4c8);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x4c8) >> 0x20);
  fVar7 = (float)*(undefined8 *)(param_2 + 0x4e0) + fVar3 * fVar2;
  fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x4e0) >> 0x20) + fVar4 * fVar2;
  fVar9 = (float)*(undefined8 *)(param_2 + 0x4e8) + fVar5 * fVar2;
  fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 0x4e8) >> 0x20) + fVar6 * fVar2;
  uVar11 = *(undefined8 *)(param_2 + 0x4b0);
  lVar1 = *(long *)(*(long *)(param_2 + 0x490) + 0x1a8);
  *(ulong *)(lVar1 + 0xf8) =
       CONCAT44(fVar10 + ((float)((ulong)*(undefined8 *)(param_2 + 0x4b8) >> 0x20) - fVar6) * fVar2,
                fVar9 + ((float)*(undefined8 *)(param_2 + 0x4b8) - fVar5) * fVar2);
  *(ulong *)(lVar1 + 0xf0) =
       CONCAT44(fVar8 + ((float)((ulong)uVar11 >> 0x20) - fVar4) * fVar2,
                fVar7 + ((float)uVar11 - fVar3) * fVar2);
  lVar1 = *(long *)(*(long *)(param_2 + 0x490) + 0x1a8);
  *(ulong *)(lVar1 + 0xe8) = CONCAT44(fVar10,fVar9);
  *(ulong *)(lVar1 + 0xe0) = CONCAT44(fVar8,fVar7);
  *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_2 + 0x490) + 0x1a8) + 0xa0) + 0xd0) =
       *(undefined4 *)(param_2 + 0x4d0);
  return;
}


