/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6aa30; name: FUN_00d6aa30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d6aa30(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar3 = PTR_DAT_0271e278;
  *param_1 = (long)(PTR_DAT_0271e278 + 0x10);
  param_1[1] = lVar5;
  param_1[9] = (long)(puVar3 + 0x48);
  FUN_01565c40(param_1 + 0xb);
  param_1[0x95] = 0;
  param_1[0x92] = -0x340d631b7bddd9bb;
  param_1[0x93] = (long)&DAT_01d38550;
  param_1[0x94] = 0;
  param_1[0x96] = -0x340d631b7bddd9bb;
  param_1[0x97] = (long)&DAT_01d38550;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x9c] = -0x340d631b7bddd9bb;
  param_1[0x9d] = (long)&DAT_01d38550;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  FUN_008d4290(param_1 + 0xa2);
  param_1[0xa4] = 0;
  param_1[0xa5] = (long)(PTR_DAT_02710528 + 0x10);
  lVar4 = FUN_007606c0();
  lVar5 = nn::os::GetCurrentThread();
  plVar6 = (long *)(lVar4 + 0x10);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar4 + 4));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_00d6ab88;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar5;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_00d6ab88:
  puVar3 = PTR_DAT_02710530;
  if (0xff < *(ulong *)(PTR_DAT_02710530 + 0x800)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(PTR_DAT_02710530 + *(ulong *)(PTR_DAT_02710530 + 0x800) * 8) = param_1 + 0xa5;
  *(long *)(puVar3 + 0x800) = *(long *)(puVar3 + 0x800) + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar4 + 4));
  param_1[0xa9] = 0;
  param_1[0xa5] = (long)(PTR_DAT_0271e280 + 0x10);
  puVar3 = PTR_DAT_0271e288;
  param_1[0xa8] = 0;
  param_1[0xa7] = 0;
  param_1[0xa6] = 0;
  *(long **)puVar3 = param_1 + 0xa5;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0x100;
  FUN_013d8680(param_1 + 0xb,param_2);
  if (*(char *)((long)param_1 + 0x464) != '\0') {
    lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    lVar4 = _DAT_00000060;
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar4 = *(long *)(lVar5 + 0x60);
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
    if (lVar4 == 0) {
      *(undefined1 *)((long)param_1 + 0x464) = 0;
    }
  }
  return;
}


