/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2b20; name: FUN_003e2b20
 */


void FUN_003e2b20(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint *puVar14;
  undefined1 auStack_68 [40];
  
  lVar11 = *(long *)(param_1 + 0x748);
  uVar13 = (ulong)*(uint *)(lVar11 + 0x1f0);
  if (*(uint *)(lVar11 + 0x1f0) != 0) {
    puVar14 = *(uint **)(lVar11 + 0x1e8);
    do {
      lVar1 = *(long *)(lVar11 + 200) + (ulong)(*puVar14 >> 6) * 0x20;
      lVar3 = *(long *)(lVar1 + 0x18);
      if ((lVar3 != 0) && ((*(byte *)(lVar1 + 4) >> 1 & 1) == 0)) {
        FUN_003bf100(lVar3 + -0x60,0,2);
      }
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar13 != 0);
  }
  uVar13 = (ulong)*(uint *)(lVar11 + 0x200);
  if (*(uint *)(lVar11 + 0x200) != 0) {
    puVar14 = *(uint **)(lVar11 + 0x1f8);
    do {
      lVar1 = *(long *)(lVar11 + 200) + (ulong)(*puVar14 >> 6) * 0x20;
      lVar3 = *(long *)(*(long *)(lVar1 + 0x18) + 8);
      if ((lVar3 != 0) && ((*(byte *)(lVar1 + 4) >> 1 & 1) == 0)) {
        FUN_003bc5b0(lVar3,0,2);
      }
      uVar13 = uVar13 - 1;
      puVar14 = puVar14 + 1;
    } while (uVar13 != 0);
  }
  lVar11 = *(long *)(param_1 + 0x748);
  uVar13 = (ulong)*(uint *)(lVar11 + 0x530);
  if (*(uint *)(lVar11 + 0x530) != 0) {
    puVar14 = *(uint **)(lVar11 + 0x528);
    uVar4 = (ulong)*puVar14;
    plVar12 = *(long **)(*(long *)(lVar11 + 0x40) + uVar4 * 8);
    while( true ) {
      uVar13 = uVar13 - 1;
      if ((((plVar12 != (long *)0x0) && ((*(byte *)((long)plVar12 + 0x25) >> 6 & 1) != 0)) &&
          ((*(byte *)(*(long *)(lVar11 + 0x348) + uVar4 * 0x10 + 4) >> 2 & 1) == 0)) &&
         ((uVar4 = (**(code **)(*plVar12 + 0x18))(plVar12,2), (uVar4 & 1) != 0 &&
          (uVar4 = (ulong)*(byte *)((long)plVar12 + 0x24), uVar4 < 3)))) {
        puVar5 = (uint *)(param_1 + uVar4 * 4 + 0x68);
        uVar6 = *puVar5;
        if (1 < uVar6) {
          lVar1 = param_1 + uVar4 * 0x10;
          uVar2 = *(uint *)(plVar12 + 3);
          lVar3 = *(long *)(lVar1 + 0x38);
          lVar9 = (ulong)uVar2 * 8;
          lVar10 = *(long *)(lVar3 + lVar9);
          lVar7 = (ulong)(uVar6 - 1) * 8;
          lVar8 = *(long *)(lVar3 + lVar7);
          *(long *)(lVar3 + lVar7) = lVar10;
          *(long *)(*(long *)(lVar1 + 0x38) + lVar9) = lVar8;
          *(uint *)(lVar8 + 0x18) = uVar2;
          *(uint *)(lVar10 + 0x18) = uVar6 - 1;
          uVar6 = *puVar5;
        }
        *puVar5 = uVar6 - 1;
      }
      if (uVar13 == 0) break;
      puVar14 = puVar14 + 1;
      uVar4 = (ulong)*puVar14;
      plVar12 = *(long **)(*(long *)(*(long *)(param_1 + 0x748) + 0x40) + uVar4 * 8);
    }
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x720) + 0x6e8) + 0xa8))(auStack_68);
  FUN_003cfc70(*(undefined8 *)(param_1 + 0x1048),auStack_68);
  return;
}


