/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01429b60; name: FUN_01429b60
 */


void FUN_01429b60(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x5d8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x5e0) = 0;
    *(undefined8 *)(param_1 + 0x5e8) = 0;
    *(undefined8 *)(param_1 + 0x5d0) = 0;
    *(undefined8 *)(param_1 + 0x5d8) = 0;
    (*pcVar1)(param_1 + 0x5f0);
  }
  *(undefined1 **)(param_1 + 0x5d0) = &LAB_0142a080;
  *(undefined1 **)(param_1 + 0x5d8) = &LAB_0142a090;
  *(undefined1 **)(param_1 + 0x5e0) = &LAB_0142a0a0;
  *(undefined1 **)(param_1 + 0x5e8) = &LAB_0142a0b0;
  return;
}


