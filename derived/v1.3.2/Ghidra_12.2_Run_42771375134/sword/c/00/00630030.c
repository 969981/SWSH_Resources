/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00630030; name: FUN_00630030
 */


void FUN_00630030(long *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
  if ((iVar1 == 0x23) || ((iVar1 == 0x28 && (*(char *)((long)param_1 + 0x42b) == '\0')))) {
    lVar2 = (param_3 & 0xffff) * 0x10;
    *(long *)(*(long *)(param_2 + 0x18) + lVar2) =
         *(long *)(*(long *)(param_2 + 0x18) + lVar2) + param_4;
  }
  *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) =
       *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) | 8;
  return;
}


