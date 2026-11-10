/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa7950; name: FUN_00fa7950
 */


undefined8 FUN_00fa7950(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((((*(long *)(param_1 + 0x60) == 0) || (uVar1 = FUN_00fa71e0(), (uVar1 & 1) == 0)) &&
       ((*(long *)(param_1 + 0x68) == 0 || (uVar1 = FUN_00fa71e0(), (uVar1 & 1) == 0)))) &&
      ((*(long *)(param_1 + 0x70) == 0 || (uVar1 = FUN_00fa71e0(), (uVar1 & 1) == 0)))) ||
     ((*(long *)(param_1 + 0x78) == 0 ||
      ((((uVar1 = FUN_00fa6ad0(), (uVar1 & 1) == 0 || (*(long *)(param_1 + 0x80) == 0)) ||
        (uVar1 = FUN_00fa8600(), (uVar1 & 1) == 0)) || (*(long *)(param_1 + 0x88) == 0)))))) {
    return 0;
  }
  uVar2 = FUN_00fa8920();
  return uVar2;
}


