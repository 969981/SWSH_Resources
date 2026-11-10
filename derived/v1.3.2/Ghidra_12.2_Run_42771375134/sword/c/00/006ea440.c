/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006ea440; name: FUN_006ea440
 */


void FUN_006ea440(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  ulong uVar12;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar2 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *plVar2 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_006ea49c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_006ea49c:
  puVar7 = (undefined4 *)
           FUN_006eeb50(*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100),param_1);
  puVar8 = *(undefined4 **)(param_1 + 0x100);
  if (puVar7 != puVar8) {
    puVar3 = (undefined4 *)((long)puVar7 + ((long)puVar8 - (long)puVar7));
    if (puVar3 != puVar8) {
      lVar6 = *(long *)(param_1 + 0xf8);
      lVar11 = (long)puVar7 - lVar6 >> 4;
      uVar12 = (long)puVar8 + ((~((long)puVar8 - (long)puVar7 >> 4) - lVar11) * 0x10 - lVar6);
      puVar10 = puVar3;
      puVar9 = puVar7;
      if (((uint)uVar12 >> 4 & 1) == 0) {
        *puVar7 = *puVar3;
        *(undefined8 *)(lVar6 + lVar11 * 0x10 + 8) = *(undefined8 *)(puVar3 + 2);
        puVar10 = puVar3 + 4;
        puVar9 = puVar7 + 4;
      }
      if (0xf < uVar12) {
        do {
          *puVar9 = *puVar10;
          *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar10 + 2);
          puVar9[4] = puVar10[4];
          puVar1 = (undefined8 *)(puVar10 + 6);
          puVar10 = puVar10 + 8;
          *(undefined8 *)(puVar9 + 6) = *puVar1;
          puVar9 = puVar9 + 8;
        } while (puVar10 != puVar8);
      }
      puVar7 = (undefined4 *)
               ((long)puVar7 + ((long)puVar8 + (-0x10 - (long)puVar3) & 0xfffffffffffffff0U) + 0x10)
      ;
    }
    *(undefined4 **)(param_1 + 0x100) = puVar7;
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *plVar2 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


