/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01002420; name: FUN_01002420
 */


/* WARNING: Removing unreachable block (ram,0x010027b0) */

void FUN_01002420(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long local_60;
  undefined8 uStack_58;
  
  lVar12 = *(long *)(param_1 + 0xd50);
  *(undefined8 *)(param_1 + 0xd50) = 0;
  if (lVar12 != 0) {
    FUN_009e3c50(lVar12);
    (**(code **)(**(long **)(param_1 + 0xd58) + 0x18))
              (*(long **)(param_1 + 0xd58),lVar12,*(undefined8 *)(param_1 + 0xd60),
               *(undefined8 *)(param_1 + 0xd68));
  }
  *(undefined8 *)(param_1 + 0xd7c) = 0;
  *(undefined4 *)(param_1 + 0xd84) = 0;
  uVar6 = (**(code **)(*param_3 + 0x10))(param_3,600,8);
  puVar4 = PTR_DAT_02710860;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar12 + 0x80) < 0x10) {
    *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = param_3;
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
    FUN_009e3ae0(uVar6);
    *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    lVar12 = *(long *)(param_1 + 0xd50);
    *(undefined8 *)(param_1 + 0xd50) = uVar6;
    if (lVar12 != 0) {
      FUN_009e3c50(lVar12);
      (**(code **)(**(long **)(param_1 + 0xd58) + 0x18))
                (*(long **)(param_1 + 0xd58),lVar12,*(undefined8 *)(param_1 + 0xd60),
                 *(undefined8 *)(param_1 + 0xd68));
      uVar6 = *(undefined8 *)(param_1 + 0xd50);
    }
    *(undefined8 *)(param_1 + 0xd60) = 600;
    *(long **)(param_1 + 0xd58) = param_3;
    *(undefined8 *)(param_1 + 0xd68) = 8;
    if (((((*(int *)(param_1 + 0xb30) < 0) && (*(char *)(param_1 + 0x408) == '\0')) &&
         ((*(byte *)(param_1 + 0xb90) >> 4 & 1) == 0)) &&
        ((*(ushort *)(param_1 + 0xac2) & 0x981) == 0)) &&
       ((*(int *)(param_1 + 0x54) == 0 ||
        ((*(int *)(param_1 + 0x54) == 1 && (*(char *)(param_1 + 0x409) == '\0')))))) {
      uVar10 = 0;
    }
    else {
      uVar10 = 1;
    }
    FUN_009e3e10(uVar6,param_2,param_3,uVar10);
    plVar7 = (long *)FUN_009e4890(*(undefined8 *)(param_1 + 0xd50),0);
    uVar6 = *(undefined8 *)(param_1 + 0xd50);
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    if (*(ulong *)(lVar12 + 0x80) < 0x10) {
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar7;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,0x760,0x10);
      if (lVar8 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN_008f0d50(lVar8,param_1 + 0x50,uVar6);
      *(long **)(lVar8 + 8) = plVar7;
      *(long *)(lVar8 + 0x10) = lVar8;
      *(undefined8 *)(lVar8 + 0x18) = 0x760;
      *(undefined8 *)(lVar8 + 0x20) = 0x10;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0xd70) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0xd70) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0xd70) = 0;
      }
      *(long *)(param_1 + 0xd70) = lVar8;
      *(undefined4 *)(param_1 + 0xd88) = 1;
      plVar7 = *(long **)(*(long *)PTR_DAT_02710540 + 0x68);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
      if (*(ulong *)(lVar12 + 0x80) < 0x10) {
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar7;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,800,0x10);
        if (lVar8 == 0) {
          (**(code **)(*plVar7 + 0xb8))(plVar7);
        }
        FUN_006d6c90(lVar8,0);
        *(long **)(lVar8 + 8) = plVar7;
        *(long *)(lVar8 + 0x10) = lVar8;
        *(undefined8 *)(lVar8 + 0x18) = 800;
        *(undefined8 *)(lVar8 + 0x20) = 0x10;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        FUN_006d1120(lVar8);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        lVar13 = *(long *)PTR_DAT_02710848;
        local_60 = 0;
        uStack_58 = 0;
        lVar12 = *(long *)(lVar13 + 0x68);
        if (lVar12 == 0) {
          uVar9 = FUN_01019900(0,&local_60);
        }
        else {
          plVar7 = (long *)(lVar12 + 0x48);
          (**(code **)(*plVar7 + 0x10))(plVar7);
          uVar9 = FUN_01019900(lVar12,&local_60);
          (**(code **)(*plVar7 + 0x18))(plVar7);
        }
        if (((uVar9 & 1) == 0) || (local_60 == 0)) {
          pcVar11 = *(code **)(lVar8 + 0x2a8);
        }
        else {
          lVar12 = nn::os::GetCurrentThread();
          plVar7 = (long *)(lVar8 + 0x158);
          do {
            if (*plVar7 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x14c));
                while (*plVar7 == 0) {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                  if (bVar3) {
                    *plVar7 = lVar12;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                  if (cVar2 == '\0') goto LAB_010027d0;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = lVar12;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
LAB_010027d0:
          lVar12 = local_60;
          if (*(long *)(local_60 + 0x120) != 0) {
            lVar12 = *(long *)(local_60 + 0x120);
          }
          lVar1 = local_60;
          if (*(long *)(local_60 + 0x128) != 0) {
            lVar1 = *(long *)(local_60 + 0x128);
          }
          FUN_006d15e0(lVar8,lVar12,lVar1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar3) {
              *plVar7 = 0;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x14c));
          pcVar11 = *(code **)(lVar8 + 0x2a8);
        }
        if (pcVar11 != (code *)0x0) {
          *(undefined8 *)(lVar8 + 0x2b0) = 0;
          *(undefined8 *)(lVar8 + 0x2b8) = 0;
          *(undefined8 *)(lVar8 + 0x2a0) = 0;
          *(undefined8 *)(lVar8 + 0x2a8) = 0;
          (*pcVar11)(lVar8 + 0x2c0);
        }
        *(long *)(lVar8 + 0x2c0) = param_1;
        *(undefined **)(lVar8 + 0x2c8) = PTR_LAB_02723468;
        puVar4 = PTR_LAB_02723470;
        *(undefined8 *)(lVar8 + 0x2d0) = 0;
        puVar5 = PTR_LAB_02723478;
        *(undefined **)(lVar8 + 0x2a0) = puVar4;
        puVar4 = PTR_LAB_02723480;
        *(undefined **)(lVar8 + 0x2a8) = puVar5;
        puVar5 = PTR_LAB_02723488;
        *(undefined **)(lVar8 + 0x2b0) = puVar4;
        *(undefined **)(lVar8 + 0x2b8) = puVar5;
        if (*(long *)(param_1 + 0xd90) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xd90) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xd90) = 0;
        }
        *(long *)(param_1 + 0xd90) = lVar8;
        lVar12 = *(long *)(lVar13 + 0x90);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
        }
        *(undefined2 *)(lVar12 + 0x4f4) = 0;
        *(undefined4 *)(lVar12 + 0x4f8) = 0;
        *(undefined2 *)(lVar12 + 0x4fc) = 0;
        *(undefined2 *)(lVar12 + 0x500) = 0;
        *(undefined4 *)(lVar12 + 0x504) = 0;
        *(undefined2 *)(lVar12 + 0x508) = 0;
        *(undefined2 *)(lVar12 + 0x50c) = 0;
        *(undefined4 *)(lVar12 + 0x510) = 0;
        *(undefined2 *)(lVar12 + 0x514) = 0;
        *(undefined2 *)(lVar12 + 0x518) = 0;
        *(undefined4 *)(lVar12 + 0x51c) = 0;
        *(undefined2 *)(lVar12 + 0x520) = 0;
        *(undefined2 *)(lVar12 + 0x524) = 0;
        *(undefined4 *)(lVar12 + 0x528) = 0;
        *(undefined2 *)(lVar12 + 0x52c) = 0;
        *(undefined2 *)(lVar12 + 0x530) = 0;
        *(undefined4 *)(lVar12 + 0x534) = 0;
        *(undefined2 *)(lVar12 + 0x538) = 0;
        *(undefined2 *)(lVar12 + 0x53c) = 0;
        *(undefined4 *)(lVar12 + 0x540) = 0;
        *(undefined2 *)(lVar12 + 0x544) = 0;
        *(undefined2 *)(lVar12 + 0x548) = 0;
        *(undefined4 *)(lVar12 + 0x54c) = 0;
        *(undefined2 *)(lVar12 + 0x550) = 0;
        *(undefined2 *)(lVar12 + 0x554) = 0;
        *(undefined4 *)(lVar12 + 0x558) = 0;
        *(undefined2 *)(lVar12 + 0x55c) = 0;
        *(undefined1 *)(lVar12 + 0x561) = 0;
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
        *(undefined1 *)(param_1 + 0xd78) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


