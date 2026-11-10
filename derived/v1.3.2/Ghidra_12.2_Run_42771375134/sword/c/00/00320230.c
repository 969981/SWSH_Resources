/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00320230; name: FUN_00320230
 */


long FUN_00320230(long param_1,int *param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = *param_2;
    uVar3 = iVar1 + (iVar1 << 0xf ^ 0xffffffffU);
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
    uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
    if (uVar5 != 0xffffffff) {
      lVar4 = *(long *)(param_1 + 0x10);
      do {
        uVar6 = (ulong)uVar5;
        if (*(int *)(lVar4 + uVar6 * 0x10) == iVar1) {
          *param_3 = 1;
          return lVar4 + uVar6 * 0x10;
        }
        uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + uVar6 * 4);
      } while (uVar5 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x28)) {
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2 << 1;
    }
    if (uVar2 < uVar3) {
      FUN_0031f630(param_1);
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    uVar3 = *param_2 + (*param_2 << 0xf ^ 0xffffffffU);
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
  }
  uVar2 = *(uint *)(param_1 + 0x34);
  lVar4 = *(long *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x34) = uVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 4) =
       *(undefined4 *)(lVar4 + (ulong)uVar3 * 4);
  *(uint *)(lVar4 + (ulong)uVar3 * 4) = uVar2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return *(long *)(param_1 + 0x10) + (ulong)uVar2 * 0x10;
}


