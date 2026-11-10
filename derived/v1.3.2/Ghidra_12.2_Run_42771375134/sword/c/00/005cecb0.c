/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cecb0; name: FUN_005cecb0
 */


void FUN_005cecb0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  
  if (param_1 == (long *)0x0) {
    plVar5 = (long *)FUN_005bf860();
    param_1 = (long *)(**(code **)(*plVar5 + 0x60))();
  }
  uVar6 = (**(code **)(*param_1 + 0x38))
                    (param_1,0x130,0x10,
                     "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h",0x8b);
  FUN_005caf50(uVar6,param_1,"SiGfxShaderGraphObject",*(undefined8 *)(PTR_PTR_027140a0 + 8),0);
  puVar1 = PTR_DAT_02714078;
  *(undefined8 *)PTR_DAT_02714078 = uVar6;
  FUN_005cb4c0(uVar6);
  plVar5 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0x18,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h",
                              0x8d);
  *plVar5 = (long)(PTR_DAT_027140a8 + 0x10);
  FUN_005bf710(plVar5 + 1,param_1);
  FUN_005cb860(*(undefined8 *)puVar1,plVar5);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xe0,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h",
                              0x8e);
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (long *)0x0;
  local_68 = 0;
  lVar7 = FUN_005bc740();
  if (lVar7 == 0) {
    local_70 = (long *)FUN_005bc6f0();
  }
  else {
    local_70 = (long *)FUN_005bc740();
  }
  FUN_005cf960(plVar5,&DAT_01d0fc7e,"SiStringT",0x50,param_1);
  puVar2 = PTR_DAT_027140b0;
  *plVar5 = (long)(PTR_DAT_027140b0 + 0x10);
  FUN_005c4670(plVar5 + 0x16,&local_70,0);
  puVar3 = PTR_s_N6SiSDK38SiStringIcEE_027140b8;
  plVar5[0x14] = (long)PTR_s_N6SiSDK38SiStringIcEE_027140b8;
  uVar4 = FUN_005c3550(puVar3);
  *(undefined4 *)(plVar5 + 0x15) = uVar4;
  plVar5[0x12] = 0x30;
  if ((local_48 & 1) == 0) {
    if ((local_68 != 0) && (local_70 != (long *)0x0)) {
      (**(code **)(*local_70 + 0x48))
                (local_70,local_68,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_68 = 0;
  }
  FUN_005cb820(*(undefined8 *)puVar1,plVar5);
  plVar5 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xe0,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h",
                              0x8f);
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (long *)0x0;
  local_68 = 0;
  lVar7 = FUN_005bc740();
  if (lVar7 == 0) {
    local_70 = (long *)FUN_005bc6f0();
  }
  else {
    local_70 = (long *)FUN_005bc740();
  }
  FUN_005cf960(plVar5,"DisplayName","SiStringT",0x88,param_1);
  *plVar5 = (long)(puVar2 + 0x10);
  FUN_005c4670(plVar5 + 0x16,&local_70,0);
  plVar5[0x14] = (long)puVar3;
  uVar4 = FUN_005c3550(puVar3);
  *(undefined4 *)(plVar5 + 0x15) = uVar4;
  plVar5[0x12] = 0x30;
  if ((local_48 & 1) == 0) {
    if ((local_68 != 0) && (local_70 != (long *)0x0)) {
      (**(code **)(*local_70 + 0x48))
                (local_70,local_68,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_68 = 0;
  }
  FUN_005cb820(*(undefined8 *)puVar1,plVar5);
  plVar5 = (long *)(**(code **)(*param_1 + 0x38))
                             (param_1,0xc0,0x10,
                              "../../../../Include\\SiGfx/ShaderGraph/SiGfx_ShaderGraph_Object.h",
                              0x90);
  FUN_005cf960(plVar5,&DAT_01cf5f80,"SI_GUID",0x40,param_1);
  puVar2 = PTR_DAT_027140c0;
  *(undefined8 *)((long)plVar5 + 0xb4) = 0;
  *(undefined8 *)((long)plVar5 + 0xac) = 0;
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[0x14] = (long)PTR_s_N6SiSDK37SI_GUIDE_027140c8;
  uVar4 = FUN_005c3550();
  *(undefined4 *)(plVar5 + 0x15) = uVar4;
  plVar5[0x12] = 0x10;
  FUN_005cb820(*(undefined8 *)puVar1,plVar5);
  FUN_005cb4d0(*(undefined8 *)puVar1);
  return;
}


