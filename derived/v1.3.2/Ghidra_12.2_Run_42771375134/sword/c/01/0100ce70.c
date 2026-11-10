/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100ce70; name: FUN_0100ce70
 */


void FUN_0100ce70(long *param_1,int param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  long local_78;
  long local_70;
  long local_68;
  long local_58;
  
  lVar10 = *(long *)PTR_DAT_02710798;
  lVar8 = *(long *)(lVar10 + 0x228);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar10 + 0x220);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar5 = FUN_0150aef0(lVar8,param_2,param_3);
  if (((uVar5 & 1) == 0) &&
     ((**(code **)(**(long **)(lVar10 + 0x1d0) + 0x10))(&local_58), local_58 != 0)) {
    if (*(int *)(local_58 + 0x54) != 0) {
      piVar1 = (int *)(local_58 + 0x54);
      iVar11 = *(int *)(local_58 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(local_58 + 0x58);
          lVar10 = FUN_00d8bd10();
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_0100cf64;
            if (plVar12 == (long *)lVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar3 = *piVar1;
          if (iVar3 != iVar11) break;
          cVar4 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar10 = 0;
            if (*(long *)(local_58 + 0x60) != 0) {
              lVar10 = *(long *)(local_58 + 0x60) + -0x50;
            }
            goto LAB_0100cf68;
          }
          iVar11 = iVar3;
          if (iVar3 == 0) goto LAB_0100cf64;
        }
        ClearExclusiveLocal();
        iVar11 = iVar3;
      } while (iVar3 != 0);
    }
LAB_0100cf64:
    lVar10 = 0;
LAB_0100cf68:
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))((long *)(local_58 + 0x48));
    if (lVar10 != 0) {
      if ((*(int *)(lVar10 + 0x310) != param_2) || (*(int *)(lVar10 + 0x314) != param_3)) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_1;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        lVar7 = (**(code **)(*param_1 + 0x10))(param_1,0xb8,8);
        if (lVar7 == 0) {
          (**(code **)(*param_1 + 0xb8))(param_1);
        }
        FUN_00866110(lVar7,param_1);
        *(long **)(lVar7 + 8) = param_1;
        *(long *)(lVar7 + 0x10) = lVar7;
        *(undefined8 *)(lVar7 + 0x18) = 0xb8;
        *(undefined8 *)(lVar7 + 0x20) = 8;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        bVar2 = lVar7 == 0;
        if (bVar2) {
          local_68 = 0;
        }
        else {
          plVar12 = (long *)(lVar7 + 0x48);
          (**(code **)(*plVar12 + 0x10))(plVar12);
          local_68 = lVar7;
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        uVar5 = FUN_01505da0(lVar9,param_2,param_3,&local_68,1);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        if ((uVar5 & 1) != 0) {
          local_70 = lVar7;
          if (!bVar2) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          FUN_01505e60(lVar9,&local_70,param_2,param_3);
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          uVar5 = FUN_014ae0c0(lVar7);
          if ((uVar5 & 1) != 0) {
            local_78 = lVar7;
            if (!bVar2) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            FUN_01505ea0(lVar9,&local_78,param_2,param_3);
            if (local_78 != 0) {
              (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
              local_78 = 0;
            }
          }
        }
        if (!bVar2) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
        }
      }
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


