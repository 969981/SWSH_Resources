/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01318620; name: FUN_01318620
 */


void FUN_01318620(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  long alStack_1a0 [12];
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long alStack_120 [12];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 **local_a0 [12];
  
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  lVar4 = *(long *)(param_1 + 0x98);
  while (lVar2 = lVar4, lVar2 != lVar1) {
    lVar4 = lVar2 + -0x40;
    if (*(long *)(lVar2 + -0x10) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + -0x10) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + -0x10) = 0;
    }
  }
  *(long *)(param_1 + 0x98) = lVar1;
  local_140 = &LAB_01318f90;
  local_138 = FUN_013190a0;
  local_a0[0] = &local_140;
  local_130 = &LAB_013192d0;
  local_128 = &LAB_013192e0;
  local_c0 = PTR_LAB_02727728;
  local_b8 = (code *)PTR_FUN_02727730;
  local_b0 = PTR_LAB_02727738;
  local_a8 = PTR_LAB_02727740;
  alStack_120[0] = param_1;
  FUN_01306a00(*param_2,&local_c0);
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  pcVar3 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar3)(alStack_120);
  }
  local_1c0 = &LAB_013192f0;
  local_1b8 = FUN_01319440;
  local_1b0 = &LAB_013196e0;
  local_1a8 = &LAB_013196f0;
  local_c0 = PTR_LAB_02727810;
  local_b8 = (code *)PTR_FUN_02727818;
  local_b0 = PTR_LAB_02727820;
  local_a8 = PTR_LAB_02727828;
  alStack_1a0[0] = param_1;
  local_a0[0] = &local_1c0;
  FUN_01306a00(*param_2,&local_c0);
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  pcVar3 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (undefined1 *)0x0;
    local_1c0 = (undefined1 *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar3)(alStack_1a0);
  }
  return;
}


