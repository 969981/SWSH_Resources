/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dda040; name: FUN_00dda040
 */


void FUN_00dda040(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  plVar10 = *(long **)(param_1 + 8);
  plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x250,0x10);
  puVar2 = PTR_DAT_02710860;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_00dda2d8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar10;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  *plVar6 = (long)(PTR_DAT_0271eaf0 + 0x10);
  plVar6[1] = *param_2;
  plVar6[2] = param_2[1];
  plVar6[3] = param_2[2];
  lVar8 = param_2[3];
  plVar6[4] = lVar8;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  plVar6[0x1a] = 0;
  plVar6[0x1b] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  puVar1 = PTR_DAT_027150e0 + 0x10;
  *(undefined1 *)(plVar6 + 0x28) = 0;
  plVar6[0x29] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[0x3c] = 0;
  plVar6[0x3d] = 0;
  plVar6[5] = param_3;
  plVar6[6] = (long)puVar1;
  plVar6[0x3a] = 0;
  plVar6[0x3b] = 0;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2a] = 0;
  plVar6[0x2b] = 0;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  pcVar9 = (code *)plVar6[0x2b];
  if (pcVar9 != (code *)0x0) {
    plVar6[0x2c] = 0;
    plVar6[0x2d] = 0;
    plVar6[0x2a] = 0;
    plVar6[0x2b] = 0;
    (*pcVar9)(plVar6 + 0x2e);
  }
  puVar4 = PTR_LAB_0271eb08;
  puVar3 = PTR_LAB_0271eb00;
  puVar1 = PTR_LAB_0271eaf8;
  plVar6[0x2e] = param_1;
  puVar5 = PTR_LAB_0271eb10;
  plVar6[0x2f] = (long)plVar6;
  plVar6[0x2a] = (long)puVar1;
  plVar6[0x2b] = (long)puVar3;
  pcVar9 = (code *)plVar6[0x3b];
  plVar6[0x2c] = (long)puVar4;
  plVar6[0x2d] = (long)puVar5;
  if (pcVar9 != (code *)0x0) {
    plVar6[0x3c] = 0;
    plVar6[0x3d] = 0;
    plVar6[0x3a] = 0;
    plVar6[0x3b] = 0;
    (*pcVar9)(plVar6 + 0x3e);
  }
  puVar3 = PTR_LAB_0271eb20;
  puVar1 = PTR_LAB_0271eb18;
  plVar6[0x3e] = param_1;
  puVar5 = PTR_LAB_0271eb30;
  puVar4 = PTR_LAB_0271eb28;
  plVar6[0x3a] = (long)puVar1;
  plVar6[0x3b] = (long)puVar3;
  plVar6[0x3c] = (long)puVar4;
  plVar6[0x3d] = (long)puVar5;
  local_60 = 0x250;
  local_58 = 0x10;
  puVar11 = *(undefined8 **)(param_1 + 0x3a8);
  local_70 = plVar6;
  local_68 = plVar10;
  if (puVar11 < *(undefined8 **)(param_1 + 0x3b0)) {
    uVar12 = *(undefined8 *)(param_1 + 0x3b8);
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
    if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00dda2d8;
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    *puVar11 = local_70;
    puVar11[1] = local_68;
    puVar11[2] = local_60;
    puVar11[3] = local_58;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + 0x20;
  }
  else {
    FUN_00dd93d0(param_1 + 0x3a0,&local_70);
    plVar6 = local_70;
    if (local_70 != (long *)0x0) {
      local_70 = (long *)0x0;
      (**(code **)*plVar6)(plVar6);
      (**(code **)(*local_68 + 0x18))(local_68,plVar6,local_60,local_58);
    }
  }
  return;
}


