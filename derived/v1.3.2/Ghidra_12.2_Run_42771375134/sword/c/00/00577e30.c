/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00577e30; name: FUN_00577e30
 */


undefined8
FUN_00577e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,long param_9,
            uint param_10,long param_11,undefined8 *param_12,float *param_13,ulong param_14,
            undefined4 param_15,undefined8 param_16,float param_17)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  float *pfVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  undefined8 local_1a8;
  undefined8 local_1a0;
  
  uVar2 = param_10 - 1;
  if (uVar2 < 0x10) {
    if ((param_17 == 1.0) || (param_17 <= 0.0)) {
      uVar2 = param_10 - 1;
      if (uVar2 < 0x10) {
        if (param_10 == 1) {
          local_1a8 = *param_12;
          local_1a0 = param_12[1];
          if (param_13 != (float *)0x0) {
            fVar13 = *param_13;
            local_1a8._4_4_ = (float)((ulong)local_1a8 >> 0x20);
            local_1a8 = CONCAT44(fVar13 * local_1a8._4_4_,fVar13 * (float)local_1a8);
            local_1a0._4_4_ = (float)((ulong)local_1a0 >> 0x20);
            local_1a0 = CONCAT44(fVar13 * local_1a0._4_4_,fVar13 * (float)local_1a0);
          }
          uVar3 = FUN_00576960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,1,param_11,&local_1a8,param_14 & 0xffffffff,param_15);
          return uVar3;
        }
        lVar4 = (long)(int)uVar2;
        lVar11 = (lVar4 << 0x20) + -0x100000000;
        piVar6 = (int *)(param_9 + (-(param_14 >> 0x1f & 1) & 0xfffffffc00000000 |
                                   (param_14 & 0xffffffff) << 2) + (long)(int)uVar2 * 0x58 + 0x69d8)
        ;
        uVar2 = param_10 - 2;
        do {
          uVar9 = uVar2;
          iVar1 = *piVar6;
          lVar11 = lVar11 + 0x100000000;
          uVar2 = uVar9 + 1;
          if (0xe < lVar4) break;
          lVar4 = lVar4 + 1;
          piVar6 = piVar6 + 0x16;
        } while (iVar1 == 0);
        if (iVar1 != 0) {
          (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
          if (0 < (int)param_10) {
            uVar12 = 0;
            do {
              if (0xf < uVar12) goto LAB_00577e04;
              (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                        (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar12 * 4),
                         *(undefined8 *)(param_11 + uVar12 * 8));
              uVar12 = uVar12 + 1;
            } while ((long)uVar12 < (long)(int)param_10);
          }
          if ((int)param_10 <= (int)uVar2) {
            lVar4 = (long)(int)param_10 + 0x10;
            uVar10 = param_10;
            do {
              if (0xf < uVar10) {
LAB_00577e04:
                    /* WARNING: Subroutine does not return */
                __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                              "GetHandle_tex2D_aTexture");
              }
              (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                        (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + lVar4 * 4),0);
              lVar5 = lVar4 + -0x10;
              lVar4 = lVar4 + 1;
              uVar10 = uVar10 + 1;
            } while (lVar5 < lVar11 >> 0x20);
          }
          if (param_13 == (float *)0x0) {
            if (0 < (int)param_10) {
              uVar12 = (ulong)param_10;
              puVar8 = &local_1a0;
              do {
                puVar8[-1] = 0x3f8000003f800000;
                *puVar8 = 0x3f8000003f800000;
                puVar8 = puVar8 + 2;
                uVar12 = uVar12 - 1;
              } while (uVar12 != 0);
            }
          }
          else if (0 < (int)param_10) {
            uVar12 = (ulong)param_10;
            pfVar7 = (float *)&local_1a0;
            do {
              fVar13 = *param_13;
              pfVar7[-2] = fVar13;
              pfVar7[-1] = fVar13;
              *pfVar7 = fVar13;
              pfVar7[1] = fVar13;
              uVar12 = uVar12 - 1;
              pfVar7 = pfVar7 + 4;
              param_13 = param_13 + 1;
            } while (uVar12 != 0);
          }
          if ((int)uVar2 < (int)param_10) {
            (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                      (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&local_1a8,
                       uVar9 + 2);
            (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                      (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),param_12,1);
            uVar3 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,param_15);
            return uVar3;
          }
          if ((int)uVar2 <= (int)param_10) {
            uVar2 = param_10;
          }
                    /* WARNING: Subroutine does not return */
          memset(&local_1a8 + (long)(int)param_10 * 2,0,(ulong)(uVar2 - param_10) * 0x10 + 0x10);
        }
      }
      return 0xfffffffc;
    }
    lVar4 = (long)(int)uVar2;
    lVar11 = (lVar4 << 0x20) + -0x100000000;
    piVar6 = (int *)(param_9 + (-(param_14 >> 0x1f & 1) & 0xfffffffc00000000 |
                               (param_14 & 0xffffffff) << 2) + (long)(int)uVar2 * 0x58 + 0x6f58);
    uVar2 = param_10 - 2;
    do {
      uVar9 = uVar2;
      iVar1 = *piVar6;
      lVar11 = lVar11 + 0x100000000;
      uVar2 = uVar9 + 1;
      if (0xe < lVar4) break;
      lVar4 = lVar4 + 1;
      piVar6 = piVar6 + 0x16;
    } while (iVar1 == 0);
    if (iVar1 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      if (0 < (int)param_10) {
        uVar12 = 0;
        do {
          if (0xf < uVar12) goto LAB_00578144;
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar12 * 4),
                     *(undefined8 *)(param_11 + uVar12 * 8));
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)param_10);
      }
      if ((int)param_10 <= (int)uVar2) {
        lVar4 = (long)(int)param_10 + 0x10;
        uVar10 = param_10;
        do {
          if (0xf < uVar10) {
LAB_00578144:
                    /* WARNING: Subroutine does not return */
            __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                          "GetHandle_tex2D_aTexture");
          }
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + lVar4 * 4),0);
          lVar5 = lVar4 + -0x10;
          lVar4 = lVar4 + 1;
          uVar10 = uVar10 + 1;
        } while (lVar5 < lVar11 >> 0x20);
      }
      if (param_13 == (float *)0x0) {
        if (0 < (int)param_10) {
          uVar12 = (ulong)param_10;
          puVar8 = &local_1a0;
          do {
            puVar8[-1] = 0x3f8000003f800000;
            *puVar8 = 0x3f8000003f800000;
            puVar8 = puVar8 + 2;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else if (0 < (int)param_10) {
        uVar12 = (ulong)param_10;
        pfVar7 = (float *)&local_1a0;
        do {
          fVar13 = *param_13;
          pfVar7[-2] = fVar13;
          pfVar7[-1] = fVar13;
          *pfVar7 = fVar13;
          pfVar7[1] = fVar13;
          uVar12 = uVar12 - 1;
          pfVar7 = pfVar7 + 4;
          param_13 = param_13 + 1;
        } while (uVar12 != 0);
      }
      if ((int)uVar2 < (int)param_10) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&local_1a8,uVar9 + 2)
        ;
        (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),param_12,1);
        (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
                  (1.0 / param_17,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 300));
        uVar3 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8 & 0xffffffff,param_9,param_15);
        return uVar3;
      }
      if ((int)uVar2 <= (int)param_10) {
        uVar2 = param_10;
      }
                    /* WARNING: Subroutine does not return */
      memset(&local_1a8 + (long)(int)param_10 * 2,0,(ulong)(uVar2 - param_10) * 0x10 + 0x10);
    }
  }
  return 0xfffffffc;
}


