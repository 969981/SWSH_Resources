/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cf6c0; name: FUN_003cf6c0
 */


void FUN_003cf6c0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_2 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar3 < uVar1) {
    uVar4 = *(uint *)(param_1 + 0x20);
    uVar2 = uVar1 - 1;
    if (uVar3 != uVar2 && uVar1 < uVar4) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar2 * 8);
      *(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8) = lVar5;
      *(uint *)(lVar5 + 0x50) = uVar3;
      uVar3 = uVar2;
    }
    *(uint *)(param_1 + 0x28) = uVar2;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x20);
  }
  *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
  *(undefined4 *)(param_2 + 0x50) = 0xffffffff;
  uVar4 = uVar4 - 1;
  *(uint *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8) =
       *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 8);
  if (uVar3 < uVar4) {
    *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + (ulong)uVar3 * 8) + 0x50) = uVar3;
  }
  return;
}


