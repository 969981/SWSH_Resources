/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f51590; name: FUN_00f51590
 */


void FUN_00f51590(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  ulong local_278;
  undefined1 auStack_270 [164];
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [32];
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long **local_d0 [12];
  long *local_70 [2];
  
  if ((*(char *)(param_1 + 0x44) != '\0') &&
     (lVar6 = *(long *)(param_1 + 0x48), *(char *)(lVar6 + 0x2b0) != '\0')) {
    local_280 = 0;
    local_278 = 0;
    local_290 = 0;
    uStack_288 = 0;
    FUN_00de73e0(lVar6,lVar6 + 0x210,&local_290,&uStack_288,&local_280,&local_278);
    if (local_278 >> 0xd < 0x19) {
      lVar6 = *(long *)PTR_DAT_027194d8;
      FUN_00de7330(*(undefined8 *)(param_1 + 0x48));
      puVar3 = PTR_DAT_0271fc50;
      puVar2 = PTR_DAT_0271fc48;
      plVar11 = *(long **)(lVar6 + 0xb0);
      plVar1 = *(long **)(lVar6 + 0xb8);
      if (plVar11 != plVar1) {
        do {
          if (((*(byte *)(*plVar11 + 0x38e) >> 3 & 1) != 0) &&
             (uVar8 = (**(code **)(*(long *)*plVar11 + 0x88))(), (uVar8 & 1) == 0)) {
            plVar10 = (long *)*plVar11;
            plVar9 = (long *)(**(code **)plVar10[10])(plVar10 + 10);
            if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar2), iVar5 != 0)) {
              if (((*PTR_DAT_0271ed68 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ed68), iVar5 != 0)) {
                if (((*PTR_DAT_0271ed78 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_0271ed78), iVar5 != 0)) {
                  uVar7 = FUN_01577390();
                  *(undefined8 *)PTR_DAT_0271ed80 = uVar7;
                  __cxa_guard_release(PTR_DAT_0271ed78);
                }
                *(undefined **)PTR_DAT_0271ed70 = PTR_DAT_0271ed80;
                __cxa_guard_release(PTR_DAT_0271ed68);
              }
              *(undefined **)puVar3 = PTR_DAT_0271ed70;
              __cxa_guard_release(puVar2);
            }
            for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
              if (plVar9 == (long *)puVar3) {
                uVar8 = (**(code **)(*plVar10 + 0x70))(plVar10);
                if (((uVar8 & 1) != 0) && ((int)plVar10[0x114] == 1)) {
                  memcpy(auStack_270,plVar10 + 0x120,0x180);
                  FUN_00e5edc0(local_1cc,plVar10,auStack_110);
                  FUN_00e5ea50(local_1c8,plVar10,auStack_120);
                  *(undefined1 *)(plVar10 + 0x43) = 0;
                  *(undefined1 *)((long)plVar10 + 0xb31) = 1;
                  local_70[0] = plVar10;
                  if ((*(char *)(param_1 + 0x44) != '\0') &&
                     (*(char *)(*(long *)(param_1 + 0x48) + 0x2b0) != '\0')) {
                    local_d0[0] = local_70;
                    local_f0 = &LAB_00f51ad0;
                    local_e8 = FUN_00f51b80;
                    local_e0 = &LAB_00f55340;
                    local_d8 = &LAB_00f55350;
                    FUN_00de7380(*(long *)(param_1 + 0x48),&local_f0);
                    pcVar4 = local_e8;
                    if (local_e8 != (code *)0x0) {
                      local_e0 = (undefined1 *)0x0;
                      local_d8 = (undefined1 *)0x0;
                      local_f0 = (undefined1 *)0x0;
                      local_e8 = (code *)0x0;
                      (*pcVar4)(local_d0);
                    }
                  }
                  *(undefined1 *)((long)plVar10 + 0xb31) = 0;
                }
                break;
              }
            }
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar1);
      }
    }
  }
  return;
}


