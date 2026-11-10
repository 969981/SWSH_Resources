/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059a530; name: FUN_0059a530
 */


int FUN_0059a530(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_0054f500();
    if (iVar1 < 0) {
      if (*(int *)PTR_DAT_02713970 != 0 && *(int *)PTR_DAT_02713980 != 0) {
        FUN_00517ae0("C:/workspace/YEBIS_draft/src/GPU/GPUInterfaceEffect.cpp(%d) : PPFX ERROR: ",
                     0x99c);
        uVar4 = FUN_00546ea0(iVar1);
        FUN_00517ae0("IGPUEffect::SetupGraphicsPipelineState(): pTinyEffect->SetupRenderStateForSiGfx() failed (0x%x: %s).\n"
                     ,iVar1,uVar4);
      }
    }
    else {
      uVar4 = FUN_0054fb20(*(undefined8 *)(param_1 + 0x78));
      uVar5 = FUN_0054fb40(*(undefined8 *)(param_1 + 0x78));
      uVar6 = FUN_0054fb60(*(undefined8 *)(param_1 + 0x78));
      uVar7 = FUN_0054fb80(*(undefined8 *)(param_1 + 0x78));
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      FUN_0053fd50(uVar8,uVar4);
      FUN_0053fd70(uVar8,uVar5);
      FUN_0053fd90(uVar8,uVar6);
      FUN_0053fdb0(uVar8,uVar7);
      uVar2 = FUN_0054fba0(*(undefined8 *)(param_1 + 0x78));
      uVar3 = FUN_0054fb90(*(undefined8 *)(param_1 + 0x78));
      uVar4 = FUN_0054fbb0(*(undefined8 *)(param_1 + 0x78));
      uVar5 = FUN_0054fbd0(*(undefined8 *)(param_1 + 0x78));
      uVar6 = FUN_0054fbc0(*(undefined8 *)(param_1 + 0x78));
      FUN_0053fdd0(uVar8,uVar2,uVar3,uVar4,uVar5,uVar6);
      iVar1 = 0;
    }
  }
  return iVar1;
}


