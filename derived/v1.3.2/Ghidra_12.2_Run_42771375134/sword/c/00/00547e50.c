/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00547e50; name: FUN_00547e50
 */


long * FUN_00547e50(long param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7,uint param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
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
  uVar11 = param_8 >> 0xb & 1;
  if ((param_8 & 0x200) != 0) {
    uVar11 = 2;
  }
  uVar1 = (param_8 & 2) << 0xd | (param_8 & 1) << 5;
  uVar12 = (param_9 & 0x2000000) >> 8;
  uVar2 = uVar1 | 8;
  if ((param_9 & 1) != 0) {
    uVar12 = 0x20000;
    uVar11 = 3;
    uVar2 = uVar1;
  }
  plVar5 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x188))
                             (*(long **)(param_1 + 0x38),2,0,0,0);
  if (plVar5 == (long *)0x0) {
    if (*(int *)PTR_DAT_02713970 == 0) {
      return (long *)0x0;
    }
    if (*(int *)PTR_DAT_02713980 == 0) {
      return (long *)0x0;
    }
    FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX ERROR: ",0xfe3
                );
    FUN_00517ae0("IGPUTexture::CreateTexture(): ISiGfxDevice::CreateTexture() failed.\n");
    return (long *)0x0;
  }
  local_148 = 0x800000000;
  local_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_138 = 0;
  local_128 = 0;
  local_100 = 0x3f800000;
  local_c4 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  local_16c = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  local_118 = 0;
  local_cc = 0;
  local_d4 = 0;
  local_dc = 0;
  local_e4 = 0;
  uStack_e0 = 0;
  local_ec = 0;
  uStack_e8 = 0;
  local_f4 = 0;
  uStack_f0 = 0;
  lVar6 = FUN_005bc740();
  if (lVar6 == 0) {
    uVar7 = FUN_005bc6f0();
  }
  else {
    uVar7 = FUN_005bc740();
  }
  uStack_f0 = (undefined4)uVar7;
  local_ec = (undefined4)((ulong)uVar7 >> 0x20);
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = (long *)0x0;
  local_b8 = 0;
  lVar6 = FUN_005bc740();
  if (lVar6 == 0) {
    local_c0 = (long *)FUN_005bc6f0();
  }
  else {
    local_c0 = (long *)FUN_005bc740();
  }
  local_90 = 0xffffffff00000000;
  local_88 = 0xffffffff;
  local_84 = 0xffffffff;
  uStack_160 = CONCAT44(param_4,1);
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0xffffffffffffffff;
  local_148 = CONCAT44(uVar2,uVar11);
  local_140 = (ulong)uVar12;
  local_7a = 0;
  local_7c = 0;
  local_130 = 0;
  uStack_174 = 0;
  uStack_170 = 0;
  local_16c = 0;
  local_168 = CONCAT44(param_3,param_2);
  local_158 = CONCAT44(param_6,1);
  uStack_150 = CONCAT44(uStack_150._4_4_,param_7);
  local_138 = CONCAT44(local_138._4_4_,(param_9 & 0x2000000) >> 0x16);
  local_128 = local_128 & 0xffffffff;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0x3f800000;
  uStack_fc = 0;
  uStack_f8 = 0;
  local_f4 = 0;
  local_178 = param_5;
  uVar8 = (**(code **)(*plVar5 + 0xb0))(plVar5,&local_178);
  if ((uVar8 & 1) == 0) {
    if ((*(int *)PTR_DAT_02713970 != 0) && (*(int *)PTR_DAT_02713980 != 0)) {
      FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp(%d) : PPFX ERROR: ",
                   0x100a);
      FUN_00517ae0("IGPUTexture::CreateTexture(): ISiGfxTexture::Create() failed.\n");
    }
    pcVar10 = *(code **)(*plVar5 + 0x18);
  }
  else {
    lVar6 = (**(code **)(*plVar5 + 0x98))(plVar5);
    iVar4 = *(int *)(lVar6 + 0x20);
    if (iVar4 != 0) {
      iVar13 = 0;
      do {
        plVar9 = (long *)(**(code **)(*plVar5 + 200))(plVar5,iVar13);
        lVar6 = (**(code **)(*plVar9 + 0x88))();
        FUN_0053e6b0(param_1,*(int *)(lVar6 + 0x18) * *(int *)(lVar6 + 0x14) *
                             *(int *)(lVar6 + 0x28));
        iVar13 = iVar13 + 1;
      } while (iVar4 != iVar13);
    }
    plVar9 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x98,
                                  "C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceTexture.cpp",0x1021,
                                  0);
    FUN_00545fc0(plVar9,param_1);
    *(undefined4 *)(plVar9 + 0x10) = 0;
    puVar3 = PTR_DAT_02713b98;
    plVar9[0xe] = (long)(plVar9 + 7);
    plVar9[0xf] = -1;
    plVar9[0x11] = 0;
    plVar9[0x12] = (long)(plVar9 + 7);
    *plVar9 = (long)(puVar3 + 0x10);
    *(undefined4 *)((long)plVar9 + 0xc) = 3;
    iVar4 = FUN_00547850(plVar9,plVar5,param_9);
    *(undefined1 *)(plVar9 + 4) = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(**(long **)plVar9[0xe] + 0x20))();
    if ((-1 < iVar4) || (plVar9 == (long *)0x0)) goto LAB_005481d8;
    pcVar10 = *(code **)(*plVar9 + 8);
    plVar5 = plVar9;
  }
  (*pcVar10)(plVar5);
  plVar9 = (long *)0x0;
LAB_005481d8:
  if ((local_98 & 1) == 0) {
    if ((local_b8 != 0) && (local_c0 != (long *)0x0)) {
      (**(code **)(*local_c0 + 0x48))
                (local_c0,local_b8,
                 "C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_b8 = 0;
  }
  if ((((local_cc & 0x100000000) == 0) && (CONCAT44(local_e4,uStack_e8) != 0)) &&
     (plVar5 = (long *)CONCAT44(local_ec,uStack_f0), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x48))
              (plVar5,CONCAT44(local_e4,uStack_e8),
               "C:/workspace/sisdk/3.0/SDK/Core/Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return plVar9;
}


