/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058ee60; name: FUN_0058ee60
 */


ulong FUN_0058ee60(long param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_5 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
    }
    uVar8 = *(undefined4 *)(param_3 + 0x54);
    uVar9 = *(undefined4 *)(param_3 + 0x58);
    fVar10 = *(float *)(param_3 + 0x88);
    fVar11 = *(float *)(param_3 + 0x8c);
    fVar13 = *(float *)(param_3 + 0x90);
    fVar12 = *(float *)(param_3 + 0x94);
    uVar2 = *(uint *)(param_2 + 0x54);
    uVar1 = *(uint *)(param_2 + 0x58);
    uVar3 = FUN_0059d300(param_2,0,0,1,0,0);
    if (-1 < (int)uVar3) {
      fVar6 = (float)NEON_ucvtf(uVar8);
      fVar7 = (float)NEON_ucvtf(uVar9);
      FUN_0059d000(0,0);
      lVar5 = param_3;
      do {
        lVar4 = lVar5;
        lVar5 = *(long *)(lVar4 + 0x120);
      } while (lVar5 != 0);
      uVar2 = FUN_0058efc0(0,0,(float)uVar2,(float)uVar1,0,0,fVar10 * fVar6 + fVar13,
                           fVar11 * fVar7 + fVar12,param_1,*(undefined8 *)(lVar4 + 0xa8),
                           param_3 + 0x88,param_4,0);
      uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar3;
}


