/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f00460; name: FUN_00f00460
 */


void FUN_00f00460(long param_1)

{
  code *pcVar1;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [96];
  
  if (*(long *)(param_1 + 0x198) != 0) {
    FUN_00da2c20(*(long *)(param_1 + 0x198),&local_c0);
    local_c0 = FUN_00f028b0;
    local_b8 = FUN_00f03840;
    local_b0 = &LAB_00f03850;
    puStack_a8 = &LAB_00f03860;
    (**(code **)(**(long **)(param_1 + 0x198) + 0x100))(*(long **)(param_1 + 0x198),&local_c0);
    pcVar1 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (code *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(auStack_a0);
    }
    if (*(long *)(param_1 + 0x1a0) != 0) {
      FUN_00da2c20(*(long *)(param_1 + 0x1a0),&local_c0);
      local_c0 = FUN_00f028b0;
      local_b8 = FUN_00f03840;
      local_b0 = &LAB_00f03850;
      puStack_a8 = &LAB_00f03860;
      (**(code **)(**(long **)(param_1 + 0x1a0) + 0x100))(*(long **)(param_1 + 0x1a0),&local_c0);
      pcVar1 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_c0 = (code *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar1)(auStack_a0);
      }
      if (*(long *)(param_1 + 0x1a8) != 0) {
        FUN_00da2c20(*(long *)(param_1 + 0x1a8),&local_c0);
        local_c0 = FUN_00f028b0;
        local_b8 = FUN_00f03840;
        local_b0 = &LAB_00f03850;
        puStack_a8 = &LAB_00f03860;
        (**(code **)(**(long **)(param_1 + 0x1a8) + 0x100))(*(long **)(param_1 + 0x1a8),&local_c0);
        pcVar1 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          puStack_a8 = (undefined1 *)0x0;
          local_c0 = (code *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar1)(auStack_a0);
        }
        if (*(long *)(param_1 + 0x1b0) != 0) {
          FUN_00da2c20(*(long *)(param_1 + 0x1b0),&local_c0);
          local_c0 = FUN_00f028b0;
          local_b8 = FUN_00f03840;
          local_b0 = &LAB_00f03850;
          puStack_a8 = &LAB_00f03860;
          (**(code **)(**(long **)(param_1 + 0x1b0) + 0x100))(*(long **)(param_1 + 0x1b0),&local_c0)
          ;
          pcVar1 = local_b8;
          if (local_b8 != (code *)0x0) {
            local_b0 = (undefined1 *)0x0;
            puStack_a8 = (undefined1 *)0x0;
            local_c0 = (code *)0x0;
            local_b8 = (code *)0x0;
            (*pcVar1)(auStack_a0);
          }
          if (*(long *)(param_1 + 0x1b8) != 0) {
            FUN_00da2c20(*(long *)(param_1 + 0x1b8),&local_c0);
            local_c0 = FUN_00f028b0;
            local_b8 = FUN_00f03840;
            local_b0 = &LAB_00f03850;
            puStack_a8 = &LAB_00f03860;
            (**(code **)(**(long **)(param_1 + 0x1b8) + 0x100))
                      (*(long **)(param_1 + 0x1b8),&local_c0);
            pcVar1 = local_b8;
            if (local_b8 != (code *)0x0) {
              local_b0 = (undefined1 *)0x0;
              puStack_a8 = (undefined1 *)0x0;
              local_c0 = (code *)0x0;
              local_b8 = (code *)0x0;
              (*pcVar1)(auStack_a0);
            }
            if (*(long *)(param_1 + 0x1c0) != 0) {
              FUN_00da2c20(*(long *)(param_1 + 0x1c0),&local_c0);
              local_c0 = FUN_00f028b0;
              local_b8 = FUN_00f03840;
              local_b0 = &LAB_00f03850;
              puStack_a8 = &LAB_00f03860;
              (**(code **)(**(long **)(param_1 + 0x1c0) + 0x100))
                        (*(long **)(param_1 + 0x1c0),&local_c0);
              pcVar1 = local_b8;
              if (local_b8 != (code *)0x0) {
                local_b0 = (undefined1 *)0x0;
                puStack_a8 = (undefined1 *)0x0;
                local_c0 = (code *)0x0;
                local_b8 = (code *)0x0;
                (*pcVar1)(auStack_a0);
              }
            }
          }
        }
      }
    }
  }
  return;
}


