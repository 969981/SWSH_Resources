/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005820c0; name: FUN_005820c0
 */


ulong FUN_005820c0(undefined8 param_1,long param_2,long param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,byte param_10)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar3 = *(undefined4 *)(param_2 + 0x54);
  uVar8 = *(undefined4 *)(param_2 + 0x58);
  fVar11 = *(float *)(param_2 + 0x88);
  fVar12 = *(float *)(param_2 + 0x8c);
  fVar7 = *(float *)(param_2 + 0x90);
  fVar10 = *(float *)(param_2 + 0x94);
  uVar5 = *(undefined4 *)(param_3 + 0x54);
  uVar6 = *(undefined4 *)(param_3 + 0x58);
  uVar2 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar2) {
    fVar4 = (float)NEON_ucvtf(uVar3);
    fVar9 = (float)NEON_ucvtf(uVar8);
    uVar3 = NEON_ucvtf(uVar5);
    uVar5 = NEON_ucvtf(uVar6);
    FUN_0059d000(0,0);
    do {
      param_2 = *(long *)(param_2 + 0x120);
    } while (param_2 != 0);
    uVar1 = FUN_00578f40(0,0,uVar3,uVar5,0,0,fVar11 * fVar4 + fVar7,fVar12 * fVar9 + fVar10,param_1,
                         param_4,param_5,param_6,param_7,param_8,param_9,param_10 & 1);
    uVar2 = (ulong)(uVar1 & (int)uVar1 >> 0x1f);
  }
  return uVar2;
}


