/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd1280; name: FUN_00cd1280
 */


void FUN_00cd1280(long *param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6e;
  long local_68 [2];
  undefined1 local_58;
  byte local_57;
  undefined1 local_56;
  
  lVar1 = param_1[0x56];
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0xbb];
  lVar2 = *(long *)(lVar1 + 0x2e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x2f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  switch(param_2) {
  case 1:
    puVar5 = &UNK_0215ded0;
    break;
  case 2:
    puVar5 = &UNK_0215dee8;
    break;
  case 3:
    puVar5 = &UNK_0215df00;
    break;
  case 4:
    puVar5 = &UNK_0215df30;
    break;
  case 5:
    puVar5 = &UNK_0215df18;
    break;
  case 6:
    puVar5 = &UNK_0215df48;
    break;
  case 7:
    puVar5 = &UNK_0215df60;
    break;
  case 8:
    puVar5 = &UNK_0215df78;
    break;
  case 9:
    puVar5 = &UNK_0215df90;
    break;
  case 10:
    puVar5 = &UNK_0215dfa8;
    break;
  case 0xb:
    puVar5 = &UNK_0215dfc0;
    break;
  case 0xc:
    puVar5 = &UNK_0215dfd8;
    break;
  case 0xd:
    puVar5 = &UNK_0215dff0;
    break;
  default:
    puVar5 = &UNK_0215deb8;
  }
  local_68[1] = 0;
  local_56 = 1;
  local_57 = *(byte *)((long)param_1 + 0x6f1) ^ 1;
  local_58 = puVar5[0x11];
  FUN_0077eb10(param_1[0xdf],puVar5 + 8,lVar2);
  FUN_014c62d0(lVar4,lVar3,lVar2);
  local_68[0] = lVar3;
  if ((param_3 & 1) != 0) {
    FUN_00ffa3d0(param_1,0);
  }
  if (puVar5[0x10] == '\0') {
    FUN_01038170(param_1,local_68);
  }
  else {
    local_6e = 0xffff;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_70 = 1;
    local_a8 = param_1[0xe0];
    local_a0 = param_1[0xe1];
    uStack_98 = 0;
    FUN_01037680(param_1,5);
    (**(code **)(*param_1 + 0x88))(param_1,local_68,&local_a8);
  }
  (**(code **)(*(long *)(param_1[0xba] + 0x60) + 8))((long *)(param_1[0xba] + 0x60),puVar5[0x12]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  return;
}


