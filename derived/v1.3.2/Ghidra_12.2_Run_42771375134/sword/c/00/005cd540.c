/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cd540; name: FUN_005cd540
 */


void FUN_005cd540(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
  FUN_005cecb0(param_2);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType.h",0x83);
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphDataType",*(undefined8 *)(PTR_PTR_02713fe8 + 8),0);
  puVar1 = PTR_DAT_02713ff0;
  *(undefined8 *)PTR_DAT_02713ff0 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Array.h",
                     0x75);
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphDataTypeArray",*(undefined8 *)(PTR_PTR_02713ff8 + 8),0)
  ;
  puVar1 = PTR_DAT_02714000;
  *(undefined8 *)PTR_DAT_02714000 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Matrix.h",
                     0x81);
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphDataTypeMatrix",*(undefined8 *)(PTR_PTR_02714008 + 8),0
              );
  puVar1 = PTR_DAT_02714010;
  *(undefined8 *)PTR_DAT_02714010 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  FUN_005cf020(param_2);
  FUN_005cf180(param_2);
  FUN_005cf2c0(param_2);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataValue.h",0x85);
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphDataValue",*(undefined8 *)(PTR_PTR_02714018 + 8),0);
  puVar1 = PTR_DAT_02714020;
  *(undefined8 *)PTR_DAT_02714020 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataValue_POD.h",0x5a
                    );
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphDataValuePOD",*(undefined8 *)(PTR_PTR_02714028 + 8),0);
  puVar1 = PTR_DAT_02714030;
  *(undefined8 *)PTR_DAT_02714030 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_NodeType.h",0xc3);
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphNodeType",*(undefined8 *)(PTR_PTR_02714038 + 8),0);
  puVar1 = PTR_DAT_02714040;
  *(undefined8 *)PTR_DAT_02714040 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  FUN_005cf4b0(param_2);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_NodeType_Function.h",
                     0x93);
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphFunctionNodeType",*(undefined8 *)(PTR_PTR_02714048 + 8)
               ,0);
  puVar1 = PTR_DAT_02714050;
  *(undefined8 *)PTR_DAT_02714050 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  plVar2 = param_2;
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*plVar2 + 0x38))
                    (plVar2,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Node_Function.h",0x45
                    );
  FUN_005caf50(uVar3,plVar2,"SiGfxShaderGraphFunctionNode",*(undefined8 *)(PTR_PTR_02714058 + 8),0);
  puVar1 = PTR_DAT_02714060;
  *(undefined8 *)PTR_DAT_02714060 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  if (param_2 == (long *)0x0) {
    plVar2 = (long *)FUN_005bf860();
    param_2 = (long *)(**(code **)(*plVar2 + 0x60))();
  }
  uVar3 = (**(code **)(*param_2 + 0x38))
                    (param_2,0x130,0x10,"../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph.h"
                     ,0xed);
  FUN_005caf50(uVar3,param_2,"SiGfxShaderGraph",*(undefined8 *)(PTR_PTR_02714068 + 8),0);
  puVar1 = PTR_DAT_02714070;
  *(undefined8 *)PTR_DAT_02714070 = uVar3;
  FUN_005cb4c0(uVar3);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  return;
}


