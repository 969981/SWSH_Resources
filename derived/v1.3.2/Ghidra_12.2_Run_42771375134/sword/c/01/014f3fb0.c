/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f3fb0; name: FUN_014f3fb0
 */


void FUN_014f3fb0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  
  if (param_1[0x8d] != 0) {
    (**(code **)(*(long *)(param_1[0x8d] + 0x48) + 0x18))();
    param_1[0x8d] = 0;
  }
  if (param_1[0x8b] != 0) {
    (**(code **)(*(long *)(param_1[0x8b] + 0x48) + 0x18))();
    param_1[0x8b] = 0;
  }
  plVar6 = (long *)param_1[0x8a];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar6 + 0x18))();
    }
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    (**(code **)(*(long *)(param_1[0x89] + 0x48) + 0x18))();
    param_1[0x89] = 0;
  }
  param_1[0x66] = (long)(PTR_DAT_02715090 + 0x10);
  if (param_1[0x67] == 0) {
    param_1[0x67] = 0;
    pcVar8 = (code *)param_1[0x79];
  }
  else {
    FUN_006e2100(param_1[0x67],param_1 + 0x66);
    lVar7 = param_1[0x67];
    param_1[0x67] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x79];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    (*pcVar8)(param_1 + 0x7c);
  }
  pcVar8 = (code *)param_1[0x69];
  if (pcVar8 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar8)(param_1 + 0x6c);
  }
  if (param_1[0x67] != 0) {
    (**(code **)(*(long *)(param_1[0x67] + 0x48) + 0x18))();
    param_1[0x67] = 0;
  }
  param_1[0x44] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0x45] == 0) {
    param_1[0x45] = 0;
    pcVar8 = (code *)param_1[0x57];
  }
  else {
    FUN_006e2100(param_1[0x45],param_1 + 0x44);
    lVar7 = param_1[0x45];
    param_1[0x45] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x57];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x59] = 0;
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    (*pcVar8)(param_1 + 0x5a);
  }
  pcVar8 = (code *)param_1[0x47];
  if (pcVar8 != (code *)0x0) {
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    (*pcVar8)(param_1 + 0x4a);
  }
  if (param_1[0x45] != 0) {
    (**(code **)(*(long *)(param_1[0x45] + 0x48) + 0x18))();
    param_1[0x45] = 0;
  }
  puVar5 = PTR_DAT_02710a48;
  param_1[0x22] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x23] == 0) {
    param_1[0x23] = 0;
    pcVar8 = (code *)param_1[0x35];
  }
  else {
    FUN_006e2100(param_1[0x23],param_1 + 0x22);
    lVar7 = param_1[0x23];
    param_1[0x23] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x35];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    (*pcVar8)(param_1 + 0x38);
  }
  pcVar8 = (code *)param_1[0x25];
  if (pcVar8 != (code *)0x0) {
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    (*pcVar8)(param_1 + 0x28);
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)(param_1[0x23] + 0x48) + 0x18))();
    param_1[0x23] = 0;
  }
  *param_1 = (long)(puVar5 + 0x10);
  if (param_1[1] == 0) {
    param_1[1] = 0;
    pcVar8 = (code *)param_1[0x13];
  }
  else {
    FUN_006e2100(param_1[1],param_1);
    lVar7 = param_1[1];
    param_1[1] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x13];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*pcVar8)(param_1 + 0x16);
  }
  pcVar8 = (code *)param_1[3];
  if (pcVar8 != (code *)0x0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    (*pcVar8)(param_1 + 6);
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  return;
}


