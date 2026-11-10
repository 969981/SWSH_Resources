/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007824c0; name: FUN_007824c0
 */


undefined4 FUN_007824c0(undefined8 *param_1,ulong param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)*param_1;
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (0xe - (long)*piVar2)));
  uVar4 = 0;
  puVar1 = (uint *)((long)puVar1 + (param_2 >> 0x1e & 0x3fffffffc) + (ulong)*puVar1 + 4);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  puVar1 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (8 - (long)*piVar2)));
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar3 != 0)) {
    uVar4 = *(undefined4 *)((long)piVar2 + uVar3);
  }
  return uVar4;
}


