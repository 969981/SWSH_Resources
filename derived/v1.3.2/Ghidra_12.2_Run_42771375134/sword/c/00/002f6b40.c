/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f6b40; name: FUN_002f6b40
 */


long FUN_002f6b40(long param_1,ushort *param_2,undefined1 *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *param_2;
    uVar3 = ((uint)uVar1 << 0xf ^ 0xffffffff) + (uint)uVar1;
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
    uVar5 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 4);
    if (uVar5 != 0xffffffff) {
      lVar4 = *(long *)(param_1 + 8);
      do {
        uVar6 = (ulong)uVar5;
        if (*(ushort *)(lVar4 + uVar6 * 0x10) == uVar1) {
          *param_3 = 1;
          return lVar4 + uVar6 * 0x10;
        }
        uVar5 = *(uint *)(*(long *)(param_1 + 0x10) + uVar6 * 4);
      } while (uVar5 != 0xffffffff);
    }
  }
  *param_3 = 0;
  if (*(int *)(param_1 + 0x34) == *(int *)(param_1 + 0x20)) {
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2 << 1;
    }
    if (uVar2 < uVar3) {
      FUN_002f6800(param_1);
      uVar2 = *(uint *)(param_1 + 0x24);
    }
    uVar3 = ((uint)*param_2 << 0xf ^ 0xffffffff) + (uint)*param_2;
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
  }
  uVar2 = *(uint *)(param_1 + 0x2c);
  lVar4 = *(long *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = uVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar2 * 4) =
       *(undefined4 *)(lVar4 + (ulong)uVar3 * 4);
  *(uint *)(lVar4 + (ulong)uVar3 * 4) = uVar2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar2 * 0x10;
}


