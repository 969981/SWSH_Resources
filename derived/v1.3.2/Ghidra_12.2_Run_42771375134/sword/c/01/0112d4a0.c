/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0112d4a0; name: FUN_0112d4a0
 */


undefined1 FUN_0112d4a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 2) {
      FUN_016ad050(*(undefined8 *)(param_1 + 0x68));
      uVar2 = (**(code **)(**(long **)(param_1 + 0x68) + 0x18))();
      if ((uVar2 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x60) = 0;
        return *(undefined1 *)(param_1 + 0x60);
      }
    }
    else if (iVar1 == 1) {
      FUN_016acfc0(*(undefined8 *)(param_1 + 0x68));
      FUN_016ad050(*(undefined8 *)(param_1 + 0x68));
      FUN_016ad0b0(*(undefined8 *)(param_1 + 0x68));
      if (*(char *)(param_1 + 0x88) != '\0') {
        *(undefined4 *)(param_1 + 100) = 2;
        *(undefined1 *)(param_1 + 0x60) = 1;
      }
    }
    else if (iVar1 == 0) {
      FUN_016ad050(*(undefined8 *)(param_1 + 0x68));
      uVar2 = (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
      if ((uVar2 & 1) != 0) {
        *(undefined4 *)(param_1 + 100) = 1;
        *(undefined1 *)(param_1 + 0x60) = 1;
        return *(undefined1 *)(param_1 + 0x60);
      }
    }
  }
  return *(undefined1 *)(param_1 + 0x60);
}


