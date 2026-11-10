/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c712b0; name: FUN_00c712b0
 */


void FUN_00c712b0(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = PTR_DAT_0271c268;
  *param_1 = (long)(PTR_DAT_0271c268 + 0x10);
  puVar4 = PTR_DAT_0271c270;
  lVar7 = *(long *)(param_2 + 0x10);
  param_1[1] = *(long *)(param_2 + 8);
  param_1[2] = lVar7;
  *param_1 = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0x18);
  param_1[3] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *(undefined2 *)((long)param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  puVar5 = PTR_DAT_0271c278;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = (long)(puVar5 + 0x10);
  puVar6 = PTR_DAT_0271c280;
  param_1[5] = *(long *)(param_2 + 0x28);
  *param_1 = (long)(puVar6 + 0x10);
  param_1[6] = *(long *)(param_2 + 0x30);
  lVar7 = *(long *)(param_2 + 0x38);
  lVar8 = *(long *)(param_2 + 0x40);
  lVar9 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar9;
  param_1[7] = lVar7;
  param_1[8] = lVar8;
  lVar7 = *(long *)(param_2 + 0x58);
  param_1[0xb] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_2 + 0x68);
  param_1[0xc] = *(long *)(param_2 + 0x60);
  param_1[0xd] = lVar7;
  lVar7 = *(long *)(param_2 + 0x70);
  param_1[0xe] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0x78);
  param_1[0x10] = (long)(puVar3 + 0x10);
  lVar7 = *(long *)(param_2 + 0x90);
  param_1[0x11] = *(long *)(param_2 + 0x88);
  param_1[0x12] = lVar7;
  param_1[0x10] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0x98);
  param_1[0x13] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined2 *)((long)param_1 + 0xa4) = uVar2;
  param_1[0x10] = (long)(puVar5 + 0x10);
  puVar6 = PTR_DAT_0271c288;
  param_1[0x15] = *(long *)(param_2 + 0xa8);
  param_1[0x10] = (long)(puVar6 + 0x10);
  param_1[0x16] = *(long *)(param_2 + 0xb0);
  lVar9 = *(long *)(param_2 + 200);
  lVar7 = *(long *)(param_2 + 0xb8);
  lVar8 = *(long *)(param_2 + 0xc0);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x18] = lVar8;
  param_1[0x19] = lVar9;
  param_1[0x17] = lVar7;
  lVar7 = *(long *)(param_2 + 0xd8);
  param_1[0x1b] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[0x1c] = (long)(puVar3 + 0x10);
  lVar7 = *(long *)(param_2 + 0xf0);
  param_1[0x1d] = *(long *)(param_2 + 0xe8);
  param_1[0x1e] = lVar7;
  param_1[0x1c] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0xf8);
  param_1[0x1f] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x100);
  *(undefined2 *)((long)param_1 + 0x104) = uVar2;
  param_1[0x1c] = (long)(puVar5 + 0x10);
  param_1[0x21] = *(long *)(param_2 + 0x108);
  param_1[0x1c] = (long)(puVar6 + 0x10);
  param_1[0x22] = *(long *)(param_2 + 0x110);
  lVar7 = *(long *)(param_2 + 0x118);
  lVar8 = *(long *)(param_2 + 0x120);
  lVar9 = *(long *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  param_1[0x23] = lVar7;
  param_1[0x24] = lVar8;
  param_1[0x25] = lVar9;
  lVar7 = *(long *)(param_2 + 0x138);
  param_1[0x27] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[0x28] = (long)(puVar3 + 0x10);
  lVar7 = *(long *)(param_2 + 0x150);
  param_1[0x29] = *(long *)(param_2 + 0x148);
  param_1[0x2a] = lVar7;
  param_1[0x28] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0x158);
  param_1[0x2b] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x160);
  *(undefined2 *)((long)param_1 + 0x164) = uVar2;
  param_1[0x28] = (long)(puVar5 + 0x10);
  param_1[0x2d] = *(long *)(param_2 + 0x168);
  param_1[0x28] = (long)(puVar6 + 0x10);
  param_1[0x2e] = *(long *)(param_2 + 0x170);
  lVar7 = *(long *)(param_2 + 0x178);
  lVar8 = *(long *)(param_2 + 0x180);
  lVar9 = *(long *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(param_2 + 400);
  param_1[0x2f] = lVar7;
  param_1[0x30] = lVar8;
  param_1[0x31] = lVar9;
  lVar7 = *(long *)(param_2 + 0x198);
  param_1[0x33] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[0x34] = (long)(puVar3 + 0x10);
  lVar7 = *(long *)(param_2 + 0x1b0);
  param_1[0x35] = *(long *)(param_2 + 0x1a8);
  param_1[0x36] = lVar7;
  param_1[0x34] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0x1b8);
  param_1[0x37] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined2 *)((long)param_1 + 0x1c4) = uVar2;
  param_1[0x34] = (long)(puVar5 + 0x10);
  param_1[0x39] = *(long *)(param_2 + 0x1c8);
  param_1[0x34] = (long)(puVar6 + 0x10);
  param_1[0x3a] = *(long *)(param_2 + 0x1d0);
  lVar7 = *(long *)(param_2 + 0x1d8);
  lVar8 = *(long *)(param_2 + 0x1e0);
  lVar9 = *(long *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x3e) = *(undefined4 *)(param_2 + 0x1f0);
  param_1[0x3b] = lVar7;
  param_1[0x3c] = lVar8;
  param_1[0x3d] = lVar9;
  lVar7 = *(long *)(param_2 + 0x1f8);
  param_1[0x3f] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[0x40] = (long)(puVar3 + 0x10);
  lVar7 = *(long *)(param_2 + 0x210);
  param_1[0x41] = *(long *)(param_2 + 0x208);
  param_1[0x42] = lVar7;
  param_1[0x40] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0x218);
  param_1[0x43] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0x224);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x220);
  *(undefined2 *)((long)param_1 + 0x224) = uVar2;
  param_1[0x40] = (long)(puVar5 + 0x10);
  param_1[0x45] = *(long *)(param_2 + 0x228);
  param_1[0x40] = (long)(puVar6 + 0x10);
  param_1[0x46] = *(long *)(param_2 + 0x230);
  lVar7 = *(long *)(param_2 + 0x238);
  lVar8 = *(long *)(param_2 + 0x240);
  lVar9 = *(long *)(param_2 + 0x248);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x250);
  param_1[0x49] = lVar9;
  param_1[0x48] = lVar8;
  param_1[0x47] = lVar7;
  lVar7 = *(long *)(param_2 + 600);
  param_1[0x4b] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  param_1[0x4c] = (long)(puVar3 + 0x10);
  lVar7 = *(long *)(param_2 + 0x270);
  param_1[0x4d] = *(long *)(param_2 + 0x268);
  param_1[0x4e] = lVar7;
  param_1[0x4c] = (long)(puVar4 + 0x10);
  lVar7 = *(long *)(param_2 + 0x278);
  param_1[0x4f] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar2 = *(undefined2 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x280);
  *(undefined2 *)((long)param_1 + 0x284) = uVar2;
  param_1[0x4c] = (long)(puVar5 + 0x10);
  param_1[0x51] = *(long *)(param_2 + 0x288);
  param_1[0x4c] = (long)(puVar6 + 0x10);
  param_1[0x52] = *(long *)(param_2 + 0x290);
  lVar7 = *(long *)(param_2 + 0x298);
  lVar8 = *(long *)(param_2 + 0x2a0);
  lVar9 = *(long *)(param_2 + 0x2a8);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x2b0);
  param_1[0x55] = lVar9;
  param_1[0x54] = lVar8;
  param_1[0x53] = lVar7;
  lVar7 = *(long *)(param_2 + 0x2b8);
  param_1[0x57] = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  uVar1 = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined2 *)((long)param_1 + 0x2c4) = *(undefined2 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  return;
}


