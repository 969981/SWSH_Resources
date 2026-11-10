/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01199630; name: FUN_01199630
 */


uint FUN_01199630(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 local_80 [8];
  
  uVar8 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  if ((uVar8 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xa1) != '\0') {
      local_80[6] = 0;
      local_80[7] = 0;
      local_80[4] = 0;
      local_80[5] = 0;
      local_80[2] = 0;
      local_80[3] = 0;
      local_80[0] = 0;
      local_80[1] = 0;
      if ((*(long *)PTR_DAT_027104b0 != 0) &&
         (lVar9 = FUN_007b5710(), puVar4 = PTR_DAT_027185f8, *(long *)(lVar9 + 0x48) != 0)) {
        uVar8 = 0;
        do {
          uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0x40) + uVar8 * 8);
          uVar10 = FUN_0120e630(*(undefined8 *)puVar4,uVar13);
          local_80[uVar10 & 0xff] = uVar13;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulong *)(lVar9 + 0x48));
      }
      puVar5 = PTR_DAT_02725308;
      puVar4 = PTR_DAT_02725300;
      lVar9 = *(long *)(param_1 + 0xb0);
      if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
        piVar1 = (int *)(lVar9 + 0x54);
        iVar11 = *(int *)(lVar9 + 0x54);
        do {
          while( true ) {
            plVar12 = *(long **)(lVar9 + 0x58);
            if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
              uVar13 = FUN_009b7e90();
              *(undefined8 *)puVar5 = uVar13;
              __cxa_guard_release(puVar4);
            }
            while( true ) {
              if (plVar12 == (long *)0x0) goto LAB_011997d8;
              if (plVar12 == (long *)puVar5) break;
              plVar12 = (long *)*plVar12;
            }
            iVar6 = *piVar1;
            if (iVar6 != iVar11) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar9 = *(long *)(lVar9 + 0x60);
              if (lVar9 != 0) {
                FUN_01199820(lVar9 + -0x50,local_80);
                (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
              }
              goto LAB_011997d8;
            }
            iVar11 = iVar6;
            if (iVar6 == 0) goto LAB_011997d8;
          }
          ClearExclusiveLocal();
          iVar11 = iVar6;
        } while (iVar6 != 0);
      }
    }
LAB_011997d8:
    uVar13 = *(undefined8 *)(param_1 + 0x88);
    FUN_011b2110(local_80);
    uVar7 = FUN_01199960(uVar13,local_80,1);
    FUN_011b2160(local_80);
  }
  return uVar7 & 1;
}


