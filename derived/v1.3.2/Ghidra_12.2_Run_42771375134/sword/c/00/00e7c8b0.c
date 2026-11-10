/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7c8b0; name: FUN_00e7c8b0
 */


undefined8 FUN_00e7c8b0(long *param_1)

{
  ulong uVar1;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x54) != 0)) {
    local_50 = *param_1;
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    uVar1 = FUN_00e7cb20(&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if ((uVar1 & 1) == 0) {
      uVar1 = FUN_00e7c3a0(param_1,0);
      if ((uVar1 & 1) != 0) {
        return 0;
      }
      local_50 = -0x6a6da842a3e8b9ce;
      local_48 = "fi_wait01_loop";
      local_40 = 0xe;
      uStack_38 = 0;
      uVar1 = FUN_00e7be90(param_1,&local_50);
      if ((uVar1 & 1) == 0) {
        local_70 = 0x86191c5f439965f1;
        local_68 = "fi_wait02_loop";
        local_60 = 0xe;
        uStack_58 = 0;
        uVar1 = FUN_00e7be90(param_1,&local_70);
        if ((uVar1 & 1) == 0) {
          local_90 = 0xc0195ef1bc25b328;
          local_88 = "fi_wait03_loop";
          local_80 = 0xe;
          uStack_78 = 0;
          uVar1 = FUN_00e7be90(param_1,&local_90);
          if ((uVar1 & 1) == 0) {
            local_b0 = 0xbc8624845cda6f1f;
            local_a8 = "fi_wait04_loop";
            local_a0 = 0xe;
            uStack_98 = 0;
            uVar1 = FUN_00e7be90(param_1,&local_b0);
            if ((uVar1 & 1) == 0) {
              local_d0 = 0x5f008d5a90dd45f6;
              local_c8 = "fi_wait05_loop";
              local_c0 = 0xe;
              uStack_b8 = 0;
              uVar1 = FUN_00e7be90(param_1,&local_d0);
              if ((uVar1 & 1) == 0) {
                local_f0 = 0x392d91228d387ee9;
                local_e8 = "fi1001_dowsingwait01_loop";
                local_e0 = 0x19;
                uStack_d8 = 0;
                uVar1 = FUN_00e7be90(param_1,&local_f0);
                if ((uVar1 & 1) == 0) {
                  local_110 = 0x248cb78e45b7cfed;
                  local_108 = "rl_wait";
                  local_100 = 7;
                  uStack_f8 = 0;
                  uVar1 = FUN_00e7be90(param_1,&local_110);
                  if ((uVar1 & 1) == 0) {
                    local_130 = 0x4d1e146afda47076;
                    local_128 = "ra_wait01_loop";
                    local_120 = 0xe;
                    uStack_118 = 0;
                    uVar1 = FUN_00e7be90(param_1,&local_130);
                    if ((uVar1 & 1) == 0) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


