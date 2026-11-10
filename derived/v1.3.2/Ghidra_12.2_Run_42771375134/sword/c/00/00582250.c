/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00582250; name: FUN_00582250
 */


ulong FUN_00582250(undefined4 param_1,undefined4 param_2,float param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,uint param_8,ulong param_9,
                  undefined8 param_10,undefined8 param_11,undefined4 param_12,undefined4 param_13)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar10 = *(undefined4 *)(param_5 + 0x54);
  uVar11 = *(undefined4 *)(param_5 + 0x58);
  fVar12 = *(float *)(param_5 + 0x88);
  fVar13 = *(float *)(param_5 + 0x8c);
  fVar14 = *(float *)(param_5 + 0x90);
  fVar15 = *(float *)(param_5 + 0x94);
  uVar8 = *(undefined4 *)(param_7 + 0x54);
  uVar9 = *(undefined4 *)(param_7 + 0x58);
  if ((param_9 & 1) != 0) {
    uVar2 = FUN_0059d300(param_7,0,0,1,0,0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    FUN_0059d000(0,0);
  }
  fVar6 = (float)NEON_ucvtf(uVar10);
  fVar7 = (float)NEON_ucvtf(uVar11);
  uVar8 = NEON_ucvtf(uVar8);
  uVar9 = NEON_ucvtf(uVar9);
  lVar4 = param_5;
  do {
    lVar5 = lVar4;
    lVar4 = *(long *)(lVar5 + 0x120);
  } while (lVar4 != 0);
  if (param_3 <= 0.0) {
    param_3 = fVar6 / fVar7;
  }
  uVar10 = (**(code **)(**(long **)(lVar5 + 0xa8) + 0x80))();
  lVar4 = param_5;
  do {
    lVar5 = lVar4;
    lVar4 = *(long *)(lVar5 + 0x120);
  } while (lVar4 != 0);
  plVar3 = *(long **)(lVar5 + 0xa8);
  (**(code **)(*plVar3 + 0x78))(plVar3,4);
  lVar4 = param_5;
  do {
    lVar5 = lVar4;
    lVar4 = *(long *)(lVar5 + 0x120);
  } while (lVar4 != 0);
  do {
    lVar4 = param_6;
    param_6 = *(long *)(lVar4 + 0x120);
  } while (param_6 != 0);
  uVar1 = FUN_00579850(0,0,uVar8,uVar9,0,0,fVar12 * fVar6 + fVar14,fVar13 * fVar7 + fVar15,param_4,
                       param_8 & 1,*(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(lVar4 + 0xa8),
                       param_10,param_11,param_12,param_13,param_1,param_2,param_3);
  do {
    lVar4 = param_5;
    param_5 = *(long *)(lVar4 + 0x120);
  } while (param_5 != 0);
  plVar3 = *(long **)(lVar4 + 0xa8);
  (**(code **)(*plVar3 + 0x78))(plVar3,uVar10);
  return (ulong)(uVar1 & (int)uVar1 >> 0x1f);
}


