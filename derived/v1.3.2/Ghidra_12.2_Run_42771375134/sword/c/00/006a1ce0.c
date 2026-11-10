/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a1ce0; name: FUN_006a1ce0
 */


undefined4 FUN_006a1ce0(undefined8 *param_1)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)*param_1;
  if (*(ushort *)((long)piVar1 - (long)*piVar1) < 7) {
    return 0;
  }
  uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3];
  if (uVar2 == 0) {
    return 0;
  }
  return *(undefined4 *)((long)piVar1 + uVar2);
}


