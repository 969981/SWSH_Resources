/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e5b900; name: FUN_00e5b900
 */


void FUN_00e5b900(long *param_1,long param_2)

{
  long lVar1;
  
  FUN_00db6b80();
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xa0) = *(undefined8 *)(param_2 + 0xc58);
  *(ushort *)(lVar1 + 0xa8) = (ushort)*(byte *)(param_2 + 0xc64);
  *(ushort *)(lVar1 + 0xaa) = (ushort)*(byte *)(param_2 + 0xc65);
  *(undefined2 *)(lVar1 + 0xac) = *(undefined2 *)(param_2 + 0xc66);
  return;
}


