/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f3f330; name: FUN_00f3f330
 */


void FUN_00f3f330(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_48;
  
  uVar13 = *(uint *)(*(long *)(param_1 + 0x588) + 0xc);
  local_60 = CONCAT44(uVar13,uVar13);
  uStack_58 = (ulong)uVar13;
  local_48 = 0x259713afb4e2fd5d;
  FUN_00dc0c30(param_1,&local_48,&local_60);
  local_60 = 0x259713afb4e2fd5d;
  FUN_00dc04c0(param_1,&local_60,0,0,0);
  if ((*(long *)(param_1 + 0x360) == 0) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x360) + 0x80), lVar10 == 0)) {
    *(undefined1 *)(param_1 + 0x568) = 0;
    lVar10 = *(long *)(param_1 + 0x1e8);
    lVar5 = *(long *)(param_1 + 0x1f0);
    uVar7 = lVar5 - lVar10;
  }
  else {
    plVar9 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    piVar1 = (int *)(lVar10 + 0x54);
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar11 = iVar2, iVar2 != 0) {
        while( true ) {
          plVar12 = *(long **)(lVar10 + 0x58);
          lVar5 = FUN_006cb2c0();
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_00f3f464;
            if (plVar12 == (long *)lVar5) break;
            plVar12 = (long *)*plVar12;
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
            lVar10 = *(long *)(lVar10 + 0x60);
            if (lVar10 == 0) goto LAB_00f3f464;
            *(undefined1 *)(lVar10 + 0x10) = 0;
            (**(code **)(*(long *)(lVar10 + -8) + 0x18))();
            goto LAB_00f3f46c;
          }
          iVar11 = iVar2;
          if (iVar2 == 0) goto LAB_00f3f464;
        }
        ClearExclusiveLocal();
      }
LAB_00f3f464:
      DAT_00000060 = 0;
    }
LAB_00f3f46c:
    *(undefined1 *)(param_1 + 0x568) = 0;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar10 = *(long *)(param_1 + 0x1e8);
    lVar5 = *(long *)(param_1 + 0x1f0);
    uVar7 = lVar5 - lVar10;
  }
  if ((uVar7 & 0x7fffffff8) != 0) {
    uVar6 = 0;
    do {
      if ((uVar6 < (ulong)((long)uVar7 >> 3)) && (lVar8 = *(long *)(lVar10 + uVar6 * 8), lVar8 != 0)
         ) {
        *(undefined1 *)(lVar8 + 0x69) = 1;
        lVar10 = *(long *)(param_1 + 0x1e8);
        lVar5 = *(long *)(param_1 + 0x1f0);
      }
      uVar7 = lVar5 - lVar10;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uVar7 >> 3 & 0xffffffff));
  }
  *(undefined1 *)(param_1 + 0x218) = 0;
  return;
}


