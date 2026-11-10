/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f2e20; name: FUN_006f2e20
 */


void FUN_006f2e20(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x88);
  *(undefined1 *)(param_1 + 0x109) = 0;
  if (pcVar1 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar1)(param_1 + 0xa0);
  }
  FUN_006f3430(*(long *)(param_1 + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170);
  return;
}


