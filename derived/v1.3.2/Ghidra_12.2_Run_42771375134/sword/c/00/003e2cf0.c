/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e2cf0; name: FUN_003e2cf0
 */


void FUN_003e2cf0(long param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  
  iVar11 = *(int *)(*(long *)(param_1 + 0x728) + 400);
  if (iVar11 != 0) {
    plVar12 = (long *)(*(long *)(*(long *)(param_1 + 0x728) + 0x188) + 0x10);
    do {
      lVar4 = *plVar12;
      iVar11 = iVar11 + -1;
      if ((lVar4 != 0) && (bVar2 = *(byte *)(lVar4 + 0x24), (bVar2 | 2) == 2)) {
        lVar8 = param_1 + (ulong)bVar2 * 0x10;
        uVar1 = *(uint *)(lVar4 + 0x18);
        plVar5 = (long *)(lVar8 + 0x38);
        puVar6 = (uint *)(lVar8 + 0x40);
        uVar3 = *puVar6 - 1;
        *puVar6 = uVar3;
        *(undefined8 *)(*plVar5 + (ulong)uVar1 * 8) = *(undefined8 *)(*plVar5 + (ulong)uVar3 * 8);
        *(undefined4 *)(lVar4 + 0x18) = 0xffffffff;
        if (uVar1 < uVar3) {
          *(uint *)(*(long *)(*plVar5 + (ulong)uVar1 * 8) + 0x18) = uVar1;
        }
        puVar7 = (uint *)(param_1 + (ulong)bVar2 * 4 + 0x68);
        uVar3 = *puVar7;
        if (uVar1 < uVar3) {
          uVar3 = uVar3 - 1;
          *puVar7 = uVar3;
          if (uVar3 < *puVar6) {
            lVar4 = *plVar5;
            lVar8 = *(long *)(lVar4 + (ulong)uVar3 * 8);
            lVar9 = (ulong)uVar1 * 8;
            lVar10 = *(long *)(lVar4 + lVar9);
            *(long *)(lVar4 + lVar9) = lVar8;
            *(long *)(*plVar5 + (ulong)uVar3 * 8) = lVar10;
            *(uint *)(lVar10 + 0x18) = uVar3;
            *(uint *)(lVar8 + 0x18) = uVar1;
          }
        }
        FUN_003cd6e0(*(undefined8 *)(param_1 + 0x1048));
      }
      plVar12 = plVar12 + 3;
    } while (iVar11 != 0);
  }
  return;
}


