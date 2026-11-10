/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da4470; name: FUN_00da4470
 */


void FUN_00da4470(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  puVar1 = PTR_DAT_0271e768 + 0x58;
  puVar2 = PTR_DAT_0271e768 + 0x98;
  plVar3 = param_1 + 0x14;
  *param_1 = (long)(PTR_DAT_0271e768 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  uVar6 = FUN_00da5cd0(plVar3);
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_00da5cd0(param_1 + 0x212);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_00da5cd0(param_1 + 0x410);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_00da5cd0(param_1 + 0x60e);
        if ((uVar6 & 1) != 0) {
          uVar6 = FUN_00da5cd0(param_1 + 0x80c);
          if ((uVar6 & 1) != 0) {
            FUN_00da5dd0(plVar3);
            FUN_00da5dd0(param_1 + 0x212);
            FUN_00da5dd0(param_1 + 0x410);
            FUN_00da5dd0(param_1 + 0x60e);
            FUN_00da5dd0(param_1 + 0x80c);
          }
        }
      }
    }
  }
  plVar4 = param_1 + 0xa0a;
  plVar5 = param_1 + 0x1401;
  uVar6 = FUN_00da5cd0(plVar4);
  if ((uVar6 & 1) != 0) {
    uVar6 = FUN_00da5cd0(param_1 + 0xc08);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_00da5cd0(param_1 + 0xe06);
      if ((uVar6 & 1) != 0) {
        uVar6 = FUN_00da5cd0(param_1 + 0x1004);
        if ((uVar6 & 1) != 0) {
          uVar6 = FUN_00da5cd0(param_1 + 0x1202);
          if ((uVar6 & 1) != 0) {
            FUN_00da5dd0(plVar4);
            FUN_00da5dd0(param_1 + 0xc08);
            FUN_00da5dd0(param_1 + 0xe06);
            FUN_00da5dd0(param_1 + 0x1004);
            FUN_00da5dd0(param_1 + 0x1202);
          }
        }
      }
    }
  }
  if ((((param_1[0x1401] != 0) && (*(char *)(param_1[0x1401] + 0x170) != '\0')) &&
      (lVar7 = param_1[0x1423], lVar7 != 0)) && (*(char *)(lVar7 + 0x170) != '\0')) {
    FUN_006e2100(lVar7,param_1 + 0x1422);
    lVar7 = param_1[0x1423];
    param_1[0x1423] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    if (*plVar5 == 0) {
      *plVar5 = 0;
    }
    else {
      FUN_006e2100(*plVar5,param_1 + 0x1400);
      lVar7 = *plVar5;
      *plVar5 = 0;
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      }
    }
  }
  FUN_00da4d60(param_1);
  lVar7 = param_1[0x15af];
  param_1[0x15af] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b0];
  param_1[0x15b0] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b1];
  param_1[0x15b1] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b2];
  param_1[0x15b2] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b3];
  param_1[0x15b3] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b4];
  param_1[0x15b4] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b5];
  param_1[0x15b5] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b6];
  param_1[0x15b6] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b7];
  param_1[0x15b7] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b8];
  param_1[0x15b8] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15b9];
  param_1[0x15b9] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15ba];
  param_1[0x15ba] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15bb];
  param_1[0x15bb] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = param_1[0x15bc];
  param_1[0x15bc] = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  param_1[0x1467] = 0;
  param_1[0x1466] = 0;
  if (param_1[0x15c2] != 0) {
    (**(code **)(*(long *)(param_1[0x15c2] + 0x48) + 0x18))();
    param_1[0x15c2] = 0;
  }
  if (param_1[0x15c1] != 0) {
    (**(code **)(*(long *)(param_1[0x15c1] + 0x48) + 0x18))();
    param_1[0x15c1] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x15bd));
  FUN_00da4fc0(param_1 + 0x15af);
  puVar1 = PTR_DAT_02710a48;
  param_1[0x1444] = (long)(PTR_DAT_02710a48 + 0x10);
  if (param_1[0x1445] == 0) {
    param_1[0x1445] = 0;
    pcVar8 = (code *)param_1[0x1457];
  }
  else {
    FUN_006e2100();
    lVar7 = param_1[0x1445];
    param_1[0x1445] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x1457];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x1459] = 0;
    param_1[0x1458] = 0;
    param_1[0x1457] = 0;
    param_1[0x1456] = 0;
    (*pcVar8)(param_1 + 0x145a);
  }
  pcVar8 = (code *)param_1[0x1447];
  if (pcVar8 != (code *)0x0) {
    param_1[0x1449] = 0;
    param_1[0x1448] = 0;
    param_1[0x1447] = 0;
    param_1[0x1446] = 0;
    (*pcVar8)(param_1 + 0x144a);
  }
  if (param_1[0x1445] != 0) {
    (**(code **)(*(long *)(param_1[0x1445] + 0x48) + 0x18))();
    param_1[0x1445] = 0;
  }
  param_1[0x1422] = (long)(puVar1 + 0x10);
  if (param_1[0x1423] == 0) {
    param_1[0x1423] = 0;
    pcVar8 = (code *)param_1[0x1435];
  }
  else {
    FUN_006e2100();
    lVar7 = param_1[0x1423];
    param_1[0x1423] = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x1435];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x1437] = 0;
    param_1[0x1436] = 0;
    param_1[0x1435] = 0;
    param_1[0x1434] = 0;
    (*pcVar8)(param_1 + 0x1438);
  }
  pcVar8 = (code *)param_1[0x1425];
  if (pcVar8 != (code *)0x0) {
    param_1[0x1427] = 0;
    param_1[0x1426] = 0;
    param_1[0x1425] = 0;
    param_1[0x1424] = 0;
    (*pcVar8)(param_1 + 0x1428);
  }
  if (param_1[0x1423] != 0) {
    (**(code **)(*(long *)(param_1[0x1423] + 0x48) + 0x18))();
    param_1[0x1423] = 0;
  }
  param_1[0x1400] = (long)(puVar1 + 0x10);
  if (*plVar5 == 0) {
    *plVar5 = 0;
    pcVar8 = (code *)param_1[0x1413];
  }
  else {
    FUN_006e2100();
    lVar7 = *plVar5;
    *plVar5 = 0;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    }
    pcVar8 = (code *)param_1[0x1413];
  }
  if (pcVar8 != (code *)0x0) {
    param_1[0x1415] = 0;
    param_1[0x1414] = 0;
    param_1[0x1413] = 0;
    param_1[0x1412] = 0;
    (*pcVar8)(param_1 + 0x1416);
  }
  pcVar8 = (code *)param_1[0x1403];
  if (pcVar8 != (code *)0x0) {
    param_1[0x1405] = 0;
    param_1[0x1404] = 0;
    param_1[0x1403] = 0;
    param_1[0x1402] = 0;
    (*pcVar8)(param_1 + 0x1406);
  }
  if (*plVar5 != 0) {
    (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
    *plVar5 = 0;
  }
  FUN_00dade20(param_1 + 0x1202);
  FUN_00dade20(param_1 + 0x1004);
  FUN_00dade20(param_1 + 0xe06);
  FUN_00dade20(param_1 + 0xc08);
  FUN_00dade20(plVar4);
  FUN_00dade20(param_1 + 0x80c);
  FUN_00dade20(param_1 + 0x60e);
  FUN_00dade20(param_1 + 0x410);
  FUN_00dade20(param_1 + 0x212);
  FUN_00dade20(plVar3);
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  if (param_1[0xc] != 0) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
    param_1[0xc] = 0;
  }
  puVar1 = PTR_DAT_027152a8 + 0x50;
  puVar2 = PTR_DAT_027152a8 + 0x90;
  *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


