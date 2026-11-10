/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f620; name: FUN_0029f620
 */


void FUN_0029f620(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
                    /* try { // try from 0029f640 to 0029f653 has its CatchHandler @ 0029f66c */
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar2);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


