/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfe9d0; name: FUN_00dfe9d0
 */


void FUN_00dfe9d0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_28;
  
  FUN_00a658b0(&local_28,param_1 + 0x50);
  puVar4 = PTR_DAT_0271ee50;
  lVar11 = *(long *)(param_1 + 0x58);
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x54) == 0)) {
LAB_00dfeadc:
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(lVar11 + 0x54);
    puVar7 = PTR_DAT_0271ee58;
    iVar8 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar9 = *(long **)(lVar11 + 0x58);
        if ((*puVar4 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(puVar4);
          puVar7 = PTR_DAT_0271ee58;
          if (iVar5 != 0) {
            uVar6 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_0271ee58 = uVar6;
            __cxa_guard_release(puVar4);
            puVar7 = PTR_DAT_0271ee58;
          }
        }
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_00dfeadc;
          if (plVar9 == (long *)puVar7) break;
          plVar9 = (long *)*plVar9;
        }
        iVar5 = *piVar1;
        if (iVar5 != iVar8) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar10 = 0;
          if (*(long *)(lVar11 + 0x60) != 0) {
            lVar10 = *(long *)(lVar11 + 0x60) + -0x50;
          }
          goto LAB_00dfeae0;
        }
        lVar10 = 0;
        iVar8 = iVar5;
        if (iVar5 == 0) goto LAB_00dfeae0;
      }
      ClearExclusiveLocal();
      lVar10 = 0;
      iVar8 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00dfeae0:
  lVar11 = local_28;
  memmove((void *)(local_28 + 0x3b0),(void *)(lVar10 + 0x3b0),0x34);
  *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0x3a0) + 0xa0) + 200) =
       *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0x3a0) + 0xa0) + 200);
  *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0x3a0) + 0xa0) + 0xcc) =
       *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0x3a0) + 0xa0) + 0xcc);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    lVar11 = local_28;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


