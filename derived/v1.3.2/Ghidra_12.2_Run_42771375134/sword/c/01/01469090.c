/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01469090; name: FUN_01469090
 */


void FUN_01469090(long param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  char *pcVar6;
  ulong *puVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  ulong local_288;
  undefined8 local_280;
  undefined8 local_278;
  long local_270;
  ulong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  ulong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  ulong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  ulong local_130;
  undefined8 local_128;
  undefined8 local_120;
  long local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar11 = *(long *)(param_1 + 0x830);
  uVar1 = *(undefined4 *)(lVar11 + (long)param_2 * 4 + 0x140);
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  pcVar6 = (char *)FUN_0152d900(lVar10,uVar1);
  local_138 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_208 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  snprintf((char *)&local_268,100,"L_button_item_%02d",param_3);
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  if ((char)local_198 == '\0') {
    if ((char)local_268 == '\0') {
      local_1a0 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1e0 = 0;
      local_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = 0;
      local_200 = 0;
      local_1f8 = 0;
      goto LAB_01469274;
    }
    puVar7 = &local_268;
LAB_014691d4:
    snprintf((char *)&local_130,100,"%s",puVar7);
  }
  else {
    if ((char)local_268 == '\0') {
      puVar7 = &local_198;
      goto LAB_014691d4;
    }
    snprintf((char *)&local_130,100,"%s_%s",(char *)&local_198,(char *)&local_268);
  }
  local_68 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  snprintf((char *)&local_c8,100,"%s",&local_130);
  local_200 = local_c8;
  local_1e0 = local_a8;
  local_1e8 = local_b0;
  local_1f0 = local_b8;
  local_1f8 = local_c0;
  local_1c0 = local_88;
  local_1c8 = local_90;
  local_1d0 = local_98;
  local_1d8 = local_a0;
  local_1a0 = local_68;
  local_1a8 = local_70;
  local_1b0 = local_78;
  local_1b8 = local_80;
LAB_01469274:
  uVar12 = 0xcbf29ce484222645;
  if (*(char *)(param_1 + 0x840) == '\0') {
    FUN_01451e50(&local_c8,lVar11,uVar1);
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    local_120 = 0;
    if ((char)local_200 == '\0') {
      snprintf((char *)&local_130,100,"pane_%s","T_com_msg_01");
      bVar2 = (byte)local_130;
      local_268 = local_c8;
    }
    else {
      snprintf((char *)&local_130,100,"pane_%s_%s",(char *)&local_200,"T_com_msg_01");
      bVar2 = (byte)local_130;
      local_268 = local_c8;
    }
    local_130 = 0xcbf29ce484222645;
    if (bVar2 != 0) {
      local_130 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_130 | 1);
      do {
        local_130 = (local_130 ^ bVar2) * 0x100000001b3;
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    local_c8 = local_268;
    FUN_014618d0(param_1,&local_130,&local_268,0);
    lVar11 = *(long *)(param_1 + 0x2b0);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    local_d0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_130 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    local_120 = 0;
    if ((char)local_200 == '\0') {
      snprintf((char *)&local_130,100,"pane_%s","L_new_00");
      uVar8 = local_130;
    }
    else {
      snprintf((char *)&local_130,100,"pane_%s_%s",(char *)&local_200,"L_new_00");
      uVar8 = local_130;
    }
    bVar3 = (byte)local_130 != '\0';
    local_130 = 0xcbf29ce484222645;
    if (bVar3) {
      uVar8 = uVar8 & 0xff;
      local_130 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_130 | 1);
      do {
        local_130 = (local_130 ^ uVar8) * 0x100000001b3;
        bVar2 = *pbVar9;
        uVar8 = (ulong)bVar2;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    FUN_0167b9b0(lVar11,&local_130,pcVar6[0x19]);
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    FUN_01452040(&local_130,*(undefined8 *)(param_1 + 0x830),uVar1);
    lVar11 = *(long *)(param_1 + 0x6e8);
    local_288 = local_130;
    local_280 = local_128;
    local_278 = local_120;
    local_270 = local_118;
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x10))();
    }
    local_2a0 = 0;
    uStack_298 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    local_308 = (code *)0x0;
    FUN_0168d690(lVar11 + (long)param_3 * 0x3d0,&local_288,0,&local_310);
    pcVar4 = local_308;
    if (local_308 != (code *)0x0) {
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      local_308 = (code *)0x0;
      (*pcVar4)(&local_2f0);
    }
    if (local_270 != 0) {
      (**(code **)(*(long *)(local_270 + 0x48) + 0x18))();
      local_270 = 0;
    }
    if (local_118 != 0) {
      (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
      local_118 = 0;
    }
    if (local_b0 != 0) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
      local_b0 = 0;
    }
  }
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_130 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  if ((char)local_200 == '\0') {
    snprintf((char *)&local_130,100,"anime_%s","change_icon");
    bVar2 = (byte)local_130;
  }
  else {
    snprintf((char *)&local_130,100,"anime_%s_%s",(char *)&local_200,"change_icon");
    bVar2 = (byte)local_130;
  }
  if (bVar2 != 0) {
    pbVar9 = (byte *)((ulong)&local_130 | 1);
    do {
      uVar12 = (uVar12 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar2 != 0);
  }
  lVar11 = param_1 + 0x100;
  local_c8 = uVar12;
  if (*pcVar6 == '\x02') {
    FUN_00ffd510(0x40000000,lVar11,&local_c8);
  }
  else if (*pcVar6 == '\x03') {
    FUN_00ffd510(0x40400000,lVar11,&local_c8);
  }
  else {
    iVar5 = FUN_01452170(*(undefined8 *)(param_1 + 0x830),uVar1);
    if (iVar5 == 0) {
      FUN_00ffd510(0,lVar11,&local_c8);
    }
    else {
      FUN_00ffd510(0x3f800000,lVar11,&local_c8);
    }
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


