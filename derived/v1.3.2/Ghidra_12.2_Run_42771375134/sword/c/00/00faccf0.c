/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faccf0; name: FUN_00faccf0
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000080 : 0x00face64 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00faccf0(long *param_1,long param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined1 auStack_58 [4];
  int local_54;
  
  lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar11 + 0x1e0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_015ab8d0(&local_68,lVar12,*param_3);
  puVar5 = PTR_DAT_02722e08;
  if (local_68 == 0) {
    *param_1 = 0;
  }
  else {
    lVar9 = *(long *)(param_2 + 0x68);
    if ((lVar9 != 0) && (iVar6 = *(int *)(lVar9 + 0x54), iVar6 != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar10 = PTR_DAT_02722e10;
      do {
        while( true ) {
          plVar15 = *(long **)(lVar9 + 0x58);
          iVar4 = iVar6;
          if ((*puVar5 & 1) == 0) {
            local_54 = iVar6;
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar10 = PTR_DAT_02722e10;
            iVar4 = local_54;
            if (iVar6 != 0) {
              uVar7 = FUN_01455eb0();
              *(undefined8 *)PTR_DAT_02722e10 = uVar7;
              __cxa_guard_release(puVar5);
              puVar10 = PTR_DAT_02722e10;
              iVar4 = local_54;
            }
          }
          while( true ) {
            if (plVar15 == (long *)0x0) goto joined_r0x00face68;
            if (plVar15 == (long *)puVar10) break;
            plVar15 = (long *)*plVar15;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar4) break;
          ClearExclusiveLocal();
          if (iVar6 == 0) goto joined_r0x00face68;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar13 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          lVar9 = *(long *)(lVar13 + 0x80);
          goto joined_r0x00fad0f8;
        }
      } while (iVar6 != 0);
    }
joined_r0x00face68:
    lVar13 = 0;
    lVar9 = _DAT_00000080;
joined_r0x00fad0f8:
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
    }
    local_70 = FUN_00fadd40(auStack_58,*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68));
    if (local_70 == 0) {
      local_78 = *(long *)(param_2 + 0x78);
      lVar13 = 0;
    }
    else {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
      local_78 = *(long *)(param_2 + 0x78);
      lVar13 = local_70;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
    }
    local_80 = lVar9;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_88 = local_68;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_00faa4a0(lVar13,&local_78,&local_80,&local_88,param_4,param_5,param_6);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    if (local_80 != 0) {
      (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
      local_80 = 0;
    }
    if (local_78 != 0) {
      (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
      local_78 = 0;
    }
    lVar13 = *(long *)(lVar12 + 0xc0);
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
    }
    lVar14 = *(long *)(local_70 + 0x68);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    if (lVar13 != 0) {
      plVar15 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    lVar8 = *(long *)(lVar14 + 0xa8);
    *(long *)(lVar14 + 0xa8) = lVar13;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
    }
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    FUN_00fade20(param_2 + 0xc0,&local_70);
    lVar14 = local_70;
    local_70 = 0;
    *param_1 = lVar14;
    if ((lVar13 != 0) &&
       ((**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48)), local_70 != 0)) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  local_68 = 0;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


