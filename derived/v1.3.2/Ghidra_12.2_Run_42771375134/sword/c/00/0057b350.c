/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057b350; name: FUN_0057b350
 */


undefined4
FUN_0057b350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,ulong param_10,ulong param_11,int param_12,undefined8 param_13,undefined4 *param_14,
            undefined4 *param_15,long *param_16,int param_17,int param_18,undefined4 param_19)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  int *piVar7;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  
  lVar6 = (long)(param_12 + 1);
  lVar1 = param_9 + lVar6 * 0x58 + (long)param_17 * 0x898 + (long)param_18 * 4;
  if ((param_10 & 1) == 0) {
    piVar7 = (int *)(lVar1 + 0xf25c);
    do {
      iVar2 = *piVar7;
      bVar3 = iVar2 != 0;
      if (lVar6 < 2) break;
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + -0x16;
    } while (iVar2 == 0);
  }
  else {
    piVar7 = (int *)(lVar1 + 0xe12c);
    do {
      iVar2 = *piVar7;
      bVar3 = iVar2 != 0;
      if (lVar6 < 2) break;
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + -0x16;
    } while (iVar2 == 0);
  }
  if (bVar3) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    local_a0 = *param_14;
    local_9c = param_14[1];
    local_98 = 0;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe4),&local_a0,1);
    local_b0 = *param_15;
    local_ac = param_15[1];
    local_a8 = 0;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xe8),&local_b0);
    FUN_00573990(param_9,param_12,param_13,0,8);
    if (param_16 == (long *)0x0) {
      uVar5 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_19);
    }
    else {
      (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
                (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_16);
      uVar4 = (**(code **)(*param_16 + 0x80))(param_16);
      uVar5 = 4;
      if ((param_11 & 1) != 0) {
        uVar5 = 5;
      }
      (**(code **)(*param_16 + 0x78))(param_16,uVar5);
      uVar5 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           param_19);
      (**(code **)(*param_16 + 0x78))(param_16,uVar4);
    }
  }
  else if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
    uVar5 = 0xfffffffc;
  }
  else {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUTextureUtil.cpp(%d) : PPFX ERROR: ",0x4311);
    FUN_00517ae0("CTextureUtil::DrawRectGPU_DepthOfFieldLayerMask(): GetHandle_tech_DepthOfField_BackgroundLayerMaskT1_Sn(%d, %d) failed.\n"
                 ,param_12,param_18);
    uVar5 = 0xfffffffc;
  }
  return uVar5;
}


