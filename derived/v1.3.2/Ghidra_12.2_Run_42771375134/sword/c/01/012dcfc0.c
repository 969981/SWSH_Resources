/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012dcfc0; name: FUN_012dcfc0
 */


void FUN_012dcfc0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  
  puVar1 = PTR_DAT_02727a68 + 0xe0;
  puVar2 = PTR_DAT_02727a68 + 0x150;
  *param_1 = (long)(PTR_DAT_02727a68 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8e));
  param_1[0x6a] = (long)(PTR_DAT_02715090 + 0x10);
  if (param_1[0x6b] == 0) {
    param_1[0x6b] = 0;
    pcVar4 = (code *)param_1[0x7d];
  }
  else {
    FUN_006e2100(param_1[0x6b],param_1 + 0x6a);
    lVar3 = param_1[0x6b];
    param_1[0x6b] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x7d];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    (*pcVar4)(param_1 + 0x80);
  }
  pcVar4 = (code *)param_1[0x6d];
  if (pcVar4 != (code *)0x0) {
    param_1[0x6f] = 0;
    param_1[0x6e] = 0;
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    (*pcVar4)(param_1 + 0x70);
  }
  if (param_1[0x6b] != 0) {
    (**(code **)(*(long *)(param_1[0x6b] + 0x48) + 0x18))();
    param_1[0x6b] = 0;
  }
  param_1[0x48] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0x49] == 0) {
    param_1[0x49] = 0;
    pcVar4 = (code *)param_1[0x5b];
  }
  else {
    FUN_006e2100(param_1[0x49],param_1 + 0x48);
    lVar3 = param_1[0x49];
    param_1[0x49] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x5b];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x5d] = 0;
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5a] = 0;
    (*pcVar4)(param_1 + 0x5e);
  }
  pcVar4 = (code *)param_1[0x4b];
  if (pcVar4 != (code *)0x0) {
    param_1[0x4d] = 0;
    param_1[0x4c] = 0;
    param_1[0x4b] = 0;
    param_1[0x4a] = 0;
    (*pcVar4)(param_1 + 0x4e);
  }
  if (param_1[0x49] != 0) {
    (**(code **)(*(long *)(param_1[0x49] + 0x48) + 0x18))();
    param_1[0x49] = 0;
  }
  if ((char)param_1[0x45] != '\0') {
    if (param_1[0x47] != 0) {
      (**(code **)(*(long *)(param_1[0x47] + 0x48) + 0x18))();
      param_1[0x47] = 0;
    }
    *(undefined1 *)(param_1 + 0x45) = 0;
  }
  param_1[0x22] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x23] == 0) {
    param_1[0x23] = 0;
    pcVar4 = (code *)param_1[0x35];
  }
  else {
    FUN_006e2100(param_1[0x23],param_1 + 0x22);
    lVar3 = param_1[0x23];
    param_1[0x23] = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar4 = (code *)param_1[0x35];
  }
  if (pcVar4 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar4)(param_1 + 0x38);
  }
  pcVar4 = (code *)param_1[0x25];
  if (pcVar4 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar4)(param_1 + 0x28);
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  if ((param_1[0x1d] != 0) && (param_1[0x1a] != 0)) {
    (**(code **)(*(long *)(param_1[0x1a] + 0x48) + 0x18))();
    param_1[0x1a] = 0;
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = -0x340d631b7bddd9bb;
  param_1[0x1c] = (long)&DAT_01d38550;
  param_1[0x1d] = 0;
  if (param_1[0x1e] != 0) {
    (**(code **)(*(long *)(param_1[0x1e] + 0x48) + 0x18))();
    param_1[0x1e] = 0;
  }
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((param_1[0x17] != 0) && (param_1[0x14] != 0)) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  param_1[0x14] = 0;
  param_1[0x15] = -0x340d631b7bddd9bb;
  param_1[0x16] = (long)&DAT_01d38550;
  param_1[0x17] = 0;
  if (param_1[0x18] != 0) {
    (**(code **)(*(long *)(param_1[0x18] + 0x48) + 0x18))();
    param_1[0x18] = 0;
  }
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  puVar1 = PTR_DAT_02727a70 + 0xe0;
  puVar2 = PTR_DAT_02727a70 + 0x150;
  *param_1 = (long)(PTR_DAT_02727a70 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
    param_1[0x10] = 0;
  }
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


