/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad8be0; name: FUN_00ad8be0
 */


void FUN_00ad8be0(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  byte *pbVar2;
  ulong local_f8;
  byte *pbStack_f0;
  undefined8 local_e8;
  long local_e0;
  ulong local_d8;
  byte *pbStack_d0;
  undefined8 local_c8;
  long local_c0;
  byte local_b8 [64];
  byte local_78;
  byte abStack_77 [15];
  byte local_68;
  byte abStack_67 [15];
  char local_58;
  
  uVar1 = (**(code **)(*param_1 + 400))();
  if (((uVar1 & 1) != 0) && ((int)param_1[0x9a] == 2)) {
    uVar1 = 0xcbf29ce484222645;
    FUN_00ad8a10(local_b8,param_1,param_3,param_4);
    if (local_58 != '\0') {
      pbStack_d0 = &local_78;
      local_d8 = 0xcbf29ce484222645;
      if (local_78 != 0) {
        local_d8 = 0xcbf29ce484222645;
        pbVar2 = abStack_77;
        do {
          local_d8 = (local_d8 ^ local_78) * 0x100000001b3;
          local_78 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (local_78 != 0);
      }
      local_f8 = 0xcbf29ce484222645;
      local_c8 = 0xf;
      local_c0 = 0;
      pbStack_f0 = &local_68;
      if (local_68 != 0) {
        local_f8 = 0xcbf29ce484222645;
        pbVar2 = abStack_67;
        do {
          local_f8 = (local_f8 ^ local_68) * 0x100000001b3;
          local_68 = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (local_68 != 0);
      }
      local_e8 = 0xf;
      local_e0 = 0;
      FUN_00ad5db0(param_1,&local_d8,&local_f8);
      if (local_e0 != 0) {
        (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
        local_e0 = 0;
      }
      if (local_c0 != 0) {
        (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
      }
    }
    if (local_b8[0] != 0) {
      pbVar2 = (byte *)((ulong)local_b8 | 1);
      do {
        uVar1 = (uVar1 ^ local_b8[0]) * 0x100000001b3;
        local_b8[0] = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while (local_b8[0] != 0);
    }
    pbStack_d0 = local_b8;
    local_c8 = 0x3f;
    local_c0 = 0;
    local_d8 = uVar1;
    FUN_00ad5e70(param_1,&local_d8,param_2);
    if (local_c0 != 0) {
      (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    }
  }
  return;
}


