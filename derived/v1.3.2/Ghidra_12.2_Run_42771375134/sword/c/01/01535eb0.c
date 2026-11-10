/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01535eb0; name: FUN_01535eb0
 */


void FUN_01535eb0(long param_1,int param_2,short param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = FUN_014ae400(0);
  if ((uint)uVar3 == 0) {
    uVar3 = FUN_014ae400(1,param_2);
    if ((uint)uVar3 == 0) {
      uVar3 = FUN_014ae400(2,param_2);
      if ((uint)uVar3 == 0) {
        return;
      }
      bVar1 = 0xd2 < (uint)uVar3;
      uVar7 = 0xd1;
      iVar5 = 2;
    }
    else {
      bVar1 = 0xd3 < (uint)uVar3;
      uVar7 = 0xd2;
      iVar5 = 1;
    }
  }
  else {
    iVar5 = 0;
    uVar7 = 399;
    bVar1 = 400 < (uint)uVar3;
  }
  uVar2 = ((uint)uVar3 & 0xffff) - 1;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 <= uVar7) {
    if (iVar5 == 2) {
      param_1 = param_1 + 0x72f0;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    else if (iVar5 == 1) {
      param_1 = param_1 + 0x4b60;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    else {
      param_1 = param_1 + 0x60;
      lVar6 = param_1 + (ulong)uVar2 * 0x30;
    }
    if ((lVar6 != 0) && (uVar4 = FUN_01534550(uVar3,param_2), (uVar4 & 1) != 0)) {
      if ((param_2 == 0x37c) && (param_3 == 1)) {
        param_1 = param_1 + (ulong)uVar2 * 0x30;
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
        return;
      }
      param_1 = param_1 + (ulong)uVar2 * 0x30;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
      return;
    }
  }
  return;
}


