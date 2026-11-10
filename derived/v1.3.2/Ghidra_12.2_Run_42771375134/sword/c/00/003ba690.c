/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba690; name: FUN_003ba690
 */


void FUN_003ba690(long param_1,long *param_2,int *param_3,int param_4,uint param_5)

{
  uint uVar1;
  void *__dest;
  void *__src;
  int iVar2;
  
  if (param_5 == 0) {
    __dest = (void *)0x0;
    iVar2 = 0;
    __src = (void *)*param_2;
  }
  else if (param_5 < 5) {
    __dest = (void *)(param_1 + 8);
    iVar2 = 4;
    __src = (void *)*param_2;
  }
  else {
    uVar1 = param_5 - 1 | param_5 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    iVar2 = (uVar1 | uVar1 >> 0x10) + 1;
    __dest = (void *)FUN_003ddb60(*(undefined8 *)(param_1 + 0x48),iVar2);
    __src = (void *)*param_2;
  }
  if (__src != (void *)0x0) {
    memcpy(__dest,__src,(ulong)(uint)(param_4 << 3));
    if (*param_2 != param_1 + 8) {
      FUN_003ddee0(*(undefined8 *)(param_1 + 0x48),*param_2,*param_3);
    }
  }
  *param_3 = iVar2;
  *param_2 = (long)__dest;
  return;
}


