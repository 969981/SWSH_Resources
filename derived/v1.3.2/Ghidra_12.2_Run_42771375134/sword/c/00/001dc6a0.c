/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001dc6a0; name: FUN_001dc6a0
 */


void FUN_001dc6a0(long *param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined8 local_c0;
  float local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_28;
  float local_24;
  
  plVar2 = (long *)param_1[0x32];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*param_1 + 0xa8))(&local_b0,param_1);
    (**(code **)(*(long *)param_1[0x31] + 0x48))(&local_d0);
    fVar13 = local_b8 + local_b8;
    fVar10 = (float)local_c0 + (float)local_c0;
    fVar12 = local_c0._4_4_ + local_c0._4_4_;
    fVar16 = fStack_a4 * fStack_a4 + -0.5;
    fVar14 = fVar10 * local_b0 + fVar12 * fStack_ac + fVar13 * local_a8;
    local_80 = local_a0 +
               local_b0 * fVar14 +
               fVar10 * fVar16 + fStack_a4 * (fVar13 * fStack_ac - fVar12 * local_a8);
    local_78 = local_98 +
               fVar13 * fVar16 + fStack_a4 * (fVar12 * local_b0 - fVar10 * fStack_ac) +
               local_a8 * fVar14;
    fStack_7c = fStack_9c +
                fStack_ac * fVar14 +
                fVar12 * fVar16 + fStack_a4 * (fVar10 * local_a8 - fVar13 * local_b0);
    local_90 = (fStack_a4 * local_d0 + local_b0 * local_c4 + fStack_ac * local_c8) -
               local_a8 * local_cc;
    fStack_8c = (local_a8 * local_d0 + fStack_ac * local_c4 + fStack_a4 * local_cc) -
                local_b0 * local_c8;
    local_88 = (local_b0 * local_cc + local_a8 * local_c4 + fStack_a4 * local_c8) -
               fStack_ac * local_d0;
    local_84 = ((fStack_a4 * local_c4 - local_b0 * local_d0) - fStack_ac * local_cc) -
               local_a8 * local_c8;
    (**(code **)(*plVar2 + 0xa8))(&local_d0,plVar2);
    (**(code **)(*(long *)param_1[0x31] + 0x38))(&local_f0);
    local_d8 = local_d8 + local_d8;
    local_e0 = local_e0 + local_e0;
    fStack_dc = fStack_dc + fStack_dc;
    fVar12 = local_c4 * local_c4 + -0.5;
    fVar10 = local_e0 * local_d0 + fStack_dc * local_cc + local_d8 * local_c8;
    local_a0 = (float)local_c0 +
               local_d0 * fVar10 +
               local_e0 * fVar12 + local_c4 * (local_d8 * local_cc - fStack_dc * local_c8);
    fStack_9c = local_c0._4_4_ +
                local_cc * fVar10 +
                fStack_dc * fVar12 + local_c4 * (local_e0 * local_c8 - local_d8 * local_d0);
    local_b0 = (local_c4 * local_f0 + local_d0 * fStack_e4 + local_cc * local_e8) -
               local_c8 * local_ec;
    local_98 = local_b8 +
               local_d8 * fVar12 + local_c4 * (fStack_dc * local_d0 - local_e0 * local_cc) +
               local_c8 * fVar10;
    fStack_ac = (local_c8 * local_f0 + local_cc * fStack_e4 + local_c4 * local_ec) -
                local_d0 * local_e8;
    local_a8 = (local_d0 * local_ec + local_c8 * fStack_e4 + local_c4 * local_e8) -
               local_cc * local_f0;
    fStack_a4 = ((local_c4 * fStack_e4 - local_d0 * local_f0) - local_cc * local_ec) -
                local_c8 * local_e8;
    (**(code **)(*param_2 + 0x10))(param_2,&local_90,&local_b0);
    local_c8 = local_a8;
    local_c4 = fStack_a4;
    fVar10 = local_84 * fStack_a4;
    local_c0 = CONCAT44(fStack_9c,local_a0);
    local_b8 = local_98;
    local_d0 = local_b0;
    local_cc = fStack_ac;
    if (local_90 * local_b0 + fStack_8c * fStack_ac + local_88 * local_a8 + fVar10 < 0.0) {
      fStack_a4 = -fStack_a4;
      fVar10 = local_84 * fStack_a4;
      local_b0 = -local_b0;
      fStack_ac = -fStack_ac;
      local_a8 = -local_a8;
    }
    fVar12 = ((local_84 * local_b0 - fStack_a4 * local_90) - local_a8 * fStack_8c) +
             fStack_ac * local_88;
    fVar14 = ((local_84 * local_a8 - fStack_a4 * local_88) - fStack_ac * local_90) +
             local_b0 * fStack_8c;
    fVar13 = ((local_84 * fStack_ac - fStack_a4 * fStack_8c) - local_b0 * local_88) +
             local_a8 * local_90;
    fVar16 = fVar10 + local_b0 * local_90 + fStack_ac * fStack_8c + local_a8 * local_88;
    fVar10 = 1.0;
    if (fVar12 == 0.0) {
      fVar3 = 0.0;
      fVar7 = 2.0;
      fVar9 = 0.0;
    }
    else {
      fVar10 = sqrtf(fVar12 * fVar12 + 0.0 + fVar16 * fVar16);
      fVar10 = 1.0 / fVar10;
      fVar3 = fVar12 * fVar10;
      fVar9 = fVar10 * 0.0;
      fVar10 = fVar16 * fVar10;
      fVar7 = fVar10 + 1.0;
    }
    fVar15 = fVar16 * -fVar9;
    fVar11 = fVar12 * -fVar9;
    (**(code **)(*(long *)param_1[0x31] + 0x118))((long *)param_1[0x31],&local_f0,&local_24);
    (**(code **)(*(long *)param_1[0x31] + 200))((long *)param_1[0x31],&local_28,&local_f4);
    fVar4 = (float)(**(code **)(*(long *)param_1[0x31] + 0xf8))();
    fVar5 = (float)(**(code **)(*(long *)param_1[0x31] + 0x138))();
    fVar6 = local_24;
    pcVar1 = *(code **)(*param_2 + 0x20);
    fVar7 = fabsf(fVar3 / fVar7);
    fVar5 = tanf(local_24 - fVar5);
    (*pcVar1)(local_f0,fVar6,param_2,&local_d0,fVar5 < fVar7);
    fVar8 = fVar16 * fVar10 + fVar12 * fVar3 + fVar13 * fVar9 + fVar14 * fVar9 + 1.0;
    fVar12 = tanf(local_28 * 0.25);
    fVar5 = tanf(local_f4 * 0.25);
    fVar16 = tanf(fVar4 * 0.25);
    pcVar1 = *(code **)(*param_2 + 0x28);
    fVar7 = tanf(local_28 * 0.25);
    fVar9 = tanf(local_f4 * 0.25);
    fVar6 = fabsf((fVar11 + fVar14 * fVar10 + fVar15 + fVar13 * fVar3) / fVar8);
    fVar10 = fabsf(-((((fVar13 * fVar10 + fVar15) - fVar14 * fVar3) - fVar11) / fVar8));
    fVar12 = ((fVar16 + fVar6) / (1.0 - fVar16 * fVar6)) / fVar12;
    fVar5 = ((fVar16 + fVar10) / (1.0 - fVar16 * fVar10)) / fVar5;
    (*pcVar1)(fVar7,fVar9,param_2,&local_d0,1.0 < fVar12 * fVar12 + fVar5 * fVar5);
  }
  return;
}


