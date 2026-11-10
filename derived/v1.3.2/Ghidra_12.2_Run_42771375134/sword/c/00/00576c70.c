/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00576c70; name: FUN_00576c70
 */


undefined8
FUN_00576c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,long param_9
            ,uint param_10,long param_11,long param_12,ulong param_13,undefined4 param_14,
            undefined8 param_15,undefined8 param_16,float param_17)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  undefined8 local_1a8 [33];
  
  if ((param_17 == 1.0) || (param_17 <= 0.0)) {
    uVar4 = FUN_00576960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_9,param_10,
                         param_11,param_12,param_13,param_14);
    return uVar4;
  }
  uVar3 = param_10 - 1;
  if (uVar3 < 0x10) {
    lVar5 = (long)(int)uVar3;
    lVar11 = (lVar5 << 0x20) + -0x100000000;
    piVar7 = (int *)(param_9 + (-(param_13 >> 0x1f & 1) & 0xfffffffc00000000 |
                               (param_13 & 0xffffffff) << 2) + (long)(int)uVar3 * 0x58 + 0x4e58);
    uVar3 = param_10 - 2;
    do {
      uVar12 = uVar3;
      iVar2 = *piVar7;
      lVar11 = lVar11 + 0x100000000;
      uVar3 = uVar12 + 1;
      if (0xe < lVar5) break;
      lVar5 = lVar5 + 1;
      piVar7 = piVar7 + 0x16;
    } while (iVar2 == 0);
    if (iVar2 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      if (param_12 == 0) {
        if (0 < (int)param_10) {
          uVar9 = (ulong)param_10;
          puVar8 = local_1a8 + 1;
          do {
            puVar8[-1] = 0x3f8000003f800000;
            *puVar8 = 0x3f8000003f800000;
            puVar8 = puVar8 + 2;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
      }
      else if (0 < (int)param_10) {
        uVar9 = (ulong)param_10;
        if (uVar9 - 1 < 3) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          puVar8 = (undefined8 *)(param_12 + 0x20);
          puVar10 = local_1a8 + 4;
          do {
            uVar4 = puVar8[-3];
            lVar5 = lVar5 + 4;
            puVar10[-4] = puVar8[-4];
            puVar10[-3] = uVar4;
            uVar4 = puVar8[-1];
            puVar10[-2] = puVar8[-2];
            puVar10[-1] = uVar4;
            uVar4 = puVar8[1];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            puVar1 = puVar8 + 2;
            uVar4 = puVar8[3];
            puVar8 = puVar8 + 8;
            puVar10[2] = *puVar1;
            puVar10[3] = uVar4;
            puVar10 = puVar10 + 8;
          } while (uVar9 - (uVar9 & 3) != lVar5);
        }
        if ((param_10 & 3) != 0) {
          lVar6 = -(uVar9 & 3);
          puVar8 = local_1a8 + lVar5 * 2;
          puVar10 = (undefined8 *)(param_12 + lVar5 * 0x10);
          do {
            uVar4 = puVar10[1];
            *puVar8 = *puVar10;
            puVar8[1] = uVar4;
            lVar6 = lVar6 + 1;
            puVar8 = puVar8 + 2;
            puVar10 = puVar10 + 2;
          } while (lVar6 != 0);
        }
      }
      if ((int)param_10 <= (int)uVar3) {
        if ((int)uVar3 <= (int)param_10) {
          uVar3 = param_10;
        }
                    /* WARNING: Subroutine does not return */
        memset(local_1a8 + (long)(int)param_10 * 2,0,(ulong)(uVar3 - param_10) * 0x10 + 0x10);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),local_1a8,uVar12 + 2);
      (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
                (1.0 / param_17,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 300));
      if (0 < (int)param_10) {
        uVar9 = 0;
        do {
          if (0xf < uVar9) goto LAB_00576fc8;
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar9 * 4),
                     *(undefined8 *)(param_11 + uVar9 * 8));
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)param_10);
      }
      if ((int)param_10 <= (int)uVar3) {
        lVar5 = (long)(int)param_10 + 0x10;
        do {
          if (0xf < param_10) {
LAB_00576fc8:
                    /* WARNING: Subroutine does not return */
            __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                          "GetHandle_tex2D_aTexture");
          }
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + lVar5 * 4),0);
          lVar6 = lVar5 + -0x10;
          lVar5 = lVar5 + 1;
          param_10 = param_10 + 1;
        } while (lVar6 < lVar11 >> 0x20);
      }
      uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_14);
      return uVar4;
    }
  }
  return 0xfffffffc;
}


