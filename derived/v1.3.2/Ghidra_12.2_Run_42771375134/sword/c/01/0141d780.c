/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141d780; name: FUN_0141d780
 */


void FUN_0141d780(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0xac8);
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xad0) = 0;
    *(undefined8 *)(param_1 + 0xad8) = 0;
    *(undefined8 *)(param_1 + 0xac0) = 0;
    *(undefined8 *)(param_1 + 0xac8) = 0;
    (*pcVar1)(param_1 + 0xae0);
  }
  *(long *)(param_1 + 0xae0) = param_1;
  *(undefined1 **)(param_1 + 0xac0) = &LAB_0141ff60;
  *(undefined1 **)(param_1 + 0xac8) = &LAB_01420000;
  *(undefined1 **)(param_1 + 0xad0) = &LAB_01420010;
  *(undefined1 **)(param_1 + 0xad8) = &LAB_01420020;
  return;
}


