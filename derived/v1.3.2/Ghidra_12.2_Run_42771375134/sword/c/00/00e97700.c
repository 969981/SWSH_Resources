/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e97700; name: FUN_00e97700
 */


void FUN_00e97700(long *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined8 local_38;
  
  (**(code **)(*param_1 + 400))(param_1,PTR_DAT_0271e8a0,param_2);
  if (param_2 != 2) {
    if (param_2 == 1) {
      uVar5 = *(undefined8 *)PTR_DAT_0271bd18;
      uVar7 = 2;
    }
    else {
      if (param_2 != 0) {
        return;
      }
      uVar5 = *(undefined8 *)PTR_DAT_0271bd18;
      uVar7 = 1;
    }
    FUN_00fbf540(uVar5,uVar7);
    return;
  }
  FUN_00fbf540(*(undefined8 *)PTR_DAT_0271bd18,2);
  if ((char)param_1[0x102] != '\0') {
    return;
  }
  lVar8 = param_1[0xb1];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar11 = *(int *)(lVar8 + 0x54);
      while( true ) {
        plVar9 = *(long **)(lVar8 + 0x58);
        plVar6 = (long *)FUN_0156b190();
        lVar10 = 0;
        if (plVar9 == (long *)0x0) break;
        while (plVar9 != plVar6) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) {
            lVar10 = 0;
            goto LAB_00e97818;
          }
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar10 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar10 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar10 = 0;
        iVar11 = iVar2;
        if (iVar2 == 0) break;
      }
      goto LAB_00e97818;
    }
  }
  lVar10 = 0;
LAB_00e97818:
  local_38 = 0x5786da253398ee7b;
  FUN_00dc04c0(lVar10,&local_38,0,1,0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return;
}


