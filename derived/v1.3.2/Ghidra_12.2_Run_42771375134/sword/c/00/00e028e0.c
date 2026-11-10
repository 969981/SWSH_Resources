/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e028e0; name: FUN_00e028e0
 */


void FUN_00e028e0(long param_1,byte param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *local_160;
  long local_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  if ((param_2 & 1) == *(byte *)(param_1 + 0x360)) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x358) + 0x400);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar2 = PTR_DAT_02710a48;
  local_160 = PTR_DAT_02710a48 + 0x10;
  if ((param_2 & 1) == 0) {
    local_158 = *(long *)(lVar7 + 0xa008);
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
    }
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    if (*(code **)(lVar7 + 0xa020) != (code *)0x0) {
      (**(code **)(lVar7 + 0xa020))(lVar7 + 0xa030,auStack_130);
      local_150 = *(undefined8 *)(lVar7 + 0xa010);
      local_148 = *(code **)(lVar7 + 0xa018);
      local_140 = *(undefined8 *)(lVar7 + 0xa020);
      uStack_138 = *(undefined8 *)(lVar7 + 41000);
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    if (*(code **)(lVar7 + 0xa0a0) == (code *)0x0) goto LAB_00e02abc;
    (**(code **)(lVar7 + 0xa0a0))(lVar7 + 0xa0b0,auStack_b0);
    lVar4 = 0xa098;
    lVar5 = 0xa0a0;
    local_d0 = *(undefined8 *)(lVar7 + 0xa090);
    lVar6 = 0xa0a8;
  }
  else {
    local_158 = *(long *)(lVar7 + 0xa118);
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x10))();
    }
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    if (*(code **)(lVar7 + 0xa130) != (code *)0x0) {
      (**(code **)(lVar7 + 0xa130))(lVar7 + 0xa140,auStack_130);
      local_150 = *(undefined8 *)(lVar7 + 0xa120);
      local_148 = *(code **)(lVar7 + 0xa128);
      local_140 = *(undefined8 *)(lVar7 + 0xa130);
      uStack_138 = *(undefined8 *)(lVar7 + 0xa138);
    }
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    if (*(code **)(lVar7 + 0xa1b0) == (code *)0x0) goto LAB_00e02abc;
    (**(code **)(lVar7 + 0xa1b0))(lVar7 + 0xa1c0,auStack_b0);
    lVar4 = 0xa1a8;
    lVar5 = 0xa1b0;
    local_d0 = *(undefined8 *)(lVar7 + 0xa1a0);
    lVar6 = 0xa1b8;
  }
  local_c8 = *(code **)(lVar7 + lVar4);
  local_c0 = *(undefined8 *)(lVar7 + lVar5);
  uStack_b8 = *(undefined8 *)(lVar7 + lVar6);
LAB_00e02abc:
  local_160 = PTR_DAT_02715e08 + 0x10;
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (0 < *(int *)(param_1 + 0x140)) {
    lVar7 = 0;
    do {
      lVar4 = param_1 + lVar7 * 8;
      FUN_0074ff30(*(undefined8 *)(lVar4 + 0x148),*(undefined8 *)(lVar4 + 600));
      uVar3 = FUN_0074fac0(*(undefined4 *)(param_1 + 0x248),*(undefined8 *)(lVar4 + 0x148),
                           &local_160);
      *(undefined8 *)(lVar4 + 600) = uVar3;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x140));
  }
  *(byte *)(param_1 + 0x360) = param_2 & 1;
  local_160 = puVar2 + 0x10;
  if (local_158 == 0) {
    local_158 = 0;
    pcVar1 = local_c8;
  }
  else {
    FUN_006e2100(local_158,&local_160);
    lVar7 = local_158;
    local_158 = 0;
    pcVar1 = local_c8;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      pcVar1 = local_c8;
    }
  }
  local_c8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
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
    (*pcVar1)(auStack_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return;
}


