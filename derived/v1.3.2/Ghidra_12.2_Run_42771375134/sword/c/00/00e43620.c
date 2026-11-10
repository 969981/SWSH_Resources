/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e43620; name: FUN_00e43620
 */


void FUN_00e43620(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long alStack_90 [12];
  
  puVar2 = (undefined1 *)FUN_00add530(&local_b0);
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  local_b0 = puVar2;
  FUN_006d9640(param_1,&local_b0);
  if (local_b0 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = (undefined1 *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(puVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(param_1 + 0x568);
  *(undefined1 **)(param_1 + 0x568) = puVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar3 = FUN_00c754c0(param_1,&local_b0);
  if (lVar3 != 0) {
    local_150 = 0x6a4580e4b07e2f7a;
    local_148 = "Field/PlayVfx";
    local_140 = 0xd;
    local_138 = 0;
    local_b0 = &LAB_00e47e20;
    local_a8 = FUN_00e48680;
    local_a0 = &LAB_00e48830;
    local_98 = &LAB_00e48840;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    alStack_90[0] = param_1;
    FUN_0069c2c0(lVar3,&local_150,&local_b0,&local_130);
    pcVar1 = local_128;
    if (local_128 != (code *)0x0) {
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = (code *)0x0;
      (*pcVar1)(auStack_110);
    }
    pcVar1 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      local_98 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar1)(alStack_90);
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
    }
  }
  return;
}


