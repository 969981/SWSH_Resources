/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132cc00; name: FUN_0132cc00
 */


void FUN_0132cc00(long param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *puStack_178;
  undefined8 *local_170;
  int *piStack_168;
  char *local_160;
  long local_110;
  char local_104 [4];
  undefined8 local_100;
  long local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 *local_d0 [14];
  
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar9 == (undefined8 *)0x0) goto LAB_0132cc60;
    plVar4 = (long *)(**(code **)*puVar9)(puVar9);
    lVar5 = FUN_0132d9a0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar9 = puVar9 + -10;
        goto LAB_0132cc60;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_0132cc60:
  FUN_0132f7f0(&local_f8,puVar9);
  piVar6 = (int *)FUN_013298b0(local_f8);
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  plVar4 = *(long **)(lVar5 + 0x58);
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x10))();
  }
  lVar5 = *(long *)(piVar6 + 0x10);
  *(long **)(piVar6 + 0x10) = plVar4;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  piVar6[0xe] = 0;
  piVar6[0x12] = 1;
  piVar6[0x13] = 1;
  piVar6[10] = 0;
  piVar6[0xb] = 0;
  piVar6[0xc] = 0;
  piVar6[0xd] = 0;
  piVar6[0] = 0;
  piVar6[1] = 0;
  piVar6[6] = 0;
  piVar6[7] = 0;
  piVar6[8] = 0;
  piVar6[9] = 0;
  piVar6[2] = 0;
  piVar6[3] = 0;
  piVar6[4] = 0;
  piVar6[5] = 0;
  iVar3 = FUN_00884820(plVar4);
  if (iVar3 != 0) {
    uVar10 = 0;
    do {
      uVar7 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar10 & 0xffffffff);
      uVar8 = FUN_0087d610(uVar7,2);
      if ((uVar8 & 1) == 0) {
        local_100 = (**(code **)(*plVar4 + 0x50))(plVar4,uVar10 & 0xffffffff);
        local_104[0] = '\0';
        lVar5 = puVar9[0x6b];
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        local_170 = &local_100;
        local_160 = local_104;
        local_190 = &LAB_0132dad0;
        local_188 = FUN_0132db60;
        local_180 = &LAB_0132db70;
        puStack_178 = &LAB_0132db90;
        local_f0 = PTR_LAB_027277e8;
        local_e8 = (code *)PTR_FUN_027277f0;
        local_e0 = PTR_LAB_027277f8;
        local_d8 = PTR_LAB_02727800;
        piStack_168 = piVar6;
        local_d0[0] = (undefined1 *)&local_190;
        FUN_01307150(&local_110,lVar5,&local_f0);
        pcVar1 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined *)0x0;
          local_d8 = (undefined *)0x0;
          local_f0 = (undefined *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar1)(local_d0);
        }
        lVar2 = local_110;
        if (local_110 != 0) {
          (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
          local_110 = 0;
        }
        pcVar1 = local_188;
        if (local_188 != (code *)0x0) {
          local_180 = (undefined1 *)0x0;
          puStack_178 = (undefined1 *)0x0;
          local_190 = (undefined1 *)0x0;
          local_188 = (code *)0x0;
          (*pcVar1)(&local_170);
        }
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
        }
        if ((lVar2 == 0) && (iVar3 = FUN_013302b0(puVar9,uVar10 & 0xffffffff), iVar3 != 0)) {
          *piVar6 = iVar3;
          local_104[0] = '\x01';
        }
        else if (local_104[0] == '\0') goto LAB_0132ce94;
        FUN_01329890(local_f8);
      }
LAB_0132ce94:
      uVar10 = uVar10 + 1;
      uVar8 = FUN_00884820(plVar4);
      piVar6 = piVar6 + 1;
    } while (uVar10 < (uVar8 & 0xffffffff));
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(plVar4[9] + 0x18))(plVar4 + 9);
  }
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
  }
  return;
}


