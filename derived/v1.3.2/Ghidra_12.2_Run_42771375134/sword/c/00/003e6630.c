/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e6630; name: FUN_003e6630
 */


void FUN_003e6630(long param_1,undefined8 *param_2,long param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ushort *puVar13;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x1048) + 0x40);
  uVar3 = *(ushort *)((long)param_4 + 10);
  uVar2 = *param_4;
  uVar10 = (ulong)(uVar3 >> 1) & 0x7ff0;
  uVar4 = *(ushort *)((long)param_4 + 6);
  uVar8 = (ulong)uVar4;
  if (((uVar3 & 0x1f & param_5) != 0) && (uVar4 != 0)) {
    lVar12 = *(long *)(*(long *)(param_1 + 0x1118) + 0x20);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x1118) + 0x28) & 0x7fffffff;
    puVar13 = (ushort *)(lVar7 + uVar10 + uVar2 + 0x30);
    do {
      uVar6 = *puVar13;
      uVar5 = *(uint *)(puVar13 + 2) >> 5;
      if ((uVar5 < uVar1) &&
         ((*(uint *)(lVar12 + (ulong)uVar5 * 4) & 1 << (ulong)(*(uint *)(puVar13 + 2) & 0x1f)) != 0)
         ) {
        uVar6 = uVar6 | 1;
      }
      uVar5 = *(uint *)(puVar13 + 4) >> 5;
      if ((uVar5 < uVar1) &&
         ((*(uint *)(lVar12 + (ulong)uVar5 * 4) & 1 << (ulong)(*(uint *)(puVar13 + 4) & 0x1f)) != 0)
         ) {
        uVar6 = uVar6 | 2;
      }
      uVar8 = uVar8 - 1;
      *puVar13 = uVar6;
      puVar13 = puVar13 + 0x20;
    } while (uVar8 != 0);
  }
  lVar7 = lVar7 + (ulong)uVar2;
  lVar12 = *(long *)(param_1 + 0x1120);
  *param_2 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x18);
  param_2[1] = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x20);
  uVar1 = *(uint *)(*(long *)(param_3 + 0x18) + 0x10);
  uVar2 = *(uint *)(lVar12 + 0x28) & 0x7fffffff;
  uVar5 = uVar1 >> 5;
  if ((uVar2 <= uVar5) ||
     (uVar6 = 1,
     (*(uint *)(*(long *)(lVar12 + 0x20) + (ulong)uVar5 * 4) & 1 << (ulong)(uVar1 & 0x1f)) == 0)) {
    uVar6 = 0;
  }
  uVar1 = *(uint *)(*(long *)(param_3 + 0x18) + 0x14);
  uVar5 = uVar1 >> 5;
  if ((uVar5 < uVar2) &&
     ((*(uint *)(*(long *)(lVar12 + 0x20) + (ulong)uVar5 * 4) & 1 << (ulong)(uVar1 & 0x1f)) != 0)) {
    uVar6 = uVar6 | 2;
  }
  *(ushort *)((long)param_2 + 0x1a) = uVar6;
  param_2[4] = lVar7 + uVar10;
  *(uint *)(param_2 + 5) = (uint)uVar4;
  uVar2 = param_4[2];
  if ((short)uVar2 == 0) {
    param_2[2] = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    return;
  }
  param_2[2] = lVar7 + 4;
  if (((uVar3 & 0x1f) >> 3 & 1) != 0) {
    lVar12 = *(long *)(param_3 + 0x10);
    lVar11 = *(long *)(*(long *)(param_3 + 8) + 0x50);
    if (*(char *)(lVar11 + 0xd) == '\0') {
      uVar9 = 0;
      *(undefined8 *)(lVar7 + 0xc) = 0;
      *(undefined4 *)(lVar7 + 0x14) = 0;
      *(undefined8 *)(lVar7 + 0x24) = 0;
    }
    else {
      *(undefined4 *)(lVar7 + 0xc) = *(undefined4 *)(lVar11 + 0x50);
      *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)(lVar11 + 0x54);
      *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)(lVar11 + 0x58);
      *(undefined4 *)(lVar7 + 0x24) = *(undefined4 *)(lVar11 + 0x60);
      *(undefined4 *)(lVar7 + 0x28) = *(undefined4 *)(lVar11 + 100);
      uVar9 = *(undefined4 *)(lVar11 + 0x68);
    }
    *(undefined4 *)(lVar7 + 0x2c) = uVar9;
    lVar12 = *(long *)(lVar12 + 0x50);
    if (*(char *)(lVar12 + 0xd) == '\0') {
      uVar9 = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined4 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x30) = 0;
    }
    else {
      *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar12 + 0x50);
      *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar12 + 0x54);
      *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)(lVar12 + 0x58);
      *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar12 + 0x60);
      *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar12 + 100);
      uVar9 = *(undefined4 *)(lVar12 + 0x68);
    }
    *(undefined4 *)(lVar7 + 0x38) = uVar9;
    *(ushort *)((long)param_4 + 10) = uVar3 & 0xfff7;
  }
  *(short *)(param_2 + 3) = (short)uVar2 + -4;
  return;
}


