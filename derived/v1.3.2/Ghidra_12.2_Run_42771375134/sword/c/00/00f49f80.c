/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49f80; name: FUN_00f49f80
 */


undefined8 FUN_00f49f80(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 200) == 0) {
    uVar4 = FUN_014bc9b0(*(undefined8 *)(param_1 + 0x78));
    if ((((uVar4 & 1) == 0) || (lVar6 = *(long *)(*(long *)(param_1 + 0x58) + 8), lVar6 == 0)) ||
       (*(char *)(lVar6 + 0x170) == '\0')) {
      return 0;
    }
    puVar7 = *(uint **)(lVar6 + 400);
    piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
    uVar4 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
    puVar2 = (uint *)((long)piVar1 + uVar4);
    uVar9 = (ulong)*puVar2;
    puVar2 = (uint *)((long)puVar2 + uVar9);
    if (*puVar2 != 0) {
      lVar6 = (long)puVar7 + uVar9 + uVar4 + (ulong)*puVar7 + 0x12;
      do {
        uVar4 = (ulong)*(uint *)(lVar6 + -0xe);
        lVar8 = uVar4 - (long)*(int *)(lVar6 + uVar4 + -0xe);
        if ((*(ushort *)(lVar6 + lVar8 + -0xe) < 0xf) ||
           (uVar9 = (ulong)*(ushort *)(lVar6 + lVar8), uVar9 == 0)) {
          local_38 = 0;
        }
        else {
          local_38 = *(undefined8 *)(lVar6 + uVar4 + uVar9 + -0xe);
        }
        uVar3 = *(uint *)(lVar6 + -0xe);
        plVar5 = (long *)FUN_00f4a0a0(param_1 + 0x80,&local_38);
        *plVar5 = lVar6 + (ulong)uVar3 + -0xe;
        puVar7 = (uint *)(lVar6 + -10);
        lVar6 = lVar6 + 4;
      } while (puVar7 != puVar2 + (ulong)*puVar2 + 1);
    }
  }
  return 1;
}


