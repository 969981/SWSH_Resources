/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00576340; name: FUN_00576340
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00576340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,uint param_10,undefined8 param_11,long param_12,undefined8 *param_13,long param_14,
            long param_15,int param_16,undefined4 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (((param_10 < 0x14) && ((1 << (ulong)(param_10 & 0x1f) & 0x883b8U) != 0)) && (param_16 == 0)) {
    if (*(int *)(param_9 + (long)(int)param_10 * 0x58 + 0x1a6ac) != 0) {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
      FUN_00573990(param_9,param_10,param_11,param_10,0);
      uVar7 = (ulong)param_10;
      if (param_12 == 0) {
        puVar5 = &DAT_02760a24;
        do {
          *(undefined8 *)(puVar5 + -3) = 0x3f8000003f800000;
          *(undefined8 *)(puVar5 + -1) = 0x3f8000003f800000;
          puVar5 = puVar5 + 4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      else {
        if (uVar7 - 1 < 3) {
          lVar4 = 0;
        }
        else {
          lVar4 = 0;
          puVar6 = (undefined8 *)(param_12 + 0x20);
          puVar8 = (undefined8 *)&DAT_02760a48;
          do {
            uVar2 = puVar6[-3];
            lVar4 = lVar4 + 4;
            puVar8[-6] = puVar6[-4];
            puVar8[-5] = uVar2;
            uVar2 = puVar6[-1];
            puVar8[-4] = puVar6[-2];
            puVar8[-3] = uVar2;
            uVar2 = puVar6[1];
            puVar8[-2] = *puVar6;
            puVar8[-1] = uVar2;
            puVar1 = puVar6 + 2;
            uVar2 = puVar6[3];
            puVar6 = puVar6 + 8;
            *puVar8 = *puVar1;
            puVar8[1] = uVar2;
            puVar8 = puVar8 + 8;
          } while (uVar7 - (uVar7 & 3) != lVar4);
        }
        if ((param_10 & 3) != 0) {
          lVar3 = -(uVar7 & 3);
          puVar6 = (undefined8 *)(&DAT_02760a18 + lVar4 * 4);
          puVar8 = (undefined8 *)(param_12 + lVar4 * 0x10);
          do {
            uVar2 = puVar8[1];
            *puVar6 = *puVar8;
            puVar6[1] = uVar2;
            lVar3 = lVar3 + 1;
            puVar6 = puVar6 + 2;
            puVar8 = puVar8 + 2;
          } while (lVar3 != 0);
        }
      }
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,param_10)
      ;
      _DAT_02760c18 = *param_13;
      uVar2 = param_13[1];
      DAT_02760c20 = (float)uVar2;
      DAT_02760c24 = (float)((ulong)uVar2 >> 0x20);
      if (DAT_02760c24 < DAT_02760c20) {
        _DAT_02760c20 = CONCAT44(DAT_02760c20,DAT_02760c24);
        uVar2 = _DAT_02760c20;
      }
      _DAT_02760c20 = uVar2;
      (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,1);
      if (param_14 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_14);
      }
      if (param_15 != 0) {
        (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                  (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),param_15);
      }
      uVar2 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_17);
      return uVar2;
    }
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x30a9);
      FUN_00517ae0("CTextureUtil::DrawRectGPU_MadCocT2_Sn(): GetHandle_tech_MadCocT2_Sn(%d, %d) failed.\n"
                   ,param_10,0);
    }
  }
  return 0xfffffffc;
}


