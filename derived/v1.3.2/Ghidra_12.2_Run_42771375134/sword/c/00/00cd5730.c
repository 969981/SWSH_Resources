/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd5730; name: FUN_00cd5730
 */


undefined8 FUN_00cd5730(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 200);
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x18));
  if ((iVar1 != 0) && (*(char *)(lVar2 + 0x28) == '\0')) {
    return 0;
  }
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x30));
  if ((iVar1 != 0) && (*(char *)(lVar2 + 0x40) == '\0')) {
    return 0;
  }
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x48));
  if ((iVar1 != 0) && (*(char *)(lVar2 + 0x58) == '\0')) {
    return 0;
  }
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x60));
  if ((iVar1 != 0) && (*(char *)(lVar2 + 0x70) == '\0')) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 200);
  iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x18));
  if ((((iVar1 == 0) || (*(char *)(lVar2 + 0x29) != '\0')) &&
      ((iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x30)), iVar1 == 0 ||
       (*(char *)(lVar2 + 0x41) != '\0')))) &&
     ((iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x48)), iVar1 == 0 ||
      (*(char *)(lVar2 + 0x59) != '\0')))) {
    iVar1 = FUN_0077d480(*(undefined8 *)(lVar2 + 0x60));
    if (iVar1 == 0) {
      return 2;
    }
    if (*(char *)(lVar2 + 0x71) != '\0') {
      return 2;
    }
  }
  return 1;
}


