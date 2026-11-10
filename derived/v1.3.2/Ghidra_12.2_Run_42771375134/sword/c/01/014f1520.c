/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f1520; name: FUN_014f1520
 */


void FUN_014f1520(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x600);
  pcVar1 = *(code **)(lVar2 + 0x158);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x160) = 0;
    *(undefined8 *)(lVar2 + 0x168) = 0;
    *(undefined8 *)(lVar2 + 0x150) = 0;
    *(undefined8 *)(lVar2 + 0x158) = 0;
    (*pcVar1)(lVar2 + 0x170);
  }
  *(long *)(lVar2 + 0x170) = param_1;
  *(undefined8 *)(lVar2 + 0x150) = &LAB_014f2700;
  *(undefined1 **)(lVar2 + 0x158) = &LAB_014f2710;
  *(undefined1 **)(lVar2 + 0x160) = &LAB_014f2720;
  *(undefined1 **)(lVar2 + 0x168) = &LAB_014f2730;
  *(undefined8 *)(*(long *)(param_1 + 0x600) + 0xf8) = param_2;
  return;
}


