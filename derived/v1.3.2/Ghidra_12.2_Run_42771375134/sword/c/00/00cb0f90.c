/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb0f90; name: FUN_00cb0f90
 */


uint FUN_00cb0f90(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = *param_2;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
    if (*(int *)(lVar7 + 0x54) != 0) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar8 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(lVar7 + 0x58);
          lVar6 = FUN_00ca0490();
          while( true ) {
            if (plVar9 == (long *)0x0) goto LAB_00cb105c;
            if (plVar9 == (long *)lVar6) break;
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
            lVar6 = *(long *)(lVar7 + 0x60);
            if (lVar6 != 0) {
              uVar5 = FUN_00ca0cc0(lVar6 + -0x50,param_3,param_4);
              (**(code **)(*(long *)(lVar6 + -8) + 0x18))((long *)(lVar6 + -8));
              goto joined_r0x00cb1054;
            }
            goto LAB_00cb105c;
          }
          iVar8 = iVar2;
          if (iVar2 == 0) goto LAB_00cb105c;
        }
        ClearExclusiveLocal();
        iVar8 = iVar2;
      } while (iVar2 != 0);
    }
  }
LAB_00cb105c:
  uVar5 = FUN_00ca0cc0(0,param_3,param_4);
joined_r0x00cb1054:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return uVar5 & 1;
}


