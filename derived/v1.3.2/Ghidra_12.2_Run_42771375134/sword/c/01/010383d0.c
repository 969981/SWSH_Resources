/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010383d0; name: FUN_010383d0
 */


undefined8 FUN_010383d0(long param_1)

{
  char cVar1;
  int iVar2;
  
  FUN_01679fa0(*(undefined8 *)(param_1 + 0x5d0));
  FUN_01679940(*(undefined8 *)(param_1 + 0x5d0));
  if ((*(char *)(param_1 + 0x600) == '\0') ||
     (iVar2 = FUN_01679c30(*(undefined8 *)(param_1 + 0x5d0)), iVar2 != 0)) {
    cVar1 = *(char *)(param_1 + 0x601);
  }
  else {
    FUN_01038bb0(*(undefined8 *)(param_1 + 0x5e0));
    *(undefined1 *)(param_1 + 0x600) = 0;
    cVar1 = *(char *)(param_1 + 0x601);
  }
  if (cVar1 != '\0') {
    iVar2 = FUN_01679c20(*(undefined8 *)(param_1 + 0x5d0));
    if (*(long *)(param_1 + 0x5e0) == 0) {
      if (iVar2 != 6) {
        return 0;
      }
    }
    else if (((*(byte *)(*(long *)(param_1 + 0x5e0) + 0x58) ^ 1) & iVar2 == 6) == 0) {
      return 0;
    }
    FUN_01679b30(*(undefined8 *)(param_1 + 0x5d0),1);
    if (*(long *)(param_1 + 0x5e0) != 0) {
      *(undefined1 *)(param_1 + 0x600) = 0;
      FUN_00ffcad0(param_1 + 0x100,0);
    }
    *(undefined1 *)(param_1 + 0x6f1) = 0;
    *(undefined1 *)(param_1 + 0x601) = 0;
  }
  return 0;
}


