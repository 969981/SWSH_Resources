/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e0fa0; name: FUN_001e0fa0
 */


void FUN_001e0fa0(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1[1] == 0) {
    puVar3 = *(uint **)(param_2 + 8);
  }
  else {
    uVar4 = *(long *)(param_2 + 8) + 0xfU & 0xfffffffffffffff0;
    puVar3 = (uint *)(uVar4 + 0x58);
    *(uint **)(param_2 + 8) = puVar3;
    param_1[1] = uVar4;
    if (*(ulong *)(uVar4 + 0x48) != 0) {
      *(uint *)(uVar4 + 0x54) = *(uint *)(uVar4 + 0x54) | 0x80000000;
    }
    uVar5 = *(ulong *)(uVar4 + 0x48);
    if (*(char *)(uVar4 + 0x40) != '\0') {
      *(ulong *)(uVar4 + 0x48) = uVar4;
      uVar5 = uVar4;
    }
    if (*(int *)(uVar4 + 0x50) == 0) {
      param_1[1] = 0;
    }
    else if (((*(char *)(uVar4 + 0x40) == '\0') && (uVar5 != 0)) &&
            (uVar1 = *(uint *)(uVar4 + 0x54) & 0x7fffffff, uVar1 != 0 || *(int *)(uVar4 + 0x50) != 0
            )) {
      *(uint **)(param_2 + 8) = puVar3 + (ulong)uVar1 * 4;
      *(uint **)(uVar4 + 0x48) = puVar3;
      puVar3 = puVar3 + (ulong)uVar1 * 4;
    }
  }
  uVar1 = *puVar3;
  *(uint **)(param_2 + 8) = puVar3 + 1;
  puVar2 = (uint *)0x0;
  if ((ulong)uVar1 != 0) {
    puVar2 = puVar3 + 1;
  }
  *param_1 = puVar2;
  *(ulong *)(param_2 + 8) = *(long *)(param_2 + 8) + (ulong)uVar1;
  return;
}


