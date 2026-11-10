/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211760; name: FUN_01211760
 */


void FUN_01211760(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char local_48 [4];
  undefined8 local_44;
  undefined8 local_3c;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  puVar3 = (undefined8 *)((ulong)local_48 | 4);
  local_44 = *param_2;
  local_3c = param_2[1];
  local_48[0] = '\x01';
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x35c) == '\0') {
LAB_012117f0:
    uVar2 = *puVar3;
    *(undefined8 *)(param_1 + 0x368) = puVar3[1];
    *(undefined8 *)(param_1 + 0x360) = uVar2;
    *(undefined1 *)(param_1 + 0x35c) = 1;
  }
  else {
    uVar1 = FUN_0121b360(param_1 + 0x360,puVar3);
    if ((uVar1 & 1) != 0) goto LAB_01211808;
    if (*(char *)(param_1 + 0x35c) == '\0') {
      if (local_48[0] != '\0') goto LAB_012117f0;
    }
    else if (local_48[0] == '\0') {
      *(undefined1 *)(param_1 + 0x35c) = 0;
    }
    else {
      uVar2 = *puVar3;
      *(undefined8 *)(param_1 + 0x366) = *(undefined8 *)((long)puVar3 + 6);
      *(undefined8 *)(param_1 + 0x360) = uVar2;
    }
  }
  FUN_01225e20(param_1 + 0x310);
LAB_01211808:
  if (local_48[0] != '\0') {
    local_48[0] = '\0';
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return;
}


