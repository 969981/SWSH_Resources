/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054dfa0; name: FUN_0054dfa0
 */


void FUN_0054dfa0(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(long *)(param_1 + 0x318) - (long)*(long **)(param_1 + 0x310);
  if (0 < (int)(uVar2 >> 3)) {
    lVar3 = 0;
    lVar4 = **(long **)(param_1 + 0x310);
    cVar1 = *(char *)(lVar4 + 0xc0);
    while( true ) {
      if (cVar1 != '\0') {
        if (*(long **)(lVar4 + 0xa0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0xa0) + 0x18))();
          *(undefined8 *)(lVar4 + 0xa0) = 0;
        }
        if (*(long **)(lVar4 + 0xa8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0xa8) + 0x18))();
          *(undefined8 *)(lVar4 + 0xa8) = 0;
        }
        if (*(long **)(lVar4 + 0xb0) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0xb0) + 0x18))();
          *(undefined8 *)(lVar4 + 0xb0) = 0;
        }
        if (*(long **)(lVar4 + 0xb8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + 0xb8) + 0x18))();
          *(undefined8 *)(lVar4 + 0xb8) = 0;
        }
      }
      *(undefined1 *)(lVar4 + 0xc0) = 0;
      if ((uVar2 >> 3 & 0xffffffff) - 1 == lVar3) break;
      lVar3 = lVar3 + 1;
      lVar4 = *(long *)(*(long *)(param_1 + 0x310) + lVar3 * 8);
      cVar1 = *(char *)(lVar4 + 0xc0);
    }
  }
  return;
}


