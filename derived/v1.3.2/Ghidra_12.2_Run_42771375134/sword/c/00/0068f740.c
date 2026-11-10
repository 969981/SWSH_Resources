/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0068f740; name: FUN_0068f740
 */


void FUN_0068f740(long param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0x1724);
  uVar3 = (uint)*(ushort *)(param_1 + 0x1720) | (param_4 & 0xffff) << (ulong)(uVar6 & 0x1f);
  *(short *)(param_1 + 0x1720) = (short)uVar3;
  if ((int)uVar6 < 0xe) {
    iVar4 = uVar6 + 3;
    *(int *)(param_1 + 0x1724) = iVar4;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar6 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = (char)uVar3;
    uVar6 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar6 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = *(undefined1 *)(param_1 + 0x1721);
    iVar4 = *(int *)(param_1 + 0x1724) + -0xd;
    uVar3 = (param_4 & 0xffff) >> (ulong)(0x10U - *(int *)(param_1 + 0x1724) & 0x1f);
    *(short *)(param_1 + 0x1720) = (short)uVar3;
    *(int *)(param_1 + 0x1724) = iVar4;
  }
  if (iVar4 < 9) {
    if (0 < iVar4) {
      uVar6 = *(uint *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x28) = uVar6 + 1;
      *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = (char)uVar3;
    }
  }
  else {
    puVar5 = (uint *)(param_1 + 0x28);
    uVar6 = *puVar5;
    *puVar5 = uVar6 + 1;
    *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = (char)uVar3;
    uVar6 = *puVar5;
    *puVar5 = uVar6 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = *(undefined1 *)(param_1 + 0x1721);
  }
  puVar5 = (uint *)(param_1 + 0x28);
  uVar6 = *puVar5;
  *(undefined4 *)(param_1 + 0x171c) = 8;
  plVar1 = (long *)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x1720) = 0;
  *(undefined4 *)(param_1 + 0x1724) = 0;
  *(uint *)(param_1 + 0x28) = uVar6 + 1;
  *(char *)(*plVar1 + (ulong)uVar6) = (char)param_3;
  uVar6 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar6 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = (char)(param_3 >> 8);
  uVar6 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar6 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = (char)~param_3;
  uVar6 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar6 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (ulong)uVar6) = (char)(~param_3 >> 8);
  if (param_3 != 0) {
    uVar6 = param_3;
    if ((param_3 & 1) != 0) {
      uVar2 = *param_2;
      uVar6 = *puVar5;
      *puVar5 = uVar6 + 1;
      *(undefined1 *)(*plVar1 + (ulong)uVar6) = uVar2;
      param_2 = param_2 + 1;
      uVar6 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        uVar3 = *puVar5;
        uVar2 = *param_2;
        uVar6 = uVar6 - 2;
        *puVar5 = uVar3 + 1;
        *(undefined1 *)(*plVar1 + (ulong)uVar3) = uVar2;
        uVar3 = *puVar5;
        uVar2 = param_2[1];
        param_2 = param_2 + 2;
        *puVar5 = uVar3 + 1;
        *(undefined1 *)(*plVar1 + (ulong)uVar3) = uVar2;
      } while (uVar6 != 0);
    }
  }
  return;
}


