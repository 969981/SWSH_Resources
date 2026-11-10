/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00581c70; name: FUN_00581c70
 */


ulong FUN_00581c70(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,long param_10,long param_11,undefined4 param_12,uint param_13,
                  uint param_14,uint param_15,undefined4 param_16,undefined4 param_17,
                  undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
                  undefined4 param_22,undefined4 param_23)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  uVar6 = *(undefined4 *)(param_10 + 0x54);
  uVar9 = *(undefined4 *)(param_10 + 0x58);
  fVar4 = *(float *)(param_10 + 0x88);
  fVar5 = *(float *)(param_10 + 0x8c);
  fVar13 = *(float *)(param_10 + 0x90);
  fVar8 = *(float *)(param_10 + 0x94);
  uVar11 = *(undefined4 *)(param_11 + 0x54);
  uVar12 = *(undefined4 *)(param_11 + 0x58);
  uVar2 = FUN_0059d300(param_11,0,0,1,0,0);
  if (-1 < (int)uVar2) {
    fVar7 = (float)NEON_ucvtf(uVar6);
    fVar10 = (float)NEON_ucvtf(uVar9);
    uVar9 = NEON_ucvtf(uVar11);
    uVar6 = NEON_ucvtf(uVar12);
    FUN_0059d000(0,0);
    do {
      lVar3 = param_10;
      param_10 = *(long *)(lVar3 + 0x120);
    } while (param_10 != 0);
    if (param_2 <= 0.0) {
      param_2 = fVar7 / fVar10;
    }
    uVar1 = FUN_00578940(0,0,uVar9,uVar6,0,0,fVar4 * fVar7 + fVar13,fVar5 * fVar10 + fVar8,param_9,
                         param_12,param_13 & 1,param_14 & 1,param_15 & 1,
                         *(undefined8 *)(lVar3 + 0xa8),param_16,param_23,param_1,param_2,param_3,
                         param_4,param_5,param_6,param_7,param_8,param_17,param_18,param_19,param_20
                         ,param_21,param_22);
    uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return uVar2;
}


