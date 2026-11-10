/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e97a0; name: FUN_003e97a0
 */


undefined8 FUN_003e97a0(long param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x10f0) + (ulong)(param_3 & 0xff) * 8);
  iVar1 = *(int *)(puVar2 + 1);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  return *puVar2;
}


