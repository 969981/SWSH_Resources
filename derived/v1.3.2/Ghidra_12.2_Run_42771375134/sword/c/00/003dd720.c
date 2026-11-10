/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dd720; name: FUN_003dd720
 */


void FUN_003dd720(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long local_38;
  
  local_38 = *(long *)(param_2 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x28);
  if ((*(byte *)(local_38 + 0x2c) & 1) != 0) {
    uVar3 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = uVar3 + 1;
    if (uVar3 != uVar2) {
      local_38 = *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 8);
      lVar1 = FUN_003bd8a0();
      *(uint *)(lVar1 + 0xb8) = uVar2;
      *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 8) =
           *(undefined8 *)(param_2 + 0x50);
      uVar2 = *(uint *)(param_1 + 0x28);
      goto LAB_003dd794;
    }
  }
  uVar3 = uVar2;
LAB_003dd794:
  *(uint *)(param_2 + 0xb8) = uVar3;
  if (uVar2 < (*(uint *)(param_1 + 0x2c) & 0x7fffffff)) {
    *(long *)(*(long *)(param_1 + 0x20) + (ulong)uVar2 * 8) = local_38;
    *(uint *)(param_1 + 0x28) = uVar2 + 1;
  }
  else {
    FUN_003f26c0(param_1 + 0x20,&local_38);
  }
  return;
}


