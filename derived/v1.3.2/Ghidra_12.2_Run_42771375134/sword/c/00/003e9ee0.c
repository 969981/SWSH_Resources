/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9ee0; name: FUN_003e9ee0
 */


void FUN_003e9ee0(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1158);
  FUN_00159820(param_2);
  *(int *)(lVar1 + 0x224) = *(int *)(lVar1 + 0x224) + -1;
  *param_2 = *(undefined8 *)(lVar1 + 0x230);
  *(undefined8 **)(lVar1 + 0x230) = param_2;
  return;
}


