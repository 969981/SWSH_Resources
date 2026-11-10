/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c8c20; name: FUN_004c8c20
 */


void FUN_004c8c20(ulong param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined4 local_8e;
  undefined8 local_88;
  undefined4 local_80;
  int local_70;
  undefined1 local_6c;
  long local_68;
  
  lVar6 = *(long *)PTR_DAT_02712db8;
  if (*(int *)(lVar6 + 8) != 0) {
    uVar4 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar6 + 0x40) = uVar4;
  }
  puVar2 = PTR_DAT_02712ac0;
  FUN_00468750(*(undefined2 *)PTR_DAT_02712ac0);
  FUN_004c78c0();
  FUN_004c04e0();
  puVar3 = PTR_DAT_02713500;
  lVar6 = *(long *)(PTR_DAT_02713500 + 0x10);
  if (lVar6 != 0) {
    if ((param_1 & 1) == 0) {
      lVar8 = 0;
      do {
        local_a0 = 0;
        uStack_98 = 0x2b00000000;
        local_8e = 0;
        local_88 = 0;
        local_6c = 0;
        local_70 = 0x2b;
        local_90 = (undefined2)*(undefined4 *)puVar2;
        if (*(int *)(lVar6 + 0x80) == 1) {
          FUN_004dae50(lVar6,&local_a0);
        }
        FUN_004c7790(lVar6,&local_a0);
        lVar9 = *(long *)(lVar6 + 0x68);
        lVar7 = lVar6;
        if (*(int *)(lVar6 + 0x80) == 2) {
          plVar1 = (long *)(puVar3 + 0x10);
          if (*(long *)(puVar3 + 0x10) != lVar6) {
            plVar1 = (long *)(lVar8 + 0x68);
          }
          *plVar1 = lVar9;
          if (*(long *)(puVar3 + 8) == lVar6) {
            *(long *)(puVar3 + 8) = lVar8;
          }
          *(int *)puVar3 = *(int *)puVar3 + -1;
          FUN_00468b10(lVar6,0);
          lVar7 = lVar8;
        }
        lVar6 = lVar9;
        lVar8 = lVar7;
      } while (lVar9 != 0);
    }
    else {
      lVar8 = 0;
      do {
        local_a0 = 0;
        uStack_98 = 0x2b00000000;
        local_8e = 0;
        local_88 = 0;
        local_6c = 0;
        local_70 = 0x2b;
        local_90 = (undefined2)*(undefined4 *)puVar2;
        if ((*(int *)(lVar6 + 0x80) == 1) &&
           (uVar5 = FUN_004dae50(lVar6,&local_a0), (uVar5 & 1) != 0)) {
          local_8e = 0;
          local_88 = 0;
          local_80 = 0xffffffff;
          local_68 = lVar6;
          FUN_004c88d0(&local_a0);
          if (local_70 == 0x2e) {
            FUN_004dc3c0(local_68,&local_a0);
          }
          else {
            FUN_004db950(local_68);
          }
        }
        FUN_004c7790(lVar6,&local_a0);
        lVar9 = *(long *)(lVar6 + 0x68);
        lVar7 = lVar6;
        if (*(int *)(lVar6 + 0x80) == 2) {
          plVar1 = (long *)(puVar3 + 0x10);
          if (*(long *)(puVar3 + 0x10) != lVar6) {
            plVar1 = (long *)(lVar8 + 0x68);
          }
          *plVar1 = lVar9;
          if (*(long *)(puVar3 + 8) == lVar6) {
            *(long *)(puVar3 + 8) = lVar8;
          }
          *(int *)puVar3 = *(int *)puVar3 + -1;
          FUN_00468b10(lVar6,0);
          lVar7 = lVar8;
        }
        lVar6 = lVar9;
        lVar8 = lVar7;
      } while (lVar9 != 0);
    }
  }
  return;
}


