/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfe800; name: FUN_00cfe800
 */


void FUN_00cfe800(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 local_a0;
  ulong local_98 [12];
  undefined4 local_38;
  
  switch(*(undefined4 *)(param_1 + 0x818)) {
  case 1:
    if (*(code **)(param_1 + 0x700) == (code *)0x0) {
      return;
    }
    local_98[0] = CONCAT44(local_98[0]._4_4_,
                           *(undefined4 *)
                            (*(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) +
                             (param_2 & 0xffffffff) * 0x1c + 0xc));
    (**(code **)(param_1 + 0x700))(param_1 + 0x720,local_98);
    return;
  case 2:
    *(undefined8 *)(param_1 + 0x5f0) =
         *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) + (param_2 & 0xffffffff) * 0x1c + 4);
    uVar6 = 0xcbf29ce484222645;
    local_98[0] = 0x970ffa262cc5f8b1;
    uVar2 = FUN_00ffde30(param_1 + 0x100,local_98);
    uVar1 = FUN_016c0020();
    *(undefined4 *)(param_1 + 0x800) = uVar1;
    uVar1 = FUN_016c0010(uVar2);
    *(undefined4 *)(param_1 + 0x80c) = uVar1;
    *(undefined4 *)(param_1 + 0x804) = 0;
    *(undefined4 *)(param_1 + 0x810) = 0;
    *(undefined4 *)(param_1 + 0x818) = 3;
    FUN_00cfe4e0(param_1);
    local_38 = 0;
    local_98[10] = 0;
    local_98[0xb] = 0;
    local_98[8] = 0;
    local_98[9] = 0;
    local_98[6] = 0;
    local_98[7] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    snprintf((char *)local_98,100,"anime_%s","pointer");
    if ((byte)local_98[0] != 0) {
      pbVar5 = (byte *)((ulong)local_98 | 1);
      do {
        uVar6 = (uVar6 ^ (byte)local_98[0]) * 0x100000001b3;
        local_98[0]._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_98[0] != 0);
    }
    local_98[0] = uVar6;
    FUN_00ffd510(0x3f800000,param_1 + 0x100,local_98);
    uVar6 = 0x6375f73f6502;
    break;
  case 3:
    *(undefined8 *)(param_1 + 0x5f0) =
         *(undefined8 *)
          (*(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) + (param_2 & 0xffffffff) * 0x1c + 4);
    uVar6 = 0xcbf29ce484222645;
    local_98[0] = 0x970ffa262cc5f8b1;
    uVar2 = FUN_00ffde30(param_1 + 0x100,local_98);
    uVar1 = FUN_016c0020();
    *(undefined4 *)(param_1 + 0x804) = uVar1;
    uVar1 = FUN_016c0010(uVar2);
    *(undefined4 *)(param_1 + 0x810) = uVar1;
    *(undefined4 *)(param_1 + 0x818) = 4;
    FUN_00cfe660(param_1);
    local_38 = 0;
    local_98[10] = 0;
    local_98[0xb] = 0;
    local_98[8] = 0;
    local_98[9] = 0;
    local_98[6] = 0;
    local_98[7] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    snprintf((char *)local_98,100,"anime_%s","pointer");
    if ((byte)local_98[0] != 0) {
      pbVar5 = (byte *)((ulong)local_98 | 1);
      do {
        uVar6 = (uVar6 ^ (byte)local_98[0]) * 0x100000001b3;
        local_98[0]._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_98[0] != 0);
    }
    local_98[0] = uVar6;
    FUN_00ffd510(0x40000000,param_1 + 0x100,local_98);
    uVar6 = 0x6475f73f66b5;
    break;
  case 4:
    local_98[0] = *(ulong *)(param_1 + 0x5f0);
    local_a0 = *(undefined8 *)
                (*(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) + (param_2 & 0xffffffff) * 0x1c + 4);
    *(undefined8 *)(param_1 + 0x5f8) = local_a0;
    pcVar4 = *(code **)(param_1 + 0x680);
    param_1 = param_1 + 0x6a0;
    goto LAB_00cfeaec;
  case 5:
    lVar3 = *(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) + (param_2 & 0xffffffff) * 0x1c;
    local_98[0] = CONCAT44(local_98[0]._4_4_,*(undefined4 *)(lVar3 + 0x10));
    local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar3 + 0x14));
    pcVar4 = *(code **)(param_1 + 0x780);
    param_1 = param_1 + 0x7a0;
LAB_00cfeaec:
    (*pcVar4)(param_1,local_98,&local_a0);
  default:
    goto switchD_00cfe838_default;
  }
  local_98[0] = uVar6 | 0x5d22000000000000;
  FUN_00cff5c0(param_1,local_98);
  FUN_00ffa160(param_1,1,1);
  FUN_00cf6a00(param_1,1);
switchD_00cfe838_default:
  return;
}


