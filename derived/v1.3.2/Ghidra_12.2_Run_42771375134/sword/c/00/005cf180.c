/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cf180; name: FUN_005cf180
 */


void FUN_005cf180(long *param_1)

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
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Struct.h",
                     0xab);
  FUN_005caf50(uVar5,param_1,"SiGfxShaderGraphDataTypeStruct",*(undefined8 *)(PTR_PTR_02714108 + 8),
               0);
  puVar2 = PTR_DAT_02714088;
  *(undefined8 *)PTR_DAT_02714088 = uVar5;
  FUN_005cb4c0(uVar5);
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xc0,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Struct.h"
                              ,0xad);
  FUN_005cf960(plVar4,"Members","SiGfxShaderGraphDataType*",0x108,param_1);
  puVar1 = PTR_DAT_02714110;
  plVar4[0x16] = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[0x14] = (long)PTR_s_PN6SiSDK324SiGfxShaderGraphDataT_02714118;
  uVar3 = FUN_005c3550();
  *(undefined4 *)(plVar4 + 0x15) = uVar3;
  puVar1 = PTR_DAT_02714120 + 0x10;
  plVar4[0x11] = 0x18;
  plVar4[0x12] = 8;
  *plVar4 = (long)puVar1;
  *(undefined1 *)(plVar4 + 0x17) = 1;
  FUN_005cb820(*(undefined8 *)puVar2,plVar4);
  FUN_005cb4d0(*(undefined8 *)puVar2);
  return;
}


