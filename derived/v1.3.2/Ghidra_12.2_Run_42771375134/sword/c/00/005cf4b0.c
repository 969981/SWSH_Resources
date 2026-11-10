/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cf4b0; name: FUN_005cf4b0
 */


void FUN_005cf4b0(long *param_1)

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
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Node.h",0xa5);
  FUN_005caf50(uVar5,param_1,"SiGfxShaderGraphNode",*(undefined8 *)(PTR_PTR_02714140 + 8),0);
  puVar1 = PTR_DAT_02714098;
  *(undefined8 *)PTR_DAT_02714098 = uVar5;
  FUN_005cb4c0(uVar5);
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xb0,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Node.h",0xa7
                             );
  FUN_005cf960(plVar4,"UIExpanded","SI_BOOL",0x160,param_1);
  *plVar4 = (long)(PTR_DAT_02714148 + 0x10);
  puVar2 = PTR_typeinfo_02714150;
  *(undefined1 *)((long)plVar4 + 0xac) = 1;
  plVar4[0x14] = *(long *)(puVar2 + 8);
  uVar3 = FUN_005c3550();
  *(undefined4 *)(plVar4 + 0x15) = uVar3;
  plVar4[0x12] = 1;
  FUN_005cb820(*(undefined8 *)puVar1,plVar4);
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xb8,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Node.h",0xa8
                             );
  FUN_005cf960(plVar4,"UIPosition","SiMathVector3Df",0x164,param_1);
  puVar2 = PTR_DAT_02714158;
  *(undefined8 *)((long)plVar4 + 0xac) = 0;
  *(undefined4 *)((long)plVar4 + 0xb4) = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[0x14] = (long)PTR_s_N6SiSDK314SiMathVector3DIfEE_02714160;
  uVar3 = FUN_005c3550();
  *(undefined4 *)(plVar4 + 0x15) = uVar3;
  plVar4[0x12] = 0xc;
  FUN_005cb820(*(undefined8 *)puVar1,plVar4);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  return;
}


