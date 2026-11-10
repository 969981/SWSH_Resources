/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbacc0; name: FUN_00fbacc0
 */


void FUN_00fbacc0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  float extraout_s0;
  float fVar11;
  float extraout_var;
  float fVar12;
  undefined1 auVar13 [16];
  long local_50;
  undefined1 auStack_48 [8];
  
  lVar6 = FUN_00df1bc0(*(undefined8 *)PTR_DAT_027194d8,auStack_48);
  lVar3 = *(long *)(param_1 + 0x70);
  for (lVar2 = *(long *)(param_1 + 0x68); lVar2 != lVar3; lVar2 = lVar2 + 0x290) {
    lVar10 = *(long *)(param_1 + 0x98);
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar10 != lVar4) {
      uVar7 = FUN_01225e50(lVar2);
      uVar8 = FUN_0121ae60(uVar7,lVar10);
      if ((uVar8 & 1) == 0) {
        do {
          lVar10 = lVar10 + 0x28;
          if (lVar4 == lVar10) {
            if (*(long *)(param_1 + 0xa0) == lVar4) goto LAB_00fbae40;
            goto LAB_00fbad6c;
          }
          uVar7 = FUN_01225e50(lVar2);
          uVar8 = FUN_0121ae60(uVar7,lVar10);
        } while ((uVar8 & 1) == 0);
      }
    }
    if (*(long *)(param_1 + 0xa0) != lVar10) {
LAB_00fbad6c:
      plVar1 = (long *)(lVar2 + 0x280);
      lVar10 = FUN_00fba2d0(plVar1);
      if (lVar10 == 0) {
        lVar10 = FUN_01225e70(lVar2);
        FUN_01223ca0(lVar10 + 0x10);
        FUN_01223380();
        fVar11 = extraout_s0;
        fVar12 = extraout_var;
      }
      else {
        fVar12 = (float)*(undefined8 *)(lVar10 + 0xb8);
        fVar11 = (float)*(undefined8 *)(lVar10 + 0xb0);
      }
      fVar11 = *(float *)(lVar6 + 0xb0) - fVar11;
      fVar12 = *(float *)(lVar6 + 0xb8) - fVar12;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      auVar13._4_4_ = 0;
      auVar13._0_4_ = fVar11;
      auVar13._8_4_ = fVar12;
      auVar13._12_4_ = 0;
      auVar5._4_4_ = 0;
      auVar5._0_4_ = fVar11;
      auVar5._8_4_ = fVar12;
      auVar5._12_4_ = 0;
      auVar13 = NEON_ext(auVar13,auVar5,8,1);
      if (auVar13._0_4_ + fVar11 + auVar13._4_4_ + 0.0 <= *(float *)(param_1 + 0x5c)) {
        plVar9 = (long *)FUN_00fbc700(param_1,lVar2);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x10))(&local_50);
          if (*plVar1 != 0) {
            (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
            *plVar1 = 0;
          }
          *plVar1 = local_50;
        }
        if ((ulong)(long)*(int *)(param_1 + 0x48) <=
            (ulong)(*(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 3)) break;
      }
    }
LAB_00fbae40:
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x98);
  return;
}


