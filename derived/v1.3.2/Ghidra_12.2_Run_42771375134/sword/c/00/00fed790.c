/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fed790; name: FUN_00fed790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fed790(long param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long local_50;
  undefined8 local_48;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar7 = *(long *)(param_1 + 0x68);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN_00fed8d0(&local_50,lVar7,&local_48);
  lVar6 = local_50;
  if ((local_50 != 0) && (*(int *)(local_50 + 0x54) != 0)) {
    piVar1 = (int *)(local_50 + 0x54);
    iVar8 = *(int *)(local_50 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar6 + 0x58);
        lVar5 = FUN_00fee110();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00fed878;
          if (plVar9 == (long *)lVar5) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar8) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar6 = *(long *)(lVar6 + 0x60);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x40) = *param_2;
            (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
            goto joined_r0x00fed870;
          }
          goto LAB_00fed878;
        }
        iVar8 = iVar2;
        if (iVar2 == 0) goto LAB_00fed878;
      }
      ClearExclusiveLocal();
      iVar8 = iVar2;
    } while (iVar2 != 0);
  }
LAB_00fed878:
  _DAT_00000090 = *param_2;
joined_r0x00fed870:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


