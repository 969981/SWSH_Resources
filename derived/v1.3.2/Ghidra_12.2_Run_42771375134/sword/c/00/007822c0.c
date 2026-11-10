/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007822c0; name: FUN_007822c0
 */


undefined4 FUN_007822c0(undefined8 *param_1)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)*param_1;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 9) {
    return 0;
  }
  uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4];
  if (uVar2 == 0) {
    return 0;
  }
  return *(undefined4 *)((long)piVar1 + uVar2);
}


