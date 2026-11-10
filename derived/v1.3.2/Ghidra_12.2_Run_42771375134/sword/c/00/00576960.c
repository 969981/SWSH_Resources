/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00576960; name: FUN_00576960
 */


undefined8
FUN_00576960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,ulong param_10,long param_11,long param_12,int param_13,undefined4 param_14)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  undefined8 local_1a0 [32];
  
  uVar5 = (uint)param_10;
  uVar2 = uVar5 - 1;
  if (uVar2 < 0x10) {
    uVar3 = FUN_00542d00(*(undefined8 *)(param_9 + 0x20));
    if ((uVar3 & 1) == 0) {
      piVar6 = (int *)(param_9 + (long)param_13 * 4 + (long)(int)(uVar5 + 1) * 0x58 + 0x4828);
      uVar3 = (long)(int)(uVar5 + 1);
      do {
        iVar11 = *piVar6;
        uVar12 = uVar3 - 1;
        if ((long)uVar3 < 2) break;
        piVar6 = piVar6 + -0x16;
        uVar3 = uVar12;
      } while (iVar11 == 0);
    }
    else {
      piVar6 = (int *)(param_9 + (long)param_13 * 4 + (long)(int)uVar2 * 0x58 + 0x48d8);
      uVar3 = (long)(int)uVar2;
      do {
        iVar11 = *piVar6;
        uVar12 = uVar3 + 1;
        if (0xe < (long)uVar3) break;
        piVar6 = piVar6 + 0x16;
        uVar3 = uVar12;
      } while (iVar11 == 0);
    }
    if (iVar11 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      if (param_12 == 0) {
        if (0 < (int)uVar5) {
          param_10 = param_10 & 0xffffffff;
          puVar9 = local_1a0 + 1;
          do {
            puVar9[-1] = 0x3f8000003f800000;
            *puVar9 = 0x3f8000003f800000;
            puVar9 = puVar9 + 2;
            param_10 = param_10 - 1;
          } while (param_10 != 0);
        }
      }
      else if (0 < (int)uVar5) {
        uVar3 = param_10 & 3;
        if ((param_10 & 0xffffffff) - 1 < 3) {
          lVar8 = 0;
        }
        else {
          lVar8 = 0;
          puVar9 = (undefined8 *)(param_12 + 0x20);
          puVar10 = local_1a0 + 4;
          do {
            uVar4 = puVar9[-3];
            lVar8 = lVar8 + 4;
            puVar10[-4] = puVar9[-4];
            puVar10[-3] = uVar4;
            uVar4 = puVar9[-1];
            puVar10[-2] = puVar9[-2];
            puVar10[-1] = uVar4;
            uVar4 = puVar9[1];
            *puVar10 = *puVar9;
            puVar10[1] = uVar4;
            puVar1 = puVar9 + 2;
            uVar4 = puVar9[3];
            puVar9 = puVar9 + 8;
            puVar10[2] = *puVar1;
            puVar10[3] = uVar4;
            puVar10 = puVar10 + 8;
          } while ((param_10 & 0xffffffff) - uVar3 != lVar8);
        }
        if (uVar3 != 0) {
          lVar7 = -uVar3;
          puVar9 = local_1a0 + lVar8 * 2;
          puVar10 = (undefined8 *)(param_12 + lVar8 * 0x10);
          do {
            uVar4 = puVar10[1];
            *puVar9 = *puVar10;
            puVar9[1] = uVar4;
            lVar7 = lVar7 + 1;
            puVar9 = puVar9 + 2;
            puVar10 = puVar10 + 2;
          } while (lVar7 != 0);
        }
      }
      iVar11 = (int)uVar12;
      if ((int)uVar5 < iVar11) {
                    /* WARNING: Subroutine does not return */
        memset(local_1a0 + (long)(int)uVar5 * 2,0,(ulong)(~uVar5 + iVar11) * 0x10 + 0x10);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),local_1a0,
                 uVar12 & 0xffffffff);
      if (0 < (int)uVar5) {
        uVar3 = 0;
        do {
          if (0xf < uVar3) goto LAB_00576c4c;
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar3 * 4),
                     *(undefined8 *)(param_11 + uVar3 * 8));
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)uVar5);
      }
      if ((int)uVar5 < iVar11) {
        lVar8 = (long)(int)uVar5;
        do {
          if (0xf < (uint)lVar8) {
LAB_00576c4c:
                    /* WARNING: Subroutine does not return */
            __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                          "GetHandle_tex2D_aTexture");
          }
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + lVar8 * 4 + 0x40),0);
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar11);
      }
      uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_14);
      return uVar4;
    }
  }
  return 0xfffffffc;
}


