/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa6400; name: FUN_00aa6400
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00aa6400(long param_1)

{
  short sVar1;
  undefined1 uVar2;
  
  if ((*(short *)(param_1 + 0x24c) == 0xf9) || (*(long *)(param_1 + 0x138) == 0)) {
    uVar2 = true;
    sVar1 = *(short *)(param_1 + 0x47c);
  }
  else {
    uVar2 = false;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = *(char *)(*(long *)(param_1 + 0x28) + 0x170) != '\0';
    }
    sVar1 = *(short *)(param_1 + 0x47c);
  }
  if ((sVar1 == 0xf9) || (*(long *)(param_1 + 0x368) == 0)) {
    sVar1 = *(short *)(param_1 + 0x6ac);
  }
  else if (*(long *)(param_1 + 600) == 0) {
    uVar2 = false;
    sVar1 = *(short *)(param_1 + 0x6ac);
  }
  else {
    uVar2 = uVar2 & *(char *)(*(long *)(param_1 + 600) + 0x170) != '\0';
    sVar1 = *(short *)(param_1 + 0x6ac);
  }
  if ((sVar1 == 0xf9) || (*(long *)(param_1 + 0x598) == 0)) {
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  else if (*(long *)(param_1 + 0x488) == 0) {
    uVar2 = false;
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  else {
    uVar2 = uVar2 & *(char *)(*(long *)(param_1 + 0x488) + 0x170) != '\0';
    sVar1 = *(short *)(param_1 + 0x8dc);
  }
  if ((sVar1 == 0xf9) || (*(long *)(param_1 + 0x7c8) == 0)) {
    sVar1 = *(short *)(param_1 + 0xb0c);
  }
  else if (*(long *)(param_1 + 0x6b8) == 0) {
    uVar2 = false;
    sVar1 = *(short *)(param_1 + 0xb0c);
  }
  else {
    uVar2 = uVar2 & *(char *)(*(long *)(param_1 + 0x6b8) + 0x170) != '\0';
    sVar1 = *(short *)(param_1 + 0xb0c);
  }
  if ((sVar1 == 0xf9) || (*(long *)(param_1 + 0x9f8) == 0)) {
    return (bool)uVar2;
  }
  if (*(long *)(param_1 + 0x8e8) == 0) {
    return false;
  }
  return (bool)(uVar2 & *(char *)(*(long *)(param_1 + 0x8e8) + 0x170) != '\0');
}


