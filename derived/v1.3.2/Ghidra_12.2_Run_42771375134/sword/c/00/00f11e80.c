/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f11e80; name: FUN_00f11e80
 */


void FUN_00f11e80(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  
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
            if (plVar8 == (long *)0x0) goto LAB_00f11f40;
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
              goto LAB_00f11f4c;
            }
            goto LAB_00f11f40;
          }
          iVar7 = iVar2;
          if (iVar2 == 0) goto LAB_00f11f40;
        }
        ClearExclusiveLocal();
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00f11f40:
    DAT_00000060 = 1;
  }
LAB_00f11f4c:
  auVar9 = FUN_0075e7d0(*(undefined4 *)(param_1 + 0xb0),*(long *)(param_1 + 0x88) + 0xa0,
                        param_1 + 0xd0);
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(lVar6 + 0xc0) = 1;
  *(undefined1 (*) [16])(lVar6 + 0xa0) = auVar9;
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined1 *)(lVar6 + 0xc0) = 1;
  *(ulong *)(lVar6 + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0xb8) >> 0x20) + 0.0,
                (float)*(undefined8 *)(lVar6 + 0xb8) + 0.0);
  *(ulong *)(lVar6 + 0xb0) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar6 + 0xb0) >> 0x20) + 0.0,
                (float)*(undefined8 *)(lVar6 + 0xb0) + 0.0);
  return;
}


