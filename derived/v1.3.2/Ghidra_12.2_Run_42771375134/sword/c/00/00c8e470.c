/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8e470; name: FUN_00c8e470
 */


void FUN_00c8e470(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long local_38;
  
  if ((((int)param_1[0x13] == 1) && (param_1[0xc1] != 0)) && (*(int *)(param_1[0xc1] + 0x54) != 0))
  {
    lVar6 = param_1[0xe];
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar8 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar6 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c8e4fc;
          iVar2 = *piVar1;
          if (iVar2 != iVar8) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar7 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            local_38 = param_1[0xc1];
            if (local_38 == 0) goto LAB_00c8e514;
            goto LAB_00c8e508;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00c8e4fc;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c8e4fc:
    lVar7 = 0;
    local_38 = param_1[0xc1];
    if (local_38 != 0) {
LAB_00c8e508:
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
LAB_00c8e514:
    uVar5 = FUN_00cae840(lVar7,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
    if (((uVar5 & 1) != 0) && (*(undefined4 *)(param_1 + 0x13) = 3, (char)param_1[0xc3] != '\0')) {
      (**(code **)(*param_1 + 0x120))(param_1);
    }
  }
  return;
}


