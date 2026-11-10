/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009b19e0; name: FUN_009b19e0
 */


uint FUN_009b19e0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x148) == 0) ||
     (uVar7 = FUN_007d4b30(*(long *)(param_1 + 0x148) + 0xd0), puVar4 = PTR_DAT_02718628,
     (uVar7 & 1) == 0)) {
    uVar6 = 0;
  }
  else {
    local_38 = *param_2;
    local_30 = param_2[1];
    uStack_28._5_3_ = (undefined3)((ulong)param_2[2] >> 0x28);
    uStack_28._0_5_ = CONCAT14(1,(int)param_2[2]);
    lVar8 = *(long *)(param_1 + 0x218);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
      piVar1 = (int *)(lVar8 + 0x54);
      puVar9 = PTR_DAT_02718630;
      iVar10 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar8 + 0x58);
          if (((*puVar4 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(puVar4), puVar9 = PTR_DAT_02718630, iVar5 != 0)) {
            uVar12 = FUN_009b7e90();
            *(undefined8 *)PTR_DAT_02718630 = uVar12;
            __cxa_guard_release(puVar4);
            puVar9 = PTR_DAT_02718630;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_009b1b38;
            if (plVar11 == (long *)puVar9) break;
            plVar11 = (long *)*plVar11;
          }
          iVar5 = *piVar1;
          if (iVar5 != iVar10) break;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              FUN_009b1b80(lVar8 + -0x50,&local_38);
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
            }
            goto LAB_009b1b38;
          }
          iVar10 = iVar5;
          if (iVar5 == 0) goto LAB_009b1b38;
        }
        ClearExclusiveLocal();
        iVar10 = iVar5;
      } while (iVar5 != 0);
    }
LAB_009b1b38:
    uVar12 = *(undefined8 *)(param_1 + 0x148);
    FUN_009bbd40(auStack_50);
    uVar6 = FUN_009b1cb0(uVar12,auStack_50,2);
    FUN_009bbd90(auStack_50);
  }
  return uVar6 & 1;
}


