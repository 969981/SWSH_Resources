/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b9f30; name: FUN_010b9f30
 */


void FUN_010b9f30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar5 = FUN_010386c0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar5 & 1) != 0) {
    FUN_01196ce0(*(undefined8 *)(*(long *)PTR_DAT_02710880 + 0xc0),1,0);
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar6 = (long *)(**(code **)*puVar8)(puVar8);
    lVar7 = FUN_010aad10();
    for (; plVar6 != (long *)lVar7; plVar6 = (long *)*plVar6) {
    }
    lVar9 = puVar8[2];
    (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_48);
    lVar7 = CONCAT44(uStack_44,local_48);
    if ((lVar7 == 0) || (*(int *)(lVar7 + 0x54) == 0)) {
      lVar11 = 0;
    }
    else {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar12 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar7 + 0x58);
          plVar6 = (long *)FUN_00d8bd10();
          lVar11 = 0;
          if (plVar10 == (long *)0x0) goto LAB_010ba040;
          while (plVar10 != plVar6) {
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) {
              lVar11 = 0;
              goto LAB_010ba040;
            }
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar12) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = 0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              lVar11 = *(long *)(lVar7 + 0x60) + -0x50;
            }
            goto LAB_010ba040;
          }
          lVar11 = 0;
          iVar12 = iVar2;
          if (iVar2 == 0) goto LAB_010ba040;
        }
        ClearExclusiveLocal();
        lVar11 = 0;
        iVar12 = iVar2;
      } while (iVar2 != 0);
    }
LAB_010ba040:
    FUN_010a80b0(&local_50,lVar9);
    local_48 = *(undefined4 *)(lVar9 + 0x1c);
    uStack_44 = *(undefined4 *)(lVar9 + 0x18);
    FUN_01531dc0(lVar11,&local_50,&local_48);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar12 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar6 = *(long **)(lVar7 + 0x58);
          lVar9 = FUN_00d8bd10();
          while( true ) {
            if (plVar6 == (long *)0x0) goto LAB_010ba134;
            if (plVar6 == (long *)lVar9) break;
            plVar6 = (long *)*plVar6;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar12) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar9 = *(long *)(lVar7 + 0x60);
            if (lVar9 != 0) {
              FUN_01531f50(lVar9 + -0x50);
              (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
              goto LAB_010ba13c;
            }
            goto LAB_010ba134;
          }
          iVar12 = iVar2;
          if (iVar2 == 0) goto LAB_010ba134;
        }
        ClearExclusiveLocal();
        iVar12 = iVar2;
      } while (iVar2 != 0);
    }
LAB_010ba134:
    FUN_01531f50(0);
LAB_010ba13c:
    *(undefined4 *)(param_1 + 0x7c) = 0xf;
    plVar6 = (long *)(*(long *)(*(long *)(param_1 + 0xa8) + 0x5d0) + 0x60);
    (**(code **)(*plVar6 + 8))(plVar6,1);
    FUN_010bc320(param_1,0x262115b41ac82de3,0,0,1,0);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    }
  }
  return;
}


