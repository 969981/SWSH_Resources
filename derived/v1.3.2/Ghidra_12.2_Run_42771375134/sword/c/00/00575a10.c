/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00575a10; name: FUN_00575a10
 */


undefined8
FUN_00575a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,ulong param_10,undefined8 param_11,long param_12,long param_13,int param_14,
            undefined4 param_15)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 local_120 [32];
  
  uVar5 = (uint)param_10;
  uVar2 = uVar5 - 1;
  if (uVar2 < 0x1c) {
    uVar13 = param_10 & 0xffffffff;
    uVar3 = FUN_00542d00(*(undefined8 *)(param_9 + 0x20));
    if ((uVar3 & 1) == 0) {
      uVar3 = (ulong)(int)(uVar5 + 1);
      if (param_14 == 0x15) {
        piVar7 = (int *)(param_9 + uVar3 * 0x58 + 0xec);
        do {
          iVar6 = *piVar7;
          uVar14 = uVar3 - 1;
          if ((long)uVar3 < 2) break;
          piVar7 = piVar7 + -0x16;
          uVar3 = uVar14;
        } while (iVar6 == 0);
      }
      else {
        lVar9 = param_9 + uVar3 * 0x58 + (long)param_14 * 4;
        do {
          iVar6 = *(int *)(lVar9 + 0x98);
          if (iVar6 == 0 && *(int *)(lVar9 + 0xb98) != 0) {
            if (0 < (int)uVar5) {
              if (uVar5 == 1) {
                lVar9 = 0;
              }
              else {
                lVar8 = 0;
                puVar11 = (undefined4 *)(param_12 + 0x1c);
                do {
                  lVar9 = lVar8 + 2;
                  local_120[lVar8] = puVar11[-4];
                  local_120[lVar8 + 1] = *puVar11;
                  lVar8 = lVar9;
                  puVar11 = puVar11 + 8;
                } while (uVar13 - (param_10 & 1) != lVar9);
              }
              if ((param_10 & 1) != 0) {
                local_120[lVar9] = *(undefined4 *)(param_12 + lVar9 * 0x10 + 0xc);
              }
            }
            uVar4 = FUN_00575e30(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 param_9,uVar13,param_11,local_120,param_13,param_14,param_15);
            return uVar4;
          }
          uVar14 = uVar3 - 1;
        } while ((1 < (long)uVar3) && (lVar9 = lVar9 + -0x58, uVar3 = uVar14, iVar6 == 0));
      }
    }
    else {
      piVar7 = (int *)(param_9 + (long)param_14 * 4 + (long)(int)uVar2 * 0x58 + 0x148);
      uVar3 = (long)(int)uVar2;
      do {
        iVar6 = *piVar7;
        uVar14 = uVar3 + 1;
        if (0x1a < (long)uVar3) break;
        piVar7 = piVar7 + 0x16;
        uVar3 = uVar14;
      } while (iVar6 == 0);
    }
    if (iVar6 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      FUN_00573990(param_9,uVar13,param_11,uVar14 & 0xffffffff,8);
      if (param_12 == 0) {
        if (0 < (int)uVar5) {
          puVar11 = &DAT_02760a24;
          do {
            *(undefined8 *)(puVar11 + -3) = 0x3f8000003f800000;
            *(undefined8 *)(puVar11 + -1) = 0x3f8000003f800000;
            puVar11 = puVar11 + 4;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      else if (0 < (int)uVar5) {
        param_10 = param_10 & 3;
        if (uVar13 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          puVar10 = (undefined8 *)(param_12 + 0x20);
          puVar12 = (undefined8 *)&DAT_02760a48;
          do {
            uVar4 = puVar10[-3];
            lVar9 = lVar9 + 4;
            puVar12[-6] = puVar10[-4];
            puVar12[-5] = uVar4;
            uVar4 = puVar10[-1];
            puVar12[-4] = puVar10[-2];
            puVar12[-3] = uVar4;
            uVar4 = puVar10[1];
            puVar12[-2] = *puVar10;
            puVar12[-1] = uVar4;
            puVar1 = puVar10 + 2;
            uVar4 = puVar10[3];
            puVar10 = puVar10 + 8;
            *puVar12 = *puVar1;
            puVar12[1] = uVar4;
            puVar12 = puVar12 + 8;
          } while (uVar13 - param_10 != lVar9);
        }
        if (param_10 != 0) {
          lVar8 = -param_10;
          puVar10 = (undefined8 *)(&DAT_02760a18 + lVar9 * 4);
          puVar12 = (undefined8 *)(param_12 + lVar9 * 0x10);
          do {
            uVar4 = puVar12[1];
            *puVar10 = *puVar12;
            puVar10[1] = uVar4;
            lVar8 = lVar8 + 1;
            puVar10 = puVar10 + 2;
            puVar12 = puVar12 + 2;
          } while (lVar8 != 0);
        }
      }
      if ((int)uVar5 < (int)uVar14) {
                    /* WARNING: Subroutine does not return */
        memset(&DAT_02760a18 + (long)(int)uVar5 * 4,0,(ulong)(~uVar5 + (int)uVar14) * 0x10 + 0x10);
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,
                 uVar14 & 0xffffffff);
      if (param_13 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_13);
      }
      uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_15);
      return uVar4;
    }
    if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x303b);
      FUN_00517ae0("CTextureUtil::DrawRectGPU_MadT1_Sn(): GetHandle_tech_MadT1_Sn(%d, %d) failed.\n"
                   ,uVar13,param_14);
    }
  }
  return 0xfffffffc;
}


