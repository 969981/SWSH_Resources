/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0109bbd0; name: FUN_0109bbd0
 */


void FUN_0109bbd0(long param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *param3;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  ulong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  uVar4 = FUN_00884820(*(undefined8 *)(param_1 + 0x5d0));
  local_140 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  if (uVar4 != 0) {
    lVar13 = *(long *)(param_1 + 0x4c8);
    uVar11 = 0;
    lVar10 = 0x698;
    do {
      uVar5 = (**(code **)(**(long **)(param_1 + 0x5d0) + 0x50))
                        (*(long **)(param_1 + 0x5d0),uVar11 & 0xffffffff);
      plVar15 = *(long **)(param_1 + 8);
      uVar16 = *(undefined8 *)(param_1 + 0x5d8);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      lVar7 = (**(code **)(*plVar15 + 0x10))(plVar15,0x180,8);
      if (lVar7 == 0) {
        (**(code **)(*plVar15 + 0xb8))(plVar15);
      }
      FUN_0109d9b0(lVar7,uVar11 & 0xffffffff,&local_1a0,uVar5,param_1,lVar13,uVar16);
      *(undefined8 *)(lVar7 + 0x18) = 0x180;
      *(long **)(lVar7 + 8) = plVar15;
      *(long *)(lVar7 + 0x10) = lVar7;
      *(undefined8 *)(lVar7 + 0x20) = 8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + lVar10) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + lVar10) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + lVar10) = 0;
      }
      uVar11 = uVar11 + 1;
      *(long *)(param_1 + lVar10) = lVar7;
      lVar13 = lVar13 + 0x3e0;
      lVar10 = lVar10 + 8;
    } while (uVar11 < uVar4);
  }
  uVar11 = 0xcbf29ce484222645;
  if (0 < (int)(6 - uVar4)) {
    iVar14 = 6 - uVar4;
    do {
      local_210 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_240 = 0;
      uStack_238 = 0;
      local_250 = 0;
      uStack_248 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_270 = 0;
      uStack_268 = 0;
      snprintf((char *)&local_270,100,"L_pokeplate_%02d",6 - iVar14);
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      if ((char)local_1a0 == '\0') {
        if ((char)local_270 != '\0') {
          param3 = (char *)&local_270;
          goto LAB_0109be34;
        }
        local_1a8 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_208 = 0;
        local_200 = 0;
        lVar13 = *(long *)(param_1 + 0x2b0);
      }
      else {
        param3 = (char *)&local_1a0;
        if ((char)local_270 == '\0') {
LAB_0109be34:
          snprintf((char *)&local_138,100,"%s",param3);
        }
        else {
          snprintf((char *)&local_138,100,"%s_%s",param3,(char *)&local_270);
        }
        local_70 = 0;
        local_80 = 0;
        local_78 = 0;
        local_90 = 0;
        local_88 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        snprintf((char *)&local_d0,100,"%s",&local_138);
        lVar13 = *(long *)(param_1 + 0x2b0);
        local_1a8 = local_70;
        local_1b8 = local_80;
        local_1b0 = local_78;
        local_1c8 = local_90;
        local_1c0 = local_88;
        local_1d8 = local_a0;
        local_1d0 = local_98;
        local_1e8 = local_b0;
        local_1e0 = local_a8;
        local_1f8 = local_c0;
        local_1f0 = local_b8;
        local_208 = local_d0;
        local_200 = local_c8;
      }
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      uVar8 = 0xcbf29ce484222645;
      local_d8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      if ((char)local_208 != '\0') {
        snprintf((char *)&local_138,100,"pane_%s",(char *)&local_208);
        uVar8 = 0xcbf29ce484222645;
        if ((byte)local_138 != 0) {
          uVar8 = 0xcbf29ce484222645;
          pbVar9 = (byte *)((ulong)&local_138 | 1);
          bVar2 = (byte)local_138;
          do {
            uVar8 = (uVar8 ^ bVar2) * 0x100000001b3;
            bVar2 = *pbVar9;
            pbVar9 = pbVar9 + 1;
          } while (bVar2 != 0);
        }
      }
      local_d0 = uVar8;
      FUN_0167b9b0(lVar13,&local_d0,0);
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
      iVar3 = iVar14 + -1;
      bVar1 = 0 < iVar14;
      iVar14 = iVar3;
    } while (iVar3 != 0 && bVar1);
  }
  uVar4 = FUN_00884820(*(undefined8 *)(param_1 + 0x5d0));
  if (uVar4 != 0) {
    uVar8 = (ulong)uVar4;
    puVar12 = (undefined8 *)(param_1 + 0x698);
    do {
      FUN_0109e000(*puVar12);
      uVar8 = uVar8 - 1;
      puVar12 = puVar12 + 1;
    } while (uVar8 != 0);
  }
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if ((char)local_1a0 == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","T_ParamName_00");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_1a0,"T_ParamName_00");
  }
  local_d0 = 0xcbf29ce484222645;
  if ((byte)local_138 != 0) {
    local_d0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_138 | 1);
    do {
      local_d0 = (local_d0 ^ (byte)local_138) * 0x100000001b3;
      local_138._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_138 != 0);
  }
  local_138 = 0xb53597d09c76aa77;
  FUN_0109c460(param_1,&local_d0,&local_138);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if ((char)local_1a0 == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","T_ParamName_01");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_1a0,"T_ParamName_01");
  }
  local_d0 = 0xcbf29ce484222645;
  if ((byte)local_138 != 0) {
    local_d0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_138 | 1);
    do {
      local_d0 = (local_d0 ^ (byte)local_138) * 0x100000001b3;
      local_138._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_138 != 0);
  }
  local_138 = 0xb53594d09c76a55e;
  FUN_0109c460(param_1,&local_d0,&local_138);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if ((char)local_1a0 == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","T_ParamName_02");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_1a0,"T_ParamName_02");
  }
  local_d0 = 0xcbf29ce484222645;
  if ((byte)local_138 != 0) {
    local_d0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_138 | 1);
    do {
      local_d0 = (local_d0 ^ (byte)local_138) * 0x100000001b3;
      local_138._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_138 != 0);
  }
  local_138 = 0xb53595d09c76a711;
  FUN_0109c460(param_1,&local_d0,&local_138);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if ((char)local_1a0 == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","T_ParamName_03");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_1a0,"T_ParamName_03");
  }
  local_d0 = 0xcbf29ce484222645;
  if ((byte)local_138 != 0) {
    local_d0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_138 | 1);
    do {
      local_d0 = (local_d0 ^ (byte)local_138) * 0x100000001b3;
      local_138._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_138 != 0);
  }
  local_138 = 0xb53592d09c76a1f8;
  FUN_0109c460(param_1,&local_d0,&local_138);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if ((char)local_1a0 == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","T_ParamName_04");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_1a0,"T_ParamName_04");
  }
  local_d0 = 0xcbf29ce484222645;
  if ((byte)local_138 != 0) {
    local_d0 = 0xcbf29ce484222645;
    pbVar9 = (byte *)((ulong)&local_138 | 1);
    do {
      local_d0 = (local_d0 ^ (byte)local_138) * 0x100000001b3;
      local_138._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_138 != 0);
  }
  local_138 = 0xb53593d09c76a3ab;
  FUN_0109c460(param_1,&local_d0,&local_138);
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  if ((char)local_1a0 == '\0') {
    snprintf((char *)&local_138,100,"pane_%s","T_ParamName_05");
  }
  else {
    snprintf((char *)&local_138,100,"pane_%s_%s",(char *)&local_1a0,"T_ParamName_05");
  }
  if ((byte)local_138 != 0) {
    pbVar9 = (byte *)((ulong)&local_138 | 1);
    do {
      uVar11 = (uVar11 ^ (byte)local_138) * 0x100000001b3;
      local_138._0_1_ = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while ((byte)local_138 != 0);
  }
  local_138 = 0xb53590d09c769e92;
  local_d0 = uVar11;
  FUN_0109c460(param_1,&local_d0,&local_138);
  return;
}


