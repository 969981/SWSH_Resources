/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd7e0; name: FUN_003dd7e0
 */


void FUN_003dd7e0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 0xb8);
  *(undefined4 *)(param_2 + 0xb8) = 0xfffffffe;
  uVar1 = *(int *)(param_1 + 0x28) - 1;
  if (uVar5 < *(uint *)(param_1 + 0x30)) {
    uVar2 = *(uint *)(param_1 + 0x30) - 1;
    *(uint *)(param_1 + 0x30) = uVar2;
    if (uVar1 != uVar2 && uVar5 < uVar2) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 8);
      lVar3 = FUN_003bd8a0(uVar4);
      *(uint *)(lVar3 + 0xb8) = uVar5;
      *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 8) = uVar4;
      uVar5 = uVar2;
    }
  }
  if (uVar5 != uVar1) {
    *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar5 * 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8);
    lVar3 = FUN_003bd8a0();
    *(uint *)(lVar3 + 0xb8) = uVar5;
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}


