/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f26140; name: FUN_00f26140
 */


void FUN_00f26140(long *param_1,long param_2)

{
  uint *puVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  FUN_00e737c0();
  puVar6 = PTR_DAT_02720910;
  *param_1 = (long)(PTR_DAT_02720910 + 0x10);
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  param_1[9] = (long)(puVar6 + 200);
  param_1[10] = (long)(puVar6 + 0x108);
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0;
  param_1[0x30] = 0xffffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0xffffffff;
  param_1[0x35] = 0;
  param_1[0x36] = 0xffffffff;
  param_1[0x37] = 0;
  param_1[0x38] = 0xffffffff;
  param_1[0x39] = 0;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1dc) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 500) = 0;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x204) = 0;
  *(undefined8 *)((long)param_1 + 0x20c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x214) = 0;
  *(undefined8 *)((long)param_1 + 0x21c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x234) = 0;
  *(undefined8 *)((long)param_1 + 0x23c) = 0xffffffff00000000;
  *(undefined8 *)((long)param_1 + 0x244) = 0;
  *(undefined8 *)((long)param_1 + 0x24c) = 0xffffffff00000000;
  *(undefined4 *)((long)param_1 + 0x254) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  *(undefined8 *)((long)param_1 + 0x26c) = 0;
  *(undefined8 *)((long)param_1 + 0x264) = 0;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  uVar7 = FUN_00e73970();
  if ((uVar7 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4e) = 0;
    bVar2 = *(int *)(param_2 + 0x28) < 0;
    if (bVar2) {
      iVar4 = *(int *)(param_2 + 0x38);
    }
    else {
      *(undefined4 *)(param_1 + 0x4e) = 1;
      lVar3 = *(long *)(param_2 + 0x30);
      param_1[0x1c] = *(long *)(param_2 + 0x28);
      param_1[0x1d] = lVar3;
      iVar4 = *(int *)(param_2 + 0x38);
    }
    uVar5 = (uint)!bVar2;
    if (-1 < iVar4) {
      *(uint *)(param_1 + 0x4e) = uVar5 + 1;
      lVar3 = *(long *)(param_2 + 0x40);
      param_1[(ulong)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x38);
      param_1[(ulong)uVar5 * 2 + 0x1d] = lVar3;
    }
    puVar1 = (uint *)(param_1 + 0x4e);
    if (-1 < *(int *)(param_2 + 0x48)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x50);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x48);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x58)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x60);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x58);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x68)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x70);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x68);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x78)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x80);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x78);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x88)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x90);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x88);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x98)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0xa0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x98);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0xa8)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0xb0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0xa8);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0xb8)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0xc0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0xb8);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 200)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0xd0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 200);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0xd8)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0xe0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0xd8);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0xe8)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0xf0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0xe8);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0xf8)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x100);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0xf8);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x108)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x110);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x108);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x118)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x120);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x118);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x128)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x130);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x128);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x138)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x140);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x138);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x148)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x150);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x148);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x158)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x160);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x158);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x168)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x170);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x168);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x178)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x180);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x178);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x188)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 400);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x188);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x198)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) goto LAB_00f26708;
      lVar3 = *(long *)(param_2 + 0x1a0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x198);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    if (-1 < *(int *)(param_2 + 0x1a8)) {
      uVar5 = *puVar1;
      *puVar1 = uVar5 + 1;
      if (0x18 < uVar5) {
LAB_00f26708:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar3 = *(long *)(param_2 + 0x1b0);
      param_1[(long)(int)uVar5 * 2 + 0x1c] = *(long *)(param_2 + 0x1a8);
      param_1[(long)(int)uVar5 * 2 + 0x1d] = lVar3;
    }
    uVar8 = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  return;
}


