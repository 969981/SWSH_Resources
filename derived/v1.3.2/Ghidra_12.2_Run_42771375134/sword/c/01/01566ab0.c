/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01566ab0; name: FUN_01566ab0
 */


void FUN_01566ab0(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_38;
  
  lVar11 = *(long *)(param_1 + 0x68);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  FUN_0156a4a0(&local_38,lVar11);
  lVar7 = local_38;
  puVar4 = PTR_DAT_0272af30;
  if ((local_38 == 0) || (*(int *)(local_38 + 0x54) == 0)) {
LAB_01566bdc:
    lVar12 = 0;
  }
  else {
    piVar1 = (int *)(local_38 + 0x54);
    puVar8 = PTR_DAT_0272af38;
    iVar9 = *(int *)(local_38 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar7 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar8 = PTR_DAT_0272af38;
          if (iVar5 != 0) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_0272af38 = uVar6;
            __cxa_guard_release(puVar4);
            puVar8 = PTR_DAT_0272af38;
          }
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_01566bdc;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar9) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          lVar12 = 0;
          if (lVar7 != 0) {
            lVar12 = lVar7 + -0x50;
          }
          goto LAB_01566be0;
        }
        lVar12 = 0;
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_01566be0;
      }
      ClearExclusiveLocal();
      lVar12 = 0;
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_01566be0:
  FUN_006e4c50(lVar12 + 0x88,param_3);
  *(undefined8 *)(lVar12 + 0xb8) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(lVar12 + 0xc0) = param_2;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


