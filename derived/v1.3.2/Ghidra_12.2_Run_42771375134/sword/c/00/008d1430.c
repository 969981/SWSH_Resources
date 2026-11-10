/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008d1430; name: FUN_008d1430
 */


void FUN_008d1430(long *param_1)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  puVar4 = PTR_DAT_02710a18;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  puVar4 = PTR_DAT_02710860;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar8;
  puVar5 = PTR_DAT_02717b68;
  puVar1 = PTR_DAT_02710528;
  *PTR_DAT_02717b60 = 1;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[9] = (long)(puVar5 + 0x40);
  plVar9 = param_1 + 10;
  *plVar9 = (long)(puVar1 + 0x10);
  lVar6 = FUN_007606c0();
  lVar8 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar6 + 0x10);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 4));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_008d152c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_008d152c:
  puVar1 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = plVar9;
  *(long *)(puVar1 + 0x800) = *(long *)(puVar1 + 0x800) + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 4));
  puVar1 = PTR_DAT_02717b70 + 0x10;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[10] = (long)puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(long **)PTR_DAT_02717b78 = plVar9;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[0x18] = lVar6;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[0x1c] = lVar6;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  puVar4 = PTR_DAT_02717b78;
  plVar7 = *(long **)(*(long *)PTR_DAT_02710540 + 8);
  lVar6 = *(long *)PTR_DAT_02717b78;
  *(undefined8 *)(lVar6 + 0x20) = 0x164000;
  *(long **)(lVar6 + 0x10) = plVar7;
  plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x164000,8);
  *(long **)(lVar6 + 0x18) = plVar7;
  if (plVar7 == (long *)0x0) {
    (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))();
    plVar7 = *(long **)(lVar6 + 0x18);
  }
  FUN_00760770(plVar7,plVar7 + 0x17,0x163f48,0);
  *(long **)(lVar6 + 8) = plVar7;
  param_1[0x13] = (long)plVar7;
  lVar8 = *(long *)puVar4;
  *(long **)(lVar8 + 0x30) = plVar7;
  *(undefined8 *)(lVar8 + 0x40) = 0x64000;
  lVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,0x64000,8);
  *(long *)(lVar8 + 0x38) = lVar6;
  if (lVar6 == 0) {
    (**(code **)(**(long **)(lVar8 + 0x30) + 0xb8))();
    lVar6 = *(long *)(lVar8 + 0x38);
  }
  FUN_00760770(lVar6,lVar6 + 0xb8,0x63f48,0);
  *(long *)(lVar8 + 0x28) = lVar6;
  return;
}


