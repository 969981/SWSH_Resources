/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ffd620; name: FUN_00ffd620
 */


void FUN_00ffd620(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x490) != '\0') {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x450);
  lVar4 = *(long *)(lVar3 + 0x88);
  if (lVar4 != 0) {
    lVar2 = *(long *)(lVar3 + 0x80) + 0xb0;
    do {
      pcVar1 = *(code **)(lVar2 + -0x18);
      if (pcVar1 != (code *)0x0) {
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined8 *)(lVar2 + -8) = 0;
        *(undefined8 *)(lVar2 + -0x20) = 0;
        *(undefined8 *)(lVar2 + -0x18) = 0;
        (*pcVar1)(lVar2);
      }
      pcVar1 = *(code **)(lVar2 + -0x98);
      lVar4 = lVar4 + -1;
      if (pcVar1 != (code *)0x0) {
        *(undefined8 *)(lVar2 + -0x90) = 0;
        *(undefined8 *)(lVar2 + -0x88) = 0;
        *(undefined8 *)(lVar2 + -0xa0) = 0;
        *(undefined8 *)(lVar2 + -0x98) = 0;
        (*pcVar1)(lVar2 + -0x80);
      }
      lVar2 = lVar2 + 0x110;
    } while (lVar4 != 0);
  }
  *(undefined8 *)(lVar3 + 0x88) = 0;
  return;
}


