/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d7c90; name: FUN_003d7c90
 */


long FUN_003d7c90(long param_1,uint *param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *param_2 & 0xffff | param_2[1] << 0x10;
    uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
    uVar4 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 4);
    if (uVar4 != 0xffffffff) {
      do {
        uVar5 = (ulong)uVar4;
        if ((*(uint *)(*(long *)(param_1 + 8) + uVar5 * 0x10) == *param_2) &&
           (lVar1 = *(long *)(param_1 + 8) + uVar5 * 0x10, *(uint *)(lVar1 + 4) == param_2[1])) {
          *param_3 = 1;
          return lVar1;
        }
        uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + uVar5 * 4);
      } while (uVar4 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2 << 1;
    }
    if (uVar2 < uVar3) {
      FUN_003d69d0(param_1);
      uVar2 = *(uint *)(param_1 + 0x24);
    }
    uVar3 = (uint)(ushort)*param_2 | param_2[1] << 0x10;
    uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  lVar1 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = uVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 4) =
       *(undefined4 *)(lVar1 + (ulong)uVar3 * 4);
  *(uint *)(lVar1 + (ulong)uVar3 * 4) = uVar2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x10;
}


