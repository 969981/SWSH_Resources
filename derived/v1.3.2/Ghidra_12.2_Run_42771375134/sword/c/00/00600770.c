/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00600770; name: FUN_00600770
 */


undefined8 FUN_00600770(long param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  iVar5 = FUN_005ed780();
  if (iVar5 < 1) {
    return 0;
  }
  iVar5 = FUN_006050d0(*(undefined8 *)(param_1 + 0x60),(long)(param_2 << 6),(long)(param_3 << 6),
                       0x60,0x60);
  if (iVar5 != 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x60);
  *(int *)(param_1 + 0x50) = param_2;
  *(int *)(param_1 + 0x54) = param_3;
  fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 0x88));
  fVar2 = (float)*(long *)(lVar6 + 0x68) / fVar8;
  *(float *)(param_1 + 0x1e0) = fVar2;
  fVar1 = (float)*(long *)(lVar6 + 0x70) / fVar8;
  *(float *)(param_1 + 0x1ec) = fVar1;
  fVar7 = (float)*(long *)(lVar6 + 0x78) / fVar8;
  *(float *)(param_1 + 0x1e4) = fVar7;
  fVar8 = (float)*(long *)(lVar6 + 0x80) / fVar8;
  *(float *)(param_1 + 0x1e8) = fVar8;
  lVar6 = *(long *)(lVar6 + 0xa0);
  if (lVar6 != 0) {
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 0x18));
    *(float *)(param_1 + 0x1d8) = fVar4;
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(lVar6 + 0x1a));
    *(int *)(param_1 + 0x1d0) = (int)(fVar8 * fVar3);
    *(int *)(param_1 + 0x1c8) = (int)(fVar2 * fVar4);
    *(int *)(param_1 + 0x1cc) = (int)(fVar7 * fVar4);
    *(float *)(param_1 + 0x1dc) = fVar3;
    *(int *)(param_1 + 0x1d4) = (int)(fVar1 * fVar3);
  }
  return 1;
}


