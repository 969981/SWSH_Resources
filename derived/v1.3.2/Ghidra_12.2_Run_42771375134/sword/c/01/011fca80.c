/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fca80; name: FUN_011fca80
 */


undefined8 FUN_011fca80(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  if (*(int *)(param_1 + 0x84) - 2U < 3) {
    uVar5 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x138);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar9 = *(int *)(lVar8 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(lVar8 + 0x58);
          lVar6 = FUN_01201190();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_011fcb70;
            if (plVar10 == (long *)lVar6) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = *(long *)(lVar8 + 0x60);
            if (lVar8 != 0) {
              uVar7 = FUN_007dca70(lVar8 + -0x50);
              if ((uVar7 & 1) != 0) {
                uVar7 = FUN_007dc9b0(lVar8 + -0x50);
                if ((uVar7 & 1) == 0) {
                  *(undefined8 *)(param_1 + 0x80) = 0x400000001;
                }
                (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
                return 1;
              }
              (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
            }
            goto LAB_011fcb70;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto LAB_011fcb70;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
LAB_011fcb70:
    uVar7 = FUN_011ff650(param_1);
    if ((uVar7 & 1) == 0) {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x80) = 0xa00000004;
    }
    else {
      if (*(long *)(param_1 + 0x130) != 0) {
        FUN_0120c5a0();
      }
      *(undefined8 *)(param_1 + 0x80) = 0x400000001;
      uVar5 = 1;
    }
  }
  return uVar5;
}


