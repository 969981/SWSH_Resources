/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c5300; name: FUN_007c5300
 */


undefined8 FUN_007c5300(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x60));
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  lVar1 = *(long *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xa0) = lVar1;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  lVar6 = *(long *)(lVar1 + 0x48);
  if (lVar6 != 0) {
    puVar5 = *(undefined8 **)(lVar1 + 0x40);
    do {
      lVar6 = lVar6 + -1;
      (**(code **)*puVar5)(puVar5);
      puVar5 = puVar5 + 0x30;
    } while (lVar6 != 0);
  }
  *(undefined8 *)(lVar1 + 0x48) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x60));
  return uVar4;
}


