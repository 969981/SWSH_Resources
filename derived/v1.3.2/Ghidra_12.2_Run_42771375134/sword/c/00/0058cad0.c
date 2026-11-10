/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058cad0; name: FUN_0058cad0
 */


ulong FUN_0058cad0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  long param_9,long param_10,long param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,uint param_15,undefined8 param_16,undefined4 param_17,
                  undefined4 param_18,float param_19,float param_20,byte param_21)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  if (*(long **)(param_9 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_21 & 1) != 0) {
      (**(code **)(**(long **)(param_9 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_9 + 0x20) + 0x140))(*(long **)(param_9 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_9 + 0x20) + 0x150))(*(long **)(param_9 + 0x20),0);
    }
    if (param_19 <= 0.0) {
      param_19 = param_1;
    }
    if (param_20 <= 0.0) {
      param_20 = param_2 * DAT_01d4c5a4;
    }
    uVar9 = *(undefined4 *)(param_10 + 0x54);
    uVar11 = *(undefined4 *)(param_10 + 0x58);
    fVar7 = *(float *)(param_10 + 0x88);
    fVar12 = *(float *)(param_10 + 0x8c);
    fVar8 = *(float *)(param_10 + 0x90);
    fVar10 = *(float *)(param_10 + 0x94);
    uVar2 = *(uint *)(param_11 + 0x54);
    uVar1 = *(uint *)(param_11 + 0x58);
    uVar3 = FUN_0059d300(param_11,0,0,1,0,0);
    if (-1 < (int)uVar3) {
      fVar5 = (float)NEON_ucvtf(uVar9);
      fVar6 = (float)NEON_ucvtf(uVar11);
      FUN_0059d000(0,0);
      do {
        lVar4 = param_10;
        param_10 = *(long *)(lVar4 + 0x120);
      } while (param_10 != 0);
      uVar2 = FUN_0058c260(0,0,(float)uVar2,(float)uVar1,0,0,fVar7 * fVar5 + fVar8,
                           fVar12 * fVar6 + fVar10,param_9,param_12,*(undefined8 *)(lVar4 + 0xa8),
                           param_13,param_14,param_15 & 1,param_16,0,param_19,param_20,param_3,
                           param_4,param_5,param_6,param_7,param_8,param_17,param_18);
      uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar3;
}


