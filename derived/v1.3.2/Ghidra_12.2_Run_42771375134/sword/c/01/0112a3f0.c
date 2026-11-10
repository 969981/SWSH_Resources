/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0112a3f0; name: FUN_0112a3f0
 */


bool FUN_0112a3f0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x70) == '\0') {
    return false;
  }
  if (*(int *)(param_1 + 0x74) == 1) {
    uVar4 = FUN_00ff0890(*(undefined8 *)(param_1 + 0x60));
    if ((uVar4 & 1) == 0) {
      return *(char *)(param_1 + 0x70) != '\0';
    }
    local_24 = 0;
    iVar1 = FUN_00ff3bf0(*(undefined8 *)(param_1 + 0x60),&local_24);
    FUN_00ff08c0(*(undefined8 *)(param_1 + 0x60));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x6c) = local_24;
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x74) != 0) {
      return true;
    }
    lVar2 = FUN_00ff07b0(*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 0x60) = lVar2;
    lVar3 = FUN_00ff0930();
    if (lVar2 != lVar3) {
      *(undefined4 *)(param_1 + 0x74) = 1;
      *(undefined1 *)(param_1 + 0x70) = 1;
      return true;
    }
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  return false;
}


