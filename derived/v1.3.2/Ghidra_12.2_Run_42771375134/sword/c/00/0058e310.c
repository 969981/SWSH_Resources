/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058e310; name: FUN_0058e310
 */


ulong FUN_0058e310(long param_1,long param_2,long param_3,undefined4 param_4,undefined8 param_5,
                  undefined4 param_6,undefined4 param_7,uint param_8)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((param_8 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_1 + 0x20) + 0x150))(*(long **)(param_1 + 0x20),0);
    }
    lVar5 = param_2;
    do {
      lVar6 = lVar5;
      lVar5 = *(long *)(lVar6 + 0x120);
    } while (lVar5 != 0);
    if (*(int *)(param_2 + 0x54) == *(int *)(param_3 + 0x54)) {
      bVar1 = *(int *)(param_2 + 0x58) == *(int *)(param_3 + 0x58);
    }
    else {
      bVar1 = false;
    }
    lVar5 = param_2;
    do {
      lVar7 = lVar5;
      lVar5 = *(long *)(lVar7 + 0x120);
    } while (lVar5 != 0);
    plVar3 = *(long **)(lVar7 + 0xa8);
    if ((*(uint *)(*(long *)(lVar6 + 0xa8) + 0x5c) & 0x20000) == 0) {
      bVar1 = true;
    }
    (**(code **)(*plVar3 + 0x88))(plVar3,bVar1);
    uVar10 = *(undefined4 *)(param_2 + 0x54);
    uVar15 = *(undefined4 *)(param_2 + 0x58);
    fVar16 = *(float *)(param_2 + 0x88);
    fVar11 = *(float *)(param_2 + 0x8c);
    fVar14 = *(float *)(param_2 + 0x90);
    fVar12 = *(float *)(param_2 + 0x94);
    uVar13 = *(undefined4 *)(param_3 + 0x54);
    uVar17 = *(undefined4 *)(param_3 + 0x58);
    uVar4 = FUN_0059d300(param_3,0,param_7,1,0,0);
    if (-1 < (int)uVar4) {
      fVar8 = (float)NEON_ucvtf(uVar10);
      fVar9 = (float)NEON_ucvtf(uVar15);
      uVar15 = NEON_ucvtf(uVar17);
      FUN_0059d000(0,0);
      uVar10 = NEON_ucvtf(uVar13);
      lVar5 = param_2;
      do {
        lVar6 = lVar5;
        lVar5 = *(long *)(lVar6 + 0x120);
      } while (lVar5 != 0);
      uVar2 = FUN_00578170(0,0,uVar10,uVar15,0,0,fVar16 * fVar8 + fVar14,fVar11 * fVar9 + fVar12,
                           param_1,*(undefined8 *)(lVar6 + 0xa8),param_4,param_5,param_6,0);
      do {
        lVar5 = param_2;
        param_2 = *(long *)(lVar5 + 0x120);
      } while (param_2 != 0);
      plVar3 = *(long **)(lVar5 + 0xa8);
      (**(code **)(*plVar3 + 0x88))(plVar3,0);
      uVar4 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
    }
  }
  return uVar4;
}


