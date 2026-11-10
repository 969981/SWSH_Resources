/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012a5470; name: FUN_012a5470
 */


void FUN_012a5470(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_02727290;
  if ((lVar2 != 0) && (uVar1 = FUN_012a88c0(lVar2), (uVar1 & 1) != 0)) {
    FUN_012a8840(lVar2);
    if (*(long *)PTR_DAT_02710958 != 0) {
      FUN_01210e50();
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      *(undefined1 *)(param_1 + 0x50) = 0;
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    if (*(char *)(param_1 + 0x84) != '\0') {
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    if (*(char *)(param_1 + 0xc0) != '\0') {
      if (*(char *)(param_1 + 200) != '\0') {
        *(undefined1 *)(param_1 + 200) = 0;
      }
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    if (*(char *)(param_1 + 0x110) != '\0') {
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
    if (*(char *)(param_1 + 0x160) != '\0') {
      *(undefined1 *)(param_1 + 0x160) = 0;
    }
    if (*(char *)(param_1 + 0x170) != '\0') {
      *(undefined1 *)(param_1 + 0x170) = 0;
    }
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    if (*(char *)(param_1 + 0x1e0) != '\0') {
      *(undefined1 *)(param_1 + 0x1e0) = 0;
    }
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      *(undefined1 *)(param_1 + 0x2a0) = 0;
    }
    if (*(char *)(param_1 + 0x2f0) != '\0') {
      *(undefined1 *)(param_1 + 0x2f0) = 0;
    }
    if (*(char *)(param_1 + 0x300) != '\0') {
      *(undefined1 *)(param_1 + 0x300) = 0;
    }
    *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x338);
    *(undefined1 *)(param_1 + 0x1d8) = 0;
  }
  return;
}


