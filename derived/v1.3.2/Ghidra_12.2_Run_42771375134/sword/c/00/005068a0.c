/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005068a0; name: FUN_005068a0
 */


void FUN_005068a0(undefined8 *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  
  iVar1 = *(int *)(param_1 + 2);
  if (0 < iVar1) {
    iVar4 = 0;
    if (iVar1 != 0) {
      iVar4 = (int)((*(uint *)(param_1[3] + 4) >> 1) * iVar1 * 4 + 0xf & 0xfffffff0) / iVar1;
    }
    lVar9 = *(long *)PTR_DAT_027138b8;
    lVar6 = 0;
    do {
      *(long *)(param_1[4] + lVar6 * 8) = lVar9;
      lVar6 = lVar6 + 1;
      lVar9 = lVar9 + iVar4;
    } while (lVar6 < *(int *)(param_1 + 2));
  }
  puVar7 = (uint *)(*param_2 & 0xfffffffffffffffc);
  *param_1 = puVar7;
  uVar2 = (uint)*param_2;
  *(char *)(param_1 + 1) = (char)(uVar2 & 3);
  iVar1 = (uint)param_2[1] + (uVar2 & 3);
  uVar5 = (uVar2 & 3) << 3;
  *(int *)((long)param_1 + 0xc) = iVar1;
  *(char *)(param_1 + 1) = (char)uVar5;
  uVar8 = *puVar7;
  *param_1 = puVar7;
  iVar4 = *(int *)((long)param_1 + 0x3c);
  *(int *)((long)param_1 + 0xc) = iVar1;
  lVar6 = param_1[3];
  *(int *)(param_1 + 7) = iVar4;
  uVar10 = (ulong)(uVar8 >> (ulong)uVar5 & 1);
  *(byte *)(param_1 + 1) = (byte)((uVar2 & 3) << 3) | 1;
  *(uint *)((long)param_1 + 0x3c) = (uint)*(byte *)(*(long *)(lVar6 + 0x20) + uVar10 * 2);
  uVar2 = *(uint *)(lVar6 + (long)iVar4 * 4);
  if (*(char *)((long)param_1 + 0x44) == '\0') {
    uVar8 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar8 = uVar2;
    }
    lVar9 = 0;
    do {
      memcpy(*(void **)(param_1[5] + lVar9 * 8),
             (void *)(*(long *)(param_1[4] + lVar9 * 8) + ((long)((ulong)uVar8 << 0x20) >> 0x22) * 4
                     ),(ulong)(uVar8 & 0xfffffffc));
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 2));
    *(undefined1 *)((long)param_1 + 0x44) = 1;
    iVar1 = *(int *)(param_1 + 6);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 6);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (iVar1 == -1) {
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    iVar1 = *(int *)(lVar6 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    if (iVar1 >> 1 <= (int)(uint)*(ushort *)(param_1 + 8)) {
      return;
    }
  }
  else {
    iVar1 = *(int *)(lVar6 + (long)*(int *)((long)param_1 + 0x3c) * 4);
    uVar8 = uVar2 + 3;
    if (-1 < (int)uVar2) {
      uVar8 = uVar2;
    }
    iVar4 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    uVar2 = (iVar4 >> 2) + ((int)uVar8 >> 2);
    uVar3 = *(ushort *)(param_1 + 8);
    *(uint *)((long)param_1 + 0x34) = uVar2;
    uVar8 = (uint)uVar3;
    if (uVar3 != 0) {
      *(uint *)(param_1 + 6) = (uint)uVar3;
      if ((int)uVar2 < (int)(uint)uVar3) {
        uVar5 = uVar3 - uVar2;
        *(uint *)(param_1 + 6) = uVar2;
        *(short *)(param_1 + 8) = (short)uVar5;
        iVar1 = *(int *)(lVar6 + 4);
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar8 = uVar2;
        if (iVar1 >> 1 <= (int)(uVar5 & 0xffff)) {
          return;
        }
      }
      else {
        *(undefined2 *)(param_1 + 8) = 0;
      }
    }
    if ((char)param_2[2] != '\0') {
      uVar2 = uVar2 - *(ushort *)((long)param_1 + 0x42);
      if ((int)uVar8 <= (int)uVar2) {
        uVar8 = uVar2;
      }
      *(uint *)((long)param_1 + 0x34) = uVar8;
    }
  }
  FUN_0050dff0(param_1,*(long *)(lVar6 + 0x28) +
                       (ulong)*(byte *)(*(long *)(lVar6 + 0x20) + uVar10 * 2 + 1) * 0x28);
  return;
}


