/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d15790; name: FUN_00d15790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d15790(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 local_d0 [3];
  long local_b8;
  long local_38;
  
  FUN_00a90940(local_d0,*(undefined8 *)(param_1 + 8));
  lVar8 = *(long *)(param_1 + 0x2b8);
  plVar5 = *(long **)(lVar8 + 0x2c0);
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[0xb];
    piVar1 = (int *)(lVar7 + 0x54);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x60) = 0;
      (**(code **)(*plVar5 + 0x18))();
    }
    *(undefined8 *)(lVar8 + 0x2c0) = 0;
  }
  *(undefined8 *)(lVar8 + 0x2c0) = local_d0[0];
  lVar8 = *(long *)(param_1 + 0x2b8);
  local_38 = *(long *)(lVar8 + 0x2c0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00d67c90(lVar8,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x2c0);
  FUN_00713a20(local_d0,*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x1b8));
  FUN_0070c4f0(uVar9,local_d0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x2b8) + 0x180);
  if (lVar8 == 0) {
LAB_00d158ec:
    lVar7 = 0;
    iVar11 = _DAT_00000080;
joined_r0x00d15bc0:
    if (iVar11 - 2U < 4) goto LAB_00d158fc;
LAB_00d15944:
    if (iVar11 == 0) goto LAB_00d158fc;
    if (iVar11 != 1) goto LAB_00d15980;
    puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x90) + 0x50);
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    plVar6 = (long *)FUN_006f10c0();
    if (plVar5 != (long *)0x0) {
      do {
        if (plVar5 == plVar6) goto LAB_00d15994;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      goto LAB_00d15980;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar11 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar5 = *(long **)(lVar8 + 0x58);
          lVar7 = FUN_00d16cb0();
          while( true ) {
            if (plVar5 == (long *)0x0) goto LAB_00d158ec;
            if (plVar5 == (long *)lVar7) break;
            plVar5 = (long *)*plVar5;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar11) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar7 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            iVar11 = *(int *)(lVar7 + 0x80);
            goto joined_r0x00d15bc0;
          }
          iVar11 = iVar2;
          if (iVar2 == 0) goto LAB_00d158ec;
        }
        ClearExclusiveLocal();
        iVar11 = iVar2;
      } while (iVar2 != 0);
      goto LAB_00d158ec;
    }
    lVar7 = 0;
    iVar11 = _DAT_00000080;
    if (3 < _DAT_00000080 - 2U) goto LAB_00d15944;
LAB_00d158fc:
    puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x88) + 0x50);
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    plVar6 = (long *)FUN_006f10c0();
    if (plVar5 != (long *)0x0) {
      do {
        if (plVar5 == plVar6) goto LAB_00d15994;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
LAB_00d15980:
      puVar10 = (undefined8 *)0x0;
      goto joined_r0x00d15998;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_00d1599c:
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
LAB_00d159ac:
  FUN_0070cf00(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x2c0),puVar10);
  FUN_006cf0a0(local_d0,PTR_DAT_02715928);
  lVar8 = FUN_007029e0(puVar10,local_d0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  if (lVar8 == 0) goto LAB_00d15bec;
  *(undefined1 *)(lVar8 + 0x1ac) = 1;
  lVar8 = *(long *)(*(long *)(param_1 + 0x2b8) + 400);
  if (lVar8 == 0) {
LAB_00d15a78:
    lVar7 = 0;
    iVar11 = _DAT_00000080;
joined_r0x00d15be4:
    if (iVar11 - 2U < 4) goto LAB_00d15adc;
LAB_00d15a88:
    if (iVar11 == 0) goto LAB_00d15adc;
    if (iVar11 != 1) goto LAB_00d15b0c;
    puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x90) + 0x50);
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    plVar6 = (long *)FUN_006f10c0();
    if (plVar5 != (long *)0x0) {
      do {
        if (plVar5 == plVar6) goto LAB_00d15b20;
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      goto LAB_00d15b0c;
    }
LAB_00d15b18:
    puVar10 = (undefined8 *)0x0;
LAB_00d15b28:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  else {
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar11 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar5 = *(long **)(lVar8 + 0x58);
          lVar7 = FUN_00d16cb0();
          while( true ) {
            if (plVar5 == (long *)0x0) goto LAB_00d15a78;
            if (plVar5 == (long *)lVar7) break;
            plVar5 = (long *)*plVar5;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar11) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar8 + 0x60) != 0) {
              lVar7 = *(long *)(lVar8 + 0x60) + -0x50;
            }
            iVar11 = *(int *)(lVar7 + 0x80);
            goto joined_r0x00d15be4;
          }
          iVar11 = iVar2;
          if (iVar2 == 0) goto LAB_00d15a78;
        }
        ClearExclusiveLocal();
        iVar11 = iVar2;
      } while (iVar2 != 0);
      goto LAB_00d15a78;
    }
    lVar7 = 0;
    iVar11 = _DAT_00000080;
    if (3 < _DAT_00000080 - 2U) goto LAB_00d15a88;
LAB_00d15adc:
    puVar10 = (undefined8 *)(*(long *)(lVar7 + 0x88) + 0x50);
    plVar5 = (long *)(**(code **)*puVar10)(puVar10);
    plVar6 = (long *)FUN_006f10c0();
    if (plVar5 == (long *)0x0) goto LAB_00d15b18;
    do {
      if (plVar5 == plVar6) goto LAB_00d15b20;
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
LAB_00d15b0c:
    puVar10 = (undefined8 *)0x0;
joined_r0x00d15b24:
    if (lVar7 != 0) goto LAB_00d15b28;
  }
  FUN_0070cf00(*(undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x2c0),puVar10);
  FUN_006cf0a0(local_d0,PTR_DAT_02715928);
  lVar8 = FUN_007029e0(puVar10,local_d0);
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  if (lVar8 != 0) {
    *(undefined1 *)(lVar8 + 0x1ac) = 1;
    return;
  }
LAB_00d15bec:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_00d15994:
  puVar10 = puVar10 + -10;
joined_r0x00d15998:
  if (lVar7 != 0) goto LAB_00d1599c;
  goto LAB_00d159ac;
LAB_00d15b20:
  puVar10 = puVar10 + -10;
  goto joined_r0x00d15b24;
}


