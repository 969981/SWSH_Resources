/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a543e0; name: FUN_00a543e0
 */


void FUN_00a543e0(long param_1,int *param_2)

{
  char *__format;
  int iVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  long local_d0;
  long local_c8;
  ulong local_c0;
  long local_b8;
  byte local_b0 [128];
  
  iVar1 = *param_2;
  lVar5 = param_1 + 0x100;
  if (iVar1 == 3) {
    lVar7 = *(long *)(param_1 + 0x5f0);
    lVar4 = FUN_00a0bde0(*(undefined8 *)(param_1 + 0x610),*(undefined4 *)(param_1 + 0x618));
    if (lVar7 != 0) {
      uVar2 = param_2[1];
      lVar4 = *(long *)(lVar4 + 0x40);
      local_d0 = *(long *)(param_1 + 0x770);
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x10))();
      }
      lVar4 = lVar4 + (ulong)uVar2 * 0x28;
      FUN_00a429c0(lVar5,&DAT_02154ee0,&local_d0,lVar4 + 8,0,*(undefined4 *)(lVar4 + 0x20));
      if (local_d0 != 0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
        lVar5 = *(long *)(param_1 + 0x650);
        goto joined_r0x00a5456c;
      }
    }
  }
  else if (iVar1 == 2) {
    if (*(long *)(param_1 + 0x600) != 0) {
      local_b0[0x70] = 0;
      local_b0[0x71] = 0;
      local_b0[0x72] = 0;
      local_b0[0x73] = 0;
      local_b0[0x74] = 0;
      local_b0[0x75] = 0;
      local_b0[0x76] = 0;
      local_b0[0x77] = 0;
      local_b0[0x78] = 0;
      local_b0[0x79] = 0;
      local_b0[0x7a] = 0;
      local_b0[0x7b] = 0;
      local_b0[0x7c] = 0;
      local_b0[0x7d] = 0;
      local_b0[0x7e] = 0;
      local_b0[0x7f] = 0;
      local_b0[0x60] = 0;
      local_b0[0x61] = 0;
      local_b0[0x62] = 0;
      local_b0[99] = 0;
      local_b0[100] = 0;
      local_b0[0x65] = 0;
      local_b0[0x66] = 0;
      local_b0[0x67] = 0;
      local_b0[0x68] = 0;
      local_b0[0x69] = 0;
      local_b0[0x6a] = 0;
      local_b0[0x6b] = 0;
      local_b0[0x6c] = 0;
      local_b0[0x6d] = 0;
      local_b0[0x6e] = 0;
      local_b0[0x6f] = 0;
      local_b0[0x50] = 0;
      local_b0[0x51] = 0;
      local_b0[0x52] = 0;
      local_b0[0x53] = 0;
      local_b0[0x54] = 0;
      local_b0[0x55] = 0;
      local_b0[0x56] = 0;
      local_b0[0x57] = 0;
      local_b0[0x58] = 0;
      local_b0[0x59] = 0;
      local_b0[0x5a] = 0;
      local_b0[0x5b] = 0;
      local_b0[0x5c] = 0;
      local_b0[0x5d] = 0;
      local_b0[0x5e] = 0;
      local_b0[0x5f] = 0;
      local_b0[0x40] = 0;
      local_b0[0x41] = 0;
      local_b0[0x42] = 0;
      local_b0[0x43] = 0;
      local_b0[0x44] = 0;
      local_b0[0x45] = 0;
      local_b0[0x46] = 0;
      local_b0[0x47] = 0;
      local_b0[0x48] = 0;
      local_b0[0x49] = 0;
      local_b0[0x4a] = 0;
      local_b0[0x4b] = 0;
      local_b0[0x4c] = 0;
      local_b0[0x4d] = 0;
      local_b0[0x4e] = 0;
      local_b0[0x4f] = 0;
      local_b0[0x30] = 0;
      local_b0[0x31] = 0;
      local_b0[0x32] = 0;
      local_b0[0x33] = 0;
      local_b0[0x34] = 0;
      local_b0[0x35] = 0;
      local_b0[0x36] = 0;
      local_b0[0x37] = 0;
      local_b0[0x38] = 0;
      local_b0[0x39] = 0;
      local_b0[0x3a] = 0;
      local_b0[0x3b] = 0;
      local_b0[0x3c] = 0;
      local_b0[0x3d] = 0;
      local_b0[0x3e] = 0;
      local_b0[0x3f] = 0;
      local_b0[0x20] = 0;
      local_b0[0x21] = 0;
      local_b0[0x22] = 0;
      local_b0[0x23] = 0;
      local_b0[0x24] = 0;
      local_b0[0x25] = 0;
      local_b0[0x26] = 0;
      local_b0[0x27] = 0;
      local_b0[0x28] = 0;
      local_b0[0x29] = 0;
      local_b0[0x2a] = 0;
      local_b0[0x2b] = 0;
      local_b0[0x2c] = 0;
      local_b0[0x2d] = 0;
      local_b0[0x2e] = 0;
      local_b0[0x2f] = 0;
      local_b0[0x10] = 0;
      local_b0[0x11] = 0;
      local_b0[0x12] = 0;
      local_b0[0x13] = 0;
      local_b0[0x14] = 0;
      local_b0[0x15] = 0;
      local_b0[0x16] = 0;
      local_b0[0x17] = 0;
      local_b0[0x18] = 0;
      local_b0[0x19] = 0;
      local_b0[0x1a] = 0;
      local_b0[0x1b] = 0;
      local_b0[0x1c] = 0;
      local_b0[0x1d] = 0;
      local_b0[0x1e] = 0;
      local_b0[0x1f] = 0;
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_b0[2] = 0;
      local_b0[3] = 0;
      local_b0[4] = 0;
      local_b0[5] = 0;
      local_b0[6] = 0;
      local_b0[7] = 0;
      local_b0[8] = 0;
      local_b0[9] = 0;
      local_b0[10] = 0;
      local_b0[0xb] = 0;
      local_b0[0xc] = 0;
      local_b0[0xd] = 0;
      local_b0[0xe] = 0;
      local_b0[0xf] = 0;
      __format = "ITEMINFO_%03u";
      if (999 < (uint)param_2[1]) {
        __format = "ITEMINFO_%4u";
      }
      snprintf((char *)local_b0,0x7f,__format);
      local_c8 = *(long *)(param_1 + 0x778);
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
      }
      local_c0 = 0xcbf29ce484222645;
      if (local_b0[0] != 0) {
        pbVar6 = (byte *)((ulong)local_b0 | 1);
        bVar3 = local_b0[0];
        do {
          local_c0 = (local_c0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar3 != 0);
      }
      FUN_008c4e70(lVar5,&DAT_02154ee0,&local_c8,&local_c0,10);
      if (local_c8 != 0) {
        (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    if (*(long *)(param_1 + 0x5f8) != 0) {
      local_b0[0x70] = 0;
      local_b0[0x71] = 0;
      local_b0[0x72] = 0;
      local_b0[0x73] = 0;
      local_b0[0x74] = 0;
      local_b0[0x75] = 0;
      local_b0[0x76] = 0;
      local_b0[0x77] = 0;
      local_b0[0x78] = 0;
      local_b0[0x79] = 0;
      local_b0[0x7a] = 0;
      local_b0[0x7b] = 0;
      local_b0[0x7c] = 0;
      local_b0[0x7d] = 0;
      local_b0[0x7e] = 0;
      local_b0[0x7f] = 0;
      local_b0[0x60] = 0;
      local_b0[0x61] = 0;
      local_b0[0x62] = 0;
      local_b0[99] = 0;
      local_b0[100] = 0;
      local_b0[0x65] = 0;
      local_b0[0x66] = 0;
      local_b0[0x67] = 0;
      local_b0[0x68] = 0;
      local_b0[0x69] = 0;
      local_b0[0x6a] = 0;
      local_b0[0x6b] = 0;
      local_b0[0x6c] = 0;
      local_b0[0x6d] = 0;
      local_b0[0x6e] = 0;
      local_b0[0x6f] = 0;
      local_b0[0x50] = 0;
      local_b0[0x51] = 0;
      local_b0[0x52] = 0;
      local_b0[0x53] = 0;
      local_b0[0x54] = 0;
      local_b0[0x55] = 0;
      local_b0[0x56] = 0;
      local_b0[0x57] = 0;
      local_b0[0x58] = 0;
      local_b0[0x59] = 0;
      local_b0[0x5a] = 0;
      local_b0[0x5b] = 0;
      local_b0[0x5c] = 0;
      local_b0[0x5d] = 0;
      local_b0[0x5e] = 0;
      local_b0[0x5f] = 0;
      local_b0[0x40] = 0;
      local_b0[0x41] = 0;
      local_b0[0x42] = 0;
      local_b0[0x43] = 0;
      local_b0[0x44] = 0;
      local_b0[0x45] = 0;
      local_b0[0x46] = 0;
      local_b0[0x47] = 0;
      local_b0[0x48] = 0;
      local_b0[0x49] = 0;
      local_b0[0x4a] = 0;
      local_b0[0x4b] = 0;
      local_b0[0x4c] = 0;
      local_b0[0x4d] = 0;
      local_b0[0x4e] = 0;
      local_b0[0x4f] = 0;
      local_b0[0x30] = 0;
      local_b0[0x31] = 0;
      local_b0[0x32] = 0;
      local_b0[0x33] = 0;
      local_b0[0x34] = 0;
      local_b0[0x35] = 0;
      local_b0[0x36] = 0;
      local_b0[0x37] = 0;
      local_b0[0x38] = 0;
      local_b0[0x39] = 0;
      local_b0[0x3a] = 0;
      local_b0[0x3b] = 0;
      local_b0[0x3c] = 0;
      local_b0[0x3d] = 0;
      local_b0[0x3e] = 0;
      local_b0[0x3f] = 0;
      local_b0[0x20] = 0;
      local_b0[0x21] = 0;
      local_b0[0x22] = 0;
      local_b0[0x23] = 0;
      local_b0[0x24] = 0;
      local_b0[0x25] = 0;
      local_b0[0x26] = 0;
      local_b0[0x27] = 0;
      local_b0[0x28] = 0;
      local_b0[0x29] = 0;
      local_b0[0x2a] = 0;
      local_b0[0x2b] = 0;
      local_b0[0x2c] = 0;
      local_b0[0x2d] = 0;
      local_b0[0x2e] = 0;
      local_b0[0x2f] = 0;
      local_b0[0x10] = 0;
      local_b0[0x11] = 0;
      local_b0[0x12] = 0;
      local_b0[0x13] = 0;
      local_b0[0x14] = 0;
      local_b0[0x15] = 0;
      local_b0[0x16] = 0;
      local_b0[0x17] = 0;
      local_b0[0x18] = 0;
      local_b0[0x19] = 0;
      local_b0[0x1a] = 0;
      local_b0[0x1b] = 0;
      local_b0[0x1c] = 0;
      local_b0[0x1d] = 0;
      local_b0[0x1e] = 0;
      local_b0[0x1f] = 0;
      local_b0[0] = 0;
      local_b0[1] = 0;
      local_b0[2] = 0;
      local_b0[3] = 0;
      local_b0[4] = 0;
      local_b0[5] = 0;
      local_b0[6] = 0;
      local_b0[7] = 0;
      local_b0[8] = 0;
      local_b0[9] = 0;
      local_b0[10] = 0;
      local_b0[0xb] = 0;
      local_b0[0xc] = 0;
      local_b0[0xd] = 0;
      local_b0[0xe] = 0;
      local_b0[0xf] = 0;
      snprintf((char *)local_b0,0x7f,"TOKUSEIINFO_%03u",param_2[1]);
      local_b8 = *(long *)(param_1 + 0x780);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
      }
      local_c0 = 0xcbf29ce484222645;
      if (local_b0[0] != 0) {
        pbVar6 = (byte *)((ulong)local_b0 | 1);
        bVar3 = local_b0[0];
        do {
          local_c0 = (local_c0 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar6;
          pbVar6 = pbVar6 + 1;
        } while (bVar3 != 0);
      }
      FUN_008c4e70(lVar5,&DAT_02154ee0,&local_b8,&local_c0,10);
      if (local_b8 != 0) {
        (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
        lVar5 = *(long *)(param_1 + 0x650);
        goto joined_r0x00a5456c;
      }
    }
  }
  lVar5 = *(long *)(param_1 + 0x650);
joined_r0x00a5456c:
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 1;
  }
  return;
}


