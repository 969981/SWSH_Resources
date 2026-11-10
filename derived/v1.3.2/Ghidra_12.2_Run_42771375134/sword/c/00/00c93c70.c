/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c93c70; name: FUN_00c93c70
 */


void FUN_00c93c70(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  long local_38;
  
  if (((*(long *)(param_1 + 0x2c8) != 0) && (*(int *)(*(long *)(param_1 + 0x2c8) + 0x54) != 0)) &&
     (*(long *)(param_1 + 0x268) == 0)) {
    lVar7 = *(long *)(param_1 + 0x70);
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar10 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          uVar5 = FUN_00c953c0(*(undefined8 *)(lVar7 + 0x58));
          if ((uVar5 & 1) == 0) goto LAB_00c93cf8;
          iVar2 = *piVar1;
          if (iVar2 != iVar10) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = 0;
            if (*(long *)(lVar7 + 0x60) != 0) {
              lVar8 = *(long *)(lVar7 + 0x60) + -0x50;
            }
            local_38 = *(long *)(param_1 + 0x2c8);
            if (local_38 == 0) goto LAB_00c93d10;
            goto LAB_00c93d04;
          }
          iVar10 = iVar2;
          if (iVar2 == 0) goto LAB_00c93cf8;
        }
        ClearExclusiveLocal();
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
LAB_00c93cf8:
    lVar8 = 0;
    local_38 = *(long *)(param_1 + 0x2c8);
    if (local_38 != 0) {
LAB_00c93d04:
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
LAB_00c93d10:
    uVar5 = FUN_00cae840(lVar8,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    if ((uVar5 & 1) != 0) {
      puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x2c8) + 0x60);
      puVar9 = puVar6 + -10;
      (**(code **)*puVar6)();
      uVar5 = FUN_00c95a30();
      if ((uVar5 & 1) == 0) {
        puVar9 = (undefined8 *)0x0;
      }
      lVar7 = puVar9[0x29];
      *(long *)(param_1 + 0x268) = lVar7;
      *(undefined1 *)(lVar7 + 0x58) = 1;
    }
  }
  return;
}


