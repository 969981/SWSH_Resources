/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075b4d0; name: FUN_0075b4d0
 */


void FUN_0075b4d0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)&DAT_029f3840);
  lVar4 = *(long *)(param_1 + 0x138);
  puVar1 = (undefined8 *)(param_1 + 0xb8);
  lVar5 = lVar4 << 6;
  if (lVar5 != 0) {
    puVar3 = puVar1;
    do {
      nn::hid::VibrationNodeConnection::Disconnect();
      puVar2 = (undefined8 *)puVar3[4];
      puVar3[4] = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(*(long *)puVar3[5] + 0x18))((long *)puVar3[5],puVar2,puVar3[6],puVar3[7]);
      }
      puVar2 = (undefined8 *)*puVar3;
      *puVar3 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],puVar2,puVar3[2],puVar3[3]);
      }
      puVar3 = puVar3 + 8;
      lVar5 = lVar5 + -0x40;
    } while (lVar5 != 0);
    lVar4 = *(long *)(param_1 + 0x138);
  }
  while (lVar4 != 0) {
    puVar3 = (undefined8 *)puVar1[4];
    puVar1[4] = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*(long *)puVar1[5] + 0x18))((long *)puVar1[5],puVar3,puVar1[6],puVar1[7]);
    }
    puVar3 = (undefined8 *)*puVar1;
    lVar4 = lVar4 + -1;
    *puVar1 = 0;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*(long *)puVar1[1] + 0x18))((long *)puVar1[1],puVar3,puVar1[2],puVar1[3]);
    }
    puVar1 = puVar1 + 8;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::UnlockMutex((MutexType *)&DAT_029f3840);
  return;
}


