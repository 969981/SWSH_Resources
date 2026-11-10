/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dc6c0; name: FUN_007dc6c0
 */


void FUN_007dc6c0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = DAT_029f5478;
  if (DAT_029f5478 != (undefined8 *)0x0 && DAT_029f5480 != (long *)0x0) {
    plVar3 = (long *)*DAT_029f5478;
    if (plVar3 != (long *)0x0) {
      if ((long *)DAT_029f5478[1] == plVar3) {
        plVar2 = plVar3;
      }
      else {
        plVar2 = (long *)DAT_029f5478[1];
        do {
          plVar4 = plVar2 + -1;
          if (*plVar4 != 0) {
            (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
            plVar2[-1] = 0;
          }
          plVar2 = plVar4;
        } while (plVar3 != plVar4);
        plVar2 = (long *)*puVar1;
      }
      puVar1[1] = plVar3;
      (**(code **)(*(long *)puVar1[3] + 0x18))((long *)puVar1[3],plVar2,puVar1[2] - (long)plVar2,8);
    }
    (**(code **)(*DAT_029f5480 + 0x18))(DAT_029f5480,DAT_029f5478,0x30,8);
  }
  DAT_029f5478 = (undefined8 *)0x0;
  DAT_029f5480 = (long *)0x0;
  return;
}


