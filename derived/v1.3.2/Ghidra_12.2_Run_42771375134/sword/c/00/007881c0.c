/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007881c0; name: FUN_007881c0
 */


void FUN_007881c0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar4 = PTR_DAT_02715500;
  FUN_0199cf00(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)PTR_DAT_02715500 * 0x170,
               *(long *)(param_1 + 0x2b8) + 0x78);
  FUN_0199cfb0(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar4 * 0x170,
               *(long *)(param_1 + 0x2b8) + 0xa0);
  FUN_0199ce00(*(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar4 * 0x170,
               *(long *)(param_1 + 0x2b8) + 0xbc);
  if ((*(long *)(param_1 + 0x328) != 0) && (*(int *)(*(long *)(param_1 + 0x328) + 0x54) != 0)) {
    uVar11 = *(undefined8 *)(param_1 + 0xc0);
    iVar6 = FUN_00785e10(uVar11);
    if (0 < iVar6) {
      FUN_019b39e0(uVar11,PTR_DAT_027155e8,param_1 + 0xe0,
                   *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar4 * 0x170);
      puVar5 = PTR_DAT_02715888;
      lVar8 = *(long *)(param_1 + 0x328);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
        piVar1 = (int *)(lVar8 + 0x54);
        puVar9 = PTR_DAT_02715890;
        iVar6 = *(int *)(lVar8 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar8 + 0x58);
            if (((*puVar5 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_02715890, iVar7 != 0)) {
              uVar11 = FUN_00702ff0();
              *(undefined8 *)PTR_DAT_02715890 = uVar11;
              __cxa_guard_release(puVar5);
              puVar9 = PTR_DAT_02715890;
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00788450;
              if (plVar10 == (long *)puVar9) break;
              plVar10 = (long *)*plVar10;
            }
            iVar7 = *piVar1;
            if (iVar7 != iVar6) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar8 = *(long *)(lVar8 + 0x60);
              if (lVar8 != 0) {
                local_38 = (**(code **)(**(long **)(lVar8 + 0x60) + 0x38))
                                     (*(long **)(lVar8 + 0x60),0,0);
                lVar12 = *(long *)(param_1 + 0x60);
                uVar11 = FUN_006f2970(*(undefined8 *)(lVar8 + 0xe0),0,0);
                FUN_0199d150(*(long *)(lVar12 + 0x58) + (long)*(int *)puVar4 * 0x170,1,&local_38,
                             uVar11);
                local_68 = *(undefined8 *)(lVar8 + 0x108);
                uStack_60 = *(undefined8 *)(lVar8 + 0x110);
                local_58 = *(undefined8 *)(lVar8 + 0x118);
                uStack_50 = *(undefined8 *)(lVar8 + 0x120);
                local_48 = *(undefined8 *)(lVar8 + 0x128);
                uStack_40 = *(undefined8 *)(lVar8 + 0x130);
                local_88 = *(undefined8 *)(lVar8 + 0x138);
                uStack_80 = *(undefined8 *)(lVar8 + 0x140);
                local_78 = *(undefined8 *)(lVar8 + 0x148);
                uStack_70 = *(undefined8 *)(lVar8 + 0x150);
                FUN_0199dfd0(*(long *)(*(long *)(param_1 + 0x60) + 0x58) +
                             (long)*(int *)puVar4 * 0x170,0,1,&local_68);
                FUN_0199e0a0(*(long *)(*(long *)(param_1 + 0x60) + 0x58) +
                             (long)*(int *)puVar4 * 0x170,0,1,&local_88);
                FUN_0199cf00(*(long *)(*(long *)(param_1 + 0x60) + 0x58) +
                             (long)*(int *)puVar4 * 0x170,*(long *)(param_1 + 0x2b8) + 0x78);
                (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
              }
              goto LAB_00788450;
            }
            iVar6 = iVar7;
            if (iVar7 == 0) goto LAB_00788450;
          }
          ClearExclusiveLocal();
          iVar6 = iVar7;
        } while (iVar7 != 0);
      }
    }
  }
LAB_00788450:
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x60))
            (*(long **)(param_1 + 0xc0),param_1 + 0xe0,
             *(long *)(*(long *)(param_1 + 0x60) + 0x58) + (long)*(int *)puVar4 * 0x170);
  return;
}


