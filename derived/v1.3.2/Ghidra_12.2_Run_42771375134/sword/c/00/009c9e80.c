/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9e80; name: FUN_009c9e80
 */


void FUN_009c9e80(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x24) == '\0') {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 2) {
      FUN_009c9b50(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x25),
                   *(undefined4 *)(param_1 + 0x28));
      *(undefined1 *)(param_1 + 0x24) = 1;
      return;
    }
    if (iVar1 == 1) {
      if (*(long **)(param_1 + 0x10) == (long *)0x0) {
        *(undefined4 *)(param_1 + 0x20) = 2;
        return;
      }
      uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x1f0))();
      uVar5 = (**(code **)(**(long **)(param_1 + 0x10) + 0x520))();
      if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        return;
      }
    }
    else if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        *(undefined4 *)(param_1 + 0x20) = 1;
        return;
      }
      uVar3 = FUN_008f9770(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x25));
      (**(code **)(**(long **)(param_1 + 0x10) + 0x518))(*(long **)(param_1 + 0x10),uVar3);
      uVar3 = FUN_008fb070(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x25));
      uVar2 = FUN_009c9c00(*(undefined4 *)(param_1 + 0x28));
      (**(code **)(**(long **)(param_1 + 0x10) + 0x1e8))(*(long **)(param_1 + 0x10),uVar3,uVar2,1);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      return;
    }
  }
  return;
}


