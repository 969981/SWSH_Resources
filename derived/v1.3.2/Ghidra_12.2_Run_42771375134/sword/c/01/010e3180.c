/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010e3180; name: FUN_010e3180
 */


void FUN_010e3180(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_02710528 + 0x10);
  lVar5 = FUN_007606c0();
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_010e3204;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_010e3204:
  puVar2 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = param_1;
  *(long *)(puVar2 + 0x800) = *(long *)(puVar2 + 0x800) + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 4));
  puVar2 = PTR_DAT_02724660 + 0x10;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)puVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(long **)PTR_DAT_02724648 = param_1;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = -0x340d631b7bddd9bb;
  param_1[8] = (long)&DAT_01d38550;
  param_1[7] = param_3[1];
  param_1[8] = param_3[2];
  param_1[9] = param_3[3];
  lVar5 = param_3[4];
  if (lVar5 == 0) {
    param_1[10] = 0;
    *(int *)(param_1 + 0xb) = (int)param_3[5];
    lVar5 = param_3[3];
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    lVar6 = param_1[10];
    param_1[10] = lVar5;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    *(int *)(param_1 + 0xb) = (int)param_3[5];
    lVar5 = param_3[3];
  }
  if (lVar5 == 0) {
    param_1[6] = *param_3;
  }
  else {
    lVar5 = *param_3;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar6 = param_1[6];
    param_1[6] = lVar5;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  lVar5 = param_3[6];
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xc] = lVar5;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}


