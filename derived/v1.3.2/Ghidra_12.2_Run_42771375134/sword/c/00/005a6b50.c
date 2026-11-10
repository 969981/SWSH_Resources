/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a6b50; name: FUN_005a6b50
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_005a6b50(undefined4 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                long *param_5,undefined4 param_6,float *param_7,uint param_8,int param_9)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 auStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  long *local_58;
  
  iVar3 = FUN_005466d0(param_5,&local_58);
  if (iVar3 < 0) {
    if (*(int *)PTR_DAT_02713970 == 0 || *(int *)PTR_DAT_02713980 == 0) {
      return iVar3;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPURenderTextureArray.cpp(%d) : PPFX ERROR: ",
                 0xa5b);
    uVar6 = FUN_00546ea0(iVar3);
    FUN_00517ae0("CRenderTextureArray::CopyToSurface(): pSrcTexture->GetDevice() failed (0x%x: %s).\n"
                 ,iVar3,uVar6);
    return iVar3;
  }
  (**(code **)(*local_58 + 8))();
  if (param_4 == (long *)0x0) {
    (**(code **)(*local_58 + 0x88))(local_58,&local_c0);
    local_a0 = local_b8;
    local_9c = local_b4;
  }
  else {
    (**(code **)(*param_4 + 0x40))(param_4,auStack_a8);
  }
  puVar1 = PTR_DAT_027139b0;
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar5,0);
    *(long **)PTR_DAT_027139b8 = plVar5;
    *(undefined4 *)puVar1 = 1;
  }
  else {
    plVar5 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (1 < iVar3 + 1) goto LAB_005a6d18;
  }
  if (plVar5 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    FUN_005b9b10(uVar6,plVar5);
    iVar3 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005a6d18:
  *(int *)puVar1 = iVar3;
  FUN_005714c0(plVar5,1,param_9,0xffffffff);
  (**(code **)(*local_58 + 0x130))(local_58,param_8 & 1);
  if (param_4 != (long *)0x0) {
    (**(code **)(*local_58 + 0x38))(local_58,0,param_4,0);
    FUN_0059d000(0,0);
  }
  fVar11 = *param_7;
  fVar13 = param_7[1];
  fVar10 = param_7[2];
  fVar9 = param_7[3];
  fVar7 = (float)NEON_ucvtf(local_a0);
  local_d0 = 0;
  uStack_c8 = 0x3f80000000000000;
  fVar8 = (float)NEON_ucvtf(local_9c);
  fVar12 = (float)NEON_ucvtf(*(undefined4 *)((long)param_5 + 0x4c));
  if (fVar11 * fVar7 == fVar12) {
    fVar12 = (float)NEON_ucvtf((int)param_5[10]);
    bVar2 = fVar13 * fVar8 == fVar12;
  }
  else {
    bVar2 = false;
  }
  local_c0 = param_1;
  uStack_bc = param_1;
  local_b8 = param_1;
  local_b4 = param_1;
  uVar4 = (**(code **)(*param_5 + 0x98))(param_5);
  if ((param_9 == 0) || (bVar2)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  (**(code **)(*param_5 + 0x88))(param_5,uVar6);
  iVar3 = FUN_00575a10(fVar10 * fVar7,fVar9 * fVar8,fVar11 * fVar7,fVar13 * fVar8,0,0,param_2,
                       param_3,plVar5,1,&local_d0,&local_c0,param_5,param_6,0x10000);
  (**(code **)(*param_5 + 0x88))(param_5,uVar4);
  return iVar3;
}


