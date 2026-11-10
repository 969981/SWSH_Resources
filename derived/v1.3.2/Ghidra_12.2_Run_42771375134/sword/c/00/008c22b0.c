/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c22b0; name: FUN_008c22b0
 */


void FUN_008c22b0(long param_1)

{
  char cVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_150;
  long local_148;
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
  long local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar4 = *(long *)(param_1 + 0x5d8);
  plVar5 = *(long **)(lVar4 + 0x10);
  if (plVar5 != (long *)0x0) {
    (**(code **)(plVar5[9] + 0x10))();
    lVar4 = *(long *)(param_1 + 0x5d8);
  }
  lVar4 = (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined4 *)(lVar4 + 0x1c));
  FUN_00ff86a0(&local_e0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar6 = *(long *)(local_e0 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_70 = 0;
  local_68 = 0;
  local_148 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
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
  lVar7 = *(long *)(param_1 + 0x2b0);
  if ((lVar7 != 0) && ((**(code **)(*(long *)(lVar7 + 0x48) + 0x10))(), local_e0 != 0)) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = lVar7;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = lVar6;
  if (local_148 != 0) {
    plVar3 = (long *)(local_148 + 0x48);
    local_148 = lVar6;
    (**(code **)(*plVar3 + 0x18))();
    lVar7 = local_148;
  }
  local_148 = lVar7;
  local_d8 = 0x4fe47f6a7bfcdcc9;
  local_c0 = 0xe7b0da3f7b7859c;
  local_d0 = 0x591cd0c96365c25a;
  local_140 = 0xf86b70deb1ed6cd1;
  uStack_138 = 0x157260844e45b6ee;
  local_68 = 0xb0c3057db2d8e5cc;
  FUN_016ab680(*(undefined8 *)(param_1 + 0x5f8),&local_e0,&local_148,&local_f0);
  uVar8 = *(undefined8 *)(param_1 + 0x5f8);
  local_58 = lVar4;
  if (lVar4 == 0) {
    FUN_016ab860(uVar8,&local_58,0,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    cVar1 = FUN_0087b890(0);
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021451d0);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | cVar1 != '\0';
    local_150 = 0;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,cVar1 != '\0');
    local_d8 = 0x66823dfcbac8ad16;
    local_c0 = 0x2ddab296c98a715f;
    local_140 = 0xf86b70deb1ed6cd1;
    uStack_138 = 0x157260844e45b6ee;
    local_d0 = 0x5d61fda0df8b31a1;
    local_68 = 0xb1b8fb2a4da26649;
    FUN_016ab680(*(undefined8 *)(param_1 + 0x600),&local_e0,&local_148,&local_f0);
    local_58 = lVar4;
    FUN_016ab860(*(undefined8 *)(param_1 + 0x600),&local_58,1,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    bVar2 = FUN_0087b890(0);
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145208);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 1 < bVar2;
    local_150 = 0x100000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,1 < bVar2);
    local_d8 = 0xd4aa34ff0386286b;
    local_c0 = 0xd0322e22b0333de6;
    local_140 = 0xf86b70deb1ed6cd1;
    uStack_138 = 0x157260844e45b6ee;
    local_d0 = 0xe518fd2e045a9668;
    local_68 = 0xf4fd489ef560437e;
    FUN_016ab680(*(undefined8 *)(param_1 + 0x608),&local_e0,&local_148,&local_f0);
    local_58 = lVar4;
    FUN_016ab860(*(undefined8 *)(param_1 + 0x608),&local_58,2,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    bVar2 = FUN_0087b890(0);
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145240);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 2 < bVar2;
    local_150 = 0x200000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,2 < bVar2);
    local_d8 = 0x5d839479fd534ac0;
    local_c0 = 0xc7dec682367dbdb9;
    local_140 = 0xf86b70deb1ed6cd1;
    uStack_138 = 0x157260844e45b6ee;
    local_d0 = 0x49bc7cc4a8acf127;
    local_68 = 0xe21d8b6682b9bf73;
    FUN_016ab680(*(undefined8 *)(param_1 + 0x610),&local_e0,&local_148,&local_f0);
    local_58 = lVar4;
    FUN_016ab860(*(undefined8 *)(param_1 + 0x610),&local_58,3,0);
  }
  else {
    plVar3 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    FUN_016ab860(uVar8,&local_58,0,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    cVar1 = FUN_0087b890(lVar4);
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021451d0);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | cVar1 != '\0';
    local_150 = 0;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,cVar1 != '\0');
    local_d8 = 0x66823dfcbac8ad16;
    local_c0 = 0x2ddab296c98a715f;
    local_140 = 0xf86b70deb1ed6cd1;
    uStack_138 = 0x157260844e45b6ee;
    local_d0 = 0x5d61fda0df8b31a1;
    local_68 = 0xb1b8fb2a4da26649;
    FUN_016ab680(*(undefined8 *)(param_1 + 0x600),&local_e0,&local_148,&local_f0);
    uVar8 = *(undefined8 *)(param_1 + 0x600);
    local_58 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
    FUN_016ab860(uVar8,&local_58,1,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    bVar2 = FUN_0087b890(lVar4);
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145208);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 1 < bVar2;
    local_150 = 0x100000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,1 < bVar2);
    local_d8 = 0xd4aa34ff0386286b;
    local_c0 = 0xd0322e22b0333de6;
    local_140 = 0xf86b70deb1ed6cd1;
    uStack_138 = 0x157260844e45b6ee;
    local_d0 = 0xe518fd2e045a9668;
    local_68 = 0xf4fd489ef560437e;
    FUN_016ab680(*(undefined8 *)(param_1 + 0x608),&local_e0,&local_148,&local_f0);
    uVar8 = *(undefined8 *)(param_1 + 0x608);
    local_58 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
    FUN_016ab860(uVar8,&local_58,2,0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    bVar2 = FUN_0087b890(lVar4);
    lVar7 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145240);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | 2 < bVar2;
    local_150 = 0x200000000;
    FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,2 < bVar2);
    local_d8 = 0x5d839479fd534ac0;
    local_c0 = 0xc7dec682367dbdb9;
    local_140 = 0xf86b70deb1ed6cd1;
    uStack_138 = 0x157260844e45b6ee;
    local_d0 = 0x49bc7cc4a8acf127;
    local_68 = 0xe21d8b6682b9bf73;
    FUN_016ab680(*(undefined8 *)(param_1 + 0x610),&local_e0,&local_148,&local_f0);
    uVar8 = *(undefined8 *)(param_1 + 0x610);
    local_58 = lVar4;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar3);
    FUN_016ab860(uVar8,&local_58,3,0);
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  bVar2 = FUN_0087b890(lVar4);
  lVar4 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145278);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | 3 < bVar2;
  local_150 = 0x300000000;
  FUN_016b81d0(*(undefined8 *)(param_1 + 0x5e8),&local_150,3 < bVar2);
  (**(code **)(**(long **)(param_1 + 0x5e8) + 0x50))();
  local_150 = 0;
  FUN_016b7990(*(undefined8 *)(param_1 + 0x5e8),&local_150,1,0);
  FUN_016b2d70(*(undefined8 *)(param_1 + 0x5e8),1);
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x5e8),1);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    local_148 = 0;
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  (**(code **)(plVar5[9] + 0x18))(plVar5 + 9);
  return;
}


