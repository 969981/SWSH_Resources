/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5b30; name: FUN_004b5b30
 */


void FUN_004b5b30(long param_1,int param_2,long param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 != (long *)0x0) {
    if (param_3 == 0) {
      do {
        if ((int)plVar1[2] == 0 || (int)plVar1[2] == param_2) {
          (*(code *)**(undefined8 **)plVar1[1])((undefined8 *)plVar1[1],param_2);
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
    else {
      do {
        while (((int)plVar1[2] != 0 && (int)plVar1[2] != param_2 || (plVar1[3] != param_3))) {
          plVar1 = (long *)*plVar1;
          if (plVar1 == (long *)0x0) {
            return;
          }
        }
        (*(code *)**(undefined8 **)plVar1[1])((undefined8 *)plVar1[1],param_2);
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
    }
  }
  return;
}


