/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b88e0; name: FUN_005b88e0
 */


ulong FUN_005b88e0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined5 uStack_54;
  undefined3 local_4f;
  undefined5 uStack_4c;
  
  FUN_005528d0(&local_68,param_1 + 0x10,"::m_pQueryLuminance");
  puVar3 = PTR_PTR_02713988;
  uVar6 = CONCAT44(uStack_5c,local_60);
  plVar5 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0xa0,
                                "C:/workspace/YEBIS_draft/src/GPU/GPUTextureLuminance.cpp",0x780,0);
  FUN_0059ebe0(plVar5,0);
  *plVar5 = (long)(PTR_DAT_02713db0 + 0x10);
  FUN_005b7650(plVar5,uVar6);
  *(long **)(param_1 + 0x40) = plVar5;
  FUN_00551380(&local_68);
  FUN_005528d0(&local_68,param_1 + 0x10,"::m_pTargetTexture");
  uVar6 = FUN_005b9a50(*(undefined8 *)puVar3,0x128,
                       "C:/workspace/YEBIS_draft/src/GPU/GPUTextureLuminance.cpp",0x781,0);
  FUN_0059aa70(uVar6,CONCAT44(uStack_5c,local_60));
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  FUN_00551380(&local_68);
  uStack_64 = *(undefined4 *)(param_1 + 0x30);
  local_60 = *(undefined4 *)(param_1 + 0x34);
  local_68 = 0x400;
  uStack_4c = 0;
  uStack_54 = 0;
  local_4f = 0;
  uStack_5c = 0x1c;
  uStack_58 = 1;
  uVar7 = FUN_0059abd0(*(undefined8 *)(param_1 + 0x48),&local_68);
  if (-1 < (int)uVar7) {
    iVar9 = *(int *)(param_1 + 0x2c);
    if ((iVar9 != 0) && (iVar9 = iVar9 + -1, iVar9 == 0)) {
      iVar9 = 3;
    }
    lVar1 = *(long *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar8 = *(undefined8 *)(lVar1 + 0x20);
    FUN_0059ed30(lVar1);
    *(int *)(lVar1 + 0x38) = iVar9;
    uVar4 = FUN_005b7720(lVar1,uVar6,uVar2,0);
    if (-1 < (int)uVar4) {
      uVar4 = FUN_0059ece0(lVar1,uVar8);
    }
    uVar7 = (ulong)(uVar4 & (int)uVar4 >> 0x1f);
  }
  return uVar7;
}


