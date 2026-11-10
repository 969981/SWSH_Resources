/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012115f0; name: FUN_012115f0
 */


void FUN_012115f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char local_70 [4];
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  puVar5 = (undefined8 *)((ulong)local_70 | 4);
  local_5c = param_2[2];
  local_6c = *param_2;
  local_64 = param_2[1];
  local_54 = param_2[3];
  local_4c = param_2[4];
  local_44 = param_2[5];
  local_3c = param_2[6];
  local_70[0] = '\x01';
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x370) == '\0') {
LAB_012116d8:
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *(undefined8 *)(param_1 + 900) = puVar5[2];
    *(undefined8 *)(param_1 + 0x37c) = uVar2;
    *(undefined8 *)(param_1 + 0x374) = uVar1;
    uVar1 = puVar5[5];
    uVar2 = puVar5[3];
    uVar4 = puVar5[4];
    *(undefined8 *)(param_1 + 0x3a4) = puVar5[6];
    *(undefined8 *)(param_1 + 0x39c) = uVar1;
    *(undefined8 *)(param_1 + 0x394) = uVar4;
    *(undefined8 *)(param_1 + 0x38c) = uVar2;
    *(undefined1 *)(param_1 + 0x370) = 1;
  }
  else {
    uVar3 = FUN_0121c430(param_1 + 0x374,puVar5);
    if ((uVar3 & 1) != 0) goto LAB_0121172c;
    if (*(char *)(param_1 + 0x370) == '\0') {
      if (local_70[0] != '\0') goto LAB_012116d8;
    }
    else if (local_70[0] == '\0') {
      *(undefined1 *)(param_1 + 0x370) = 0;
    }
    else {
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      *(undefined8 *)(param_1 + 900) = puVar5[2];
      *(undefined8 *)(param_1 + 0x37c) = uVar2;
      *(undefined8 *)(param_1 + 0x374) = uVar1;
      uVar1 = puVar5[3];
      uVar2 = puVar5[4];
      uVar4 = puVar5[5];
      *(undefined8 *)(param_1 + 0x3a2) = *(undefined8 *)((long)puVar5 + 0x2e);
      *(undefined8 *)(param_1 + 0x394) = uVar2;
      *(undefined8 *)(param_1 + 0x39c) = uVar4;
      *(undefined8 *)(param_1 + 0x38c) = uVar1;
    }
  }
  FUN_01225e20(param_1 + 0x310);
LAB_0121172c:
  if (local_70[0] != '\0') {
    local_70[0] = '\0';
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return;
}


