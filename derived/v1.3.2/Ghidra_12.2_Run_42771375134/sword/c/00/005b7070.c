/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b7070; name: FUN_005b7070
 */


int FUN_005b7070(long param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_027139b0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return -1;
  }
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0x228);
  }
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x228);
  }
  iVar2 = *(int *)PTR_DAT_027139b0;
  if (iVar2 < 1) {
    plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar3,0);
    *(long **)PTR_DAT_027139b8 = plVar3;
    *(undefined4 *)puVar1 = 1;
LAB_005b71a8:
    if (plVar3 == (long *)0x0) {
      iVar2 = 0;
      *(undefined4 *)puVar1 = 0;
      goto joined_r0x005b71f8;
    }
    uVar4 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar3 + 0x20))(plVar3);
    FUN_005b9b10(uVar4,plVar3);
    iVar2 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
    *(undefined4 *)puVar1 = 0;
    if ((param_5 & 1) == 0) goto LAB_005b70e4;
LAB_005b71fc:
    FUN_005714c0(plVar3,0x10,3,2);
    iVar2 = *(int *)puVar1;
    if (iVar2 < 1) goto LAB_005b721c;
LAB_005b70ec:
    plVar3 = *(long **)PTR_DAT_027139b8;
    *(int *)puVar1 = iVar2 + 1;
    if (1 < iVar2 + 1) goto LAB_005b726c;
  }
  else {
    plVar3 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar2 + 1;
    if (iVar2 + 1 < 2) goto LAB_005b71a8;
    *(int *)puVar1 = iVar2;
joined_r0x005b71f8:
    if ((param_5 & 1) != 0) goto LAB_005b71fc;
LAB_005b70e4:
    if (0 < iVar2) goto LAB_005b70ec;
LAB_005b721c:
    plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar3,0);
    *(long **)PTR_DAT_027139b8 = plVar3;
    *(undefined4 *)puVar1 = 1;
  }
  if (plVar3 == (long *)0x0) {
    iVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar3 + 0x20))(plVar3);
    FUN_005b9b10(uVar4,plVar3);
    iVar2 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
LAB_005b726c:
  *(int *)puVar1 = iVar2;
  FUN_0057aca0(*(undefined4 *)(param_1 + 0x1e8),plVar3);
  if (*(long *)(param_1 + 0x238) != 0) {
    FUN_005b4ec0(param_1);
  }
  FUN_005a7e70(param_1);
  FUN_005b50a0(param_1,param_2);
  iVar2 = FUN_005b4cf0(param_1);
  if (((iVar2 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: ",0x38e8);
    FUN_00517ae0(
                "CDepthOfField::ApplyDepthOfField(): ApplyDepthOfField_ApertureFilterAllLevels() failed.\n"
                );
  }
  iVar2 = FUN_005b65e0(param_1,param_2,param_3,param_4);
  if (((iVar2 < 0) && (*(int *)PTR_DAT_02713970 != 0)) && (*(int *)PTR_DAT_02713980 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUDepthOfField.cpp(%d) : PPFX ERROR: ",0x38f0);
    FUN_00517ae0("CDepthOfField::ApplyDepthOfField(): ApplyDepthOfField_Composite() failed.\n");
  }
  return iVar2;
}


