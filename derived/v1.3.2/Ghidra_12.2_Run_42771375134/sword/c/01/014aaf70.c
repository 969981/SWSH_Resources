/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014aaf70; name: FUN_014aaf70
 */


void FUN_014aaf70(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_0272a1e0 + 0x48;
  *param_1 = (long)(PTR_DAT_0272a1e0 + 0x10);
  param_1[9] = (long)puVar1;
  FUN_014ab100(param_1 + 0x54);
  if (param_1[0x52] != 0) {
    (**(code **)(*(long *)(param_1[0x52] + 0x48) + 0x18))();
    param_1[0x52] = 0;
  }
  puVar1 = PTR_DAT_02710a48;
  param_1[0x30] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x31] == 0) {
    param_1[0x31] = 0;
    pcVar3 = (code *)param_1[0x43];
  }
  else {
    FUN_006e2100(param_1[0x31],param_1 + 0x30);
    lVar2 = param_1[0x31];
    param_1[0x31] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x43];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    (*pcVar3)(param_1 + 0x46);
  }
  pcVar3 = (code *)param_1[0x33];
  if (pcVar3 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar3)(param_1 + 0x36);
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
    param_1[0x2e] = 0;
  }
  param_1[0xc] = (long)(puVar1 + 0x10);
  if (param_1[0xd] == 0) {
    param_1[0xd] = 0;
    pcVar3 = (code *)param_1[0x1f];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[0xd];
    param_1[0xd] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x1f];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar3)(param_1 + 0x22);
  }
  pcVar3 = (code *)param_1[0xf];
  if (pcVar3 != (code *)0x0) {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    (*pcVar3)(param_1 + 0x12);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  return;
}


