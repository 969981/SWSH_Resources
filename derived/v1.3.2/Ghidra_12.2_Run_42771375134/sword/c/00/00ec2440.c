/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec2440; name: FUN_00ec2440
 */


void FUN_00ec2440(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar2 = PTR_DAT_027202e8;
  puVar1 = PTR_DAT_02710a48;
  param_1[0x48] = (long)(PTR_DAT_027202e8 + 0x10);
  param_1[0x4a] = (long)(puVar1 + 0x10);
  if (param_1[0x4b] == 0) {
    param_1[0x4b] = 0;
    pcVar4 = (code *)param_1[0x5d];
  }
  else {
    FUN_006e2100(param_1[0x4b],param_1 + 0x4a);
    lVar3 = param_1[0x4b];
    param_1[0x4b] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x5d];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x5f] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    (*pcVar4)(param_1 + 0x60);
  }
  pcVar4 = (code *)param_1[0x4d];
  if (pcVar4 != (code *)0x0) {
    param_1[0x4f] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    (*pcVar4)(param_1 + 0x50);
  }
  if (param_1[0x4b] != 0) {
    (**(code **)(*(long *)(param_1[0x4b] + 0x48) + 0x18))();
    param_1[0x4b] = 0;
  }
  param_1[0x24] = (long)(puVar2 + 0x10);
  param_1[0x26] = (long)(puVar1 + 0x10);
  if (param_1[0x27] == 0) {
    param_1[0x27] = 0;
    pcVar4 = (code *)param_1[0x39];
  }
  else {
    FUN_006e2100(param_1[0x27],param_1 + 0x26);
    lVar3 = param_1[0x27];
    param_1[0x27] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x39];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    (*pcVar4)(param_1 + 0x3c);
  }
  pcVar4 = (code *)param_1[0x29];
  if (pcVar4 != (code *)0x0) {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar4)(param_1 + 0x2c);
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
    param_1[0x27] = 0;
  }
  *param_1 = (long)(puVar2 + 0x10);
  param_1[2] = (long)(puVar1 + 0x10);
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar4 = (code *)param_1[0x15];
  }
  else {
    FUN_006e2100();
    lVar3 = param_1[3];
    param_1[3] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x15];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar4)(param_1 + 0x18);
  }
  pcVar4 = (code *)param_1[5];
  if (pcVar4 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar4)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


