/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a90b90; name: FUN_00a90b90
 */


void FUN_00a90b90(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  
  puVar6 = PTR_DAT_027196d0;
  param_1[4] = 0;
  *param_1 = (long)(puVar6 + 0x10);
  plVar7 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
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
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  plVar7 = (long *)param_1[2];
  param_1[2] = 0;
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
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
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  if ((int)param_1[5] == 0) {
    FUN_00893f20(0x3f800000,*(undefined8 *)PTR_DAT_027107a8);
    lVar8 = param_1[0xe2];
  }
  else {
    lVar8 = param_1[0xe2];
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    param_1[0xe2] = 0;
  }
  param_1[0xc0] = (long)(PTR_DAT_02715af8 + 0x10);
  if (param_1[0xc1] == 0) {
    param_1[0xc1] = 0;
    pcVar9 = (code *)param_1[0xd3];
  }
  else {
    FUN_006e2100(param_1[0xc1],param_1 + 0xc0);
    lVar8 = param_1[0xc1];
    param_1[0xc1] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0xd3];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0xd5] = 0;
    param_1[0xd4] = 0;
    param_1[0xd3] = 0;
    param_1[0xd2] = 0;
    (*pcVar9)(param_1 + 0xd6);
  }
  pcVar9 = (code *)param_1[0xc3];
  if (pcVar9 != (code *)0x0) {
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    param_1[0xc3] = 0;
    param_1[0xc2] = 0;
    (*pcVar9)(param_1 + 0xc6);
  }
  if (param_1[0xc1] != 0) {
    (**(code **)(*(long *)(param_1[0xc1] + 0x48) + 0x18))();
    param_1[0xc1] = 0;
  }
  puVar6 = PTR_DAT_02710a48;
  param_1[0x9e] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x9f] == 0) {
    param_1[0x9f] = 0;
    pcVar9 = (code *)param_1[0xb1];
  }
  else {
    FUN_006e2100(param_1[0x9f],param_1 + 0x9e);
    lVar8 = param_1[0x9f];
    param_1[0x9f] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0xb1];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0xb3] = 0;
    param_1[0xb2] = 0;
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
    (*pcVar9)(param_1 + 0xb4);
  }
  pcVar9 = (code *)param_1[0xa1];
  if (pcVar9 != (code *)0x0) {
    param_1[0xa3] = 0;
    param_1[0xa2] = 0;
    param_1[0xa1] = 0;
    param_1[0xa0] = 0;
    (*pcVar9)(param_1 + 0xa4);
  }
  if (param_1[0x9f] != 0) {
    (**(code **)(*(long *)(param_1[0x9f] + 0x48) + 0x18))();
    param_1[0x9f] = 0;
  }
  lVar8 = param_1[0x9a];
  param_1[0x9a] = 0;
  if (lVar8 != 0) {
    FUN_00784490(lVar8);
    (**(code **)(*(long *)param_1[0x9b] + 0x18))
              ((long *)param_1[0x9b],lVar8,param_1[0x9c],param_1[0x9d]);
  }
  lVar8 = param_1[0x96];
  param_1[0x96] = 0;
  if (lVar8 != 0) {
    FUN_00784490(lVar8);
    (**(code **)(*(long *)param_1[0x97] + 0x18))
              ((long *)param_1[0x97],lVar8,param_1[0x98],param_1[0x99]);
  }
  puVar5 = PTR_DAT_02710808;
  param_1[0x74] = (long)(PTR_DAT_02710808 + 0x10);
  if (param_1[0x75] == 0) {
    param_1[0x75] = 0;
    pcVar9 = (code *)param_1[0x87];
  }
  else {
    FUN_006e2100(param_1[0x75],param_1 + 0x74);
    lVar8 = param_1[0x75];
    param_1[0x75] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x87];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x89] = 0;
    param_1[0x88] = 0;
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    (*pcVar9)(param_1 + 0x8a);
  }
  pcVar9 = (code *)param_1[0x77];
  if (pcVar9 != (code *)0x0) {
    param_1[0x79] = 0;
    param_1[0x78] = 0;
    param_1[0x77] = 0;
    param_1[0x76] = 0;
    (*pcVar9)(param_1 + 0x7a);
  }
  if (param_1[0x75] != 0) {
    (**(code **)(*(long *)(param_1[0x75] + 0x48) + 0x18))();
    param_1[0x75] = 0;
  }
  param_1[0x52] = (long)(puVar5 + 0x10);
  if (param_1[0x53] == 0) {
    param_1[0x53] = 0;
    pcVar9 = (code *)param_1[0x65];
  }
  else {
    FUN_006e2100(param_1[0x53],param_1 + 0x52);
    lVar8 = param_1[0x53];
    param_1[0x53] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x65];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x67] = 0;
    param_1[0x66] = 0;
    param_1[0x65] = 0;
    param_1[100] = 0;
    (*pcVar9)(param_1 + 0x68);
  }
  pcVar9 = (code *)param_1[0x55];
  if (pcVar9 != (code *)0x0) {
    param_1[0x57] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 0;
    param_1[0x54] = 0;
    (*pcVar9)(param_1 + 0x58);
  }
  if (param_1[0x53] != 0) {
    (**(code **)(*(long *)(param_1[0x53] + 0x48) + 0x18))();
    param_1[0x53] = 0;
  }
  param_1[0x30] = (long)(puVar6 + 0x10);
  if (param_1[0x31] == 0) {
    param_1[0x31] = 0;
    pcVar9 = (code *)param_1[0x43];
  }
  else {
    FUN_006e2100(param_1[0x31],param_1 + 0x30);
    lVar8 = param_1[0x31];
    param_1[0x31] = 0;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    pcVar9 = (code *)param_1[0x43];
  }
  if (pcVar9 != (code *)0x0) {
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    (*pcVar9)(param_1 + 0x46);
  }
  pcVar9 = (code *)param_1[0x33];
  if (pcVar9 != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*pcVar9)(param_1 + 0x36);
  }
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  plVar7 = (long *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)(puVar6 + 0x10);
    if (plVar7[1] == 0) {
      plVar7[1] = 0;
      pcVar9 = (code *)plVar7[0x13];
    }
    else {
      FUN_006e2100(plVar7[1],plVar7);
      lVar8 = plVar7[1];
      plVar7[1] = 0;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      pcVar9 = (code *)plVar7[0x13];
    }
    if (pcVar9 != (code *)0x0) {
      plVar7[0x14] = 0;
      plVar7[0x15] = 0;
      plVar7[0x12] = 0;
      plVar7[0x13] = 0;
      (*pcVar9)(plVar7 + 0x16);
    }
    pcVar9 = (code *)plVar7[3];
    if (pcVar9 != (code *)0x0) {
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      (*pcVar9)(plVar7 + 6);
    }
    if (plVar7[1] != 0) {
      (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
      plVar7[1] = 0;
    }
    (**(code **)(*(long *)param_1[0x2b] + 0x18))
              ((long *)param_1[0x2b],plVar7,param_1[0x2c],param_1[0x2d]);
  }
  plVar7 = (long *)param_1[0x26];
  param_1[0x26] = 0;
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)(PTR_DAT_027196d8 + 0x10);
    if (plVar7[1] == 0) {
      plVar7[1] = 0;
      pcVar9 = (code *)plVar7[0x13];
    }
    else {
      FUN_006e2100(plVar7[1],plVar7);
      lVar8 = plVar7[1];
      plVar7[1] = 0;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
      }
      pcVar9 = (code *)plVar7[0x13];
    }
    if (pcVar9 != (code *)0x0) {
      plVar7[0x14] = 0;
      plVar7[0x15] = 0;
      plVar7[0x12] = 0;
      plVar7[0x13] = 0;
      (*pcVar9)(plVar7 + 0x16);
    }
    pcVar9 = (code *)plVar7[3];
    if (pcVar9 != (code *)0x0) {
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      (*pcVar9)(plVar7 + 6);
    }
    if (plVar7[1] != 0) {
      (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
      plVar7[1] = 0;
    }
    (**(code **)(*(long *)param_1[0x27] + 0x18))
              ((long *)param_1[0x27],plVar7,param_1[0x28],param_1[0x29]);
  }
  plVar7 = (long *)param_1[3];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
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
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
    param_1[3] = 0;
  }
  plVar7 = (long *)param_1[2];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
    piVar1 = (int *)(lVar8 + 0x54);
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
      *(undefined8 *)(lVar8 + 0x60) = 0;
      (**(code **)(*plVar7 + 0x18))();
    }
    param_1[2] = 0;
  }
  return;
}


