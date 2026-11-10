/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011361d0; name: FUN_011361d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011361d0(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 auStack_120 [96];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x80) == 0) {
    puVar6 = (undefined1 *)0x0;
LAB_01136218:
    local_c0 = (undefined1 *)0x0;
  }
  else {
    FUN_01128420(&local_c0);
    puVar6 = local_c0;
    if (local_c0 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      goto LAB_01136218;
    }
  }
  lVar2 = FUN_01225ec0(puVar6 + 0x140);
  uVar4 = *(undefined4 *)(lVar2 + 4);
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x90) + 0x60), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)(puVar7);
    uVar3 = FUN_01136750();
    if ((uVar3 & 1) != 0) {
      uVar3 = puVar7[3] & 0xffffffffffffff00;
      uVar5 = puVar7[3] & 0xff;
      goto LAB_01136268;
    }
  }
  uVar3 = 0;
  uVar5 = 0;
LAB_01136268:
  local_38 = 0;
  uVar3 = FUN_011fec20(*(undefined8 *)PTR_DAT_02718f20,uVar4,uVar5 | uVar3,0);
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_1 + 0x80) == 0) {
      local_c0 = (undefined1 *)0x0;
      _DAT_00000064 = 1;
    }
    else {
      FUN_01128420(&local_c0);
      *(undefined4 *)(local_c0 + 100) = 1;
      if (local_c0 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
        local_c0 = (undefined1 *)0x0;
      }
    }
    FUN_010364c0(*(undefined8 *)(param_1 + 0x340),1);
    FUN_01037030(*(undefined8 *)(param_1 + 0x348));
    uVar4 = 9;
  }
  else {
    local_40 = 0x65a873e5d75aba64;
    local_c0 = &LAB_01136ad0;
    local_b8 = FUN_01136b40;
    local_b0 = &LAB_01136b50;
    local_a8 = &LAB_01136b60;
    local_140 = &LAB_01136b70;
    local_138 = FUN_01136b80;
    local_130 = &LAB_01136b90;
    local_128 = &LAB_01136ba0;
    alStack_a0[0] = param_1;
    FUN_011354c0(param_1 + 0xa0,0,&local_40,&local_c0,&local_140);
    pcVar1 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      local_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar1)(auStack_120);
    }
    pcVar1 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(alStack_a0);
    }
    uVar4 = 8;
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  return;
}


