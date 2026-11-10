/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac54d0; name: FUN_00ac54d0
 */


void FUN_00ac54d0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x3d8) = param_2[1];
  *(undefined8 *)(lVar1 + 0x3d0) = *param_2;
  return;
}


