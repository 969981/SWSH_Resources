/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad3e40; name: FUN_00ad3e40
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ad3e40(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 uStack_52;
  long local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  uVar6 = (**(code **)(*param_1 + 400))();
  if ((uVar6 & 1) != 0) {
    if (0xf < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar11 = *(undefined8 *)(param_1[0x78] + (ulong)*(uint *)(param_1 + 0xb4) * 0x20 + 0xb8);
    lVar12 = *(long *)(param_1[0x78] + 0x528);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    local_40 = param_1[0xa2];
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
    }
    FUN_00c7a630(&local_38,lVar12,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    lVar12 = local_38;
    puVar4 = PTR_DAT_02719750;
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      puVar8 = PTR_DAT_02719758;
      iVar9 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar12 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar8 = PTR_DAT_02719758, iVar5 != 0)) {
            uVar7 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_02719758 = uVar7;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_02719758;
          }
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_00ad4010;
            if (plVar10 == (long *)puVar8) break;
            plVar10 = (long *)*plVar10;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00ad4010;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = *(long *)(lVar12 + 0x60);
          if (lVar12 != 0) {
            FUN_00c69a80(lVar12 + -0x50,uVar11,param_2);
            (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
            iVar9 = (int)param_1[0x9a];
            goto joined_r0x00ad4008;
          }
          break;
        }
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ad4010:
    FUN_00c69a80(0,uVar11,param_2);
    iVar9 = (int)param_1[0x9a];
joined_r0x00ad4008:
    if (iVar9 == 2) {
      local_60 = 0;
      uStack_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      uVar11 = (**(code **)(*(long *)param_1[0x78] + 0x810))
                         ((long *)param_1[0x78],(int)param_1[0x79]);
      FUN_014ad910(&local_60,uVar11);
      *(undefined4 *)(param_1 + 0xa1) = local_48;
      param_1[0xa0] = local_50;
      param_1[0x9f] = CONCAT26(uStack_52,CONCAT24(local_54,local_58));
      param_1[0x9e] = CONCAT26(uStack_5a,CONCAT24(uStack_5c,local_60));
      FUN_00ad1a60(param_1);
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  return;
}


