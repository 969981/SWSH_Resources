/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00deaac0; name: FUN_00deaac0
 */


void FUN_00deaac0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  lVar6 = *(long *)(*(long *)(param_1 + 0x88) + 0x298);
  if (((lVar6 != 0) && (*(long *)(lVar6 + 0x80) != 0)) &&
     (*(int *)(*(long *)(lVar6 + 0x80) + 0x54) != 0)) {
    lVar6 = *(long *)(lVar6 + 0x80);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar7 = *(int *)(lVar6 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar6 + 0x58);
          lVar5 = FUN_006cbb10();
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_00deab8c;
            if (plVar8 == (long *)lVar5) break;
            plVar8 = (long *)*plVar8;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar7) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = *(long *)(lVar6 + 0x60);
            if (lVar6 != 0) {
              *(undefined1 *)(lVar6 + 0x10) = 1;
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
              goto LAB_00deab98;
            }
            goto LAB_00deab8c;
          }
          iVar7 = iVar2;
          if (iVar2 == 0) goto LAB_00deab8c;
        }
        ClearExclusiveLocal();
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00deab8c:
    DAT_00000060 = 1;
  }
LAB_00deab98:
  FUN_0075e7d0(*(undefined4 *)(param_1 + 0xb8),*(long *)(param_1 + 0x88) + 0xa0,param_1 + 0x110);
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(lVar6 + 0xc0) = 1;
  *(undefined8 *)(lVar6 + 0xa8) = extraout_var_00;
  *(ulong *)(lVar6 + 0xa0) = CONCAT44(extraout_var,extraout_s0);
  *(float *)(param_1 + 0x134) =
       *(float *)(param_1 + 0x134) +
       (*(float *)(param_1 + 0x138) - *(float *)(param_1 + 0x134)) * DAT_01d4c774;
                    /* WARNING: Could not recover jumptable at 0x00deac00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x88) + 0x180))(*(long **)(param_1 + 0x88),PTR_DAT_0271e8b0);
  return;
}


