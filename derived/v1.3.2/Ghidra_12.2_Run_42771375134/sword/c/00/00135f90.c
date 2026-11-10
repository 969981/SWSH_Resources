/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00135f90; name: FUN_00135f90
 */


long FUN_00135f90(long param_1,uint *param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x24);
  if (uVar2 == 0) {
    uVar3 = 0;
    *param_3 = 0;
    uVar4 = *(uint *)(param_1 + 0x2c);
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
        if ((*param_2 == *(uint *)(*(long *)(param_1 + 8) + uVar5 * 8)) &&
           (lVar1 = *(long *)(param_1 + 8) + uVar5 * 8, param_2[1] == *(uint *)(lVar1 + 4))) {
          *param_3 = 1;
          return lVar1;
        }
        uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + uVar5 * 4);
      } while (uVar4 != 0xffffffff);
    }
    *param_3 = 0;
    uVar4 = *(uint *)(param_1 + 0x2c);
  }
  if (uVar4 == 0xffffffff) {
    uVar3 = 0x10;
    if (uVar2 != 0) {
      uVar3 = uVar2 << 1;
    }
    if (uVar2 < uVar3) {
      FUN_00134ed0(param_1);
      uVar2 = *(uint *)(param_1 + 0x24);
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
    else {
      uVar4 = 0xffffffff;
    }
    uVar3 = (uint)(ushort)*param_2 | param_2[1] << 0x10;
    uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
    uVar3 = uVar3 ^ uVar3 >> 6;
    uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
    uVar3 = (uVar3 ^ uVar3 >> 0x10) & uVar2 - 1;
  }
  lVar1 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 4);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 4) =
       *(undefined4 *)(lVar1 + (ulong)uVar3 * 4);
  *(uint *)(lVar1 + (ulong)uVar3 * 4) = uVar4;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return *(long *)(param_1 + 8) + (ulong)uVar4 * 8;
}


