/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068f920; name: FUN_0068f920
 */


void FUN_0068f920(long param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_1 + 0x1724);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1720) | 2 << (ulong)(uVar5 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar3;
  if ((int)uVar5 < 0xe) {
    iVar4 = uVar5 + 3;
    *(int *)(param_1 + 0x1724) = iVar4;
    if (iVar4 < 10) goto LAB_0068f994;
LAB_0068f9e8:
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = (char)uVar3;
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    uVar5 = *(int *)(param_1 + 0x1724) - 9;
    uVar3 = 0;
    *(uint *)(param_1 + 0x1724) = uVar5;
    if (uVar5 != 0x10) goto LAB_0068f9a4;
LAB_0068fa34:
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = (char)uVar3;
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar5 = 0;
    *(uint *)(param_1 + 0x28) = uVar3 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar3) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    uVar3 = 0;
LAB_0068fa70:
    *(uint *)(param_1 + 0x1724) = uVar5;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = (char)uVar3;
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = *(undefined1 *)(param_1 + 0x1721);
    uVar3 = 2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    iVar4 = *(int *)(param_1 + 0x1724) + -0xd;
    *(short *)(param_1 + 0x1720) = (short)uVar3;
    *(int *)(param_1 + 0x1724) = iVar4;
    if (9 < iVar4) goto LAB_0068f9e8;
LAB_0068f994:
    uVar5 = iVar4 + 7;
    *(uint *)(param_1 + 0x1724) = uVar5;
    if (uVar5 == 0x10) goto LAB_0068fa34;
LAB_0068f9a4:
    if (7 < (int)uVar5) {
      uVar5 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar5 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = (char)uVar3;
      uVar1 = *(ushort *)(param_1 + 0x1720) >> 8;
      uVar3 = (uint)uVar1;
      uVar5 = *(int *)(param_1 + 0x1724) - 8;
      *(ushort *)(param_1 + 0x1720) = uVar1;
      goto LAB_0068fa70;
    }
  }
  if (8 < (int)((0xb - uVar5) + *(int *)(param_1 + 0x171c))) goto LAB_0068fb3c;
  uVar3 = uVar3 | 2 << (ulong)(uVar5 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar3;
  if ((int)uVar5 < 0xe) {
    iVar4 = uVar5 + 3;
    *(int *)(param_1 + 0x1724) = iVar4;
    if (iVar4 < 10) goto LAB_0068faf8;
LAB_0068fb58:
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = (char)uVar3;
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    iVar4 = *(int *)(param_1 + 0x1724) + -9;
    uVar2 = 0;
    *(int *)(param_1 + 0x1724) = iVar4;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = (char)uVar3;
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = *(undefined1 *)(param_1 + 0x1721);
    iVar4 = *(int *)(param_1 + 0x1724) + -0xd;
    uVar3 = 2 >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    *(short *)(param_1 + 0x1720) = (short)uVar3;
    *(int *)(param_1 + 0x1724) = iVar4;
    if (9 < iVar4) goto LAB_0068fb58;
LAB_0068faf8:
    uVar2 = (undefined1)uVar3;
    iVar4 = iVar4 + 7;
    *(int *)(param_1 + 0x1724) = iVar4;
  }
  if (iVar4 == 0x10) {
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = uVar2;
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = *(undefined1 *)(param_1 + 0x1721);
    *(undefined2 *)(param_1 + 0x1720) = 0;
    *(undefined4 *)(param_1 + 0x1724) = 0;
    *(undefined4 *)(param_1 + 0x171c) = 7;
    return;
  }
  if (7 < iVar4) {
    uVar5 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar5 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar5) = uVar2;
    *(ushort *)(param_1 + 0x1720) = (ushort)*(byte *)(param_1 + 0x1721);
    *(int *)(param_1 + 0x1724) = *(int *)(param_1 + 0x1724) + -8;
  }
LAB_0068fb3c:
  *(undefined4 *)(param_1 + 0x171c) = 7;
  return;
}


