/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00576ff0; name: FUN_00576ff0
 */


undefined8
FUN_00576ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,uint param_10,long param_11,long *param_12,long param_13,ulong param_14,
            undefined4 param_15,undefined8 param_16,float param_17,undefined8 param_18,
            undefined8 param_19)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_1a8 [2];
  undefined8 local_198;
  undefined4 auStack_190 [2];
  undefined8 local_188 [29];
  
  if (param_10 - 1 < 0x10) {
    lVar11 = (long)(int)param_10;
    lVar12 = (lVar11 << 0x20) + -0x100000000;
    uVar10 = 0xfffffffe;
    piVar4 = (int *)(param_9 + (-(param_14 >> 0x1f & 1) & 0xfffffffc00000000 |
                               (param_14 & 0xffffffff) << 2) + (long)(int)param_10 * 0x58 + 0x53d8);
    lVar6 = lVar11;
    do {
      iVar2 = *piVar4;
      lVar12 = lVar12 + 0x100000000;
      uVar10 = uVar10 + 1;
      if (0xe < lVar6) break;
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 0x16;
    } while (iVar2 == 0);
    if (iVar2 != 0) {
      iVar2 = param_10 + uVar10 + 1;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      if (param_13 == 0) {
        if (0 < (int)param_10) {
          uVar8 = (ulong)param_10;
          puVar7 = local_1a8 + 1;
          do {
            puVar7[-1] = 0x3f8000003f800000;
            *puVar7 = 0x3f8000003f800000;
            puVar7 = puVar7 + 2;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
      }
      else if (0 < (int)param_10) {
        uVar8 = (ulong)param_10;
        if (uVar8 - 1 < 3) {
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          puVar7 = (undefined8 *)(param_13 + 0x20);
          puVar9 = local_188;
          do {
            uVar3 = puVar7[-3];
            lVar6 = lVar6 + 4;
            puVar9[-4] = puVar7[-4];
            puVar9[-3] = uVar3;
            uVar3 = puVar7[-1];
            puVar9[-2] = puVar7[-2];
            puVar9[-1] = uVar3;
            uVar3 = puVar7[1];
            *puVar9 = *puVar7;
            puVar9[1] = uVar3;
            puVar1 = puVar7 + 2;
            uVar3 = puVar7[3];
            puVar7 = puVar7 + 8;
            puVar9[2] = *puVar1;
            puVar9[3] = uVar3;
            puVar9 = puVar9 + 8;
          } while (uVar8 - (uVar8 & 3) != lVar6);
        }
        if ((param_10 & 3) != 0) {
          lVar5 = -(uVar8 & 3);
          puVar7 = &local_198 + lVar6 * 2 + -2;
          puVar9 = (undefined8 *)(param_13 + lVar6 * 0x10);
          do {
            uVar3 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar3;
            lVar5 = lVar5 + 1;
            puVar7 = puVar7 + 2;
            puVar9 = puVar9 + 2;
          } while (lVar5 != 0);
        }
      }
      *(undefined4 *)(&local_198 + lVar11 * 2 + -2) = (undefined4)param_18;
      *(undefined4 *)((long)&local_198 + (lVar11 * 4 + -3) * 4) = param_18._4_4_;
      *(undefined4 *)(&local_198 + lVar11 * 2 + -1) = (undefined4)param_19;
      *(undefined4 *)((long)&local_198 + (lVar11 * 4 + -1) * 4) = param_19._4_4_;
      if ((int)param_10 < iVar2) {
                    /* WARNING: Subroutine does not return */
        memset(&local_198 + lVar11 * 2,0,(ulong)uVar10 * 0x10 + 0x10);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),local_1a8,
                 param_10 + uVar10 + 2);
      (**(code **)(**(long **)(param_9 + 0x30) + 0x90))
                (1.0 / param_17,*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 300));
      if (0 < (int)param_10) {
        uVar8 = 0;
        do {
          if (0xf < uVar8) goto LAB_0057737c;
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40 + uVar8 * 4),
                     *(undefined8 *)(param_11 + uVar8 * 8));
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < lVar11);
      }
      (**(code **)(*param_12 + 0x88))(param_12,0);
      (**(code **)(*param_12 + 0x90))(param_12,3);
      if (0xf < param_10) {
LAB_0057737c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("stage >= 0 && stage < 16","../src/GPU/GPUTextureUtil.h",0xbf3,
                      "GetHandle_tex2D_aTexture");
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + lVar11 * 4 + 0x40),param_12);
      if ((int)param_10 < iVar2) {
        do {
          param_10 = param_10 + 1;
          if (0xf < param_10) goto LAB_0057737c;
          lVar6 = lVar11 * 4;
          lVar11 = lVar11 + 1;
          (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                    (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + lVar6 + 0x44),0);
        } while (lVar11 < lVar12 >> 0x20);
      }
      uVar3 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_15);
      return uVar3;
    }
  }
  return 0xfffffffc;
}


