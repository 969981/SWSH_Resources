/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b4090; name: FUN_012b4090
 */


undefined8 FUN_012b4090(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  
  piVar3 = (int *)*param_1;
  if ((((piVar3 == (int *)0x0) || (*(uint *)(param_1 + 1) == 0xffffffff)) ||
      (*(ushort *)((long)piVar3 - (long)*piVar3) < 5)) ||
     (((uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar4 == 0 ||
       (puVar2 = (uint *)((long)piVar3 + uVar4), lVar1 = (long)puVar2 + (ulong)*puVar2, lVar1 == 0))
      || (puVar2 = (uint *)(lVar1 + (ulong)*(uint *)(param_1 + 1) * 4 + 4),
         (long)puVar2 + (ulong)*puVar2 == 0)))) {
    return 0;
  }
  return 1;
}


