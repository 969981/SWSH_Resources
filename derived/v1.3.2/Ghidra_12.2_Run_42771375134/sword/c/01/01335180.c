/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01335180; name: FUN_01335180
 */


undefined8 FUN_01335180(long param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  uint *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xcbf29ce484222645;
  if (((*(long *)(param_1 + 0x68) != 0) && (*(char *)(*(long *)(param_1 + 0x68) + 0x170) != '\0'))
     && (uVar2 = FUN_014bca10(*(undefined8 *)(param_1 + 0x170)), (uVar2 & 1) != 0)) {
    puVar3 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    if (param_2 < *puVar3) {
      puVar3 = puVar3 + (param_2 & 0xffffffff) + 1;
      piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 0xb) ||
         (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)((long)piVar1 + uVar2);
      }
    }
  }
  return uVar4;
}


