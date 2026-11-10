/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd0360; name: FUN_00cd0360
 */


void FUN_00cd0360(long param_1,long *param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (lVar6 != 0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    FUN_0168c890(lVar6,lVar5,0,0,&local_d0);
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(auStack_b0);
    }
    pcVar1 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar1)(&local_130);
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  lVar5 = *(long *)(param_1 + 0x10);
  local_158 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  local_160 = *param_2;
  if (local_160 == 0) {
    FUN_00cd0e60(param_1,&local_158,uVar7,&local_160);
  }
  else {
    plVar8 = (long *)(local_160 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_00cd0e60(param_1,&local_158,uVar7,&local_160);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_160 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    local_158 = 0;
  }
  local_150 = *(long *)(param_1 + 0xd8);
  local_d0 = *(long *)(param_1 + 0x60);
  if ((((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) && (local_d0 != -0x340d631b7bddd9bb)
      ) && (local_d0 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  local_150 = *(long *)(param_1 + 0xe0);
  local_d0 = *(long *)(param_1 + 0x70);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  local_150 = *(long *)(param_1 + 0xe8);
  local_d0 = *(long *)(param_1 + 0x80);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  local_150 = *(long *)(param_1 + 0xf0);
  local_d0 = *(long *)(param_1 + 0x90);
  if ((((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) && (local_d0 != -0x340d631b7bddd9bb)
      ) && (local_d0 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  local_150 = *(long *)(param_1 + 0xf8);
  local_d0 = *(long *)(param_1 + 0xa0);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  local_150 = *(long *)(param_1 + 0x100);
  local_d0 = *(long *)(param_1 + 0xb0);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar5 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar5);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  uVar3 = FUN_0087afd0(*param_2);
  FUN_014ca220(lVar5,0,uVar3,3,0,1);
  uVar3 = FUN_0087ac70(*param_2);
  FUN_014ca220(lVar5,1,uVar3,3,0,1);
  local_150 = *(long *)(param_1 + 0x108);
  local_d0 = *(long *)(param_1 + 0x68);
  if ((((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) && (local_d0 != -0x340d631b7bddd9bb)
      ) && (local_d0 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  uVar3 = FUN_0087ac30(*param_2,1);
  FUN_014ca220(lVar5,0,uVar3,3,1,1);
  local_150 = *(long *)(param_1 + 0x110);
  local_d0 = *(long *)(param_1 + 0x78);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  uVar3 = FUN_0087ac30(*param_2,2);
  FUN_014ca220(lVar5,0,uVar3,3,1,1);
  local_150 = *(long *)(param_1 + 0x110);
  local_d0 = *(long *)(param_1 + 0x88);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  uVar3 = FUN_0087ac30(*param_2,5);
  FUN_014ca220(lVar5,0,uVar3,3,1,1);
  local_150 = *(long *)(param_1 + 0x110);
  local_d0 = *(long *)(param_1 + 0xb8);
  if ((((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) && (local_d0 != -0x340d631b7bddd9bb)
      ) && (local_d0 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  uVar3 = FUN_0087ac30(*param_2,4);
  FUN_014ca220(lVar5,0,uVar3,3,1,1);
  local_150 = *(long *)(param_1 + 0x110);
  local_d0 = *(long *)(param_1 + 0xa8);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  uVar3 = FUN_0087ac30(*param_2,3);
  FUN_014ca220(lVar5,0,uVar3,3,1,1);
  local_150 = *(long *)(param_1 + 0x110);
  local_d0 = *(long *)(param_1 + 0x98);
  if (((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) &&
     ((local_d0 != -0x340d631b7bddd9bb && (local_d0 != 0)))) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  uVar3 = FUN_0087cdb0(*param_2);
  FUN_014c93c0(lVar5,0,uVar3);
  local_150 = *(long *)(param_1 + 0xd0);
  local_d0 = *(long *)(param_1 + 0x48);
  if ((((local_150 != -0x340d631b7bddd9bb) && (local_150 != 0)) && (local_d0 != -0x340d631b7bddd9bb)
      ) && (local_d0 != 0)) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
    if (lVar6 == 0) {
      FUN_0077eb10(uVar7,&local_150,0);
    }
    else {
      plVar8 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      FUN_0077eb10(uVar7,&local_150,lVar6);
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
    FUN_0167cce0(*(undefined8 *)(param_1 + 0x10),&local_d0,10);
  }
  local_168 = *param_2;
  if (local_168 == 0) {
    FUN_00cd0f80(param_1,&local_168);
    lVar6 = *param_2;
  }
  else {
    plVar8 = (long *)(local_168 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    FUN_00cd0f80(param_1,&local_168);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    local_168 = 0;
    lVar6 = *param_2;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x58);
  bVar2 = FUN_00879860(lVar6);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | bVar2 & 1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


