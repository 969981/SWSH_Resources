/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01006440; name: FUN_01006440
 */


void FUN_01006440(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710a48;
  *param_1 = (long)(PTR_DAT_027234a8 + 0x10);
  param_1[0x6a] = (long)(puVar1 + 0x10);
  if (param_1[0x6b] == 0) {
    param_1[0x6b] = 0;
    pcVar3 = (code *)param_1[0x7d];
  }
  else {
    FUN_006e2100(param_1[0x6b],param_1 + 0x6a);
    lVar2 = param_1[0x6b];
    param_1[0x6b] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x7d];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    (*pcVar3)(param_1 + 0x80);
  }
  pcVar3 = (code *)param_1[0x6d];
  if (pcVar3 != (code *)0x0) {
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    (*pcVar3)(param_1 + 0x70);
  }
  if (param_1[0x6b] != 0) {
    (**(code **)(*(long *)(param_1[0x6b] + 0x48) + 0x18))();
    param_1[0x6b] = 0;
  }
  param_1[0x48] = (long)(puVar1 + 0x10);
  if (param_1[0x49] == 0) {
    param_1[0x49] = 0;
    pcVar3 = (code *)param_1[0x5b];
  }
  else {
    FUN_006e2100(param_1[0x49],param_1 + 0x48);
    lVar2 = param_1[0x49];
    param_1[0x49] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x5b];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar3)(param_1 + 0x5e);
  }
  pcVar3 = (code *)param_1[0x4b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    (*pcVar3)(param_1 + 0x4e);
  }
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
    param_1[0x49] = 0;
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)(param_1[0x47] + 0x48) + 0x18))();
    param_1[0x47] = 0;
  }
  if (param_1[0x46] != 0) {
    (**(code **)(*(long *)(param_1[0x46] + 0x48) + 0x18))();
    param_1[0x46] = 0;
  }
  puVar1 = PTR_DAT_0271dee8;
  param_1[0x24] = (long)(PTR_DAT_0271dee8 + 0x10);
  if (param_1[0x25] == 0) {
    param_1[0x25] = 0;
    pcVar3 = (code *)param_1[0x37];
  }
  else {
    FUN_006e2100(param_1[0x25],param_1 + 0x24);
    lVar2 = param_1[0x25];
    param_1[0x25] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x37];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar3)(param_1 + 0x3a);
  }
  pcVar3 = (code *)param_1[0x27];
  if (pcVar3 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar3)(param_1 + 0x2a);
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  param_1[2] = (long)(puVar1 + 0x10);
  if (param_1[3] == 0) {
    param_1[3] = 0;
    pcVar3 = (code *)param_1[0x15];
  }
  else {
    FUN_006e2100();
    lVar2 = param_1[3];
    param_1[3] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x15];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar3)(param_1 + 0x18);
  }
  pcVar3 = (code *)param_1[5];
  if (pcVar3 != (code *)0x0) {
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (*pcVar3)(param_1 + 8);
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  return;
}


