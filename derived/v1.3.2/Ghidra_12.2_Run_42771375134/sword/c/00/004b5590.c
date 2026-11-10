/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b5590; name: FUN_004b5590
 */


long * FUN_004b5590(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (param_3 != 1) {
    puVar1 = (undefined8 *)(param_1 + 0x98);
  }
  for (plVar2 = (long *)puVar1[1]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if ((int)plVar2[3] == param_2) goto LAB_004b562c;
  }
  plVar2 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x30);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = 0;
    *(int *)(plVar2 + 3) = param_2;
    plVar2[4] = 0;
    plVar2[5] = 0;
    if (puVar1[1] == 0) {
      *puVar1 = plVar2;
      puVar1[1] = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = puVar1[1];
      puVar1[1] = plVar2;
    }
  }
LAB_004b562c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return plVar2;
}


