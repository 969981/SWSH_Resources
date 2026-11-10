/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0090e390; name: FUN_0090e390
 */


undefined8 FUN_0090e390(long param_1)

{
  ulong uVar1;
  
  if ((((((*(long *)(param_1 + 0x80) == 0) || (uVar1 = FUN_009c4f00(), (uVar1 & 1) == 0)) &&
        ((*(long *)(param_1 + 0x98) == 0 || (uVar1 = FUN_009c4f00(), (uVar1 & 1) == 0)))) &&
       ((*(long *)(param_1 + 0xb0) == 0 || (uVar1 = FUN_009c4f00(), (uVar1 & 1) == 0)))) &&
      ((*(long *)(param_1 + 200) == 0 || (uVar1 = FUN_009c4f00(), (uVar1 & 1) == 0)))) &&
     ((*(long *)(param_1 + 0xe0) == 0 || (uVar1 = FUN_009c4f00(), (uVar1 & 1) == 0)))) {
    return 0;
  }
  return 1;
}


