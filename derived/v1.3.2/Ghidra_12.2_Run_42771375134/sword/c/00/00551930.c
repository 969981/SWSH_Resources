/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00551930; name: FUN_00551930
 */


int * FUN_00551930(int *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    iVar2 = (int)sVar1;
    if (iVar2 != 0) {
      FUN_005513d0(param_1,*param_1 + iVar2,1);
      memcpy((void *)(*(long *)(param_1 + 2) + (long)*param_1),param_2,
             (long)((sVar1 << 0x20) + 0x100000000) >> 0x20);
      *param_1 = *param_1 + iVar2;
    }
  }
  return param_1;
}


