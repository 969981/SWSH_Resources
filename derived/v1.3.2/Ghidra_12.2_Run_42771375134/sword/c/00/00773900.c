/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00773900; name: FUN_00773900
 */


void FUN_00773900(undefined8 *param_1,long param_2)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar3 = (int *)0x0;
  if (*(long *)(param_2 + 0x88) != 0) {
    puVar2 = *(uint **)(*(long *)(param_2 + 0x88) + 400);
    piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
  }
  puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
  uVar5 = 0;
  uVar9 = 0;
  uVar7 = 0;
  uVar11 = 0;
  uVar1 = *puVar4;
  if (0x1a < uVar1) {
    uVar9 = 0;
    uVar7 = 0;
    if ((ulong)puVar4[0xd] != 0) {
      uVar7 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[0xd]);
    }
    if (uVar1 < 0x1d) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      uVar9 = 0;
      if ((ulong)puVar4[0xe] != 0) {
        uVar9 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[0xe]);
      }
      if ((0x1e < uVar1) && ((ulong)puVar4[0xf] != 0)) {
        uVar11 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[0xf]);
      }
    }
  }
  auVar6 = NEON_fmov(0x3f800000,4);
  uVar8 = 0;
  uVar10 = 0;
  param_1[1] = CONCAT44(auVar6._12_4_,uVar11);
  *param_1 = CONCAT44(uVar9,uVar7);
  if (0x20 < uVar1) {
    uVar5 = 0;
    uVar8 = 0;
    if ((ulong)puVar4[0x10] != 0) {
      uVar8 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[0x10]);
    }
    if (uVar1 < 0x23) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      uVar5 = 0;
      if ((ulong)puVar4[0x11] != 0) {
        uVar5 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[0x11]);
      }
      if ((0x24 < uVar1) && ((ulong)puVar4[0x12] != 0)) {
        uVar10 = *(undefined4 *)((long)piVar3 + (ulong)puVar4[0x12]);
      }
    }
  }
  *(undefined4 *)(param_1 + 3) = uVar10;
  *(int *)((long)param_1 + 0x1c) = auVar6._12_4_;
  *(undefined4 *)(param_1 + 2) = uVar8;
  *(undefined4 *)((long)param_1 + 0x14) = uVar5;
  return;
}


