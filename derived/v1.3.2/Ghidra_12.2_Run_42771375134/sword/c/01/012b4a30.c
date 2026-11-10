/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4a30; name: FUN_012b4a30
 */


long FUN_012b4a30(undefined8 *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  
  piVar3 = (int *)*param_1;
  if ((((piVar3 != (int *)0x0) && (*(uint *)(param_1 + 1) != 0xffffffff)) &&
      (puVar4 = (ushort *)((long)piVar3 - (long)*piVar3), 4 < *puVar4)) &&
     ((((ulong)puVar4[2] != 0 &&
       (puVar6 = (uint *)((long)piVar3 + (ulong)puVar4[2]), lVar1 = (long)puVar6 + (ulong)*puVar6,
       lVar1 != 0)) &&
      (puVar6 = (uint *)(lVar1 + (ulong)*(uint *)(param_1 + 1) * 4 + 4),
      piVar2 = (int *)((long)puVar6 + (ulong)*puVar6), piVar2 != (int *)0x0)))) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
       (uVar7 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar7 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)((long)piVar2 + uVar7);
      if (uVar5 == 0xffffffff) {
        return param_2;
      }
    }
    puVar6 = (uint *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                     (ulong)uVar5 * 4 + (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]) + 4);
    piVar3 = (int *)((long)puVar6 + (ulong)*puVar6);
    puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
    if (((4 < *puVar4) && ((ulong)puVar4[2] != 0)) &&
       (*(char *)((long)piVar3 + (ulong)puVar4[2]) == '\x03')) {
      piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar4[3]) +
                      (ulong)*(uint *)((long)piVar3 + (ulong)puVar4[3]));
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar7 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar7 == 0)) {
        param_2 = 0;
      }
      else {
        puVar6 = (uint *)((long)piVar3 + uVar7);
        param_2 = (long)puVar6 + (ulong)*puVar6;
      }
      param_2 = param_2 + 4;
    }
  }
  return param_2;
}


