/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009657c0; name: FUN_009657c0
 */


void FUN_009657c0(long param_1,ulong param_2,int param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  long lVar5;
  
  uVar4 = 0x31;
  if (param_3 < 0) {
    uVar4 = 0x32;
  }
  uVar1 = 0xf9;
  if (param_3 != 0) {
    uVar1 = uVar4;
  }
  lVar5 = param_1 + (param_2 & 0xff) * 0xc;
  *(undefined1 *)(lVar5 + 0x34) = 1;
  *(undefined2 *)(lVar5 + 0x36) = uVar1;
  uVar3 = FUN_009319a0(*(undefined8 *)(param_1 + 8));
  uVar2 = FUN_00914000(uVar3,param_2 & 0xffffffff);
  *(undefined1 *)(lVar5 + 0x35) = uVar2;
  *(int *)(lVar5 + 0x38) = param_3;
  return;
}


