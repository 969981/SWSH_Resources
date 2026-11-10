/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c97560; name: FUN_00c97560
 */


long FUN_00c97560(undefined8 param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  
  puVar3 = (uint *)FUN_010295e0();
  piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = (uint *)((long)piVar1 + uVar4);
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x41) {
    return 0;
  }
  uVar4 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0x20];
  if (uVar4 == 0) {
    return 0;
  }
  uVar2 = *(uint *)((long)param_2 + uVar4);
  if (uVar2 == 0) {
    return 0;
  }
  if (uVar2 < *puVar3) {
    return (long)(puVar3 + (ulong)uVar2 + 1) + (ulong)puVar3[(ulong)uVar2 + 1] + 4;
  }
  return 0;
}


