/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cf020; name: FUN_005cf020
 */


void FUN_005cf020(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    plVar4 = (long *)FUN_005bf860();
    param_1 = (long *)(**(code **)(*plVar4 + 0x60))();
  }
  uVar5 = (**(code **)(*param_1 + 0x38))
                    (param_1,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_POD.h",0x69)
  ;
  FUN_005caf50(uVar5,param_1,"SiGfxShaderGraphDataTypePOD",*(undefined8 *)(PTR_PTR_027140d0 + 8),0);
  puVar1 = PTR_DAT_02714080;
  *(undefined8 *)PTR_DAT_02714080 = uVar5;
  FUN_005cb4c0(uVar5);
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xd8,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_POD.h"
                              ,0x6b);
  FUN_005cf960(plVar4,"PODType","SI_POD_TYPE",0x108,param_1);
  puVar2 = PTR_DAT_027140d8;
  *(undefined4 *)((long)plVar4 + 0xac) = 6;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[0x14] = (long)PTR_s_N6SiSDK311SI_POD_TYPEE_027140e0;
  uVar3 = FUN_005c3550();
  *(undefined4 *)(plVar4 + 0x15) = uVar3;
  plVar4[0x12] = 4;
  *plVar4 = (long)(PTR_DAT_027140f0 + 0x10);
  puVar2 = PTR_LAB_027140e8;
  plVar4[0x19] = (long)PTR_LAB_027140f8;
  plVar4[0x1a] = (long)puVar2;
  plVar4[0x16] = (long)(PTR_DAT_02714100 + 0x10);
  plVar4[0x17] = 6;
  *(undefined4 *)(plVar4 + 0x18) = 0xd;
  FUN_005cb820(*(undefined8 *)puVar1,plVar4);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  return;
}


