/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d80e00; name: FUN_00d80e00
 */


void FUN_00d80e00(long param_1)

{
  byte local_18 [4];
  int local_14;
  
  if (*(int *)(*(long *)(param_1 + 0x5f0) + 0xe8) != 0) {
    local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
    local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8),local_14);
    if (local_18[0] < 7) {
      FUN_00d81a80(param_1,&local_14,local_18);
    }
    if (1 < *(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8)) {
      local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
      local_14 = local_14 + 1;
      local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8));
      if (local_18[0] < 7) {
        FUN_00d81a80(param_1,&local_14,local_18);
      }
      if (2 < *(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8)) {
        local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
        local_14 = local_14 + 2;
        local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8));
        if (local_18[0] < 7) {
          FUN_00d81a80(param_1,&local_14,local_18);
        }
        if (3 < *(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8)) {
          local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
          local_14 = local_14 + 3;
          local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8));
          if (local_18[0] < 7) {
            FUN_00d81a80(param_1,&local_14,local_18);
          }
          if (4 < *(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8)) {
            local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
            local_14 = local_14 + 4;
            local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8));
            if (local_18[0] < 7) {
              FUN_00d81a80(param_1,&local_14,local_18);
            }
            if (5 < *(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8)) {
              local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
              local_14 = local_14 + 5;
              local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8));
              if (local_18[0] < 7) {
                FUN_00d81a80(param_1,&local_14,local_18);
              }
              if (6 < *(uint *)(*(long *)(param_1 + 0x5f0) + 0xe8)) {
                local_14 = FUN_016c0020(*(undefined8 *)(param_1 + 0x5e8));
                local_14 = local_14 + 6;
                local_18[0] = FUN_016c3340(*(undefined8 *)(param_1 + 0x5e8));
                if (local_18[0] < 7) {
                  FUN_00d81a80(param_1,&local_14,local_18);
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


