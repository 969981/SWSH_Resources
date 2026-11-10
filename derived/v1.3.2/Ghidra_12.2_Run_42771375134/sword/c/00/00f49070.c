/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49070; name: FUN_00f49070
 */


undefined8 FUN_00f49070(long param_1,uint param_2)

{
  uint *puVar1;
  long lVar2;
  uint *puVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar3 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar4 = (int *)((long)puVar3 + (ulong)*puVar3);
  puVar3 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (4 - (long)*piVar4)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  uVar5 = (ulong)*puVar3;
  if (uVar5 != 0) {
    lVar6 = 0;
    do {
      uVar7 = (ulong)*(uint *)((long)puVar3 + lVar6 + 4);
      lVar2 = lVar6 + (uVar7 - (long)*(int *)((long)puVar3 + lVar6 + uVar7 + 4));
      if ((*(ushort *)((long)puVar3 + lVar2 + 4) < 0x1b) ||
         (uVar8 = (ulong)*(ushort *)((long)puVar3 + lVar2 + 0x1e), uVar8 == 0)) {
        if ((param_2 & 0xffff) == 0) goto LAB_00f49118;
      }
      else if (*(uint *)((long)puVar3 + lVar6 + uVar7 + uVar8 + 4) == (param_2 & 0xffff)) {
LAB_00f49118:
        puVar1 = (uint *)((long)puVar3 + lVar6 + 4);
        if (puVar1 != puVar3 + uVar5 + 1) {
          piVar4 = (int *)((long)puVar1 + (ulong)*puVar1);
          goto LAB_00f49148;
        }
        break;
      }
      lVar6 = lVar6 + 4;
    } while (uVar5 * 4 != lVar6);
  }
  piVar4 = (int *)0x0;
LAB_00f49148:
  if (((*(ushort *)((long)piVar4 - (long)*piVar4) < 0x15) ||
      (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[10], uVar5 == 0)) ||
     (*(int *)((long)piVar4 + uVar5) == 0)) {
    return 0;
  }
  return 1;
}


