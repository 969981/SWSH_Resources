/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00575610; name: FUN_00575610
 */


undefined8
FUN_00575610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,uint param_10,undefined8 param_11,long param_12,long param_13,long *param_14,
            ulong param_15,undefined4 param_16)

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
  undefined4 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  param_15 = param_15 & 0xffffffff;
  if (param_14 == (long *)0x0) {
    uVar4 = FUN_00575a10(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11,param_12,param_13,param_15,param_16);
    return uVar4;
  }
  uVar3 = param_10 - 1;
  if (uVar3 < 4) {
    lVar5 = (long)(int)uVar3;
    piVar7 = (int *)(param_9 + (-(param_15 >> 0x1f) & 0xfffffffc00000000 | param_15 << 2) +
                               (long)(int)uVar3 * 0x58 + 0x74d8);
    uVar3 = param_10 - 2;
    do {
      uVar12 = uVar3;
      iVar2 = *piVar7;
      uVar3 = uVar12 + 1;
      if (2 < lVar5) break;
      lVar5 = lVar5 + 1;
      piVar7 = piVar7 + 0x16;
    } while (iVar2 == 0);
    if (iVar2 != 0) {
      iVar2 = uVar12 + 2;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      FUN_00573990(param_9,param_10,param_11,iVar2,8);
      if (param_12 == 0) {
        if (0 < (int)param_10) {
          uVar9 = (ulong)param_10;
          puVar10 = &DAT_02760a24;
          do {
            *(undefined8 *)(puVar10 + -3) = 0x3f8000003f800000;
            *(undefined8 *)(puVar10 + -1) = 0x3f8000003f800000;
            puVar10 = puVar10 + 4;
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
          puVar11 = (undefined8 *)&DAT_02760a48;
          do {
            uVar4 = puVar8[-3];
            lVar5 = lVar5 + 4;
            puVar11[-6] = puVar8[-4];
            puVar11[-5] = uVar4;
            uVar4 = puVar8[-1];
            puVar11[-4] = puVar8[-2];
            puVar11[-3] = uVar4;
            uVar4 = puVar8[1];
            puVar11[-2] = *puVar8;
            puVar11[-1] = uVar4;
            puVar1 = puVar8 + 2;
            uVar4 = puVar8[3];
            puVar8 = puVar8 + 8;
            *puVar11 = *puVar1;
            puVar11[1] = uVar4;
            puVar11 = puVar11 + 8;
          } while (uVar9 - (uVar9 & 3) != lVar5);
        }
        if ((param_10 & 3) != 0) {
          lVar6 = -(uVar9 & 3);
          puVar8 = (undefined8 *)(&DAT_02760a18 + lVar5 * 4);
          puVar11 = (undefined8 *)(param_12 + lVar5 * 0x10);
          do {
            uVar4 = puVar11[1];
            *puVar8 = *puVar11;
            puVar8[1] = uVar4;
            lVar6 = lVar6 + 1;
            puVar8 = puVar8 + 2;
            puVar11 = puVar11 + 2;
          } while (lVar6 != 0);
        }
      }
      if ((int)param_10 <= (int)uVar3) {
        if ((int)uVar3 <= (int)param_10) {
          uVar3 = param_10;
        }
                    /* WARNING: Subroutine does not return */
        memset(&DAT_02760a18 + (long)(int)param_10 * 4,0,(ulong)(uVar3 - param_10) * 0x10 + 0x10);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,iVar2);
      if (param_13 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_13);
      }
      (**(code **)(*param_14 + 0x78))(param_14,4);
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x80),param_14);
      fVar14 = (float)NEON_ucvtf((int)param_14[10]);
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)((long)param_14 + 0x4c));
      fVar15 = (float)NEON_ucvtf(*(undefined4 *)((long)param_14 + 0x84));
      DAT_02760c20 = (fVar15 + -1.0) / fVar15;
      DAT_02760c18 = (fVar13 + -1.0) / fVar13;
      DAT_02760c1c = (fVar14 + -1.0) / fVar14;
      DAT_02760c24 = 0;
      DAT_02760c30._4_4_ = 0x3f000000;
      DAT_02760c28._0_4_ = 0.5 / fVar13;
      DAT_02760c28._4_4_ = 0.5 / fVar14;
      DAT_02760c30._0_4_ = 0.5 / fVar15;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,2);
      uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_16);
      return uVar4;
    }
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x2fad);
      FUN_00517ae0("CTextureUtil::DrawRectGPU_MadT1_Sn(): GetHandle_tech_MadT1_Sn(%d, %d) failed.\n"
                   ,param_10,param_15);
    }
  }
  return 0xfffffffc;
}


