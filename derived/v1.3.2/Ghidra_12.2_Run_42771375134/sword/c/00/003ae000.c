/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae000; name: FUN_003ae000
 */


void FUN_003ae000(long param_1,long *param_2,undefined2 *param_3,uint param_4,ushort param_5)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  int iVar3;
  
  if (param_5 == 0) {
    iVar3 = 0;
    __dest = (void *)0x0;
  }
  else if (param_5 < 5) {
    __dest = (void *)(param_1 + 0x20);
    iVar3 = 4;
  }
  else {
    uVar1 = param_5 - 1;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    iVar3 = 0xffff;
    if (uVar1 + 1 < 0xffff) {
      iVar3 = uVar1 + 1;
    }
    __dest = (void *)FUN_003ddb60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48),iVar3);
  }
  memcpy(__dest,(void *)*param_2,(ulong)(param_4 & 0xffff) << 3);
  lVar2 = *param_2;
  if ((lVar2 != 0) && (lVar2 != param_1 + 0x20)) {
    FUN_003ddee0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48),lVar2,*param_3);
  }
  *param_3 = (short)iVar3;
  *param_2 = (long)__dest;
  return;
}


