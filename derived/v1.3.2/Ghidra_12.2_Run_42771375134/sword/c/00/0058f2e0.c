/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058f2e0; name: FUN_0058f2e0
 */


ulong FUN_0058f2e0(undefined4 param_1,float param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9,
                  uint param_10,uint param_11,undefined8 param_12,undefined8 param_13,byte param_14)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  if (*(long **)(param_3 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_14 & 1) != 0) {
      (**(code **)(**(long **)(param_3 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_3 + 0x20) + 0x140))(*(long **)(param_3 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_3 + 0x20) + 0x150))(*(long **)(param_3 + 0x20),0);
    }
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_4 + 0x58));
    uVar9 = *(undefined4 *)(param_5 + 0x54);
    uVar11 = *(undefined4 *)(param_5 + 0x58);
    if (0x6f < (int)param_9) {
      param_9 = 0x70;
    }
    fVar12 = *(float *)(param_5 + 0x88);
    fVar13 = *(float *)(param_5 + 0x8c);
    fVar10 = *(float *)(param_5 + 0x90);
    fVar8 = *(float *)(param_5 + 0x94);
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_4 + 0x54));
    local_b0 = 1.0 / fVar6;
    if (0x13 < (int)param_10) {
      param_10 = 0x14;
    }
    if (99 < (int)param_11) {
      param_11 = 100;
    }
    fStack_ac = 1.0 / fVar7;
    local_a8 = fVar6;
    fStack_a4 = fVar7;
    uVar3 = FUN_0059cb20(param_6,0,0xffffffff);
    if (-1 < (int)uVar3) {
      fVar4 = (float)NEON_ucvtf(uVar9);
      fVar5 = (float)NEON_ucvtf(uVar11);
      bVar1 = 0.0 <= param_2;
      fVar10 = fVar12 * fVar4 + fVar10;
      if (0.5 < param_2) {
        param_2 = 0.5;
      }
      fVar8 = fVar13 * fVar5 + fVar8;
      fVar12 = 0.0;
      if (bVar1) {
        fVar12 = param_2;
      }
      uVar3 = FUN_0058f520(0,0,fVar6,fVar7,0,0,fVar10,fVar8,param_3,param_6,param_5,&local_b0,0);
      if ((-1 < (int)uVar3) &&
         (uVar3 = FUN_0058f6d0(0,0,fVar6,fVar7,0,0,fVar10,fVar8,param_3,param_7,param_6,&local_b0,
                               param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU),
                               param_10 & ((int)param_10 >> 0x1f ^ 0xffffffffU),
                               param_11 & ((int)param_11 >> 0x1f ^ 0xffffffffU),0,fVar12,param_1),
         -1 < (int)uVar3)) {
        uVar2 = FUN_0058f9b0(0,0,fVar6,fVar7,0,0,fVar10,fVar8,param_3,param_4,param_5,param_7,
                             &local_b0,param_8,0);
        uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
      }
    }
  }
  return uVar3;
}


