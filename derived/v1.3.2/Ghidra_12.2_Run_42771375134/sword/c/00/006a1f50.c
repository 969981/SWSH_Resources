/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1f50; name: FUN_006a1f50
 */


bool FUN_006a1f50(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = (int *)*param_1;
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (10 - (long)*piVar2)));
  puVar1 = (uint *)((long)puVar1 + (param_2 >> 0x1e & 0x3fffffffc) + (ulong)*puVar1 + 4);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 5) {
    return false;
  }
  uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2];
  if (uVar3 == 0) {
    return false;
  }
  return *(char *)((long)piVar2 + uVar3) != '\0';
}


