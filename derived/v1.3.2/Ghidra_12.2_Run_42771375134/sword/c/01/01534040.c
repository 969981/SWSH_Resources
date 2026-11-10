/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534040; name: FUN_01534040
 */


undefined2 FUN_01534040(long param_1,int param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(param_1 + 0x9a50);
  if (param_2 == 2) {
    puVar1 = (undefined2 *)(param_1 + 0x9a54);
  }
  else {
    if (param_2 == 1) {
      return *(undefined2 *)(param_1 + 0x9a52);
    }
    if (param_2 != 0) {
      return 0;
    }
  }
  return *puVar1;
}


