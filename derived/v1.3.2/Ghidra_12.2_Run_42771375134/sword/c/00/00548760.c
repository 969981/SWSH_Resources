/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00548760; name: FUN_00548760
 */


long * FUN_00548760(long param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                   undefined8 param_6,uint param_7)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  
  if (param_7 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = param_7 == 99 ||
            (param_7 == 0x4e ||
            (param_7 == 0x4b || (param_7 == 0x48 || (param_7 == 0x5b || (param_7 | 0x40) == 0x5d))))
    ;
  }
  lVar5 = *(long *)PTR_DAT_02713b58;
  if (param_1 != 0) {
    lVar5 = param_1;
  }
  plVar2 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x90,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp",0x1362,0)
  ;
  FUN_00545fc0(plVar2,lVar5);
  plVar2[0xe] = (long)(plVar2 + 7);
  plVar2[0xf] = -1;
  puVar1 = PTR_DAT_02713ba0;
  plVar2[0x10] = 0;
  plVar2[0x11] = (long)(plVar2 + 7);
  *(undefined4 *)((long)plVar2 + 0xc) = 5;
  *plVar2 = (long)(puVar1 + 0x10);
  FUN_00548460(plVar2,param_2,bVar6,0);
  if (((*(int *)((long)plVar2 + 0x4c) != param_3) && (*(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: ",
                 0x13ab);
    FUN_00517ae0("Specified uiWidth(%d) doesn\'t match the resouce width(%d)\n",param_3,
                 *(undefined4 *)((long)plVar2 + 0x4c));
  }
  if ((((int)plVar2[10] != param_4) && (*(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: ",
                 0x13ae);
    FUN_00517ae0("Specified uiHeight(%d) doesn\'t match the resouce height(%d)\n",param_4,
                 (int)plVar2[10]);
  }
  if (((*(uint *)((long)plVar2 + 0x44) != param_7) && (*(int *)PTR_DAT_02713970 != 0)) &&
     (*(int *)PTR_DAT_027139c0 != 0)) {
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX WARNING: ",
                 0x13b2);
    uVar3 = FUN_00546bd0(param_7,&DAT_0275e230);
    uVar4 = FUN_00546bd0(*(undefined4 *)((long)plVar2 + 0x44),&DAT_0275e330);
    FUN_00517ae0("Specified eFormat(%s) doesn\'t match the resouce format(%s)\n",uVar3,uVar4);
  }
  lVar5 = (**(code **)(**(long **)plVar2[0xe] + 0x98))();
  FUN_00546b40(*(undefined4 *)(lVar5 + 0x1c),0);
  return plVar2;
}


