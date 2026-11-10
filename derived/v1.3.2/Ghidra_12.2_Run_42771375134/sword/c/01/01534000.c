/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534000; name: FUN_01534000
 */


void FUN_01534000(long param_1,int param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)(param_1 + 0x9a50);
  if (param_2 == 2) {
    puVar1 = (undefined2 *)(param_1 + 0x9a54);
  }
  else {
    if (param_2 == 1) {
      *(undefined2 *)(param_1 + 0x9a52) = param_3;
      return;
    }
    if (param_2 != 0) {
      return;
    }
  }
  *puVar1 = param_3;
  return;
}


