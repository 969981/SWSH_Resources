/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058d600; name: FUN_0058d600
 */


ulong FUN_0058d600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,long param_7,uint param_8,long *param_9,
                  undefined8 param_10,undefined4 param_11,ulong param_12,undefined8 param_13)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 local_178 [16];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined8 local_128 [17];
  
  if (*(long **)(param_6 + 0x20) == (long *)0x0) {
    uVar8 = 0xffffffff;
  }
  else {
    local_138 = param_1;
    uStack_134 = param_2;
    local_130 = param_3;
    uStack_12c = param_4;
    if ((param_12 & 1) != 0) {
      (**(code **)(**(long **)(param_6 + 0x20) + 0x138))();
      (**(code **)(**(long **)(param_6 + 0x20) + 0x140))(*(long **)(param_6 + 0x20),0xffffffff);
      (**(code **)(**(long **)(param_6 + 0x20) + 0x150))(*(long **)(param_6 + 0x20),0);
    }
    lVar6 = *param_9;
    uVar12 = *(undefined4 *)(lVar6 + 0x54);
    uVar14 = *(undefined4 *)(lVar6 + 0x58);
    fVar15 = *(float *)(lVar6 + 0x88);
    fVar17 = *(float *)(lVar6 + 0x8c);
    fVar16 = *(float *)(lVar6 + 0x90);
    fVar13 = *(float *)(lVar6 + 0x94);
    uVar11 = *(undefined4 *)(param_7 + 0x54);
    uVar18 = *(undefined4 *)(param_7 + 0x58);
    if (0 < (int)param_8) {
      uVar8 = 0;
      while( true ) {
        lVar5 = lVar6;
        do {
          lVar4 = lVar5;
          lVar5 = *(long *)(lVar4 + 0x120);
        } while (lVar5 != 0);
        plVar7 = *(long **)(lVar4 + 0xa8);
        uVar2 = (**(code **)(*plVar7 + 0x80))(plVar7);
        local_178[uVar8] = uVar2;
        if (*(int *)(lVar6 + 0x54) == *(int *)(param_7 + 0x54)) {
          bVar1 = *(int *)(lVar6 + 0x58) == *(int *)(param_7 + 0x58);
        }
        else {
          bVar1 = false;
        }
        (**(code **)(*plVar7 + 0x88))(plVar7,bVar1);
        (**(code **)(*plVar7 + 0x90))(plVar7,1);
        uVar8 = uVar8 + 1;
        if (uVar8 == param_8) break;
        lVar6 = param_9[uVar8];
      }
    }
    uVar8 = FUN_0059d300(param_7,0,0,1,0,0);
    if (-1 < (int)uVar8) {
      fVar9 = (float)NEON_ucvtf(uVar12);
      fVar10 = (float)NEON_ucvtf(uVar14);
      uVar11 = NEON_ucvtf(uVar11);
      uVar12 = NEON_ucvtf(uVar18);
      FUN_0059d000(0,0);
      if (0 < (int)param_8) {
        uVar8 = 0;
        do {
          lVar6 = param_9[uVar8];
          do {
            lVar5 = lVar6;
            lVar6 = *(long *)(lVar5 + 0x120);
          } while (lVar6 != 0);
          local_128[uVar8] = *(undefined8 *)(lVar5 + 0xa8);
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_8);
      }
      uVar3 = FUN_00577e30(0,0,uVar11,uVar12,0,0,fVar15 * fVar9 + fVar16,fVar17 * fVar10 + fVar13,
                           param_6,param_8,local_128,&local_138,param_10,param_11,0,param_13,param_5
                          );
      if (0 < (int)param_8) {
        uVar8 = 0;
        do {
          lVar6 = param_9[uVar8];
          do {
            lVar5 = lVar6;
            lVar6 = *(long *)(lVar5 + 0x120);
          } while (lVar6 != 0);
          plVar7 = *(long **)(lVar5 + 0xa8);
          (**(code **)(*plVar7 + 0x78))(plVar7,local_178[uVar8]);
          uVar8 = uVar8 + 1;
        } while (uVar8 != param_8);
      }
      uVar8 = (ulong)(uVar3 & (int)uVar3 >> 0x1f);
    }
  }
  return uVar8;
}


