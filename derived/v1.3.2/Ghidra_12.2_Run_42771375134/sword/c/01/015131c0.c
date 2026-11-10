/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 015131c0; name: FUN_015131c0
 */


void FUN_015131c0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  
  puVar1 = PTR_DAT_02710ad8;
  param_1[0xaa] = (long)(PTR_DAT_02710ad8 + 0x10);
  if (param_1[0xab] == 0) {
    param_1[0xab] = 0;
    pcVar3 = (code *)param_1[0xbd];
  }
  else {
    FUN_006e2100(param_1[0xab],param_1 + 0xaa);
    lVar2 = param_1[0xab];
    param_1[0xab] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0xbd];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0xbf] = 0;
    param_1[0xbe] = 0;
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    (*pcVar3)(param_1 + 0xc0);
  }
  pcVar3 = (code *)param_1[0xad];
  if (pcVar3 != (code *)0x0) {
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
    param_1[0xad] = 0;
    param_1[0xac] = 0;
    (*pcVar3)(param_1 + 0xb0);
  }
  if (param_1[0xab] != 0) {
    (**(code **)(*(long *)(param_1[0xab] + 0x48) + 0x18))();
    param_1[0xab] = 0;
  }
  param_1[0x88] = (long)(puVar1 + 0x10);
  if (param_1[0x89] == 0) {
    param_1[0x89] = 0;
    pcVar3 = (code *)param_1[0x9b];
  }
  else {
    FUN_006e2100(param_1[0x89],param_1 + 0x88);
    lVar2 = param_1[0x89];
    param_1[0x89] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x9b];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    param_1[0x9b] = 0;
    param_1[0x9a] = 0;
    (*pcVar3)(param_1 + 0x9e);
  }
  pcVar3 = (code *)param_1[0x8b];
  if (pcVar3 != (code *)0x0) {
    param_1[0x8d] = 0;
    param_1[0x8c] = 0;
    param_1[0x8b] = 0;
    param_1[0x8a] = 0;
    (*pcVar3)(param_1 + 0x8e);
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)(param_1[0x89] + 0x48) + 0x18))();
    param_1[0x89] = 0;
  }
  param_1[0x66] = (long)(puVar1 + 0x10);
  if (param_1[0x67] == 0) {
    param_1[0x67] = 0;
    pcVar3 = (code *)param_1[0x79];
  }
  else {
    FUN_006e2100(param_1[0x67],param_1 + 0x66);
    lVar2 = param_1[0x67];
    param_1[0x67] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x79];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    (*pcVar3)(param_1 + 0x7c);
  }
  pcVar3 = (code *)param_1[0x69];
  if (pcVar3 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar3)(param_1 + 0x6c);
  }
  if (param_1[0x67] != 0) {
    (**(code **)(*(long *)(param_1[0x67] + 0x48) + 0x18))();
    param_1[0x67] = 0;
  }
  param_1[0x44] = (long)(puVar1 + 0x10);
  if (param_1[0x45] == 0) {
    param_1[0x45] = 0;
    pcVar3 = (code *)param_1[0x57];
  }
  else {
    FUN_006e2100(param_1[0x45],param_1 + 0x44);
    lVar2 = param_1[0x45];
    param_1[0x45] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x57];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar3)(param_1 + 0x5a);
  }
  pcVar3 = (code *)param_1[0x47];
  if (pcVar3 != (code *)0x0) {
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    (*pcVar3)(param_1 + 0x4a);
  }
  if (param_1[0x45] != 0) {
    (**(code **)(*(long *)(param_1[0x45] + 0x48) + 0x18))();
    param_1[0x45] = 0;
  }
  param_1[0x22] = (long)(puVar1 + 0x10);
  if (param_1[0x23] == 0) {
    param_1[0x23] = 0;
    pcVar3 = (code *)param_1[0x35];
  }
  else {
    FUN_006e2100(param_1[0x23],param_1 + 0x22);
    lVar2 = param_1[0x23];
    param_1[0x23] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x35];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar3)(param_1 + 0x38);
  }
  pcVar3 = (code *)param_1[0x25];
  if (pcVar3 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar3)(param_1 + 0x28);
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  *param_1 = (long)(puVar1 + 0x10);
  if (param_1[1] == 0) {
    param_1[1] = 0;
    pcVar3 = (code *)param_1[0x13];
  }
  else {
    FUN_006e2100(param_1[1],param_1);
    lVar2 = param_1[1];
    param_1[1] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    pcVar3 = (code *)param_1[0x13];
  }
  if (pcVar3 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar3)(param_1 + 0x16);
  }
  pcVar3 = (code *)param_1[3];
  if (pcVar3 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar3)(param_1 + 6);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


