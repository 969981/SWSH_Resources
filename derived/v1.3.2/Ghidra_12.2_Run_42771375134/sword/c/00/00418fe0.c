/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00418fe0; name: FUN_00418fe0
 */


void FUN_00418fe0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x100);
  uVar1 = *(int *)(param_1 + 0x118) - 1;
  if (uVar1 == uVar3) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    uVar3 = uVar1;
  }
  else {
    if (*(long *)(param_1 + (ulong)uVar1 * 8) == *param_2) {
      return;
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    if ((int)uVar1 <= (int)(uVar3 - 1)) {
      do {
        iVar2 = uVar3 - 2;
        uVar3 = uVar3 - 1;
      } while ((int)uVar1 <= iVar2);
      *(uint *)(param_1 + 0x100) = uVar3;
    }
  }
  *(long *)(param_1 + (ulong)uVar3 * 8) = *param_2;
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return;
}


