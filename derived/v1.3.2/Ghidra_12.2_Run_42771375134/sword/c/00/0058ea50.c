/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058ea50; name: FUN_0058ea50
 */


ulong FUN_0058ea50(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_6 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
    }
    uVar10 = *(undefined4 *)(param_3 + 0x54);
    uVar11 = *(undefined4 *)(param_3 + 0x58);
    fVar12 = *(float *)(param_3 + 0x88);
    fVar7 = *(float *)(param_3 + 0x8c);
    fVar9 = *(float *)(param_3 + 0x90);
    fVar8 = *(float *)(param_3 + 0x94);
    uVar2 = *(uint *)(param_2 + 0x54);
    uVar1 = *(uint *)(param_2 + 0x58);
    uVar3 = FUN_0059d300(param_2,0,0,1,0,0);
    if (-1 < (int)uVar3) {
      fVar5 = (float)NEON_ucvtf(uVar10);
      fVar6 = (float)NEON_ucvtf(uVar11);
      FUN_0059d000(0,0);
      do {
        lVar4 = param_3;
        param_3 = *(long *)(lVar4 + 0x120);
      } while (param_3 != 0);
      uVar2 = FUN_0058ebe0(0,0,(float)uVar2,(float)uVar1,0,0,fVar12 * fVar5 + fVar9,
                           fVar7 * fVar6 + fVar8,param_1,*(undefined8 *)(lVar4 + 0xa8),param_4,
                           param_5,0);
      uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar3;
}


