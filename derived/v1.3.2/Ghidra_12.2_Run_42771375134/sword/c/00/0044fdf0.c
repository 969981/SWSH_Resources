/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044fdf0; name: FUN_0044fdf0
 */


undefined8 FUN_0044fdf0(long param_1,int param_2,long param_3,void *param_4)

{
  uint uVar1;
  long lVar2;
  void *__src;
  int iVar3;
  
  lVar2 = **(long **)(*(long *)(param_1 + 0x10) + 0x38);
  uVar1 = *(uint *)(lVar2 + 0x50);
  if (uVar1 == 0) {
    return 2;
  }
  __src = *(void **)(lVar2 + 0x48);
  iVar3 = 0;
  lVar2 = (ulong)uVar1 * 0x60;
  do {
    if (*(long *)((long)__src + 0x50) == param_3) {
      if (iVar3 == param_2) {
        memcpy(param_4,__src,0x58);
        return 1;
      }
      iVar3 = iVar3 + 1;
    }
    __src = (void *)((long)__src + 0x60);
    lVar2 = lVar2 + -0x60;
  } while (lVar2 != 0);
  return 2;
}


