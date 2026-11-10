/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108eb30; name: FUN_0108eb30
 */


uint FUN_0108eb30(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0x88) != 0) && (*(char *)(*(long *)(param_1 + 0x88) + 0x170) == '\0')) {
    return 1;
  }
  if ((*(long *)(param_1 + 0x1a8) != 0) && (*(char *)(*(long *)(param_1 + 0x1a8) + 0x170) == '\0'))
  {
    return 1;
  }
  if ((*(long *)(param_1 + 0x2c8) != 0) && (*(char *)(*(long *)(param_1 + 0x2c8) + 0x170) == '\0'))
  {
    return 1;
  }
  uVar2 = FUN_014bca10(*(undefined8 *)(param_1 + 0x568));
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  uVar1 = FUN_0103e0f0(*(undefined8 *)(param_1 + 0x590));
  return (uVar1 ^ 1) & 1;
}


