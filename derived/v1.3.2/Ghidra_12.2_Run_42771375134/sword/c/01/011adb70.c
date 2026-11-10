/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011adb70; name: FUN_011adb70
 */


uint FUN_011adb70(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    uVar2 = 2;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_0080e480();
    uVar2 = (uVar2 | 1) + iVar1;
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  return uVar2;
}


