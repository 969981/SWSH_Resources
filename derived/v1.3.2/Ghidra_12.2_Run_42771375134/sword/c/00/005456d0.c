/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005456d0; name: FUN_005456d0
 */


long * FUN_005456d0(undefined8 param_1,long *param_2,int param_3,int param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar4 = (long *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,200,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp",0x1568,
                                  0);
    FUN_00545fc0(plVar4,param_1);
    plVar4[0x12] = (long)(plVar4 + 0x12);
    plVar4[0x13] = (long)(plVar4 + 0x12);
    puVar1 = PTR_DAT_02713b70;
    plVar4[0xe] = 0;
    *(undefined1 *)(plVar4 + 0x16) = 0;
    plVar4[0x17] = 0;
    *(undefined1 *)(plVar4 + 0x18) = 0;
    plVar4[0x10] = 0;
    *plVar4 = (long)(puVar1 + 0x10);
    *(undefined8 *)((long)plVar4 + 0xc) = 0x500000006;
    *(undefined4 *)(plVar4 + 0x11) = 0xffffffff;
    plVar4[0x14] = 0;
    plVar4[0x15] = 0;
    *(undefined8 *)((long)plVar4 + 0x24) = 1;
    if (param_2 == (long *)0x0) {
      uVar3 = 6;
    }
    else {
      plVar2 = (long *)(**(code **)(*param_2 + 0x58))(param_2);
      plVar4[0x15] = *plVar2;
      uVar3 = *(undefined4 *)((long)plVar4 + 0xc);
    }
    *(undefined1 *)(plVar4 + 0x16) = 0;
    plVar4[0x17] = (long)param_2;
    *(undefined1 *)(plVar4 + 0x18) = 0;
    *(undefined4 *)((long)plVar4 + 0x44) = param_5;
    *(undefined4 *)(plVar4 + 9) = uVar3;
    *(int *)((long)plVar4 + 0x4c) = param_3;
    *(int *)(plVar4 + 10) = param_4;
    *(undefined4 *)((long)plVar4 + 0x54) = param_6;
    *(undefined4 *)(plVar4 + 0xb) = param_7;
    FUN_00546030(plVar4);
  }
  return plVar4;
}


