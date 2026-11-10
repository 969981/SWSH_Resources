/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005815f0; name: FUN_005815f0
 */


ulong FUN_005815f0(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_190 [256];
  
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x58));
  fVar9 = *(float *)(param_2 + 0x88);
  fVar10 = *(float *)(param_2 + 0x8c);
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x54));
  uVar6 = NEON_ucvtf(*(undefined4 *)(param_3 + 0x58));
  uVar5 = NEON_ucvtf(*(undefined4 *)(param_3 + 0x54));
  fVar12 = *(float *)(param_2 + 0x90);
  fVar11 = *(float *)(param_2 + 0x94);
  uVar1 = FUN_00511ea0(fVar7,fVar8,uVar5,uVar6,0,0,0,*(undefined4 *)(*(long *)(param_2 + 0x80) + 8),
                       *(undefined4 *)(*(long *)(param_2 + 0x80) + 0xc),auStack_190,4,1,0);
  uVar3 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    FUN_0059d000(0,0);
    do {
      lVar4 = param_2;
      param_2 = *(long *)(lVar4 + 0x120);
    } while (param_2 != 0);
    uVar2 = FUN_005813f0(0,0,uVar5,uVar6,0,0,fVar9 * fVar7 + fVar12,fVar10 * fVar8 + fVar11,param_1,
                         param_4 & 1,param_5 & 1,uVar1,auStack_190,*(undefined8 *)(lVar4 + 0xa8),0);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}


