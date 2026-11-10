/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c87b00; name: FUN_00c87b00
 */


void FUN_00c87b00(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  long local_48;
  undefined1 auStack_38 [4];
  int local_34;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    return;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    local_48 = 0;
  }
  else {
    FUN_00c896a0(&local_48);
  }
  lVar7 = FUN_00c8be50(local_48);
  lVar7 = *(long *)(lVar7 + (long)*(int *)(param_1 + 0xdc) * 0x110 + 0x338);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar7 == 0) goto LAB_00c87cec;
  if (*(long *)(param_1 + 0xe0) == 0) {
    local_48 = 0;
    lVar7 = FUN_00c8be50();
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 != 0) goto LAB_00c87b98;
LAB_00c87c94:
    lVar12 = 0;
  }
  else {
    FUN_00c896a0(&local_48);
    lVar7 = FUN_00c8be50(local_48);
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 == 0) goto LAB_00c87c94;
LAB_00c87b98:
    puVar5 = PTR_DAT_02715078;
    iVar6 = *(int *)(lVar9 + 0x54);
    if (iVar6 == 0) goto LAB_00c87c94;
    piVar1 = (int *)(lVar9 + 0x54);
    puVar10 = PTR_DAT_02715080;
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        iVar4 = iVar6;
        if ((*puVar5 & 1) == 0) {
          local_34 = iVar6;
          iVar6 = __cxa_guard_acquire(puVar5);
          puVar10 = PTR_DAT_02715080;
          iVar4 = local_34;
          if (iVar6 != 0) {
            uVar8 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar8;
            __cxa_guard_release(puVar5);
            puVar10 = PTR_DAT_02715080;
            iVar4 = local_34;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00c87c94;
          if (plVar11 == (long *)puVar10) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar4) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar9 + 0x60) != 0) {
            lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
          }
          goto LAB_00c87c98;
        }
        lVar12 = 0;
        if (iVar6 == 0) goto LAB_00c87c98;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
    } while (iVar6 != 0);
  }
LAB_00c87c98:
  iVar6 = *(int *)(param_1 + 0xdc);
  uVar8 = FUN_00c754c0(lVar12,auStack_38);
  FUN_0069ae40(uVar8,param_2,lVar7 + (long)iVar6 * 0x110 + 0x330,1);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
LAB_00c87cec:
  *(undefined1 *)(param_1 + 0x128) = 1;
  return;
}


