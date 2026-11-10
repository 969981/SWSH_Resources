/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e0a90; name: FUN_006e0a90
 */


void FUN_006e0a90(long param_1,undefined8 *param_2,float *param_3,undefined4 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x1a8);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x19c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006e0b08;
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
LAB_006e0b08:
  if ((*(long *)(param_1 + 0x148) != 0) && (*(long *)(param_1 + 0x150) != 0)) {
    if (*(char *)(param_1 + 400) != '\0') {
      *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x160);
      *(undefined1 *)(param_1 + 400) = 0;
    }
    auVar10 = NEON_fmov(0x3f800000,4);
    fVar11 = ((float)*param_2 * *param_3 + (float)param_2[2] * param_3[1] +
              (float)param_2[4] * param_3[2] + auVar10._0_4_ * (float)param_2[6]) * 0.5 + 0.5;
    fVar9 = ((float)((ulong)*param_2 >> 0x20) * *param_3 +
             (float)((ulong)param_2[2] >> 0x20) * param_3[1] +
             (float)((ulong)param_2[4] >> 0x20) * param_3[2] +
            auVar10._4_4_ * (float)((ulong)param_2[6] >> 0x20)) * 0.5 + 0.5;
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    iVar5 = FUN_006f82b0();
    iVar7 = (int)(fVar11 * (float)(iVar5 + -1));
    iVar5 = FUN_006f8330(*(undefined8 *)(param_1 + 0x150));
    iStack_74 = (int)(fVar9 * (float)(iVar5 + -1));
    local_70 = 0x100000001;
    puVar2 = *(undefined8 **)(param_1 + 0x168);
    local_78 = iVar7;
    local_68 = param_4;
    if (puVar2 < *(undefined8 **)(param_1 + 0x170)) {
      uVar8 = *(undefined8 *)(param_1 + 0x178);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *(undefined4 *)(puVar2 + 2) = local_68;
      *puVar2 = CONCAT44(iStack_74,local_78);
      puVar2[1] = local_70;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + 0x14;
    }
    else {
      FUN_006e14c0(param_1 + 0x160,&local_78);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x19c));
  return;
}


