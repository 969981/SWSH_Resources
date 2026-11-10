/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c2b410; name: FUN_00c2b410
 */


void FUN_00c2b410(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  bool bVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long *local_140;
  undefined4 local_138;
  long local_130;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  long local_a8;
  long local_58;
  
  (**(code **)(*param_1 + 0x10))(&local_58);
  lVar3 = local_58;
  if (local_58 == 0) {
    lVar5 = 0;
  }
  else {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    lVar5 = local_58;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c2b494;
    }
  }
  bVar1 = true;
LAB_00c2b494:
  local_d0 = (undefined1 *)0x0;
  puStack_c8 = (undefined1 *)0x0;
  local_a8 = lVar3;
  local_e0 = (undefined1 *)0x0;
  local_d8 = (code *)0x0;
  local_c0 = param_1;
  local_b8 = param_3;
  uStack_b4 = param_4;
  local_b0 = param_5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_e0 = &LAB_00c2c350;
  local_d8 = FUN_00c2c3a0;
  local_d0 = &LAB_00c2c3e0;
  puStack_c8 = &LAB_00c2c410;
  local_150 = (undefined1 *)0x0;
  puStack_148 = (undefined1 *)0x0;
  local_160 = (undefined1 *)0x0;
  local_158 = (code *)0x0;
  local_140 = param_1;
  local_138 = param_4;
  local_130 = lVar5;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_160 = &LAB_00c2c440;
  local_158 = FUN_00c2c470;
  local_150 = &LAB_00c2c4b0;
  puStack_148 = &LAB_00c2c4e0;
  uVar4 = FUN_0122e2b0(param_5,&local_e0,&local_160);
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar2)(&local_140);
  }
  pcVar2 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined1 *)0x0;
    puStack_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar2)(&local_c0);
  }
  if ((uVar4 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return;
}


