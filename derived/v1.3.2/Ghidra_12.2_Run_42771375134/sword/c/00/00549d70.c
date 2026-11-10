/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00549d70; name: FUN_00549d70
 */


long * FUN_00549d70(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  
  plVar3 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x80,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp",0x6fe,0);
  FUN_00545e70();
  plVar3[2] = param_1;
  puVar1 = PTR_DAT_02713bc0;
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[0xf] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  iVar2 = FUN_00549940(plVar3,param_2,param_3,param_4,param_5);
  if (iVar2 < 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceBuffer.cpp(%d) : PPFX ERROR: ",
                   0x704);
      uVar4 = FUN_00546ea0(iVar2);
      FUN_00517ae0("IGPUInputAttribute::CreateInputAttributepGPUInputAttribute->BuildInputAttribute() failed (0x%x: %s).\n"
                   ,iVar2,uVar4);
    }
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3);
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}


