/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077bfa0; name: FUN_0077bfa0
 */


undefined8 FUN_0077bfa0(long param_1,long param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_1 + 8) = 0;
  uVar2 = 1;
  if ((param_2 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    sVar1 = FUN_0077c010(*(long *)(param_1 + 0x10));
    if ((sVar1 != 0) || (**(uint **)(param_1 + 0x10) < 2)) {
      *(short *)(param_1 + 8) = sVar1;
      return 1;
    }
    uVar2 = 0x16;
  }
  return uVar2;
}


