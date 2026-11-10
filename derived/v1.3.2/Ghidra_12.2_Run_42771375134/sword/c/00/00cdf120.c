/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cdf120; name: FUN_00cdf120
 */


void FUN_00cdf120(long param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_b0;
  code *local_a8;
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
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = 0;
  switch(param_3) {
  case 0xa5:
    uVar2 = 9;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xa6:
    uVar2 = 0xd;
    lVar3 = *(long *)(param_1 + 0x528);
    goto joined_r0x00cdf21c;
  case 0xa7:
    uVar2 = 0x1a;
    lVar3 = *(long *)(param_1 + 0x528);
joined_r0x00cdf21c:
    if (lVar3 == 0) goto LAB_00cdf178;
    goto LAB_00cdf168;
  case 0xa8:
    uVar2 = 0x16;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xa9:
    uVar2 = 0xe;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xaa:
    uVar2 = 0x1b;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xab:
    uVar2 = 0x1f;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xac:
    uVar2 = 0x12;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xad:
    uVar2 = 0x13;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0xae:
    uVar2 = 0x24;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x126:
    uVar2 = 0xb;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x127:
    uVar2 = 0xc;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x128:
    uVar2 = 0x20;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x129:
    uVar2 = 0x26;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x12a:
    uVar2 = 0x1e;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 299:
    uVar2 = 0x19;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 300:
    uVar2 = 0x17;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x12d:
    uVar2 = 10;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x12e:
    uVar2 = 8;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x12f:
    uVar2 = 0x23;
    lVar3 = *(long *)(param_1 + 0x528);
    break;
  case 0x172:
  case 0x173:
    uVar2 = 0x2a;
  default:
    lVar3 = *(long *)(param_1 + 0x528);
  }
  if (lVar3 != 0) {
LAB_00cdf168:
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
LAB_00cdf178:
  local_40 = 0;
  uStack_38 = 0;
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
  local_a8 = (code *)0x0;
  FUN_0168e370(lVar3,param_2,uVar2,0,&local_b0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(&local_90);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


