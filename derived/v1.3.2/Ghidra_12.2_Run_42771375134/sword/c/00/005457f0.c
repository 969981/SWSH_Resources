/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005457f0; name: FUN_005457f0
 */


long * FUN_005457f0(long param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                   undefined4 param_6,undefined4 param_7,uint param_8)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  int iStack_168;
  int local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  uint local_148;
  uint uStack_144;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  ulong local_cc;
  undefined4 local_c4;
  long *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (param_2 == 0) {
    return (long *)0x0;
  }
  if (param_3 == 0) {
    return (long *)0x0;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x188))
                             (*(long **)(param_1 + 0x38),2,0,0,0);
  if (plVar3 == (long *)0x0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return (long *)0x0;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return (long *)0x0;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                 0x17b6);
    FUN_00517ae0("IGPUSurface::CreateSurface(): ISiGfxDevice::CreateTexture() failed.\n");
    return (long *)0x0;
  }
  if ((param_8 & 1) == 0) {
    if ((param_5 >> 9 & 1) == 0) {
      local_140 = 0;
      local_148 = param_5 >> 0xb & 1;
    }
    else {
      local_148 = 2;
      local_140 = 0x10000;
    }
  }
  else {
    local_148 = 3;
    local_140 = 0x20000;
  }
  local_128 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_144 = (param_5 & 2) << 0xd | (param_5 & 1) << 5;
  local_160 = 0x100000001;
  local_158 = 1;
  uStack_14c = 0;
  local_174 = 0;
  local_16c = 0;
  local_13c = 0;
  local_134 = 0;
  local_100 = 0x3f800000;
  local_c4 = 0;
  local_fc = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_dc = 0;
  local_e4 = 0;
  uStack_e0 = 0;
  local_ec = 0;
  uStack_e8 = 0;
  local_f4 = 0;
  uStack_f0 = 0;
  local_178 = param_4;
  iStack_168 = param_2;
  local_164 = param_3;
  uStack_154 = param_6;
  local_150 = param_7;
  lVar4 = FUN_005bc740();
  if (lVar4 == 0) {
    uVar5 = FUN_005bc6f0();
  }
  else {
    uVar5 = FUN_005bc740();
  }
  uStack_f0 = (undefined4)uVar5;
  local_ec = (undefined4)((ulong)uVar5 >> 0x20);
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  local_b8 = 0;
  lVar4 = FUN_005bc740();
  if (lVar4 == 0) {
    local_c0 = (long *)FUN_005bc6f0();
  }
  else {
    local_c0 = (long *)FUN_005bc740();
  }
  local_90 = 0xffffffff00000000;
  local_88 = 0xffffffff;
  local_84 = 0xffffffff;
  local_7a = 0;
  local_7c = 0;
  local_130 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  uVar6 = (**(code **)(*plVar3 + 0xb0))(plVar3,&local_178);
  if ((uVar6 & 1) == 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                   0x17e5);
      pcVar8 = "IGPUSurface::CreateSurface(): ISiGfxTexture::Create() failed.\n";
      goto LAB_00545b24;
    }
  }
  else {
    plVar7 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,200,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp",0x154c,
                                  0);
    FUN_00545fc0(plVar7,param_1);
    plVar7[0x12] = (long)(plVar7 + 0x12);
    plVar7[0x13] = (long)(plVar7 + 0x12);
    plVar7[0x14] = 0;
    plVar7[0x15] = plVar7[7];
    puVar1 = PTR_DAT_02713b70;
    plVar7[0xe] = 0;
    *(undefined1 *)(plVar7 + 0x16) = 0;
    plVar7[0x17] = 0;
    *(undefined1 *)(plVar7 + 0x18) = 0;
    *plVar7 = (long)(puVar1 + 0x10);
    *(undefined4 *)(plVar7 + 0x11) = 0xffffffff;
    *(undefined4 *)((long)plVar7 + 0xc) = 6;
    plVar7[0x10] = 0;
    iVar2 = FUN_00544c70(plVar7,plVar3,0,0,param_5);
    if (iVar2 < 0) {
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
    else if (plVar7 != (long *)0x0) goto joined_r0x00545b40;
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceSurface.cpp(%d) : PPFX ERROR: ",
                   0x17f0);
      pcVar8 = "IGPUSurface::CreateSurface(): CreateSurface() failed.\n";
LAB_00545b24:
      FUN_00517ae0(pcVar8);
    }
  }
  (**(code **)(*plVar3 + 0x18))(plVar3);
  plVar7 = (long *)0x0;
joined_r0x00545b40:
  if ((local_98 & 1) == 0) {
    if ((local_b8 != 0) && (local_c0 != (long *)0x0)) {
      (**(code **)(*local_c0 + 0x48))
                (local_c0,local_b8,
                 "C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_b8 = 0;
  }
  if ((((local_cc & 0x100000000) == 0) && (CONCAT44(local_e4,uStack_e8) != 0)) &&
     (plVar3 = (long *)CONCAT44(local_ec,uStack_f0), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x48))
              (plVar3,CONCAT44(local_e4,uStack_e8),
               "C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return plVar7;
}


