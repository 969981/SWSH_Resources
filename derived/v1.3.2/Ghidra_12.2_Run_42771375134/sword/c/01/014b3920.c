/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b3920; name: FUN_014b3920
 */


ulong FUN_014b3920(int param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  byte *local_68;
  undefined8 uStack_60;
  long local_58;
  byte local_50 [32];
  
  uVar1 = snprintf((char *)local_50,0x20,"PM%03dVC",param_1);
  if (param_1 == 0x85) {
    local_70 = 0xcbf29ce484222645;
    if (param_3 == 1) {
      lVar2 = *(long *)PTR_DAT_027107a8 + 0x108;
      if (local_50[0] != 0) {
        pbVar4 = (byte *)((ulong)local_50 | 1);
        do {
          local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
          local_50[0] = *pbVar4;
          pbVar4 = pbVar4 + 1;
        } while (local_50[0] != 0);
      }
      local_90 = 0xd833d9a941d357f8;
      local_88 = "PM133_04";
    }
    else {
      lVar2 = *(long *)PTR_DAT_027107a8 + 0x108;
      if (param_3 == 2) {
        if (local_50[0] != 0) {
          pbVar4 = (byte *)((ulong)local_50 | 1);
          do {
            local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (local_50[0] != 0);
        }
        local_90 = 0xd833dba941d35b5e;
        local_88 = "PM133_06";
      }
      else {
        if (local_50[0] != 0) {
          pbVar4 = (byte *)((ulong)local_50 | 1);
          do {
            local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (local_50[0] != 0);
        }
        local_90 = 0xd833dea941d36077;
        local_88 = "PM133_01";
      }
    }
  }
  else {
    if (param_1 != 0x19) {
      return (ulong)uVar1;
    }
    if (param_3 == 1) {
      lVar2 = *(long *)PTR_DAT_027107a8 + 0x108;
      local_70 = 0xcbf29ce484222645;
      if (param_2 == 0) {
        if (local_50[0] != 0) {
          pbVar4 = (byte *)((ulong)local_50 | 1);
          do {
            local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (local_50[0] != 0);
        }
        local_90 = 0xda8b082f6aac4dd2;
        local_88 = "PM025_06";
      }
      else {
        if (local_50[0] != 0) {
          pbVar4 = (byte *)((ulong)local_50 | 1);
          do {
            local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (local_50[0] != 0);
        }
        local_90 = 0xda8b0a2f6aac5138;
        local_88 = "PM025_08";
      }
    }
    else {
      local_70 = 0xcbf29ce484222645;
      lVar2 = *(long *)PTR_DAT_027107a8 + 0x108;
      if (param_3 == 2) {
        if (local_50[0] != 0) {
          pbVar4 = (byte *)((ulong)local_50 | 1);
          do {
            local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (local_50[0] != 0);
        }
        local_90 = 0xda8e882f6aaf5d29;
        local_88 = "PM025_10";
      }
      else {
        if (local_50[0] != 0) {
          pbVar4 = (byte *)((ulong)local_50 | 1);
          do {
            local_70 = (local_70 ^ local_50[0]) * 0x100000001b3;
            local_50[0] = *pbVar4;
            pbVar4 = pbVar4 + 1;
          } while (local_50[0] != 0);
        }
        local_90 = 0xda8b032f6aac4553;
        local_88 = "PM025_01";
      }
    }
  }
  local_58 = 0;
  uStack_60 = 0x1f;
  local_68 = local_50;
  local_80 = 8;
  local_78 = 0;
  FUN_008961b0(lVar2,&local_70,&local_90);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  uVar3 = 0;
  if (local_58 != 0) {
    uVar3 = (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  return uVar3;
}


