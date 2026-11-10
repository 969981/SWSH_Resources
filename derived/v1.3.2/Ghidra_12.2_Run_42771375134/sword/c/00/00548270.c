/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00548270; name: FUN_00548270
 */


long * FUN_00548270(long param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                   int param_6)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(long *)PTR_DAT_02713b58;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x98,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp",0x10ff,0)
  ;
  FUN_00545fc0(plVar4,lVar1);
  *(undefined4 *)(plVar4 + 0x10) = 0;
  puVar2 = PTR_DAT_02713b98;
  plVar4[0xe] = (long)(plVar4 + 7);
  plVar4[0xf] = -1;
  plVar4[0x11] = 0;
  plVar4[0x12] = (long)(plVar4 + 7);
  *(undefined4 *)((long)plVar4 + 0xc) = 3;
  *plVar4 = (long)(puVar2 + 0x10);
  iVar3 = FUN_00547850(plVar4,param_2,0);
  if ((iVar3 < 0) && (plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 8))(plVar4);
    plVar4 = (long *)0x0;
  }
  if (((*(int *)((long)plVar4 + 0x4c) != param_3) && (*(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: ",
                 0x1159);
    FUN_00517ae0("Specified uiWidth(%d) doesn\'t match the resouce width(%d)\n",param_3,
                 *(undefined4 *)((long)plVar4 + 0x4c));
  }
  if ((((int)plVar4[10] != param_4) && (*(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: ",
                 0x115c);
    FUN_00517ae0("Specified uiHeight(%d) doesn\'t match the resouce height(%d)\n",param_4,
                 (int)plVar4[10]);
  }
  if (((*(int *)((long)plVar4 + 0x44) != param_6) && (*(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: ",
                 0x1160);
    uVar5 = FUN_00546bd0(param_6,&DAT_0275e030);
    uVar6 = FUN_00546bd0(*(undefined4 *)((long)plVar4 + 0x44),&DAT_0275e130);
    FUN_00517ae0("Specified eFormat(%s) doesn\'t match the resouce format(%s)\n",uVar5,uVar6);
  }
  return plVar4;
}


