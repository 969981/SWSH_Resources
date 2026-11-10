/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdfb30; name: FUN_00fdfb30
 */


void FUN_00fdfb30(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *local_250;
  code *local_248;
  code *local_240;
  undefined1 *puStack_238;
  undefined1 auStack_230 [96];
  undefined1 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined1 *puStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [96];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  undefined1 auStack_b0 [96];
  long local_48;
  
  puVar1 = PTR_DAT_02710848;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x80);
  local_d0 = &LAB_00fe0210;
  local_c8 = FUN_00fe02d0;
  local_c0 = FUN_00fe02e0;
  local_b8 = &LAB_00fe02f0;
  if (lVar6 == 0) {
LAB_00fdfbd0:
    puStack_138 = (undefined1 *)0x0;
    local_140 = (code *)0x0;
    local_148 = (code *)0x0;
    local_150 = (undefined1 *)0x0;
    (*local_c0)(auStack_b0,auStack_130);
    local_140 = local_c0;
    puStack_138 = local_b8;
    local_150 = local_d0;
    local_148 = local_c8;
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    local_140 = (code *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    if (local_c0 != (code *)0x0) goto LAB_00fdfbd0;
  }
  FUN_0102d9a0(&local_48,lVar6,&local_150);
  if (local_48 == 0) {
LAB_00fdfc44:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(local_48 + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_01455eb0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_00fdfc48;
        }
      }
      goto LAB_00fdfc44;
    }
  }
LAB_00fdfc48:
  uVar5 = FUN_01455fa0(puVar7 + 10);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  *(undefined8 **)(param_1 + 8) = puVar7;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  pcVar2 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    puStack_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar2)(auStack_130);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x80);
  local_d0 = &LAB_00fe03f0;
  local_c8 = FUN_00fe04b0;
  local_c0 = FUN_00fe04c0;
  local_b8 = &LAB_00fe04d0;
  if (lVar6 == 0) {
LAB_00fdfd38:
    puStack_1b8 = (undefined1 *)0x0;
    local_1c0 = (code *)0x0;
    local_1c8 = (code *)0x0;
    local_1d0 = (undefined1 *)0x0;
    (*local_c0)(auStack_b0,auStack_1b0);
    local_1c0 = local_c0;
    puStack_1b8 = local_b8;
    local_1d0 = local_d0;
    local_1c8 = local_c8;
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    local_1c0 = (code *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    if (local_c0 != (code *)0x0) goto LAB_00fdfd38;
  }
  FUN_0102d9a0(&local_48,lVar6,&local_1d0);
  if (local_48 == 0) {
LAB_00fdfdac:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    puVar7 = *(undefined8 **)(local_48 + 0x60);
    if (puVar7 != (undefined8 *)0x0) {
      plVar3 = (long *)(**(code **)*puVar7)(puVar7);
      lVar4 = FUN_01455eb0();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar4) {
          puVar7 = puVar7 + -10;
          goto LAB_00fdfdb0;
        }
      }
      goto LAB_00fdfdac;
    }
  }
LAB_00fdfdb0:
  uVar5 = FUN_00fe0300(puVar7 + 10);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar7;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  pcVar2 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    puStack_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar2)(auStack_1b0);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  lVar6 = *(long *)(*(long *)puVar1 + 0x80);
  local_d0 = &LAB_00fe05d0;
  local_c8 = FUN_00fe0690;
  local_c0 = FUN_00fe06a0;
  local_b8 = &LAB_00fe06b0;
  if (lVar6 == 0) {
LAB_00fdfea0:
    puStack_238 = (undefined1 *)0x0;
    local_240 = (code *)0x0;
    local_248 = (code *)0x0;
    local_250 = (undefined1 *)0x0;
    (*local_c0)(auStack_b0,auStack_230);
    local_240 = local_c0;
    puStack_238 = local_b8;
    local_250 = local_d0;
    local_248 = local_c8;
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    local_240 = (code *)0x0;
    puStack_238 = (undefined1 *)0x0;
    local_250 = (undefined1 *)0x0;
    local_248 = (code *)0x0;
    if (local_c0 != (code *)0x0) goto LAB_00fdfea0;
  }
  FUN_0102d9a0(&local_48,lVar6,&local_250);
  if (local_48 != 0) {
    puVar7 = *(undefined8 **)(local_48 + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_00fdff18;
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_01455eb0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar7 = puVar7 + -10;
        goto LAB_00fdff18;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_00fdff18:
  uVar5 = FUN_00fe04e0(puVar7 + 10);
  if ((uVar5 & 1) == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar7;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  pcVar2 = local_248;
  if (local_248 != (code *)0x0) {
    local_240 = (code *)0x0;
    puStack_238 = (undefined1 *)0x0;
    local_250 = (undefined1 *)0x0;
    local_248 = (code *)0x0;
    (*pcVar2)(auStack_230);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  return;
}


