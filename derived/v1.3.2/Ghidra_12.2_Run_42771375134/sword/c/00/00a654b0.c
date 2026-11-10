/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a654b0; name: FUN_00a654b0
 */


undefined8 FUN_00a654b0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00d6ec80(*(undefined8 *)(param_1 + 0x508));
  if (((uVar1 & 1) != 0) &&
     (((*(char *)(param_1 + 0x1800) == '\0' || (*(char *)(param_1 + 0x1820) == '\0')) ||
      (uVar1 = FUN_00893790(param_1 + 0x1808), (uVar1 & 1) != 0)))) {
    lVar2 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xe48);
    if ((((lVar2 == 0) || (*(char *)(lVar2 + 0x170) != '\0')) &&
        ((lVar2 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x14c0) * 0x460 + 0xf58),
         lVar2 == 0 || (*(char *)(lVar2 + 0x170) != '\0')))) &&
       (((uVar1 = FUN_00a7a750(param_1), (uVar1 & 1) != 0 &&
         (uVar1 = FUN_00a7a880(param_1), (uVar1 & 1) != 0)) &&
        (uVar1 = FUN_00a7a9c0(param_1), (uVar1 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


