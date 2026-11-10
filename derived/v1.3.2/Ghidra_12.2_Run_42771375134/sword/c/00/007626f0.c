/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007626f0; name: FUN_007626f0
 */


void FUN_007626f0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  MutexType *pMVar3;
  
  lVar1 = *(long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (lVar1 != 0) {
    FUN_00765390(lVar1);
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
              (*(long **)(param_1 + 0x148),lVar1,*(undefined8 *)(param_1 + 0x150),
               *(undefined8 *)(param_1 + 0x158));
  }
  lVar1 = *(long *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (lVar1 != 0) {
    FUN_00765b90(lVar1);
    (**(code **)(**(long **)(param_1 + 0x108) + 0x18))
              (*(long **)(param_1 + 0x108),lVar1,*(undefined8 *)(param_1 + 0x110),
               *(undefined8 *)(param_1 + 0x118));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
              (*(long **)(param_1 + 0x98),puVar2,*(undefined8 *)(param_1 + 0xa0),
               *(undefined8 *)(param_1 + 0xa8));
  }
  puVar2 = *(undefined8 **)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),puVar2,*(undefined8 *)(param_1 + 0xe8),
               *(undefined8 *)(param_1 + 0xf0));
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
              (*(long **)(param_1 + 0xb8),puVar2,*(undefined8 *)(param_1 + 0xc0),
               *(undefined8 *)(param_1 + 200));
  }
  pMVar3 = *(MutexType **)(param_1 + 0x348);
  *(undefined8 *)(param_1 + 0x348) = 0;
  if (pMVar3 == (MutexType *)0x0) {
    return;
  }
  nn::os::FinalizeMutex(pMVar3);
                    /* WARNING: Could not recover jumptable at 0x00762828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x350) + 0x18))
            (*(long **)(param_1 + 0x350),pMVar3,*(undefined8 *)(param_1 + 0x358),
             *(undefined8 *)(param_1 + 0x360));
  return;
}


