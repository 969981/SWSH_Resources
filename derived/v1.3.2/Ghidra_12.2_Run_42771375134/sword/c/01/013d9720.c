/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d9720; name: FUN_013d9720
 */


void FUN_013d9720(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  long alStack_1b0 [13];
  long local_148;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  long *local_120 [12];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 **local_a0 [12];
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x568);
  *(undefined8 *)(param_1 + 0x568) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar4)(puVar4);
  lVar2 = FUN_0132d9a0();
  for (; plVar3 != (long *)lVar2; plVar3 = (long *)*plVar3) {
  }
  lVar2 = puVar4[0x61];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_120[0] = &local_38;
  local_140 = &LAB_013ddea0;
  local_138 = FUN_013ddee0;
  local_a0[0] = &local_140;
  local_130 = &LAB_013ddef0;
  local_38 = 0;
  local_128 = &LAB_013ddf00;
  local_c0 = PTR_LAB_02727728;
  local_b8 = (code *)PTR_FUN_02727730;
  local_b0 = PTR_LAB_02727738;
  local_a8 = PTR_LAB_02727740;
  FUN_01306a00(lVar2,&local_c0);
  pcVar1 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar1)(local_a0);
  }
  pcVar1 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    local_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar1)(local_120);
  }
  if (local_38 != 0) {
    local_1d0 = &LAB_013ddf10;
    local_1c8 = FUN_013ddfc0;
    local_1c0 = &LAB_013ddfd0;
    local_1b8 = &LAB_013ddfe0;
    alStack_1b0[0] = param_1;
    FUN_01309760(&local_148,local_38,&local_1d0);
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
      local_148 = 0;
    }
    pcVar1 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = (undefined1 *)0x0;
      local_1b8 = (undefined1 *)0x0;
      local_1d0 = (undefined1 *)0x0;
      local_1c8 = (code *)0x0;
      (*pcVar1)(alStack_1b0);
    }
    if ((*(long *)(param_1 + 0x568) != 0) && (*(int *)(*(long *)(param_1 + 0x568) + 0x54) != 0)) {
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


