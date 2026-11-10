/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd570; name: FUN_004bd570
 */


int FUN_004bd570(long param_1,void *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x160));
  if (*(long *)((long)param_2 + 0x18) != 0) {
    iVar2 = FUN_0044d170(param_1 + 0xd8,*(undefined8 *)((long)param_2 + 0x20));
    if (iVar2 == 1) goto LAB_004bd5b4;
LAB_004bd678:
    FUN_00442030((long)param_2 + 8);
    goto LAB_004bd680;
  }
LAB_004bd5b4:
  puVar3 = *(undefined8 **)(param_1 + 400);
  puVar1 = (undefined8 *)(param_1 + 400);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x50);
    if (puVar3 == (undefined8 *)0x0) {
      if (*(long *)((long)param_2 + 0x18) != 0) {
        FUN_0044d330(param_1 + 0xd8,*(undefined8 *)((long)param_2 + 0x20));
      }
      iVar2 = 2;
      goto LAB_004bd678;
    }
    puVar3[1] = 0xffffffff;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = *puVar1;
    *puVar1 = puVar3;
    puVar4 = *(undefined8 **)(param_1 + 0x188);
    if (puVar4 == (undefined8 *)0x0) goto LAB_004bd610;
LAB_004bd5c8:
    *puVar4 = puVar3;
    puVar3 = (undefined8 *)*puVar1;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x188);
    if (puVar4 != (undefined8 *)0x0) goto LAB_004bd5c8;
LAB_004bd610:
    *(undefined8 **)(param_1 + 0x180) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x188) = puVar3;
  *(undefined8 *)(param_1 + 400) = *puVar3;
  *puVar3 = 0;
  *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + 1;
  memcpy((void *)(*(long *)(param_1 + 0x188) + 8),param_2,0x48);
  FUN_00443f60(param_1,param_2);
  nn::os::SignalEvent((EventType *)(param_1 + 0x130));
  iVar2 = 1;
LAB_004bd680:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
  return iVar2;
}


