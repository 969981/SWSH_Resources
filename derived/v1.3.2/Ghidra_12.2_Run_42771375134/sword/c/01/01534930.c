/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01534930; name: FUN_01534930
 */


void FUN_01534930(long param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
  uVar2 = FUN_014ae400(0);
  if (uVar2 == 0) {
    uVar2 = FUN_014ae400(1,param_2);
    if (uVar2 == 0) {
      uVar2 = FUN_014ae400(2,param_2);
      if (uVar2 == 0) {
        return;
      }
      bVar1 = 0xd2 < uVar2;
      uVar5 = 0xd1;
      iVar3 = 2;
    }
    else {
      bVar1 = 0xd3 < uVar2;
      uVar5 = 0xd2;
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
    uVar5 = 399;
    bVar1 = 400 < uVar2;
  }
  uVar2 = (uVar2 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 <= uVar5) {
    if (iVar3 == 2) {
      param_1 = param_1 + 0x72f0;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    else if (iVar3 == 1) {
      param_1 = param_1 + 0x4b60;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    else {
      param_1 = param_1 + 0x60;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    if (lVar6 != 0) {
      puVar4 = (uint *)(param_1 + (ulong)uVar2 * 0x30 + 0x24);
      uVar2 = *puVar4;
      if (uVar2 < 999) {
        *puVar4 = uVar2 + 1;
      }
    }
  }
  return;
}


