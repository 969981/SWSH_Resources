/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d36a0; name: FUN_006d36a0
 */


void FUN_006d36a0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  plVar5 = (long *)(param_1 + 0xf0);
  FUN_006d3cd0(param_1 + 0x120,*(long *)(param_1 + 0xf8) - *plVar5 >> 3);
  puVar4 = (undefined8 *)*plVar5;
  puVar8 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar4 != puVar8) {
    do {
      if (puVar4 != puVar8) {
        do {
          puVar7 = puVar4 + 1;
          puVar4 = (undefined8 *)*puVar4;
          uVar6 = puVar4[4];
          plVar2 = (long *)puVar4[1];
          uVar1 = puVar4[2];
          uVar3 = puVar4[3];
          (**(code **)*puVar4)();
          (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6);
          (**(code **)(*plVar2 + 0x90))(plVar2);
          puVar4 = puVar7;
        } while (puVar8 != puVar7);
        puVar4 = (undefined8 *)*plVar5;
      }
      *(undefined8 **)(param_1 + 0xf8) = puVar4;
      puVar8 = puVar4;
      if (*(long *)(param_1 + 0x120) != *(long *)(param_1 + 0x128)) {
        FUN_006d3cd0(plVar5,*(long *)(param_1 + 0x128) - *(long *)(param_1 + 0x120) >> 3);
        FUN_006d3e30(plVar5,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x120),
                     *(undefined8 *)(param_1 + 0x128));
        *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x120);
        puVar4 = *(undefined8 **)(param_1 + 0xf0);
        puVar8 = *(undefined8 **)(param_1 + 0xf8);
      }
    } while (puVar4 != puVar8);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}


