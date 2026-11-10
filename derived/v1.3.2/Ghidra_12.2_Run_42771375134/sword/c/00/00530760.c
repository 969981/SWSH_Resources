/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00530760; name: FUN_00530760
 */


undefined8
FUN_00530760(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,long param_9,
            undefined4 param_10,undefined8 *param_11,undefined4 param_12,undefined8 *param_13)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  long local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  cVar3 = *(char *)(param_8 + 0x96c);
  if (cVar3 == '\0') {
    uStack_bc = 0x3f800000;
    local_c0 = 0x3f800000;
    local_94 = 0x3f800000;
  }
  else {
    local_c0 = *(undefined4 *)(param_8 + 0x980);
    uStack_bc = *(undefined4 *)(param_8 + 0x984);
    local_94 = *(undefined4 *)(param_8 + 0x988);
  }
  local_140 = *(undefined8 *)(param_8 + 0x1094);
  local_138 = *(undefined8 *)(param_8 + 0x109c);
  local_130 = *(undefined8 *)(param_8 + 0x10a4);
  local_128 = *(undefined8 *)(param_8 + 0x10ac);
  local_120 = *(undefined8 *)(param_8 + 0x10b4);
  local_118 = *(undefined8 *)(param_8 + 0x10bc);
  local_110 = *(undefined8 *)(param_8 + 0x10c4);
  local_108 = *(undefined8 *)(param_8 + 0x10cc);
  if (*(char *)(param_8 + 0x999) == '\0') {
LAB_00530838:
    local_a8 = 0;
  }
  else {
    switch(*(undefined4 *)(param_8 + 0x99c)) {
    case 9:
      if (*(float *)(param_8 + 0x9a0) == DAT_01d4c314) goto LAB_00530838;
      break;
    case 10:
      if (*(float *)(param_8 + 0x9a0) == DAT_01d4bf48) goto LAB_00530838;
      break;
    case 0xb:
    case 0xc:
      if (*(float *)(param_8 + 0x9a0) == DAT_01d4bccc) goto LAB_00530838;
      break;
    case 0xd:
      if (*(float *)(param_8 + 0x9a0) == DAT_01d4c570) goto LAB_00530838;
      break;
    case 0xe:
      if (*(float *)(param_8 + 0x9a0) == DAT_01d4c5d0) goto LAB_00530838;
    }
    local_a8 = 1;
  }
  if (cVar3 == '\0') {
    uStack_b0 = 0;
    local_b4 = 0;
    local_ac = 0;
  }
  else {
    local_b4 = *(undefined4 *)(param_8 + 0x98c);
    uStack_b0 = *(undefined4 *)(param_8 + 0xbc4);
    local_ac = *(undefined4 *)(param_8 + 0xbc8);
  }
  iVar1 = *(int *)PTR_DAT_02713a80;
  bVar4 = iVar1 == 3 || iVar1 == 5;
  if (cVar3 == '\0') {
    uStack_144 = 0;
  }
  else {
    uStack_144 = *(undefined4 *)(param_8 + 0x974);
  }
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_9 + 0x4c));
  local_158 = *param_11;
  uStack_150 = param_11[1];
  uVar6 = NEON_ucvtf(*(undefined4 *)(param_9 + 0x50));
  local_100 = *param_13;
  uStack_f8 = param_13[1];
  local_f0 = param_13[2];
  uStack_e8 = param_13[3];
  local_e0 = param_13[4];
  uStack_d8 = param_13[5];
  local_d0 = param_13[6];
  uStack_c8 = param_13[7];
  local_b8 = 0x42c80000;
  local_170 = param_9;
  local_168 = param_1;
  uStack_164 = param_2;
  local_160 = param_3;
  local_15c = param_10;
  local_148 = param_12;
  local_a4 = param_4;
  uStack_a0 = param_5;
  local_9c = param_6;
  uStack_98 = param_7;
  local_90 = local_140;
  local_88 = local_138;
  local_80 = local_130;
  local_78 = local_128;
  local_70 = local_120;
  local_68 = local_118;
  local_60 = local_110;
  local_58 = local_108;
  if (((cVar3 == '\0') || (*(int *)(param_8 + 0x974) != 1)) &&
     (FUN_00530300(0,0,fVar5,uVar6,param_8,0,iVar1 - 1U < 3,bVar4,0,&local_170), iVar1 == 1)) {
    FUN_00530300(fVar5 * 0.25,0,fVar5,uVar6,param_8,0,1,1,0,&local_170);
  }
  if (((*(char *)(param_8 + 0x96c) != '\0') && (iVar2 = *(int *)(param_8 + 0x974), iVar2 != 0)) &&
     (FUN_00530300(0,0,fVar5,uVar6,param_8,1,iVar1 - 1U < 3,bVar4,iVar2 != 1,&local_170), iVar1 == 1
     )) {
    FUN_00530300(fVar5 * 0.25,0,fVar5,uVar6,param_8,1,1,1,iVar2 != 1,&local_170);
  }
  return 0;
}


