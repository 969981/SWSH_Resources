/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c6db0; name: FUN_012c6db0
 */


void FUN_012c6db0(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code cVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  code *local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  FUN_012c6870(&local_d0);
  if ((local_d0 == (code *)0x0) ||
     (cVar5 = local_d0[0x80], (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))(), cVar5 != (code)0x0
     )) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*(code *)param_1[2])(param_1 + 4,auStack_b0);
    local_d0 = (code *)*param_1;
    local_c8 = (code *)param_1[1];
    local_c0 = param_1[2];
    uStack_b8 = param_1[3];
    (*local_d0)(auStack_b0);
    pcVar8 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = (code *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar8)(auStack_b0);
    }
  }
  else {
    FUN_012c6870(&local_d0);
    pcVar8 = local_d0;
    if (local_d0 != (code *)0x0) {
      lVar10 = nn::os::GetCurrentThread();
      pcVar1 = pcVar8 + 200;
      do {
        if (*(long *)pcVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(pcVar8 + 0xbc));
            while (*(long *)pcVar1 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
              if (bVar7) {
                *(long *)pcVar1 = lVar10;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_012c6eb8;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar7) {
          *(long *)pcVar1 = lVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_012c6eb8:
      pcVar9 = local_d0;
      puVar2 = *(undefined8 **)(local_d0 + 0x90);
      if (puVar2 == *(undefined8 **)(local_d0 + 0x98)) {
        FUN_012c74e0(local_d0 + 0x88,param_1);
      }
      else {
        uVar11 = *(undefined8 *)(local_d0 + 0xa0);
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar11;
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        if ((code *)param_1[2] != (code *)0x0) {
          (*(code *)param_1[2])(param_1 + 4,puVar2 + 4);
          uVar11 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[3];
          puVar2[2] = param_1[2];
          puVar2[3] = uVar4;
          *puVar2 = uVar11;
          puVar2[1] = uVar3;
        }
        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        *(long *)(pcVar9 + 0x90) = *(long *)(pcVar9 + 0x90) + 0x80;
      }
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar7) {
          *(long *)pcVar1 = 0;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(pcVar8 + 0xbc));
      if (local_d0 != (code *)0x0) {
        (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


