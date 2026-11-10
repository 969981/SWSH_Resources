/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d7090; name: FUN_003d7090
 */


long FUN_003d7090(long param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((uint)*(long *)(param_2 + 2) & 0x3fffc) << 0xe | (uint)*(long *)param_2 >> 2 & 0xffff;
    uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
    uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
    uVar2 = (uVar2 ^ uVar2 >> 0x10) & uVar1 - 1;
    uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 4);
    if (uVar5 != 0xffffffff) {
      lVar3 = *(long *)(param_1 + 8);
      do {
        uVar4 = (ulong)uVar5;
        if ((*(long *)(lVar3 + (ulong)uVar5 * 0x18) == *(long *)param_2) &&
           (*(long *)(lVar3 + uVar4 * 0x18 + 8) == *(long *)(param_2 + 2))) {
          *param_3 = 1;
          return lVar3 + uVar4 * 0x18;
        }
        uVar5 = *(uint *)(*(long *)(param_1 + 0x10) + uVar4 * 4);
      } while (uVar5 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar2 = 0x10;
    if (uVar1 != 0) {
      uVar2 = uVar1 << 1;
    }
    if (uVar1 < uVar2) {
      FUN_003d6b80(param_1);
      uVar1 = *(uint *)(param_1 + 0x24);
    }
    uVar2 = (param_2[2] & 0x3fffc) << 0xe | *param_2 >> 2 & 0xffff;
    uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
    uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
    uVar2 = (uVar2 ^ uVar2 >> 0x10) & uVar1 - 1;
  }
  uVar1 = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0x2c) = uVar1 + 1;
  lVar3 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 4) =
       *(undefined4 *)(lVar3 + (ulong)uVar2 * 4);
  *(uint *)(lVar3 + (ulong)uVar2 * 4) = uVar1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar1 * 0x18;
}


