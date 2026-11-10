/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c981b0; name: FUN_00c981b0
 */


void FUN_00c981b0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long *local_a0 [13];
  char local_34 [4];
  
  if ((((int)param_1[0x13] == 1) && (param_1[0x1d] != 0)) && (*(int *)(param_1[0x1d] + 0x54) != 0))
  {
    lVar7 = param_1[0xe];
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar9 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          uVar6 = FUN_00c953c0(*(undefined8 *)(lVar7 + 0x58));
          if ((uVar6 & 1) == 0) goto LAB_00c9823c;
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = 0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
            }
            local_c8 = param_1[0x1d];
            if (local_c8 == 0) goto LAB_00c98254;
            goto LAB_00c98248;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_00c9823c;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c9823c:
    lVar8 = 0;
    local_c8 = param_1[0x1d];
    if (local_c8 != 0) {
LAB_00c98248:
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
    }
LAB_00c98254:
    uVar6 = FUN_00cae840(lVar8,&local_c8);
    if (local_c8 != 0) {
      (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
      local_c8 = 0;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((uVar6 & 1) != 0) {
      if (*(char *)((long)param_1 + 0x2d5) != '\0') {
        local_a0[0] = (long *)local_34;
        local_c0 = &LAB_00c9eb50;
        local_b8 = FUN_00c9eb90;
        local_b0 = &LAB_00c9eba0;
        local_34[0] = '\0';
        local_a8 = &LAB_00c9ebb0;
        (**(code **)(*param_1 + 200))(param_1,&local_c0);
        pcVar5 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar5)(local_a0);
        }
        if (local_34[0] != '\0') {
          *(undefined1 *)(param_1 + 0x24) = 0;
        }
        local_c0 = &LAB_00c9ee50;
        local_b8 = FUN_00c9ef50;
        local_b0 = &LAB_00c9ef60;
        local_a8 = &LAB_00c9ef70;
        local_a0[0] = param_1;
        (**(code **)(*param_1 + 200))(param_1,&local_c0);
        pcVar5 = local_b8;
        if (local_b8 != (code *)0x0) {
          local_b0 = (undefined1 *)0x0;
          local_a8 = (undefined1 *)0x0;
          local_c0 = (undefined1 *)0x0;
          local_b8 = (code *)0x0;
          (*pcVar5)(local_a0);
        }
      }
      *(undefined4 *)(param_1 + 0x13) = 3;
    }
  }
  return;
}


