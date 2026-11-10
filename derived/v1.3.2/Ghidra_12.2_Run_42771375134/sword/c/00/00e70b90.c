/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e70b90; name: FUN_00e70b90
 */


void FUN_00e70b90(long *param_1,long param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  undefined4 uVar8;
  long local_28;
  
  FUN_00e737c0();
  puVar5 = PTR_DAT_0271fdd0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[0x1c] = 0;
  param_1[0x1d] = -0x100000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = -0x100000000;
  param_1[0x20] = 0;
  param_1[0x21] = -0x100000000;
  param_1[0x22] = 0;
  param_1[0x23] = -0x100000000;
  param_1[9] = (long)(puVar5 + 200);
  param_1[10] = (long)(puVar5 + 0x108);
  param_1[0x24] = 0;
  param_1[0x25] = -0x100000000;
  param_1[0x26] = 0;
  param_1[0x27] = -0x100000000;
  param_1[0x28] = 0;
  param_1[0x29] = -0x100000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = -0x100000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = -0x100000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = -0x100000000;
  param_1[0x30] = 0;
  param_1[0x31] = -0x100000000;
  param_1[0x32] = 0;
  param_1[0x33] = -0x100000000;
  param_1[0x34] = 0;
  param_1[0x35] = -0x100000000;
  param_1[0x36] = 0;
  param_1[0x37] = -0x100000000;
  param_1[0x38] = 0;
  param_1[0x39] = -0x100000000;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  param_1[0x4b] = -0x100000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = -0x100000000;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0;
  *(undefined4 *)((long)param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  uVar7 = FUN_00e73970();
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    if (param_1[0x11] == 0) {
      local_28 = 0;
LAB_00e71264:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_00e73550(&local_28);
    if (local_28 == 0) goto LAB_00e71264;
    if (*(int *)(local_28 + 0x3a8) == 1) {
      bVar6 = (int)param_1[0x12] == 0;
    }
    else {
      bVar6 = false;
    }
    if (((*(int *)(local_28 + 0x434) == 1) && ((bool)(bVar6 | *(int *)(local_28 + 0x3a8) != 1))) &&
       (iVar3 = *(int *)(param_2 + 0x28), *(int *)(param_1 + 0x1c) = iVar3, iVar3 == 1)) {
      *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(param_2 + 0x2c);
    }
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    *(undefined4 *)((long)param_1 + 0x27c) = 0;
    bVar6 = *(int *)(param_2 + 0x30) < 0;
    if (bVar6) {
      iVar3 = *(int *)(param_2 + 0x40);
    }
    else {
      *(undefined4 *)((long)param_1 + 0x27c) = 1;
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)((long)param_1 + 0xf4) = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)((long)param_1 + 0xec) = uVar2;
      iVar3 = *(int *)(param_2 + 0x40);
    }
    uVar4 = (uint)!bVar6;
    if (-1 < iVar3) {
      *(uint *)((long)param_1 + 0x27c) = uVar4 + 1;
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x10 + 0xf4) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)((long)param_1 + (ulong)uVar4 * 0x10 + 0xec) = uVar2;
    }
    puVar1 = (uint *)((long)param_1 + 0x27c);
    if (-1 < *(int *)(param_2 + 0x50)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x60)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x70)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x78);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x80)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x90)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x90);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x98);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0xa0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0xa8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0xb0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0xb0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0xc0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0xc0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 200);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0xd0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0xd0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0xd8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0xe0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0xe8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0xf0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0xf0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0xf8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x100)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x100);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x108);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x110)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x110);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x120)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x120);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x128);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x130)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x130);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x138);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x140)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x140);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x148);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x150)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x150);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x158);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x160)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x160);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x168);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x170)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x170);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x178);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x180)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x180);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x188);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 400)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 400);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x198);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x1a0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) goto LAB_00e7125c;
      uVar2 = *(undefined8 *)(param_2 + 0x1a0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x1a8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    if (-1 < *(int *)(param_2 + 0x1b0)) {
      uVar4 = *puVar1;
      *puVar1 = uVar4 + 1;
      if (0x18 < uVar4) {
LAB_00e7125c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = *(undefined8 *)(param_2 + 0x1b0);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xf4) =
           *(undefined8 *)(param_2 + 0x1b8);
      *(undefined8 *)((long)param_1 + (long)(int)uVar4 * 0x10 + 0xec) = uVar2;
    }
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  return;
}


