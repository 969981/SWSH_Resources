/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00449b60; name: FUN_00449b60
 */


void FUN_00449b60(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  undefined *puVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  
  puVar3 = PTR_DAT_02712af0;
  puVar7 = *(undefined8 **)(param_2 + 0x60);
  puVar8 = puVar7;
  if (*(int *)(param_2 + 0x68) != 0) {
    do {
      nn::os::LockMutex((MutexType *)puVar3);
      if (puVar8 != (undefined8 *)(*(long *)(param_2 + 0x60) + (ulong)*(uint *)(param_2 + 0x68) * 8)
         ) {
        cVar9 = '\x01';
        puVar7 = puVar8;
        do {
          puVar8 = puVar7 + 1;
          (**(code **)(*(long *)*puVar7 + 0x18))();
          cVar9 = cVar9 + '\x01';
          if (cVar9 == '\0') break;
          puVar7 = puVar8;
        } while (puVar8 != (undefined8 *)
                           (*(long *)(param_2 + 0x60) + (ulong)*(uint *)(param_2 + 0x68) * 8));
      }
      nn::os::UnlockMutex((MutexType *)puVar3);
      puVar7 = *(undefined8 **)(param_2 + 0x60);
    } while (puVar8 != puVar7 + *(uint *)(param_2 + 0x68));
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 0x68) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar7);
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0;
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 1;
  *(undefined8 *)(param_2 + 0x50) = param_3;
  *(undefined8 *)(param_2 + 0x58) = param_4;
  puVar3 = PTR_DAT_02712de0;
  uVar6 = *(undefined8 *)PTR_DAT_02712de0;
  uVar4 = FUN_00435920();
  lVar5 = FUN_004361b0(uVar6,0x1a,uVar4);
  *(long *)(lVar5 + 4) = param_2;
  piVar1 = (int *)(*(long *)puVar3 + 0x94);
  do {
    cVar9 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar2) {
      *piVar1 = *piVar1 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  FUN_004360c0(*(undefined8 *)puVar3,0);
  return;
}


