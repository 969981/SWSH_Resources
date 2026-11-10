/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcfcb0; name: FUN_00bcfcb0
 */


void FUN_00bcfcb0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  byte local_a0 [64];
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar7;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar7 = 0;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  local_a0[0x30] = 0;
  local_a0[0x31] = 0;
  local_a0[0x32] = 0;
  local_a0[0x33] = 0;
  local_a0[0x34] = 0;
  local_a0[0x35] = 0;
  local_a0[0x36] = 0;
  local_a0[0x37] = 0;
  local_a0[0x38] = 0;
  local_a0[0x39] = 0;
  local_a0[0x3a] = 0;
  local_a0[0x3b] = 0;
  local_a0[0x3c] = 0;
  local_a0[0x3d] = 0;
  local_a0[0x3e] = 0;
  local_a0[0x3f] = 0;
  local_a0[0x20] = 0;
  local_a0[0x21] = 0;
  local_a0[0x22] = 0;
  local_a0[0x23] = 0;
  local_a0[0x24] = 0;
  local_a0[0x25] = 0;
  local_a0[0x26] = 0;
  local_a0[0x27] = 0;
  local_a0[0x28] = 0;
  local_a0[0x29] = 0;
  local_a0[0x2a] = 0;
  local_a0[0x2b] = 0;
  local_a0[0x2c] = 0;
  local_a0[0x2d] = 0;
  local_a0[0x2e] = 0;
  local_a0[0x2f] = 0;
  local_a0[0x10] = 0;
  local_a0[0x11] = 0;
  local_a0[0x12] = 0;
  local_a0[0x13] = 0;
  local_a0[0x14] = 0;
  local_a0[0x15] = 0;
  local_a0[0x16] = 0;
  local_a0[0x17] = 0;
  local_a0[0x18] = 0;
  local_a0[0x19] = 0;
  local_a0[0x1a] = 0;
  local_a0[0x1b] = 0;
  local_a0[0x1c] = 0;
  local_a0[0x1d] = 0;
  local_a0[0x1e] = 0;
  local_a0[0x1f] = 0;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 0;
  local_a0[7] = 0;
  local_a0[8] = 0;
  local_a0[9] = 0;
  local_a0[10] = 0;
  local_a0[0xb] = 0;
  local_a0[0xc] = 0;
  local_a0[0xd] = 0;
  local_a0[0xe] = 0;
  local_a0[0xf] = 0;
  do {
    snprintf((char *)local_a0,0x40,"pane_L_icon_poke_box_%02d_N_icon_item_00",(int)lVar7);
    uVar4 = 0xcbf29ce484222645;
    if (local_a0[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((ulong)local_a0 | 1);
      bVar1 = local_a0[0];
      do {
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
    }
    lVar2 = param_1 + lVar7 * 0x10;
    *(ulong *)(lVar2 + 0x68) = uVar4;
    snprintf((char *)local_a0,0x40,"pane_L_icon_poke_box_%02d_P_icon_item_00",(int)lVar7);
    uVar4 = 0xcbf29ce484222645;
    if (local_a0[0] != 0) {
      uVar4 = 0xcbf29ce484222645;
      pbVar6 = (byte *)((ulong)local_a0 | 1);
      bVar1 = local_a0[0];
      do {
        uVar4 = (uVar4 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 != 0);
    }
    lVar7 = lVar7 + 1;
    *(ulong *)(lVar2 + 0x70) = uVar4;
  } while (lVar7 != 0x60);
  *(undefined8 *)(param_1 + 0x668) = 0x7f9b81d666fd2b00;
  *(undefined8 *)(param_1 + 0x688) = 0x31482e9d6e0e2a5a;
  lVar5 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x670) = 0xa8e3638213f2cf52;
  lVar7 = 0;
  *(undefined8 *)(param_1 + 0x678) = 0x74a6b3e6421f0dfb;
  *(undefined8 *)(param_1 + 0x680) = 0x74a6b3e6421f0dfb;
  lVar2 = 0x70;
  do {
    uVar3 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x58),param_1 + lVar2);
    FUN_0168b110(lVar5 + lVar7,param_4,uVar3,0);
    lVar5 = *(long *)(param_1 + 0x60) + lVar7;
    lVar7 = lVar7 + 0x3d0;
    *(undefined1 *)(lVar5 + 0x3c1) = 1;
    lVar5 = *(long *)(param_1 + 0x60);
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x690);
  uVar3 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x58),param_1 + 0x688);
  FUN_0168b110(lVar5 + 0x175a0,param_4,uVar3,0);
  *(undefined1 *)(*(long *)(param_1 + 0x60) + 0x17961) = 1;
  return;
}


