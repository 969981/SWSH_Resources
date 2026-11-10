/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094d250; name: FUN_0094d250
 */


void FUN_0094d250(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong uVar7;
  byte *pbVar8;
  byte local_98 [4];
  byte local_94 [4];
  byte local_90 [48];
  
  *param_2 = 0;
  local_90[0x20] = 0;
  local_90[0x21] = 0;
  local_90[0x22] = 0;
  local_90[0x23] = 0;
  local_90[0x24] = 0;
  local_90[0x25] = 0;
  local_90[0x26] = 0;
  local_90[0x27] = 0;
  local_90[0x28] = 0;
  local_90[0x29] = 0;
  local_90[0x2a] = 0;
  local_90[0x2b] = 0;
  local_90[0x2c] = 0;
  local_90[0x2d] = 0;
  local_90[0x2e] = 0;
  local_90[0x2f] = 0;
  local_90[0x10] = 0;
  local_90[0x11] = 0;
  local_90[0x12] = 0;
  local_90[0x13] = 0;
  local_90[0x14] = 0;
  local_90[0x15] = 0;
  local_90[0x16] = 0;
  local_90[0x17] = 0;
  local_90[0x18] = 0;
  local_90[0x19] = 0;
  local_90[0x1a] = 0;
  local_90[0x1b] = 0;
  local_90[0x1c] = 0;
  local_90[0x1d] = 0;
  local_90[0x1e] = 0;
  local_90[0x1f] = 0;
  local_98[0] = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  local_90[8] = 0;
  local_90[9] = 0;
  local_90[10] = 0;
  local_90[0xb] = 0;
  local_90[0xc] = 0;
  local_90[0xd] = 0;
  local_90[0xe] = 0;
  local_90[0xf] = 0;
  uVar2 = FUN_00942380();
  FUN_008f93b0(uVar2,local_94,local_98,param_3[1]);
  if (local_98[0] != 0) {
    uVar7 = 0;
    do {
      uVar5 = (ulong)local_94[uVar7];
      uVar4 = 0;
      bVar6 = false;
      do {
        uVar1 = ((uint)(uVar4 >> 3) & 0x1fffffff) + 1;
        if (((uVar1 & 0xff) < (uint)(byte)param_3[2]) &&
           ((1 << (ulong)((uint)uVar4 & 7) & (uint)(byte)param_3[(ulong)(byte)uVar1 + 2]) != 0)) {
          uVar2 = FUN_009423b0(param_1);
          uVar3 = FUN_00937030(uVar2,uVar5,uVar4 & 0xffffffff);
          if ((uVar3 & 1) != 0) {
            uVar2 = FUN_009423b0(param_1);
            FUN_0093a940(uVar2,uVar5,uVar4 & 0xffffffff);
            bVar6 = true;
            local_94[uVar4 + uVar5 * 0x18 + 4] = 1;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x18);
      if (bVar6) {
        *param_2 = 1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_98[0]);
  }
  if ((param_3[6] != '\0') && (uVar7 = FUN_0094d0c0(local_90), (uVar7 & 1) != 0)) {
    uVar2 = FUN_009423b0(param_1);
    FUN_00938900(uVar2,*param_3);
  }
  uVar7 = 0;
  pbVar8 = local_90 + 0xb;
  do {
    if (pbVar8[-0xb] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0);
    }
    if (pbVar8[-10] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,1);
    }
    if (pbVar8[-9] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,2);
    }
    if (pbVar8[-8] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,3);
    }
    if (pbVar8[-7] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,4);
    }
    if (pbVar8[-6] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,5);
    }
    if (pbVar8[-5] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,6);
    }
    if (pbVar8[-4] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,7);
    }
    if (pbVar8[-3] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,8);
    }
    if (pbVar8[-2] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,9);
    }
    if (pbVar8[-1] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,10);
    }
    if (*pbVar8 != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0xb);
    }
    if (pbVar8[1] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0xc);
    }
    if (pbVar8[2] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0xd);
    }
    if (pbVar8[3] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0xe);
    }
    if (pbVar8[4] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0xf);
    }
    if (pbVar8[5] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x10);
    }
    if (pbVar8[6] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x11);
    }
    if (pbVar8[7] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x12);
    }
    if (pbVar8[8] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x13);
    }
    if (pbVar8[9] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x14);
    }
    if (pbVar8[10] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x15);
    }
    if (pbVar8[0xb] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x16);
    }
    if (pbVar8[0xc] != 0) {
      uVar2 = FUN_009423b0(param_1);
      FUN_00936d20(uVar2,uVar7 & 0xffffffff,0x17);
    }
    uVar7 = uVar7 + 1;
    pbVar8 = pbVar8 + 0x18;
  } while (uVar7 != 2);
  if ((param_3[6] != '\0') && (uVar7 = FUN_0094d0c0(local_90), (uVar7 & 1) != 0)) {
    uVar2 = FUN_009423b0(param_1);
    FUN_009389c0(uVar2,*param_3);
  }
  return;
}


