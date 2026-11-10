/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d6100; name: FUN_011d6100
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_011d6100(long param_1,short param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  void *__dest;
  string *this;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  string *psVar15;
  undefined1 auStack_70 [8];
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  
  if (param_2 == 1) {
    bVar6 = FUN_019407b0(*(undefined8 *)PTR_DAT_02716a30);
    puVar5 = PTR_DAT_02725998;
    puVar4 = PTR_DAT_02725990;
    uVar13 = *(undefined8 *)(param_1 + 0x198);
    lVar9 = *(long *)(param_1 + (1 - (ulong)bVar6) * 8 + 0x30);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar14 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar12 = *(long **)(lVar9 + 0x58);
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
            uVar10 = FUN_009b7e90();
            *(undefined8 *)puVar5 = uVar10;
            __cxa_guard_release(puVar4);
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_011d638c;
            if (plVar12 == (long *)puVar5) break;
            plVar12 = (long *)*plVar12;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar14) break;
          ClearExclusiveLocal();
          iVar14 = iVar7;
          if (iVar7 == 0) goto LAB_011d638c;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar14 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            FUN_008664b0(uVar13,lVar9 + 0x38);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
            uVar11 = FUN_008787d0(*(undefined8 *)(param_1 + 0x198));
            goto joined_r0x011d6384;
          }
          break;
        }
        iVar14 = iVar7;
      } while (iVar7 != 0);
    }
LAB_011d638c:
    FUN_008664b0(uVar13,0x88);
    uVar11 = FUN_008787d0(*(undefined8 *)(param_1 + 0x198));
joined_r0x011d6384:
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x1a4) = 2;
    }
    *(undefined4 *)(param_1 + 0x1a0) = 1;
  }
  else if (param_2 == 0) {
    plVar12 = *(long **)(param_1 + 0x10);
    puVar8 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x28,8);
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    FUN_011d9090(puVar8);
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    FUN_0075efb0(auStack_70,plVar12,0,1);
    psVar15 = *(string **)PTR_DAT_02716d10;
    __dest = operator_new(0x160);
    local_68 = 0x161;
    local_60 = 0x158;
    local_58 = __dest;
    memcpy(__dest,(void *)(param_1 + 0x40),0x158);
    *(undefined1 *)((long)__dest + 0x158) = 0;
    this = (string *)puVar8[3];
    if (this == psVar15) {
      FUN_009b58d0(puVar8 + 3);
    }
    else {
      std::string::operator=(this,(string *)&local_68);
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    FUN_0075f0a0(auStack_70);
    FUN_011d63e0(*(undefined8 *)(param_1 + 0x18),puVar8,1);
    FUN_0075efb0(&local_68,plVar12,0,1);
    (**(code **)*puVar8)(puVar8);
    (**(code **)(*plVar12 + 0x18))(plVar12,puVar8,0x28,8);
    FUN_0075f0a0(&local_68);
  }
  return;
}


