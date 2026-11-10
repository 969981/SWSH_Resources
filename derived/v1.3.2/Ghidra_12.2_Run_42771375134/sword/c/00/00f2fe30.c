/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f2fe30; name: FUN_00f2fe30
 */


void FUN_00f2fe30(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  plVar11 = *(long **)(*(long *)PTR_DAT_0271e860 + 0xa8);
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar11;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,0x98,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN_00e870e0(lVar7,plVar11);
  *(long **)(lVar7 + 8) = plVar11;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x98;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  puVar5 = PTR_DAT_027194d8;
  lVar6 = 0;
  do {
    local_78 = 0x3139d938be121b1c;
    uStack_70 = 0xcbf29ce484222645;
    local_80 = 0x68c3754f4bf8081a;
    local_68 = **(undefined4 **)(param_1 + 200);
    uVar8 = FUN_00f30210(lVar7,&local_80);
    lVar9 = FUN_00f30350(*(undefined8 *)puVar5,uVar8);
    *(undefined8 *)(lVar9 + 0x588) = *(undefined8 *)(param_1 + 200);
    if ((*(long *)(lVar9 + 0x360) == 0) ||
       (lVar14 = *(long *)(*(long *)(lVar9 + 0x360) + 0x80), lVar14 == 0)) {
      *(undefined1 *)(lVar9 + 0x568) = 0;
    }
    else {
      plVar11 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      piVar1 = (int *)(lVar14 + 0x54);
      if (*piVar1 != 0) {
        iVar2 = *piVar1;
        while (iVar12 = iVar2, iVar2 != 0) {
          while( true ) {
            plVar13 = *(long **)(lVar14 + 0x58);
            lVar10 = FUN_006cb2c0();
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_00f30030;
              if (plVar13 == (long *)lVar10) break;
              plVar13 = (long *)*plVar13;
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
              lVar14 = *(long *)(lVar14 + 0x60);
              if (lVar14 == 0) goto LAB_00f30030;
              *(undefined1 *)(lVar14 + 0x10) = 0;
              (**(code **)(*(long *)(lVar14 + -8) + 0x18))();
              goto LAB_00f30060;
            }
            iVar12 = iVar2;
            if (iVar2 == 0) goto LAB_00f30030;
          }
          ClearExclusiveLocal();
        }
LAB_00f30030:
        DAT_00000060 = 0;
      }
LAB_00f30060:
      *(undefined1 *)(lVar9 + 0x568) = 0;
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    *(undefined1 *)(lVar9 + 0x218) = 0;
    *(long *)(param_1 + lVar6 * 8) = lVar9;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 10);
  local_80 = 0x68c3754f4bf8081a;
  local_78 = 0xe83e212aeedabcbc;
  uStack_70 = 0xcbf29ce484222645;
  local_68 = *(undefined4 *)(*(long *)(param_1 + 200) + 4);
  uVar8 = FUN_00f30210(lVar7,&local_80);
  lVar6 = FUN_00f30460(*(undefined8 *)puVar5,uVar8);
  *(long *)(param_1 + 0xa0) = lVar6;
  *(undefined8 *)(lVar6 + 0x588) = *(undefined8 *)(param_1 + 200);
  lVar6 = *(long *)(param_1 + 0xa0);
  if ((*(long *)(lVar6 + 0x360) == 0) ||
     (lVar9 = *(long *)(*(long *)(lVar6 + 0x360) + 0x80), lVar9 == 0)) {
    *(undefined1 *)(lVar6 + 0x568) = 0;
  }
  else {
    plVar11 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    piVar1 = (int *)(lVar9 + 0x54);
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar12 = iVar2, iVar2 != 0) {
        while( true ) {
          plVar13 = *(long **)(lVar9 + 0x58);
          lVar14 = FUN_006cb2c0();
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00f30194;
            if (plVar13 == (long *)lVar14) break;
            plVar13 = (long *)*plVar13;
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
            lVar9 = *(long *)(lVar9 + 0x60);
            if (lVar9 == 0) goto LAB_00f30194;
            *(undefined1 *)(lVar9 + 0x10) = 0;
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            goto LAB_00f301a4;
          }
          iVar12 = iVar2;
          if (iVar2 == 0) goto LAB_00f30194;
        }
        ClearExclusiveLocal();
      }
LAB_00f30194:
      DAT_00000060 = 0;
    }
LAB_00f301a4:
    *(undefined1 *)(lVar6 + 0x568) = 0;
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  *(undefined1 *)(*(long *)(param_1 + 0xa0) + 0x218) = 0;
  (**(code **)(**(long **)puVar5 + 0x38))(*(long **)puVar5,1);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


