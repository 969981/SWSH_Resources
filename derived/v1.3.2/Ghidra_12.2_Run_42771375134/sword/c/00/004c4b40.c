/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4b40; name: FUN_004c4b40
 */


undefined8 FUN_004c4b40(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  
  if (*(char *)(param_1 + 0x29) != *(char *)(param_2 + 0x29)) {
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x28);
  uVar2 = bVar3 - 0x80;
  if (0x20 < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  uVar2 = *(byte *)(param_2 + 0x28) - 0x80;
  if (0x20 < uVar2) {
    return 0;
  }
  if ((1L << ((ulong)uVar2 & 0x3f) & 0x100010001U) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x2a) != *(char *)(param_2 + 0x2a)) {
    return 0;
  }
  if ((*(byte *)(param_2 + 0x30) >> 2 & 1) != 0) {
    return 0;
  }
  if (bVar3 == 0x80) {
LAB_004c4bcc:
    if ((*(byte *)(param_2 + 0x28) == 0x90) && (*(char *)(param_2 + 0x2b) != '\0')) {
      *(undefined1 *)(param_1 + 0x28) = 0x80;
      *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
      piVar4 = *(int **)(param_2 + 0x10);
      *(int **)(param_1 + 0x10) = piVar4;
      *piVar4 = *piVar4 + 1;
      bVar3 = *(byte *)(param_1 + 0x28);
    }
LAB_004c4c04:
    if (bVar3 == 0x80) {
      bVar3 = 4;
      goto LAB_004c4c64;
    }
    if (bVar3 != 0x90) {
      bVar3 = 0;
      goto LAB_004c4c64;
    }
    cVar1 = *(char *)(param_1 + 0x2b);
  }
  else {
    if (bVar3 != 0x90) goto LAB_004c4c04;
    cVar1 = *(char *)(param_1 + 0x2b);
    if (cVar1 == '\0') goto LAB_004c4bcc;
  }
  bVar3 = (cVar1 == '\0') << 2;
LAB_004c4c64:
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfb | bVar3;
  return 1;
}


