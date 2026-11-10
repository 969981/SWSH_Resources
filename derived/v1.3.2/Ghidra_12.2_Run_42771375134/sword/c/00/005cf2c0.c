/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cf2c0; name: FUN_005cf2c0
 */


void FUN_005cf2c0(long *param_1)

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
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Vector.h",
                     0x75);
  FUN_005caf50(uVar5,param_1,"SiGfxShaderGraphDataTypeVector",*(undefined8 *)(PTR_PTR_02714128 + 8),
               0);
  puVar1 = PTR_DAT_02714090;
  *(undefined8 *)PTR_DAT_02714090 = uVar5;
  FUN_005cb4c0(uVar5);
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xd8,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Vector.h"
                              ,0x77);
  FUN_005cf960(plVar4,"VectorPODType","SI_POD_TYPE",0x108,param_1);
  puVar2 = PTR_DAT_027140d8;
  *(undefined4 *)((long)plVar4 + 0xac) = 0xb;
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
  plVar4[0x17] = 0xb;
  *(undefined4 *)(plVar4 + 0x18) = 0xd;
  FUN_005cb820(*(undefined8 *)puVar1,plVar4);
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xb0,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_DataType_Vector.h"
                              ,0x78);
  FUN_005cf960(plVar4,"VectorDimension","SI_INT",0x10c,param_1);
  *plVar4 = (long)(PTR_DAT_02714130 + 0x10);
  puVar2 = PTR_typeinfo_02714138;
  *(undefined4 *)((long)plVar4 + 0xac) = 1;
  plVar4[0x14] = *(long *)(puVar2 + 8);
  uVar3 = FUN_005c3550();
  *(undefined4 *)(plVar4 + 0x15) = uVar3;
  plVar4[0x12] = 4;
  FUN_005cb820(*(undefined8 *)puVar1,plVar4);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  return;
}


