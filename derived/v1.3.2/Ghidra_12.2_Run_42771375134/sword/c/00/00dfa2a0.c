/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfa2a0; name: FUN_00dfa2a0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfa2a0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  
  if ((*(long *)(param_1 + 0x60) == 0) || (*(int *)(*(long *)(param_1 + 0x60) + 0x54) == 0)) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else if (*(int *)(param_1 + 0x6c) == 2) {
    lVar7 = *(long *)(param_1 + 0x60);
    iVar5 = _DAT_00000468;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      puVar8 = PTR_DAT_0271ee68;
      pbVar10 = PTR_DAT_0271ee60;
      iVar9 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar7 + 0x58);
          if (((*pbVar10 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ee60), pbVar10 = PTR_DAT_0271ee60,
             puVar8 = PTR_DAT_0271ee68, iVar5 != 0)) {
            uVar6 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_0271ee68 = uVar6;
            __cxa_guard_release(PTR_DAT_0271ee60);
            pbVar10 = PTR_DAT_0271ee60;
            puVar8 = PTR_DAT_0271ee68;
          }
          while( true ) {
            iVar5 = _DAT_00000468;
            if (plVar11 == (long *)0x0) goto joined_r0x00dfa3f8;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar9) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          iVar5 = _DAT_00000468;
          if (cVar3 == '\0') {
            lVar7 = *(long *)(lVar7 + 0x60);
            if (lVar7 != 0) {
              iVar5 = *(int *)(lVar7 + 0x418);
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            }
            goto joined_r0x00dfa3f8;
          }
          iVar9 = iVar2;
          if (iVar2 == 0) goto joined_r0x00dfa3f8;
        }
        ClearExclusiveLocal();
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
joined_r0x00dfa3f8:
    if (iVar5 == -1) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      return;
    }
  }
  return;
}


