/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00139ee0; name: FUN_00139ee0
 */


undefined8 FUN_00139ee0(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar4 = param_2 >> 2;
  uVar6 = (ulong)uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  puVar8 = (ushort *)(lVar7 + uVar6 * 0xc + 4);
  uVar2 = *puVar8;
  uVar9 = (ulong)uVar2;
  if (uVar2 != 0) {
    lVar5 = lVar7 + uVar6 * 0xc;
    if (uVar2 == 1) {
      lVar5 = lVar5 + 8;
    }
    else {
      lVar5 = *(long *)(param_1 + uVar9 * 0x10 + 0x98) + (ulong)*(uint *)(lVar5 + 8) * 4;
    }
    puVar11 = (ushort *)(lVar5 + 2);
    uVar12 = uVar9;
    do {
      FUN_001377d0(*(undefined8 *)(lVar10 + (ulong)*puVar11 * 0x38 + 0x20),puVar11[-1]);
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (1 < uVar2) {
      lVar10 = param_1 + uVar9 * 4;
      uVar1 = *(uint *)(lVar7 + uVar6 * 0xc + 8);
      *(undefined4 *)(*(long *)(param_1 + uVar9 * 0x10 + 0x98) + (ulong)uVar1 * 4) =
           *(undefined4 *)(lVar10 + 0x10a8);
      *(uint *)(lVar10 + 0x10a8) = uVar1;
    }
  }
  lVar7 = lVar7 + uVar6 * 0xc;
  *puVar8 = 0;
  *(ushort *)(lVar7 + 6) = *(ushort *)(lVar7 + 6) | 4;
  *(undefined4 *)(lVar7 + 8) = *(undefined4 *)(param_1 + 4);
  uVar1 = param_2 >> 7;
  if (*(uint *)(param_1 + 0x80) <= uVar1) {
    FUN_00136460(param_1 + 0x78,uVar6);
  }
  uVar3 = 1 << (ulong)(param_2 >> 2 & 0x1f);
  lVar7 = (ulong)uVar1 * 4;
  *(uint *)(*(long *)(param_1 + 0x78) + lVar7) =
       *(uint *)(*(long *)(param_1 + 0x78) + lVar7) | uVar3;
  *(uint *)(param_1 + 4) = uVar4;
  if (*(uint *)(param_1 + 0x90) <= uVar1) {
    FUN_00136460(param_1 + 0x88,uVar4);
  }
  *(uint *)(*(long *)(param_1 + 0x88) + lVar7) =
       *(uint *)(*(long *)(param_1 + 0x88) + lVar7) | uVar3;
  if (*(uint *)(param_1 + 0x14d8) <= uVar1) {
    FUN_00136460((long *)(param_1 + 0x14d0),uVar6);
  }
  lVar10 = *(long *)(param_1 + 0x14d0);
  *(uint *)(lVar10 + lVar7) = *(uint *)(lVar10 + lVar7) & (uVar3 ^ 0xffffffff);
  return 1;
}


