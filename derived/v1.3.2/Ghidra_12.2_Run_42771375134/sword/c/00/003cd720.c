/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cd720; name: FUN_003cd720
 */


undefined8 FUN_003cd720(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar1 = param_2;
  if (param_3 <= param_2) {
    uVar1 = param_3;
  }
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  if (*(int *)(param_1 + 0x158c) == 0) {
    return 0;
  }
  uVar4 = ((uint)param_2 & 0x3fffc) << 0xe | (uint)uVar1 >> 2 & 0xffff;
  uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
  uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
  uVar4 = uVar4 ^ uVar4 >> 6;
  uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
  uVar4 = *(uint *)(*(long *)(param_1 + 0x1570) +
                   (ulong)(*(int *)(param_1 + 0x157c) - 1U & (uVar4 ^ uVar4 >> 0x10)) * 4);
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x1560);
  while ((uVar3 = (ulong)uVar4, *(ulong *)(lVar2 + (ulong)uVar4 * 0x18) != uVar1 ||
         (*(ulong *)(lVar2 + uVar3 * 0x18 + 8) != param_2))) {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x1568) + uVar3 * 4);
    if (uVar4 == 0xffffffff) {
      return 0;
    }
  }
  if (lVar2 + uVar3 * 0x18 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar2 + uVar3 * 0x18 + 0x10);
}


