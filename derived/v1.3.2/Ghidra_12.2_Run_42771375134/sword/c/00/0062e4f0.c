/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0062e4f0; name: FUN_0062e4f0
 */


int FUN_0062e4f0(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  int local_38;
  int local_34;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x59) = *(undefined4 *)(param_3 + 0xf8);
    *(undefined4 *)((long)param_1 + 0x2cc) = *(undefined4 *)(param_3 + 0xfc);
    *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_3 + 0x108);
    *(undefined4 *)((long)param_1 + 0x2dc) = *(undefined4 *)(param_3 + 0x10c);
    param_1[0x5a] = *(long *)(param_3 + 0x100);
    param_1[0x5c] = *(long *)(param_3 + 0x110);
    param_1[0x31] = *(long *)(param_3 + 0xf0);
    lVar4 = *(long *)(param_3 + 0xa0);
    param_1[0x39] = *(long *)(param_3 + 0x98);
    param_1[0x3a] = lVar4;
    lVar4 = *(long *)(param_3 + 0xa8);
    lVar7 = *(long *)(param_3 + 0xb0);
    lVar6 = *(long *)(param_3 + 0xc0);
    param_1[0x3d] = *(long *)(param_3 + 0xb8);
    param_1[0x3e] = lVar6;
    param_1[0x3b] = lVar4;
    param_1[0x3c] = lVar7;
    lVar4 = *(long *)(param_3 + 200);
    lVar6 = *(long *)(param_3 + 0xd0);
    lVar7 = *(long *)(param_3 + 0xd8);
    param_1[0x42] = *(long *)(param_3 + 0xe0);
    param_1[0x41] = lVar7;
    param_1[0x3f] = lVar4;
    param_1[0x40] = lVar6;
    plVar5 = *(long **)(param_3 + 0x58);
    lVar4 = *plVar5;
    lVar7 = plVar5[2];
    param_1[0x33] = plVar5[1];
    param_1[0x34] = lVar7;
    param_1[0x32] = lVar4;
    lVar4 = plVar5[3];
    lVar7 = plVar5[4];
    lVar6 = plVar5[6];
    param_1[0x37] = plVar5[5];
    param_1[0x38] = lVar6;
    param_1[0x35] = lVar4;
    param_1[0x36] = lVar7;
    *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_3 + 0x118);
    *(undefined4 *)((long)param_1 + 0x2ec) = *(undefined4 *)(param_3 + 0x11c);
    lVar4 = *(long *)(param_3 + 0x120);
    param_1[0x62] = *(long *)(param_3 + 0x128);
    param_1[0x61] = lVar4;
    lVar4 = *(long *)(param_3 + 0x130);
    param_1[100] = *(long *)(param_3 + 0x138);
    param_1[99] = lVar4;
    lVar4 = *(long *)(param_3 + 0x140);
    param_1[0x66] = *(long *)(param_3 + 0x148);
    param_1[0x65] = lVar4;
    lVar4 = *(long *)(param_3 + 0x150);
    lVar6 = *(long *)(param_3 + 0x158);
    lVar7 = *(long *)(param_3 + 0x160);
    param_1[0x46] = *(long *)(param_3 + 0x168);
    param_1[0x45] = lVar7;
    param_1[0x44] = lVar6;
    lVar7 = *(long *)(param_3 + 0x170);
    lVar8 = *(long *)(param_3 + 0x178);
    lVar6 = *(long *)(param_3 + 0x180);
    param_1[0x4a] = *(long *)(param_3 + 0x188);
    param_1[0x49] = lVar6;
    param_1[0x48] = lVar8;
    param_1[0x47] = lVar7;
    lVar7 = *(long *)(param_3 + 400);
    lVar8 = *(long *)(param_3 + 0x198);
    lVar6 = *(long *)(param_3 + 0x1a0);
    lVar2 = *(long *)(param_3 + 0x1a8);
    param_1[0x43] = lVar4;
    param_1[0x4e] = lVar2;
    param_1[0x4d] = lVar6;
    param_1[0x4c] = lVar8;
    param_1[0x4b] = lVar7;
    param_1[0x55] = *(long *)(param_3 + 0x1b0);
    param_1[0x56] = *(long *)(param_3 + 0x1b8);
    *(undefined2 *)(param_1 + 0x67) = *(undefined2 *)(param_3 + 0x1c0);
    param_1[0x68] = *(long *)(param_3 + 0x1c8);
    lVar4 = *(long *)(param_3 + 0x1d0);
    lVar7 = *(long *)(param_3 + 0x1d8);
    lVar6 = *(long *)(param_3 + 0x1e8);
    param_1[0x2b] = *(long *)(param_3 + 0x1e0);
    param_1[0x2c] = lVar6;
    param_1[0x29] = lVar4;
    param_1[0x2a] = lVar7;
    lVar6 = *(long *)(param_3 + 0x200);
    lVar4 = *(long *)(param_3 + 0x1f0);
    lVar7 = *(long *)(param_3 + 0x1f8);
    lVar8 = *(long *)(param_3 + 0x208);
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0x2f] = lVar6;
    param_1[0x30] = lVar8;
    param_1[0x2d] = lVar4;
    param_1[0x2e] = lVar7;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  uVar11 = param_1[5];
  uVar1 = (ulong)*(ushort *)(param_2 + 0x1e4) + 0x20;
  lVar4 = param_1[2];
  if (uVar11 < uVar1) {
    lVar4 = FUN_006029c0(lVar4,1,uVar11 << 3,uVar1 * 8,param_1[6],&local_38);
    param_1[6] = lVar4;
    if (local_38 != 0) {
      param_1[5] = uVar11;
      return local_38;
    }
    lVar4 = param_1[2];
    uVar11 = uVar1;
  }
  param_1[5] = uVar11;
  uVar3 = *(uint *)(param_1 + 0x57);
  uVar9 = (uint)*(ushort *)(param_2 + 0x1e6);
  uVar10 = uVar3;
  if (uVar3 < uVar9) {
    lVar4 = FUN_006029c0(lVar4,1,uVar3,uVar9,param_1[0x58],&local_34);
    param_1[0x58] = lVar4;
    uVar10 = uVar9;
    if (local_34 != 0) {
      *(uint *)(param_1 + 0x57) = uVar3 & 0xffff;
      return local_34;
    }
  }
  *(uint *)(param_1 + 0x57) = uVar10 & 0xffff;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0x20] = param_1[0x28];
  param_1[0x10] = param_1[0x28];
  param_1[0x11] = param_1[0x21];
  param_1[0x1d] = param_1[0x25];
  param_1[0xd] = param_1[0x25];
  param_1[0x12] = param_1[0x22];
  param_1[0x13] = param_1[0x23];
  param_1[0x16] = param_1[0x26];
  param_1[0x17] = param_1[0x27];
  param_1[0x14] = param_1[0x24];
  param_1[0x15] = param_1[0x25];
  param_1[0x18] = param_1[0x28];
  param_1[0x1b] = param_1[0x23];
  param_1[0x1c] = param_1[0x24];
  param_1[0x19] = param_1[0x21];
  param_1[0x1a] = param_1[0x22];
  param_1[0x1e] = param_1[0x26];
  param_1[0x1f] = param_1[0x27];
  param_1[0xb] = param_1[0x23];
  param_1[0xc] = param_1[0x24];
  param_1[9] = param_1[0x21];
  param_1[10] = param_1[0x22];
  param_1[0xe] = param_1[0x26];
  param_1[0xf] = param_1[0x27];
  return 0;
}


