/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fd350; name: FUN_004fd350
 */


void FUN_004fd350(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 5));
  bVar1 = *(byte *)(param_1 + 0x17);
  param_1[0xf] = param_2;
  if ((uint)bVar1 < *(uint *)(param_1 + 0x14)) {
    puVar2 = (undefined8 *)param_1[0x16];
    uVar3 = (uint)bVar1;
    if (uVar3 != 0) {
      if (2 < uVar3 - 1) {
        iVar4 = (uVar3 & 3) - uVar3;
        do {
          puVar2 = *(undefined8 **)**(undefined8 **)*puVar2;
          iVar4 = iVar4 + 4;
        } while (iVar4 != 0);
      }
      if ((bVar1 & 3) != 0) {
        iVar4 = -(uVar3 & 3);
        do {
          puVar2 = (undefined8 *)*puVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0);
      }
    }
    if (*(long *)puVar2[1] + (ulong)*(uint *)(puVar2 + 2) != param_2) {
      FUN_004fc530(param_1);
      goto LAB_004fd410;
    }
  }
  else {
    (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  }
  FUN_004fcbe0(param_1);
LAB_004fd410:
  nn::os::UnlockMutex((MutexType *)(param_1 + 5));
  return;
}


