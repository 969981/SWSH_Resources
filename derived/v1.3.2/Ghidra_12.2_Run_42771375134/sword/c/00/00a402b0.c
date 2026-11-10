/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a402b0; name: FUN_00a402b0
 */


void FUN_00a402b0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *local_200;
  code *local_1f8;
  code *local_1f0;
  undefined1 *local_1e8;
  long local_1e0 [8];
  undefined4 local_1a0;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  uVar5 = param_2[4];
  *(undefined8 *)(param_1 + 0x30) = param_2[3];
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar3 = param_2[5];
  uVar1 = param_2[6];
  uVar5 = param_2[8];
  *(undefined8 *)(param_1 + 0x50) = param_2[7];
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar5 = param_2[0xb];
  uVar3 = param_2[9];
  uVar1 = param_2[10];
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  local_b0 = 0;
  local_1a0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_108 = 0;
  local_1e0[6] = 0;
  local_1e0[7] = 0;
  local_1e0[4] = 0;
  local_1e0[5] = 0;
  local_1e0[2] = 0;
  local_1e0[3] = 0;
  local_1e0[0] = 0;
  local_1e0[1] = 0;
  local_1f0 = (code *)0x0;
  local_1e8 = (undefined1 *)0x0;
  local_200 = (undefined1 *)0x0;
  local_1f8 = (code *)0x0;
  if (*(char *)(param_1 + 0x18) == '\0') {
    local_118 = 0;
    local_128 = 0;
    local_120 = 0;
    local_138 = 0;
    local_130 = 0;
    local_148 = 0;
    local_140 = 0;
    local_158 = 0;
    local_150 = 0;
    local_168 = 0;
    local_160 = 0;
    local_178 = 0;
    local_170 = 0;
  }
  else {
    snprintf((char *)&local_200,100,"%s");
    local_48 = 0;
    local_58 = 0;
    local_50 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = 0;
    local_80 = 0;
    local_98 = 0;
    local_90 = 0;
    local_a8 = 0;
    local_a0 = 0;
    snprintf((char *)&local_a8,100,"%s",&local_200);
    local_178 = local_a8;
    local_158 = local_88;
    local_160 = local_90;
    local_168 = local_98;
    local_170 = local_a0;
    local_138 = local_68;
    local_140 = local_70;
    local_148 = local_78;
    local_150 = local_80;
    local_118 = local_48;
    local_120 = local_50;
    local_128 = local_58;
    local_130 = local_60;
  }
  local_110 = local_178;
  local_f0 = local_158;
  local_f8 = local_160;
  local_100 = local_168;
  local_108 = local_170;
  local_d0 = local_138;
  local_d8 = local_140;
  local_e0 = local_148;
  local_e8 = local_150;
  local_b0 = local_118;
  local_b8 = local_120;
  local_c0 = local_128;
  local_c8 = local_130;
  FUN_00a41000(*(undefined8 *)(param_1 + 0x80),&local_110);
  lVar2 = FUN_00ffde30(uVar6,&DAT_02154930);
  *(long *)(param_1 + 0xb0) = lVar2;
  local_200 = &LAB_00a40930;
  local_1f8 = FUN_00a40980;
  local_1f0 = FUN_00a40990;
  local_1e8 = &LAB_00a409a0;
  pcVar4 = *(code **)(lVar2 + 0x548);
  local_1e0[0] = param_1;
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x550) = 0;
    *(undefined8 *)(lVar2 + 0x558) = 0;
    *(undefined8 *)(lVar2 + 0x540) = 0;
    *(undefined8 *)(lVar2 + 0x548) = 0;
    (*pcVar4)(lVar2 + 0x560);
    if (local_1f0 == (code *)0x0) goto LAB_00a4053c;
  }
  (*local_1f0)(local_1e0,lVar2 + 0x560);
  *(undefined1 **)(lVar2 + 0x558) = local_1e8;
  *(code **)(lVar2 + 0x548) = local_1f8;
  *(code **)(lVar2 + 0x550) = local_1f0;
  *(undefined8 *)(lVar2 + 0x540) = local_200;
LAB_00a4053c:
  pcVar4 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (code *)0x0;
    local_1e8 = (undefined1 *)0x0;
    local_200 = (undefined1 *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar4)(local_1e0);
  }
  uVar3 = FUN_00ffdd70(uVar6,&DAT_02154938);
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  uVar3 = FUN_00ffda40(uVar6,&DAT_02154940);
  FUN_016b2d70(uVar3,0);
  uVar3 = FUN_00ffda40(uVar6,&DAT_02154948);
  FUN_016b2d70(uVar3,0);
  return;
}


