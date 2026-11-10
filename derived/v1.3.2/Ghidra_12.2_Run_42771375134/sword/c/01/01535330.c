/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535330; name: FUN_01535330
 */


long FUN_01535330(long param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_014ae400(0);
  if (uVar2 == 0) {
    uVar2 = FUN_014ae400(1,param_2);
    if (uVar2 == 0) {
      uVar2 = FUN_014ae400(2,param_2);
      if (uVar2 == 0) {
        return 0;
      }
      bVar1 = 0xd2 < uVar2;
      uVar5 = 0xd1;
      iVar4 = 2;
    }
    else {
      bVar1 = 0xd3 < uVar2;
      uVar5 = 0xd2;
      iVar4 = 1;
    }
  }
  else {
    iVar4 = 0;
    uVar5 = 399;
    bVar1 = 400 < uVar2;
  }
  uVar2 = (uVar2 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar5 < uVar2) {
    return 0;
  }
  if (iVar4 == 2) {
    param_1 = param_1 + 0x72f0;
    lVar3 = param_1 + (ulong)uVar2 * 0x30;
  }
  else if (iVar4 == 1) {
    param_1 = param_1 + 0x4b60;
    lVar3 = param_1 + (ulong)uVar2 * 0x30;
  }
  else {
    param_1 = param_1 + 0x60;
    lVar3 = param_1 + (ulong)uVar2 * 0x30;
  }
  if (lVar3 != 0) {
    if (param_3 == 1) {
      param_1 = param_1 + (ulong)uVar2 * 0x30;
      if ((param_4 & 1) == 0) {
        return param_1 + 8;
      }
      return param_1 + 0x18;
    }
    if ((param_4 & 1) != 0) {
      lVar3 = param_1 + (ulong)uVar2 * 0x30 + 0x10;
    }
  }
  return lVar3;
}


