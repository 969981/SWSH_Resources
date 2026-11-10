/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0157eb80; name: FUN_0157eb80
 */


undefined8 FUN_0157eb80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_b0 [48];
  uint local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_40;
  undefined4 local_38;
  float local_34;
  
  puVar1 = PTR_DAT_027194e8;
  if (*(long *)PTR_DAT_027194e8 != 0) {
    FUN_00dfd500();
    lVar2 = *(long *)puVar1;
    if (lVar2 != 0) {
      dVar6 = *(double *)(param_2 + 0x10);
      dVar9 = *(double *)(param_2 + 0x18);
      dVar7 = *(double *)(param_2 + 0x20);
      fVar5 = (float)*(double *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 8);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      FUN_00dfb4a0(local_b0,lVar2);
      local_34 = 0.0;
      if (0 < lVar4) {
        local_34 = 1.0 / (float)lVar4;
      }
      fVar8 = (float)dVar6 + local_b0._16_4_;
      fVar10 = (float)dVar9 + local_b0._20_4_;
      local_60 = CONCAT44(fVar10,fVar8);
      fVar11 = (float)dVar7 + local_b0._24_4_;
      fVar12 = local_b0._28_4_ + 0.0;
      local_58 = CONCAT44(fVar12,fVar11);
      local_70 = CONCAT44(fVar10 + (((float)dVar9 + local_b0._4_4_) - fVar10) * fVar5,
                          fVar8 + (((float)dVar6 + local_b0._0_4_) - fVar8) * fVar5);
      uStack_68 = CONCAT44(fVar12 + ((local_b0._12_4_ + 0.0) - fVar12) * fVar5,
                           fVar11 + (((float)dVar7 + local_b0._8_4_) - fVar11) * fVar5);
      local_40 = (ulong)local_80;
      local_38 = (undefined4)uVar3;
      FUN_00dfdde0(lVar2,&local_70);
    }
  }
  return 0;
}


