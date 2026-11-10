/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00581750; name: FUN_00581750
 */


ulong FUN_00581750(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,long param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined1 auStack_c0 [64];
  
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x58));
  fVar5 = *(float *)(param_7 + 0x88);
  fVar6 = *(float *)(param_7 + 0x8c);
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_7 + 0x54));
  uVar10 = NEON_ucvtf(*(undefined4 *)(param_8 + 0x58));
  uVar8 = NEON_ucvtf(*(undefined4 *)(param_8 + 0x54));
  fVar9 = *(float *)(param_7 + 0x90);
  fVar7 = *(float *)(param_7 + 0x94);
  FUN_00511ea0(fVar11,fVar4,uVar8,uVar10,0x3f000000,0x3f000000,0,
               *(undefined4 *)(*(long *)(param_7 + 0x80) + 8),
               *(undefined4 *)(*(long *)(param_7 + 0x80) + 0xc),auStack_c0,2,1,0);
  uVar2 = FUN_0059d300(param_8,0,0,1,0,0);
  if (-1 < (int)uVar2) {
    FUN_0059d000(0,0);
    do {
      lVar3 = param_7;
      param_7 = *(long *)(lVar3 + 0x120);
    } while (param_7 != 0);
    uVar1 = FUN_00573e40(0,0,uVar8,uVar10,0,0,fVar5 * fVar11 + fVar9,fVar6 * fVar4 + fVar7,param_6,
                         param_9,param_10,auStack_c0,*(undefined8 *)(lVar3 + 0xa8),0,param_12,
                         param_13,param_1,param_2,param_3,param_4,param_5);
    uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return uVar2;
}


