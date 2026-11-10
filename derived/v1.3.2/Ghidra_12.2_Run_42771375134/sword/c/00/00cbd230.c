/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbd230; name: FUN_00cbd230
 */


ulong FUN_00cbd230(long param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar5 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar5 == 0)) {
    puVar4 = (uint *)0x0;
    uVar2 = uRam0000000000000000;
  }
  else {
    puVar4 = (uint *)((long)piVar1 + uVar5);
    puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
    uVar2 = *puVar4;
  }
  if (uVar2 != 0) {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar7 = (ulong)puVar4[uVar5 + 1];
      lVar3 = lVar6 + (uVar7 - (long)*(int *)((long)puVar4 + uVar5 * 4 + uVar7 + 4));
      if ((*(ushort *)((long)puVar4 + lVar3 + 4) < 5) ||
         (uVar8 = (ulong)*(ushort *)((long)puVar4 + lVar3 + 8), uVar8 == 0)) {
        if (param_2 == 0) {
          return uVar5;
        }
      }
      else if (*(long *)((long)puVar4 + lVar6 + uVar7 + uVar8 + 4) == param_2) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 4;
    } while (uVar5 < uVar2);
  }
  return 0;
}


