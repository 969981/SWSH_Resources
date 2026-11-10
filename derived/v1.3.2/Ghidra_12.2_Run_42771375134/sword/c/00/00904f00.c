/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00904f00; name: FUN_00904f00
 */


void FUN_00904f00(long param_1)

{
  char cVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x2aa) == '\0') {
    cVar1 = *(char *)(param_1 + 0x2a6);
    cVar2 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
    if ((cVar1 == cVar2) && (*(short *)(param_1 + 0x292) != 0)) {
      *(undefined2 *)(param_1 + 0x292) = 0;
      *(undefined1 *)(param_1 + 0x294) = 0;
      FUN_008f99f0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
    }
    if (*(char *)(param_1 + 0x2aa) == '\0') {
      cVar1 = *(char *)(param_1 + 0x2a6);
      cVar2 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
      if ((cVar1 == cVar2) && (*(short *)(param_1 + 0x296) != 0)) {
        *(undefined2 *)(param_1 + 0x296) = 0;
        *(undefined1 *)(param_1 + 0x298) = 0;
        FUN_008f99f0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
      }
      if (*(char *)(param_1 + 0x2aa) == '\0') {
        cVar1 = *(char *)(param_1 + 0x2a6);
        cVar2 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
        if ((cVar1 == cVar2) && (*(short *)(param_1 + 0x29a) != 0)) {
          *(undefined2 *)(param_1 + 0x29a) = 0;
          *(undefined1 *)(param_1 + 0x29c) = 0;
          FUN_008f99f0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
        }
        if (*(char *)(param_1 + 0x2aa) == '\0') {
          cVar1 = *(char *)(param_1 + 0x2a6);
          cVar2 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58));
          if ((cVar1 == cVar2) && (*(short *)(param_1 + 0x29e) != 0)) {
            *(undefined2 *)(param_1 + 0x29e) = 0;
            *(undefined1 *)(param_1 + 0x2a0) = 0;
            FUN_008f99f0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
          }
          if (((*(char *)(param_1 + 0x2aa) == '\0') &&
              (cVar1 = *(char *)(param_1 + 0x2a6),
              cVar2 = FUN_008f98a0(*(undefined8 *)(param_1 + 0x58)), cVar1 == cVar2)) &&
             (*(short *)(param_1 + 0x2a2) != 0)) {
            *(undefined2 *)(param_1 + 0x2a2) = 0;
            *(undefined1 *)(param_1 + 0x2a4) = 0;
            FUN_008f99f0(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x2a6));
            return;
          }
        }
      }
    }
  }
  return;
}


