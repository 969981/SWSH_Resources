/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aef80; name: FUN_005aef80
 */


undefined8 FUN_005aef80(long param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_2 != 0xffffffff) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x21c) = uVar1;
  if (((param_3 == 0xffffffff) && (param_3 = uVar1, uVar1 < 0xf)) &&
     ((0x6db7U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    param_3 = (&DAT_020f1dc0)[(int)uVar1];
  }
  iVar2 = 0;
  if (param_4 != -1) {
    iVar2 = param_4;
  }
  *(uint *)(param_1 + 0x224) = param_3;
  *(int *)(param_1 + 0x220) = iVar2;
  return 0;
}


