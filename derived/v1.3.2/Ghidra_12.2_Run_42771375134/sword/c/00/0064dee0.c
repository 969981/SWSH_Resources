/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064dee0; name: FUN_0064dee0
 */


bool FUN_0064dee0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_28;
  int iStack_24;
  
  FUN_0064e120();
  uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x2a8))();
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)PTR_DAT_02714a28)(&local_70);
  (**(code **)PTR_DAT_02714a30)(&local_70,uVar3);
  puVar1 = PTR_DAT_02713a38;
  local_28 = 0;
  iStack_24 = 0;
  local_74 = 0;
  (**(code **)PTR_DAT_02713a38)(uVar3,0x51,&iStack_24);
  (**(code **)puVar1)(uVar3,0x5c,&local_28);
  (**(code **)puVar1)(uVar3,0x56,&local_74);
  lVar6 = *(long *)(param_1 + 0x18);
  iVar7 = *(int *)(lVar6 + 0xf8);
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      iVar7 = iStack_24 << 6;
      goto LAB_0064dfa8;
    }
    iVar8 = *(int *)(lVar6 + 0xfc);
    if (iVar8 < 1) goto LAB_0064dfe0;
LAB_0064dfcc:
    iVar7 = *(int *)(lVar6 + 0x100);
    local_28 = iVar8;
  }
  else {
LAB_0064dfa8:
    iVar8 = *(int *)(lVar6 + 0xfc);
    iStack_24 = iVar7;
    if (0 < iVar8) goto LAB_0064dfcc;
LAB_0064dfe0:
    if (iVar8 < 0) {
      iVar8 = local_28 << 1;
      goto LAB_0064dfcc;
    }
    iVar7 = *(int *)(lVar6 + 0x100);
  }
  if (iVar7 < 1) {
    if (-1 < iVar7) goto LAB_0064dffc;
    iVar7 = local_74 << 7;
  }
  local_74 = iVar7;
LAB_0064dffc:
  (**(code **)PTR_DAT_02714a38)(&local_70,(long)iStack_24);
  (**(code **)PTR_DAT_02714a40)(&local_70,(long)local_28);
  (**(code **)PTR_DAT_02714a48)(&local_70,(long)local_74);
  uVar3 = (**(code **)PTR_DAT_02714a50)(&local_70);
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x40))
                      (plVar4,1,uVar3,0x1000,
                       "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/NX/SiGfx_NX_CommandQueue_Impl.cpp"
                       ,0x7a);
  }
  *(undefined8 *)(param_1 + 0x20a0) = uVar5;
  (**(code **)PTR_DAT_02714a58)(&local_70,uVar5,uVar3);
  cVar2 = (**(code **)PTR_DAT_02714a60)(param_1 + 0x50,&local_70);
  if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x20a8) = 1;
  }
  return cVar2 == '\x01';
}


