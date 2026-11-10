/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e6860; name: FUN_003e6860
 */


long FUN_003e6860(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *local_68;
  
  lVar1 = param_1 + 0x7a8;
  uVar9 = 0x11;
  if (*(int *)(param_1 + 0x860) == *(int *)(*(long *)(param_1 + 0x1118) + 0x38)) {
    uVar9 = 1;
  }
  uVar4 = *(uint *)(*(long *)(param_1 + 0x1048) + 0x10);
  lVar13 = *(long *)(*(long *)(param_1 + 0x1048) + 8);
  if ((*(uint *)(param_1 + 0x7b4) & 0x7fffffff) < uVar4) {
    FUN_003f64e0(lVar1,uVar4);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    if (uVar4 == 0) {
      return lVar1;
    }
  }
  local_68 = (uint *)(param_1 + 0x7b0);
  uVar10 = 0;
  do {
    if (uVar10 < uVar4 - 1) {
      Hint_Prefetch(*(undefined8 *)(lVar13 + uVar10 * 8 + 8),0,0,0);
    }
    lVar12 = *(long *)(lVar13 + uVar10 * 8);
    lVar11 = *(long *)(lVar12 + 0x18);
    uVar2 = uVar10 + 1;
    if ((*(byte *)(lVar11 + 10) >> 1 & 1) == 0) {
      if (uVar2 < uVar4) {
        Hint_Prefetch(*(undefined8 *)(*(long *)(lVar13 + uVar10 * 8 + 8) + 0x18),0,0,0);
      }
      uVar5 = *(uint *)(param_1 + 0x7b0);
      uVar3 = *(uint *)(param_1 + 0x7b4) & 0x7fffffff;
      if (uVar3 <= uVar5) {
        iVar6 = *(uint *)(param_1 + 0x7b4) << 1;
        if (uVar3 == 0) {
          iVar6 = 1;
        }
        FUN_003f64e0(lVar1,iVar6);
        uVar5 = *local_68;
      }
      lVar8 = *(long *)(param_1 + 0x7a8) + (ulong)uVar5 * 0x30;
      *(uint *)(param_1 + 0x7b0) = uVar5 + 1;
      *(undefined2 *)(lVar8 + 0x1a) = 0;
      FUN_003e6630(param_1,lVar8,lVar12,lVar11,uVar9);
      *(undefined2 *)(lVar11 + 4) = *(undefined2 *)(lVar11 + 6);
      uVar7 = *(ushort *)(lVar11 + 8) >> 4;
      if ((*(ushort *)(lVar11 + 8) & 0xf) != 0) {
        uVar7 = uVar7 + 1;
      }
      *(ushort *)(lVar11 + 10) = *(ushort *)(lVar11 + 10) & 0x1f | uVar7 << 5;
    }
    uVar10 = uVar2;
  } while (uVar4 != uVar2);
  return lVar1;
}


