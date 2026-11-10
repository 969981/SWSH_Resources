/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058e590; name: FUN_0058e590
 */


ulong FUN_0058e590(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar7 = 0xffffffff;
  }
  else {
    if ((param_6 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
    }
    uVar5 = *(uint *)(param_3 + 0x54);
    uVar2 = *(uint *)(param_3 + 0x58);
    uVar1 = *(uint *)(param_2 + 0x54);
    uVar3 = *(uint *)(param_2 + 0x58);
    fVar10 = *(float *)(param_3 + 0x88);
    fVar11 = *(float *)(param_3 + 0x8c);
    fVar13 = *(float *)(param_3 + 0x90);
    fVar12 = *(float *)(param_3 + 0x94);
    lVar9 = param_3;
    do {
      lVar8 = lVar9;
      lVar9 = *(long *)(lVar8 + 0x120);
    } while (lVar9 != 0);
    uVar4 = (**(code **)(**(long **)(lVar8 + 0xa8) + 0x80))();
    lVar9 = param_3;
    do {
      lVar8 = lVar9;
      lVar9 = *(long *)(lVar8 + 0x120);
    } while (lVar9 != 0);
    plVar6 = *(long **)(lVar8 + 0xa8);
    (**(code **)(*plVar6 + 0x88))(plVar6,uVar5 == uVar1 && uVar2 == uVar3);
    uVar7 = FUN_0059d300(param_2,0,0,1,0,0);
    if (-1 < (int)uVar7) {
      FUN_0059d000(0,0);
      lVar9 = param_3;
      do {
        lVar8 = lVar9;
        lVar9 = *(long *)(lVar8 + 0x120);
      } while (lVar9 != 0);
      uVar5 = FUN_0058e7c0(0,0,(float)uVar1,(float)uVar3,0,0,fVar10 * (float)uVar5 + fVar13,
                           fVar11 * (float)uVar2 + fVar12,param_1,*(undefined8 *)(lVar8 + 0xa8),
                           param_4,param_5,0);
      do {
        lVar9 = param_3;
        param_3 = *(long *)(lVar9 + 0x120);
      } while (param_3 != 0);
      plVar6 = *(long **)(lVar9 + 0xa8);
      (**(code **)(*plVar6 + 0x78))(plVar6,uVar4);
      uVar7 = (ulong)(uVar5 & (int)uVar5 >> 0x1f);
    }
  }
  return uVar7;
}


