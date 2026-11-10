/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ccf620; name: FUN_00ccf620
 */


void FUN_00ccf620(long param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 auStack_120 [12];
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = 0;
  switch(param_3) {
  case 0xa5:
    uVar3 = 9;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xa6:
    uVar3 = 0xd;
    lVar4 = *(long *)(param_1 + 0x528);
    goto joined_r0x00ccf7c0;
  case 0xa7:
    uVar3 = 0x1a;
    lVar4 = *(long *)(param_1 + 0x528);
joined_r0x00ccf7c0:
    if (lVar4 == 0) goto LAB_00ccf680;
    goto LAB_00ccf670;
  case 0xa8:
    uVar3 = 0x16;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xa9:
    uVar3 = 0xe;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xaa:
    uVar3 = 0x1b;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xab:
    uVar3 = 0x1f;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xac:
    uVar3 = 0x12;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xad:
    uVar3 = 0x13;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0xae:
    uVar3 = 0x24;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x126:
    uVar3 = 0xb;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x127:
    uVar3 = 0xc;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x128:
    uVar3 = 0x20;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x129:
    uVar3 = 0x26;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x12a:
    uVar3 = 0x1e;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 299:
    uVar3 = 0x19;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 300:
    uVar3 = 0x17;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x12d:
    uVar3 = 10;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x12e:
    uVar3 = 8;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x12f:
    uVar3 = 0x23;
    lVar4 = *(long *)(param_1 + 0x528);
    break;
  case 0x172:
  case 0x173:
    uVar3 = 0x2a;
  default:
    lVar4 = *(long *)(param_1 + 0x528);
  }
  if (lVar4 != 0) {
LAB_00ccf670:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
LAB_00ccf680:
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (code *)0x0;
  FUN_0168e370(lVar4,param_2,uVar3,0,&local_c0);
  pcVar2 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    (*pcVar2)(&local_a0);
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  puVar1 = PTR_DAT_0271c800;
  uVar3 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0271c800 + (long)param_2 * 0x88 + 8)
  ;
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar1 + (long)param_2 * 0x88 + 0x18);
  if ((*(byte *)(lVar4 + 0x58) & 1) != 0) {
    local_140 = &LAB_00cd0180;
    local_138 = FUN_00cd01a0;
    local_130 = &LAB_00cd01b0;
    local_128 = &LAB_00cd01c0;
    auStack_120[0] = uVar3;
    FUN_00ffd120(param_1 + 0x100,puVar1 + (long)param_2 * 0x88 + 0x40,&local_140);
    pcVar2 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar2)(auStack_120);
    }
  }
  return;
}


