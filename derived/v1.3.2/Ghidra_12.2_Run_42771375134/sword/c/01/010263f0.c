/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010263f0; name: FUN_010263f0
 */


void FUN_010263f0(int *param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 auStack_190 [336];
  
  if (*param_1 != -1) {
    nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x4c));
                    /* WARNING: Subroutine does not return */
    memset(auStack_190,0,0x148);
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    (**(code **)(**(long **)(param_1 + 0x34) + 0x18))
              (*(long **)(param_1 + 0x34),*(undefined8 *)(param_1 + 0x44),
               *(long *)(param_1 + 0x48) * 0x118,8);
  }
  plVar1 = *(long **)(param_1 + 0x40);
  if ((long *)(param_1 + 0x38) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_010264f0:
    (*pcVar2)();
  }
  else if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    goto LAB_010264f0;
  }
  plVar1 = *(long **)(param_1 + 0x30);
  if ((long *)(param_1 + 0x28) == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_01026520;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_01026520:
  pcVar2 = *(code **)(param_1 + 6);
  if (pcVar2 != (code *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    (*pcVar2)(param_1 + 0xc);
  }
  return;
}


