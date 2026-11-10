/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130f270; name: FUN_0130f270
 */


void FUN_0130f270(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 (*pauVar2) [16];
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  long local_60;
  long lStack_58;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x5a;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x2c4));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_0130f2dc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_0130f2dc:
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x30);
  uVar10 = FUN_012ecf10(pauVar2,0);
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_0130f6c0(param_1);
    if ((uVar10 & 1) == 0) goto LAB_0130f64c;
    auVar17 = (**(code **)(*param_1 + 0x98))(param_1);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar17;
    uVar10 = FUN_012ecf10(pauVar2,0);
    if ((uVar10 & 1) != 0) goto LAB_0130f64c;
    puVar13 = (undefined8 *)param_1[0x42];
    puVar15 = (undefined8 *)param_1[0x43];
    if (puVar13 != puVar15) {
      do {
        puVar14 = puVar13 + 0x10;
        (*(code *)*puVar13)(puVar13 + 4);
        puVar13 = puVar14;
      } while (puVar14 != puVar15);
      puVar13 = (undefined8 *)param_1[0x42];
      puVar15 = (undefined8 *)param_1[0x43];
      while (puVar14 = puVar15, puVar14 != puVar13) {
        pcVar12 = (code *)puVar14[-0xf];
        puVar15 = puVar14 + -0x10;
        if (pcVar12 != (code *)0x0) {
          puVar14[-0xe] = 0;
          puVar14[-0xd] = 0;
          puVar14[-0x10] = 0;
          puVar14[-0xf] = 0;
          (*pcVar12)(puVar14 + -0xc);
        }
      }
    }
    param_1[0x43] = (long)puVar13;
  }
  plVar4 = param_1 + 0x32;
  uVar10 = FUN_012ecf80(plVar4);
  if ((uVar10 & 1) != 0) {
    uVar10 = FUN_012ecf10(plVar4,1);
    if ((uVar10 & 1) != 0) {
      plVar3 = (long *)param_1[0x35];
      if (plVar3 == (long *)param_1[0x36]) {
        FUN_01310960(param_1 + 0x34,pauVar2);
      }
      else {
        lVar16 = param_1[0x37];
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_0130f69c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar16;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        lVar16 = param_1[0x31];
        *plVar3 = *(long *)*pauVar2;
        plVar3[1] = lVar16;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        param_1[0x35] = param_1[0x35] + 0x10;
      }
    }
    lVar9 = param_1[0x33];
    *(long *)*pauVar2 = *plVar4;
    param_1[0x31] = lVar9;
    lVar9 = *(long *)(PTR_DAT_02727b60 + 8);
    *plVar4 = *(long *)PTR_DAT_02727b60;
    param_1[0x33] = lVar9;
  }
  lVar9 = 0;
  do {
    lVar16 = *(long *)((long)param_1 + lVar9 + 0x80);
    if ((lVar16 != 0) &&
       (puVar13 = (undefined8 *)FUN_01311af0(lVar16,param_1[0x30],param_1[0x31]),
       puVar13 != (undefined8 *)0x0)) {
      FUN_01311f90(*(undefined8 *)((long)param_1 + lVar9 + 0x80));
      local_60 = *(long *)*pauVar2;
      lStack_58 = param_1[0x31];
      local_70 = (*(code *)*puVar13)(puVar13 + 4,param_2);
      *(undefined1 *)((long)param_1 + 0x1d9) = 0;
      lVar16 = *(long *)((long)param_1 + lVar9 + 0x80);
      if (lVar16 != 0) {
        (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      }
      lVar11 = param_1[0x3a];
      param_1[0x3a] = lVar16;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
      }
      uVar10 = FUN_012ecf10(local_70,0);
      if ((uVar10 & 1) == 0) {
        *pauVar2 = local_70;
        uVar10 = FUN_012ecf10(local_70,3);
        if ((uVar10 & 1) == 0) goto LAB_0130f4d0;
LAB_0130f60c:
        FUN_012ecfa0(pauVar2,3,1);
        uVar10 = FUN_012ecf10(pauVar2,3);
        if ((uVar10 & 1) == 0) goto LAB_0130f4e0;
LAB_0130f62c:
        FUN_012ecfa0(pauVar2,3,0);
        uVar10 = FUN_012ecf60(&local_60,pauVar2);
      }
      else {
        uVar10 = FUN_012ecf10(local_70,3);
        if ((uVar10 & 1) != 0) goto LAB_0130f60c;
LAB_0130f4d0:
        uVar10 = FUN_012ecf10(pauVar2,3);
        if ((uVar10 & 1) != 0) goto LAB_0130f62c;
LAB_0130f4e0:
        uVar10 = FUN_012ecf60(&local_60,pauVar2);
      }
      if ((uVar10 & 1) != 0) {
        uVar10 = FUN_012ecf10(pauVar2,1);
        if ((uVar10 & 1) == 0) {
LAB_0130f570:
          uVar10 = FUN_012ecf10(pauVar2,2);
        }
        else {
          plVar4 = (long *)param_1[0x35];
          if ((ulong)(param_1[0x36] - param_1[0x34]) <= (ulong)((long)plVar4 - param_1[0x34]))
          goto LAB_0130f6a0;
          if (plVar4 != (long *)param_1[0x36]) {
            lVar11 = param_1[0x37];
            lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
            if (*(ulong *)(lVar16 + 0x80) < 0x10) {
              *(long *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = lVar11;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
              *plVar4 = local_60;
              plVar4[1] = lStack_58;
              *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
              param_1[0x35] = param_1[0x35] + 0x10;
              goto LAB_0130f570;
            }
            goto LAB_0130f69c;
          }
          FUN_01310960(param_1 + 0x34,&local_60);
          uVar10 = FUN_012ecf10(pauVar2,2);
        }
        if ((uVar10 & 1) != 0) {
          lVar16 = param_1[0x35];
          if (lVar16 == param_1[0x34]) {
LAB_0130f6a0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          lVar11 = *(long *)(lVar16 + -8);
          *(long *)*pauVar2 = *(long *)(lVar16 + -0x10);
          param_1[0x31] = lVar11;
          param_1[0x35] = lVar16 + -0x10;
          *(undefined1 *)((long)param_1 + 0x1d9) = 1;
        }
        uVar7 = FUN_01311b90(*(undefined8 *)((long)param_1 + lVar9 + 0x80),pauVar2);
        puVar15 = (undefined8 *)param_1[0x35];
        uVar7 = uVar7 ^ 1;
        for (puVar13 = (undefined8 *)param_1[0x34]; puVar13 != puVar15; puVar13 = puVar13 + 2) {
          local_80 = *puVar13;
          uStack_78 = puVar13[1];
          uVar8 = FUN_01311b90(*(undefined8 *)((long)param_1 + lVar9 + 0x80),&local_80);
          uVar7 = uVar7 & (uVar8 ^ 1);
        }
        if ((uVar7 & 1) != 0) {
          FUN_01311fd0(*(undefined8 *)((long)param_1 + lVar9 + 0x80));
        }
      }
      break;
    }
    lVar9 = lVar9 + 8;
  } while (lVar9 != 0x100);
LAB_0130f64c:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x2c4));
  return;
}


