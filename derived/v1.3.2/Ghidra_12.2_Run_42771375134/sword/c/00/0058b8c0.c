/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058b8c0; name: FUN_0058b8c0
 */


ulong FUN_0058b8c0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8,undefined4 param_9,
                  uint param_10,byte param_11,byte param_12,undefined4 param_13)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_238 [408];
  
  if ((param_11 & 1) != 0) {
    (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
  }
  fVar11 = (float)NEON_ucvtf(*(undefined4 *)(param_4 + 0x54));
  fVar6 = *(float *)(param_4 + 0x88);
  fVar10 = (float)NEON_ucvtf(*(undefined4 *)(param_4 + 0x58));
  fVar7 = *(float *)(param_4 + 0x8c);
  fVar12 = *(float *)(param_4 + 0x90);
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x54));
  fVar1 = fVar11 * (float)param_1;
  if ((float)param_1 <= 0.0) {
    fVar1 = fVar8;
  }
  fVar9 = (float)NEON_ucvtf(*(undefined4 *)(param_5 + 0x58));
  fVar8 = fVar10 * (float)param_2;
  if ((float)param_2 <= 0.0) {
    fVar8 = fVar9;
  }
  fVar9 = *(float *)(param_4 + 0x94);
  uVar2 = FUN_00511ea0(fVar11,fVar10,fVar1,fVar8,param_1,param_2,0,
                       *(undefined4 *)(*(long *)(param_4 + 0x80) + 8),
                       *(undefined4 *)(*(long *)(param_4 + 0x80) + 0xc),auStack_238,5,param_12 & 1,
                       param_13);
  uVar4 = FUN_0059d300(param_5,0,0,1,0,0);
  if (-1 < (int)uVar4) {
    FUN_0059d000(0,0);
    do {
      lVar5 = param_4;
      param_4 = *(long *)(lVar5 + 0x120);
    } while (param_4 != 0);
    uVar3 = FUN_0057b350(0,0,fVar1,fVar8,0,0,fVar6 * fVar11 + fVar12,fVar7 * fVar10 + fVar9,param_3,
                         param_10 & 1,param_12 & 1,uVar2,auStack_238,param_6,param_7,
                         *(undefined8 *)(lVar5 + 0xa8),param_8,param_9,0);
    uVar4 = (ulong)(uVar3 & (int)uVar3 >> 0x1f);
  }
  return uVar4;
}


