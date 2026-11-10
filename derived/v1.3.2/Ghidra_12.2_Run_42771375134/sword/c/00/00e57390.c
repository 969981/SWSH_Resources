/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e57390; name: FUN_00e57390
 */


/* WARNING: Removing unreachable block (ram,0x00e57804) */

undefined8
FUN_00e57390(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = *param_4;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  local_58 = *param_5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  uVar6 = FUN_00dd80f0(param_1,param_2,&local_48,&local_50,&local_58,param_6,param_7);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((uVar6 & 1) == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = FUN_00fc6be0();
    *(undefined4 *)(param_1 + 0xb0) = uVar4;
    lVar12 = *(long *)PTR_DAT_02710798;
    iVar5 = 0;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    do {
      lVar13 = *(long *)(lVar12 + 0x248);
      if (lVar13 == 0) {
        if (*(long *)((long)(int)param_1[0xb0] * 0xa68 + (long)iVar5 * 0x18 + 0x60) == param_1[0x34]
           ) goto LAB_00e57530;
      }
      else {
        plVar11 = (long *)(lVar13 + 0x48);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        lVar7 = param_1[0xb0];
        lVar10 = (long)(int)local_78;
        (**(code **)(*plVar11 + 0x18))(plVar11);
        if (*(long *)(lVar13 + (long)(int)lVar7 * 0xa68 + lVar10 * 0x18 + 0x60) == param_1[0x34]) {
LAB_00e57530:
          lVar13 = *(long *)(lVar12 + 0x248);
          if (lVar13 == 0) {
            iVar5 = FUN_015261d0(0,(int)param_1[0xb0],&local_78);
            *(bool *)(param_1 + 0xaf) = iVar5 != 0;
            lVar12 = *(long *)(lVar12 + 0x248);
            if (lVar12 != 0) goto LAB_00e57580;
LAB_00e575ec:
            uVar6 = FUN_01526220(0,(int)param_1[0xb0],&local_78);
            *(int *)((long)param_1 + 0x57c) = (int)local_78;
          }
          else {
            plVar11 = (long *)(lVar13 + 0x48);
            (**(code **)(*plVar11 + 0x10))(plVar11);
            iVar5 = FUN_015261d0(lVar13,(int)param_1[0xb0],&local_78);
            *(bool *)(param_1 + 0xaf) = iVar5 != 0;
            (**(code **)(*plVar11 + 0x18))(plVar11);
            lVar12 = *(long *)(lVar12 + 0x248);
            if (lVar12 == 0) goto LAB_00e575ec;
LAB_00e57580:
            plVar11 = (long *)(lVar12 + 0x48);
            (**(code **)(*plVar11 + 0x10))(plVar11);
            uVar6 = FUN_01526220(lVar12,(int)param_1[0xb0],&local_78);
            (**(code **)(*plVar11 + 0x18))(plVar11);
            *(int *)((long)param_1 + 0x57c) = (int)local_78;
          }
          if ((uVar6 & 1) != 0) {
            local_78 = 0x31f92180e1ec343d;
            local_70 = "looppattern_int";
            local_68 = 0xf;
            local_60 = 0;
            (**(code **)(*param_1 + 400))(param_1,&local_78,1);
            if (local_60 != 0) {
              (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
              local_60 = 0;
            }
          }
          break;
        }
      }
      iVar3 = (int)local_78;
      iVar5 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar5);
    } while (iVar3 < 0x6d);
    lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    lVar13 = param_1[0x72];
    param_1[0x72] = 0;
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
    }
    plVar11 = (long *)param_1[1];
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar11;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,800,0x10);
    if (lVar7 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_006d6c40(lVar7,param_1 + 9,1);
    *(long **)(lVar7 + 8) = plVar11;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 800;
    *(undefined8 *)(lVar7 + 0x20) = 0x10;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    FUN_006d1120(lVar7);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (param_1[0x72] != 0) {
      (**(code **)(*(long *)(param_1[0x72] + 0x48) + 0x18))();
      param_1[0x72] = 0;
    }
    param_1[0x72] = lVar7;
    pcVar9 = *(code **)(lVar7 + 0x2a8);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar7 + 0x2b0) = 0;
      *(undefined8 *)(lVar7 + 0x2b8) = 0;
      *(undefined8 *)(lVar7 + 0x2a0) = 0;
      *(undefined8 *)(lVar7 + 0x2a8) = 0;
      (*pcVar9)(lVar7 + 0x2c0);
    }
    *(long **)(lVar7 + 0x2c0) = param_1;
    *(undefined1 **)(lVar7 + 0x2a0) = &LAB_00e57c40;
    *(undefined1 **)(lVar7 + 0x2a8) = &LAB_00e57ea0;
    *(undefined1 **)(lVar7 + 0x2b0) = &LAB_00e57eb0;
    *(undefined1 **)(lVar7 + 0x2b8) = &LAB_00e57ec0;
    lVar7 = param_1[0x72];
    lVar10 = *(long *)(lVar12 + 0x128);
    lVar13 = nn::os::GetCurrentThread();
    plVar11 = (long *)(lVar7 + 0x158);
    do {
      if (*plVar11 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x14c));
          while (*plVar11 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar2) {
              *plVar11 = lVar13;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00e57824;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar13;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00e57824:
    lVar10 = *(long *)(lVar10 + 0x298);
    lVar13 = lVar10;
    if (*(long *)(lVar10 + 0x120) != 0) {
      lVar13 = *(long *)(lVar10 + 0x120);
    }
    if (*(long *)(lVar10 + 0x128) != 0) {
      lVar10 = *(long *)(lVar10 + 0x128);
    }
    FUN_006d15e0(lVar7,lVar13,lVar10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x14c));
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar8 = 1;
  }
  return uVar8;
}


