/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cbd310; name: FUN_00cbd310
 */


undefined8 FUN_00cbd310(long param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  ulong uVar3;
  
  puVar2 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  puVar2 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
  puVar2 = (uint *)((long)puVar2 + (ulong)param_2 * 4 + (ulong)*puVar2 + 4);
  piVar1 = (int *)((long)puVar2 + (ulong)*puVar2);
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
    return 0;
  }
  uVar3 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
  if (uVar3 == 0) {
    return 0;
  }
  return *(undefined8 *)((long)piVar1 + uVar3);
}


