/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489f80; name: FUN_00489f80
 */


void FUN_00489f80(long param_1,uint param_2)

{
  long *plVar2;
  long *plVar1;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = (float)NEON_fminnm(*(float *)(param_1 + 0x54) +
                             (float)param_2 * *(float *)(param_1 + 0x50),0x3f800000);
  fVar5 = *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x68) * fVar4;
  fVar6 = *(float *)(param_1 + 0x60) + *(float *)(param_1 + 0x6c) * fVar4;
  fVar4 = *(float *)(param_1 + 100) + fVar4 * *(float *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x38) != 0) {
    fVar7 = *(float *)(param_1 + 0x74);
    fVar8 = *(float *)(param_1 + 0x78);
    fVar9 = *(float *)(param_1 + 0x7c);
    plVar1 = *(long **)(param_1 + 0x30);
    do {
      plVar2 = plVar1 + 1;
      lVar3 = *(long *)(*plVar1 + 0x140);
      *(float *)(lVar3 + 0x1c) = (fVar5 - fVar7) + *(float *)(lVar3 + 0x1c);
      *(float *)(lVar3 + 0x20) = (fVar6 - fVar8) + *(float *)(lVar3 + 0x20);
      *(float *)(lVar3 + 0x24) = (fVar4 - fVar9) + *(float *)(lVar3 + 0x24);
      plVar1 = plVar2;
    } while (plVar2 != (long *)(*(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 8));
  }
  *(float *)(param_1 + 0x74) = fVar5;
  *(float *)(param_1 + 0x78) = fVar6;
  *(float *)(param_1 + 0x7c) = fVar4;
  if (param_2 < *(uint *)(param_1 + 0x48)) {
    return;
  }
  FUN_00489b60();
  return;
}


