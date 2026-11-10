/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b6ff0; name: FUN_002b6ff0
 */


undefined8
FUN_002b6ff0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,undefined8 *param_9,
            byte param_10)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 *puVar14;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined1 local_a4 [4];
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [4];
  undefined8 local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = FUN_002bad80();
  if ((uVar3 & 1) == 0) {
    uVar9 = 0;
  }
  else {
    *param_7 = local_68;
    if (((float)local_68 == 0.0) && ((param_10 & 1) != 0)) {
      local_b0 = *(long *)(param_1 + 8);
      local_c0 = *(long *)(param_2 + 8);
      fVar5 = *(float *)(local_b0 + 0x10) + *(float *)(local_c0 + 0x10);
      puStack_b8 = PTR_DAT_02711e08 + 0x10;
      local_a4[0] = 0;
      local_c8 = PTR_DAT_02711ea0 + 0x10;
      local_70 = CONCAT44(fVar5 * 100.0,fVar5 * 100.0);
                    /* try { // try from 002b70a4 to 002b716f has its CatchHandler @ 002b7224 */
      puVar14 = auStack_a0;
      iVar2 = FUN_002bbcf0(&puStack_b8,&local_c8,param_3,&local_70,&local_80,auStack_90,&local_60,
                           &local_98,auStack_9c,puVar14,local_a4,0);
      if ((iVar2 == 5) &&
         (iVar2 = FUN_00258810(param_1,param_2,auStack_9c,auStack_a0,local_a4[0],&local_80,
                               auStack_90,&local_60,&local_98,(ulong)puVar14 & 0xffffffffffffff00),
         1 < iVar2 - 5U)) {
        fVar6 = -(float)*param_6;
        fVar7 = -(float)((ulong)*param_6 >> 0x20);
        fVar8 = -(float)param_6[1];
        local_98 = 0;
        fVar10 = fVar6 * fVar6;
        fVar11 = fVar7 * fVar7;
        auVar13._4_4_ = fVar11;
        auVar13._0_4_ = fVar10;
        auVar13._8_4_ = fVar8 * fVar8;
        auVar13._12_4_ = 0;
        auVar1._4_4_ = fVar11;
        auVar1._0_4_ = fVar10;
        auVar1._8_4_ = fVar8 * fVar8;
        auVar1._12_4_ = 0;
        auVar13 = NEON_ext(auVar13,auVar1,8,1);
        fVar4 = auVar13._0_4_ + auVar13._4_4_;
        fVar5 = fVar10 + fVar11 + fVar4;
        fVar4 = fVar10 + fVar11 + fVar4;
        uVar9 = NEON_frsqrte(CONCAT44(fVar4,fVar5),4);
        fVar10 = (float)uVar9;
        fVar11 = (float)((ulong)uVar9 >> 0x20);
        uVar9 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar10 * fVar10),CONCAT44(fVar4,fVar5),4);
        fVar10 = fVar10 * (float)uVar9;
        fVar11 = fVar11 * (float)((ulong)uVar9 >> 0x20);
        uVar9 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar10 * fVar10),CONCAT44(fVar4,fVar5),4);
        fVar10 = fVar10 * (float)uVar9;
        fVar11 = fVar11 * (float)((ulong)uVar9 >> 0x20);
        uVar9 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar10 * fVar10),CONCAT44(fVar4,fVar5),4);
        fVar10 = fVar10 * (float)uVar9;
        fVar11 = fVar11 * (float)((ulong)uVar9 >> 0x20);
        uVar9 = NEON_frsqrts(CONCAT44(fVar11 * fVar11,fVar10 * fVar10),CONCAT44(fVar4,fVar5),4);
        uVar3 = CONCAT44(fVar4 * fVar11 * (float)((ulong)uVar9 >> 0x20),
                         fVar5 * fVar10 * (float)uVar9);
        uVar3 = uVar3 ^ (uVar3 ^ CONCAT44(fVar4,fVar5)) &
                        CONCAT44(-(uint)(fVar5 == 0.0),-(uint)(fVar5 == 0.0));
        uVar9 = NEON_frecpe(uVar3,4);
        uVar12 = NEON_frecps(uVar3,uVar9,4);
        fVar5 = (float)uVar9 * (float)uVar12;
        fVar4 = (float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
        uVar9 = NEON_frecps(uVar3,CONCAT44(fVar4,fVar5),4);
        fVar5 = fVar5 * (float)uVar9;
        fVar4 = fVar4 * (float)((ulong)uVar9 >> 0x20);
        uVar9 = NEON_frecps(uVar3,CONCAT44(fVar4,fVar5),4);
        fVar5 = fVar5 * (float)uVar9;
        fVar4 = fVar4 * (float)((ulong)uVar9 >> 0x20);
        uVar9 = NEON_frecps(uVar3,CONCAT44(fVar4,fVar5),4);
        fVar5 = fVar5 * (float)uVar9;
        uVar9 = NEON_frecps(uVar3,CONCAT44(fVar4 * (float)((ulong)uVar9 >> 0x20),fVar5),4);
        fVar5 = fVar5 * (float)uVar9;
        local_80 = 0;
        uStack_78 = 0;
        uStack_58 = (ulong)(uint)(fVar8 * fVar5);
        local_60 = CONCAT44(fVar7 * fVar5,fVar6 * fVar5);
      }
      uVar9 = NEON_fmin(0,local_98,4);
      *param_7 = uVar9;
    }
    else {
      local_80 = local_50;
      uStack_78 = uStack_48;
    }
    uVar9 = 1;
    param_9[1] = uStack_78;
    *param_9 = local_80;
    param_8[1] = uStack_58;
    *param_8 = local_60;
  }
  return uVar9;
}


