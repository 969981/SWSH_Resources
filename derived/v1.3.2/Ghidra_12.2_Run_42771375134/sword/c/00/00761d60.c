/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00761d60; name: FUN_00761d60
 */


void FUN_00761d60(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    lVar1 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    FUN_007642a0();
    lVar1 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (lVar1 != 0) {
      FUN_00762270(lVar1);
      (**(code **)(**(long **)(param_1 + 0x68) + 0x18))
                (*(long **)(param_1 + 0x68),lVar1,*(undefined8 *)(param_1 + 0x70),
                 *(undefined8 *)(param_1 + 0x78));
    }
    lVar1 = *(long *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x18))
              (*(long **)(param_1 + 0xa8),lVar1,*(undefined8 *)(param_1 + 0xb0),
               *(undefined8 *)(param_1 + 0xb8));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)*puVar2)(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00761e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x88) + 0x18))
            (*(long **)(param_1 + 0x88),puVar2,*(undefined8 *)(param_1 + 0x90),
             *(undefined8 *)(param_1 + 0x98));
  return;
}


