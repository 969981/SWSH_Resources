/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00576630; name: FUN_00576630
 */


undefined8
FUN_00576630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,ulong param_10,undefined8 param_11,long param_12,long param_13,long param_14,
            int param_15,undefined4 param_16)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  uVar6 = (uint)param_10;
  uVar3 = uVar6 - 1;
  if (4 < uVar3) {
    return 0xfffffffc;
  }
  uVar14 = param_10 & 0xffffffff;
  uVar4 = FUN_00542d00(*(undefined8 *)(param_9 + 0x20));
  if ((uVar4 & 1) == 0) {
    iVar2 = *(int *)(param_9 + (long)(int)uVar3 * 0x58 + (long)param_15 * 4 + 0x148);
    uVar4 = uVar14;
  }
  else {
    if (param_15 == 0x15) goto LAB_00576764;
    piVar7 = (int *)(param_9 + (long)param_15 * 4 + (long)(int)uVar3 * 0x58 + 0x2248);
    uVar9 = (long)(int)uVar3;
    do {
      iVar2 = *piVar7;
      uVar4 = uVar9 + 1;
      if (3 < (long)uVar9) break;
      piVar7 = piVar7 + 0x16;
      uVar9 = uVar4;
    } while (iVar2 == 0);
  }
  if (iVar2 != 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    FUN_00573990(param_9,uVar14,param_11,uVar4 & 0xffffffff,8);
    if (param_12 == 0) {
      if (0 < (int)uVar6) {
        puVar12 = &DAT_02760a24;
        do {
          *(undefined8 *)(puVar12 + -3) = 0x3f8000003f800000;
          *(undefined8 *)(puVar12 + -1) = 0x3f8000003f800000;
          puVar12 = puVar12 + 4;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else if (0 < (int)uVar6) {
      param_10 = param_10 & 3;
      if (uVar14 - 1 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar11 = (undefined8 *)(param_12 + 0x20);
        puVar13 = (undefined8 *)&DAT_02760a48;
        do {
          uVar5 = puVar11[-3];
          lVar10 = lVar10 + 4;
          puVar13[-6] = puVar11[-4];
          puVar13[-5] = uVar5;
          uVar5 = puVar11[-1];
          puVar13[-4] = puVar11[-2];
          puVar13[-3] = uVar5;
          uVar5 = puVar11[1];
          puVar13[-2] = *puVar11;
          puVar13[-1] = uVar5;
          puVar1 = puVar11 + 2;
          uVar5 = puVar11[3];
          puVar11 = puVar11 + 8;
          *puVar13 = *puVar1;
          puVar13[1] = uVar5;
          puVar13 = puVar13 + 8;
        } while (uVar14 - param_10 != lVar10);
      }
      if (param_10 != 0) {
        lVar8 = -param_10;
        puVar11 = (undefined8 *)(&DAT_02760a18 + lVar10 * 4);
        puVar13 = (undefined8 *)(param_12 + lVar10 * 0x10);
        do {
          uVar5 = puVar13[1];
          *puVar11 = *puVar13;
          puVar11[1] = uVar5;
          lVar8 = lVar8 + 1;
          puVar11 = puVar11 + 2;
          puVar13 = puVar13 + 2;
        } while (lVar8 != 0);
      }
    }
    if ((int)uVar6 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
      memset(&DAT_02760a18 + (long)(int)uVar6 * 4,0,(ulong)((int)uVar4 + ~uVar6) * 0x10 + 0x10);
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,
               uVar4 & 0xffffffff);
    if (param_13 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),param_13);
    }
    if (param_14 != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_14);
    }
    uVar5 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
    return uVar5;
  }
LAB_00576764:
  if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x3128);
    FUN_00517ae0("CTextureUtil::DrawRectGPU_MadT1_Sn(): GetHandle_tech_MadT1_Sn(%d, %d) failed.\n",
                 uVar14,param_15);
  }
  return 0xfffffffc;
}


