/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9930; name: FUN_003e9930
 */


undefined8 FUN_003e9930(long param_1,int *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10f0) + (ulong)(param_3 & 0xff) * 8);
  iVar1 = *(int *)(lVar2 + 0x18);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar2 + 0x10);
}


