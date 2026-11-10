/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009658e0; name: FUN_009658e0
 */


void FUN_009658e0(long param_1,ulong param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = param_1 + (param_2 & 0xff) * 0xc;
    *(undefined1 *)(lVar3 + 0x34) = 1;
    *(int *)(lVar3 + 0x3c) = param_3;
    *(undefined2 *)(lVar3 + 0x36) = 0x33;
    uVar2 = FUN_009319a0(*(undefined8 *)(param_1 + 8));
    uVar1 = FUN_00914000(uVar2,param_2 & 0xffffffff);
    *(undefined1 *)(lVar3 + 0x35) = uVar1;
  }
  return;
}


