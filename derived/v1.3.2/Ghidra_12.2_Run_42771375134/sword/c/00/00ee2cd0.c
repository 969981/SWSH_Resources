/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee2cd0; name: FUN_00ee2cd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee2cd0(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  long local_58;
  undefined8 local_48;
  
  local_48 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN_00ee2e30(&local_58,lVar9,&local_48);
  lVar8 = local_58;
  uVar5 = param_1;
  uVar6 = param_2;
  if ((local_58 != 0) && (uVar5 = param_1, uVar6 = param_2, *(int *)(local_58 + 0x54) != 0)) {
    piVar1 = (int *)(local_58 + 0x54);
    iVar10 = *(int *)(local_58 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar8 + 0x58);
        lVar7 = FUN_00ee34a0();
        while( true ) {
          uVar5 = param_1;
          uVar6 = param_2;
          if (plVar11 == (long *)0x0) goto joined_r0x00ee2dc4;
          if (plVar11 == (long *)lVar7) break;
          plVar11 = (long *)*plVar11;
        }
        iVar2 = *piVar1;
        if (iVar2 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          uVar5 = param_1;
          uVar6 = param_2;
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x60) = param_1;
            *(undefined4 *)(lVar8 + 0x68) = param_2;
            (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
            uVar5 = _DAT_000000b0;
            uVar6 = _DAT_000000b8;
          }
          goto joined_r0x00ee2dc4;
        }
        iVar10 = iVar2;
        uVar5 = param_1;
        uVar6 = param_2;
        if (iVar2 == 0) goto joined_r0x00ee2dc4;
      }
      ClearExclusiveLocal();
      iVar10 = iVar2;
      uVar5 = param_1;
      uVar6 = param_2;
    } while (iVar2 != 0);
  }
joined_r0x00ee2dc4:
  _DAT_000000b8 = uVar6;
  _DAT_000000b0 = uVar5;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


