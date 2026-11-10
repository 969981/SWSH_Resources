/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b4170; name: FUN_003b4170
 */


void FUN_003b4170(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uVar32;
  uint uVar33;
  float fVar34;
  ulong uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  byte local_198 [8];
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_160;
  float fStack_15c;
  float local_158;
  undefined8 local_150;
  float local_148;
  float local_144;
  float local_140;
  float fStack_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  long local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  long local_c8;
  undefined8 local_c0;
  byte local_b8 [8];
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  lVar20 = *(long *)(param_1 + 0x50);
  FUN_003b17c0(local_b8,lVar20);
  if ((local_b8[0] >> 3 & 1) != 0) {
    uVar35 = FUN_003b1af0(lVar20);
    plVar31 = *(long **)(param_1 + 0xb0);
    local_c8 = 0;
    local_c0 = 0;
    fVar41 = (float)uVar35;
    if (*(int *)(param_1 + 0x90) != 0) {
      uVar8 = 0;
      do {
        lVar22 = *(long *)(*plVar31 + 0x40);
                    /* try { // try from 003b4218 to 003b421f has its CatchHandler @ 003b687c */
        FUN_003fc170(*plVar31,&local_130);
                    /* try { // try from 003b4220 to 003b422b has its CatchHandler @ 003b6840 */
        FUN_003afa90(&local_f0,lVar20);
        fVar44 = (local_120 - local_e0) + (local_120 - local_e0);
        fVar43 = (local_11c - local_dc) + (local_11c - local_dc);
        fVar36 = (local_118 - local_d8) + (local_118 - local_d8);
        fVar42 = local_e4 * local_e4 + -0.5;
        fVar37 = fVar44 * local_f0 + fVar43 * local_ec + fVar36 * local_e8;
        fVar46 = local_e4 * (fVar36 * local_ec - fVar43 * local_e8);
        fVar48 = local_e4 * (fVar44 * local_e8 - fVar36 * local_f0);
        fVar39 = local_e4 * (fVar43 * local_f0 - fVar44 * local_ec);
        local_e4 = fVar41 + *(float *)(lVar22 + 0x4c);
        local_f0 = local_f0 * fVar37 + (fVar44 * fVar42 - fVar46);
        local_ec = local_ec * fVar37 + (fVar43 * fVar42 - fVar48);
        local_e8 = (fVar36 * fVar42 - fVar39) + local_e8 * fVar37;
        if ((uint)local_c0 < (local_c0._4_4_ & 0x7fffffff)) {
          pfVar14 = (float *)(local_c8 + (local_c0 & 0xffffffff) * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 + 1);
        }
        else {
                    /* try { // try from 003b4324 to 003b432f has its CatchHandler @ 003b6820 */
          FUN_003b9980(&local_c8,&local_f0);
        }
        uVar8 = uVar8 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x90));
    }
    uVar24 = uVar35;
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar8 = 0;
      do {
        lVar22 = *(long *)(*plVar31 + 0x40);
                    /* try { // try from 003b4360 to 003b4367 has its CatchHandler @ 003b6830 */
        FUN_003fc170(*plVar31,&local_130);
                    /* try { // try from 003b4368 to 003b4373 has its CatchHandler @ 003b6810 */
        FUN_003afa90(&local_f0,lVar20);
        fVar37 = (local_118 - local_d8) + (local_118 - local_d8);
        fVar43 = (local_120 - local_e0) + (local_120 - local_e0);
        fVar36 = (local_11c - local_dc) + (local_11c - local_dc);
        fVar42 = ((local_e4 * local_128 - local_124 * local_e8) - local_12c * local_f0) +
                 local_130 * local_ec;
        fVar47 = ((local_e4 * local_130 - local_124 * local_f0) - local_128 * local_ec) +
                 local_12c * local_e8;
        fVar50 = ((local_e4 * local_12c - local_124 * local_ec) - local_130 * local_e8) +
                 local_128 * local_f0;
        fVar45 = local_e4 * local_124 + local_130 * local_f0 + local_12c * local_ec +
                 local_128 * local_e8;
        fVar49 = local_e4 * local_e4 + -0.5;
        fVar39 = (fVar43 * -local_f0 - fVar36 * local_ec) - fVar37 * local_e8;
        fVar54 = *(float *)(lVar22 + 0x50);
        fVar54 = fVar54 + fVar54;
        fVar44 = (float)uVar24 + *(float *)(lVar22 + 0x4c);
        fVar46 = (fVar49 * fVar43 + local_e4 * (fVar36 * local_e8 - fVar37 * local_ec)) -
                 fVar39 * local_f0;
        fVar48 = (fVar49 * fVar36 + local_e4 * (fVar37 * local_f0 - fVar43 * local_e8)) -
                 fVar39 * local_ec;
        fVar39 = (fVar49 * fVar37 + local_e4 * (fVar43 * local_ec - fVar36 * local_f0)) -
                 fVar39 * local_e8;
        fVar36 = fVar45 * fVar45 + -0.5;
        fVar43 = fVar42 * 0.0 + fVar47 * fVar54 + fVar50 * 0.0;
        fVar37 = fVar36 * 0.0;
        fVar36 = fVar47 * fVar43 + fVar54 * fVar36 + fVar45 * (fVar50 * 0.0 - fVar42 * 0.0);
        fVar49 = fVar37 + fVar45 * (fVar54 * fVar42 - fVar47 * 0.0) + fVar50 * fVar43;
        fVar43 = fVar37 + fVar45 * (fVar47 * 0.0 - fVar54 * fVar50) + fVar42 * fVar43;
        uVar7 = local_c0._4_4_ & 0x7fffffff;
        local_f0 = fVar46 - fVar36;
        local_ec = fVar48 - fVar49;
        local_e8 = fVar39 - fVar43;
        if ((uint)local_c0 < uVar7) {
          pfVar14 = (float *)(local_c8 + (local_c0 & 0xffffffff) * 0x10);
          uVar9 = (uint)local_c0 + 1;
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = fVar44;
          local_c0 = CONCAT44(local_c0._4_4_,uVar9);
        }
        else {
                    /* try { // try from 003b4564 to 003b456f has its CatchHandler @ 003b67b8 */
          local_e4 = fVar44;
          FUN_003b9980(&local_c8,&local_f0);
          uVar7 = local_c0._4_4_ & 0x7fffffff;
          uVar9 = (uint)local_c0;
        }
        local_f0 = fVar46 + fVar36;
        local_ec = fVar48 + fVar49;
        local_e8 = fVar39 + fVar43;
        if (uVar9 < uVar7) {
          pfVar14 = (float *)(local_c8 + (ulong)uVar9 * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = fVar44;
          local_c0 = CONCAT44(local_c0._4_4_,uVar9 + 1);
          local_e4 = fVar44;
        }
        else {
                    /* try { // try from 003b45b4 to 003b45bf has its CatchHandler @ 003b67a8 */
          local_e4 = fVar44;
          FUN_003b9980(&local_c8,&local_f0);
        }
        uVar24 = uVar35 & 0xffffffff;
        uVar8 = uVar8 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x94));
    }
                    /* try { // try from 003b45f8 to 003b45fb has its CatchHandler @ 003b64f8 */
    (**(code **)(**(long **)(lVar20 + 0x20) + 0x148))
              (*(long **)(lVar20 + 0x20),local_c8,local_c8 + (local_c0 & 0xffffffff) * 0x10,
               *(int *)(lVar20 + 0x5c),(uint)local_c0 + *(int *)(lVar20 + 0x5c));
    local_100 = 0;
    local_f8 = 0;
    if (*(int *)(param_1 + 0x98) != 0) {
      uVar8 = 0;
      do {
                    /* try { // try from 003b4618 to 003b461f has its CatchHandler @ 003b67d8 */
        FUN_003fc170(*plVar31,&local_130);
                    /* try { // try from 003b4620 to 003b462b has its CatchHandler @ 003b67c8 */
        FUN_003afa90(&local_f0,lVar20);
        fVar39 = (local_120 - local_e0) + (local_120 - local_e0);
        fVar42 = (local_11c - local_dc) + (local_11c - local_dc);
        fVar44 = (local_118 - local_d8) + (local_118 - local_d8);
        fVar58 = fVar44 * local_ec;
        fVar60 = fVar42 * local_e8;
        fVar49 = ((local_e4 * local_130 - local_124 * local_f0) - local_128 * local_ec) +
                 local_12c * local_e8;
        fVar47 = ((local_e4 * local_12c - local_124 * local_ec) - local_130 * local_e8) +
                 local_128 * local_f0;
        fVar48 = local_e4 * local_124 + local_130 * local_f0 + local_12c * local_ec +
                 local_128 * local_e8;
        fVar45 = fVar39 * local_e8;
        fVar61 = fVar39 * local_ec;
        fVar46 = ((local_e4 * local_128 - local_124 * local_e8) - local_12c * local_f0) +
                 local_130 * local_ec;
        fVar50 = fVar44 * local_f0;
        fVar55 = fVar42 * local_f0;
        fVar56 = local_e4 * local_e4 + -0.5;
        fVar37 = (fVar39 * -local_f0 - fVar42 * local_ec) - fVar44 * local_e8;
        fVar57 = fVar37 * local_f0;
        fVar43 = fVar37 * local_ec;
        fVar37 = fVar37 * local_e8;
        fVar54 = fVar48 * fVar48 + -0.5;
        fVar36 = fVar46 * 0.0 + fVar49 + fVar49 + fVar47 * 0.0;
        local_f0 = fVar49 * fVar36 + fVar54 + fVar54 + fVar48 * (fVar47 * 0.0 - fVar46 * 0.0);
        local_ec = fVar54 * 0.0 + fVar48 * ((fVar46 + fVar46) - fVar49 * 0.0) + fVar47 * fVar36;
        local_e8 = fVar54 * 0.0 + fVar48 * (fVar49 * 0.0 - (fVar47 + fVar47)) + fVar46 * fVar36;
        local_e4 = (0.0 - (((fVar56 * fVar44 + local_e4 * (fVar61 - fVar55)) - fVar37) * local_e8 +
                          ((fVar56 * fVar39 + local_e4 * (fVar60 - fVar58)) - fVar57) * local_f0 +
                          ((fVar56 * fVar42 + local_e4 * (fVar50 - fVar45)) - fVar43) * local_ec)) -
                   (float)uVar24;
        if ((uint)local_f8 < (local_f8._4_4_ & 0x7fffffff)) {
          pfVar14 = (float *)(local_100 + (local_f8 & 0xffffffff) * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 + 1);
        }
        else {
                    /* try { // try from 003b4818 to 003b4823 has its CatchHandler @ 003b6798 */
          FUN_003b94d0(&local_100,&local_f0);
        }
        uVar8 = uVar8 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x98));
    }
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar8 = 0;
      do {
        lVar22 = *(long *)(*plVar31 + 0x40);
                    /* try { // try from 003b484c to 003b4853 has its CatchHandler @ 003b6778 */
        FUN_003fc170(*plVar31,&local_130);
                    /* try { // try from 003b4854 to 003b485f has its CatchHandler @ 003b6768 */
        FUN_003afa90(&local_f0,lVar20);
        fVar44 = (local_120 - local_e0) + (local_120 - local_e0);
        fVar46 = (local_11c - local_dc) + (local_11c - local_dc);
        fVar50 = local_e4 * local_e4 + -0.5;
        fVar43 = (local_118 - local_d8) + (local_118 - local_d8);
        uVar7 = local_f8._4_4_ & 0x7fffffff;
        fVar47 = local_e4 * local_124 + local_130 * local_f0 + local_12c * local_ec +
                 local_128 * local_e8;
        fVar60 = ((local_e4 * local_130 - local_124 * local_f0) - local_128 * local_ec) +
                 local_12c * local_e8;
        fVar58 = ((local_e4 * local_12c - local_124 * local_ec) - local_130 * local_e8) +
                 local_128 * local_f0;
        fVar57 = ((local_e4 * local_128 - local_124 * local_e8) - local_12c * local_f0) +
                 local_130 * local_ec;
        fVar61 = fVar60 + fVar60;
        fVar42 = (fVar44 * -local_f0 - fVar46 * local_ec) - fVar43 * local_e8;
        fVar49 = fVar58 * 0.0;
        fVar64 = fVar57 * 0.0;
        fVar37 = fVar57 + fVar57;
        fVar48 = fVar60 * 0.0;
        fVar56 = fVar58 + fVar58;
        fVar36 = fVar47 * fVar47 + -0.5;
        fVar45 = fVar36 * 0.0;
        fVar55 = (fVar50 * fVar44 + local_e4 * (fVar46 * local_e8 - fVar43 * local_ec)) -
                 fVar42 * local_f0;
        fVar54 = (fVar50 * fVar46 + local_e4 * (fVar43 * local_f0 - fVar44 * local_e8)) -
                 fVar42 * local_ec;
        fVar39 = fVar36 + fVar36;
        fVar42 = (fVar50 * fVar43 + local_e4 * (fVar44 * local_ec - fVar46 * local_f0)) -
                 fVar42 * local_e8;
        fVar43 = fVar64 + fVar61 + fVar49;
        fVar46 = fVar47 * (fVar49 - fVar64);
        local_f0 = fVar60 * fVar43 + fVar39 + fVar46;
        local_ec = fVar45 + fVar47 * (fVar37 - fVar48) + fVar58 * fVar43;
        local_e8 = fVar45 + fVar47 * (fVar48 - fVar56) + fVar57 * fVar43;
        fVar43 = *(float *)(lVar22 + 0x54);
        fVar44 = *(float *)(lVar22 + 0x50);
        fVar50 = -((float)uVar24 + *(float *)(lVar22 + 0x4c));
        local_e4 = fVar50 - (fVar42 * local_e8 + fVar55 * local_f0 + fVar54 * local_ec);
        if ((uint)local_f8 < uVar7) {
          pfVar14 = (float *)(local_100 + (local_f8 & 0xffffffff) * 0x10);
          uVar9 = (uint)local_f8 + 1;
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,uVar9);
        }
        else {
                    /* try { // try from 003b4a8c to 003b4aa3 has its CatchHandler @ 003b6748 */
          FUN_003b94d0(&local_100,&local_f0);
          uVar7 = local_f8._4_4_ & 0x7fffffff;
          uVar9 = (uint)local_f8;
        }
        fVar34 = fVar60 * -2.0;
        fVar38 = fVar64 + fVar34 + fVar49;
        fVar36 = fVar36 * -2.0;
        local_f0 = fVar60 * fVar38 + fVar36 + fVar46;
        fVar46 = fVar57 * -2.0;
        fVar40 = fVar58 * -2.0;
        local_ec = fVar45 + fVar47 * (fVar46 - fVar48) + fVar58 * fVar38;
        local_e8 = fVar45 + fVar47 * (fVar48 - fVar40) + fVar57 * fVar38;
        local_e4 = fVar50 - (fVar42 * local_e8 + fVar55 * local_f0 + fVar54 * local_ec);
        if (uVar9 < uVar7) {
          pfVar14 = (float *)(local_100 + (ulong)uVar9 * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,uVar9 + 1);
          uVar9 = uVar9 + 1;
        }
        else {
                    /* try { // try from 003b4b7c to 003b4b87 has its CatchHandler @ 003b6738 */
          FUN_003b94d0(&local_100,&local_f0);
          uVar7 = local_f8._4_4_ & 0x7fffffff;
          uVar9 = (uint)local_f8;
        }
        uVar24 = uVar35 & 0xffffffff;
        fVar50 = -(fVar41 + fVar44);
        fVar44 = fVar64 + fVar48 + fVar56;
        local_f0 = fVar60 * fVar44 + fVar45 + fVar47 * (fVar49 - fVar37);
        fVar38 = fVar47 * (fVar64 - fVar48);
        local_ec = fVar39 + fVar38 + fVar58 * fVar44;
        local_e8 = fVar45 + fVar47 * (fVar61 - fVar49) + fVar57 * fVar44;
        local_e4 = fVar50 - (fVar42 * local_e8 + fVar55 * local_f0 + fVar54 * local_ec);
        if (uVar9 < uVar7) {
          pfVar14 = (float *)(local_100 + (ulong)uVar9 * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,uVar9 + 1);
          uVar9 = uVar9 + 1;
        }
        else {
                    /* try { // try from 003b4c44 to 003b4c5b has its CatchHandler @ 003b6728 */
          FUN_003b94d0(&local_100,&local_f0);
          uVar7 = local_f8._4_4_ & 0x7fffffff;
          uVar9 = (uint)local_f8;
        }
        fVar44 = fVar64 + fVar48 + fVar40;
        local_f0 = fVar60 * fVar44 + fVar45 + fVar47 * (fVar49 - fVar46);
        local_ec = fVar36 + fVar38 + fVar58 * fVar44;
        local_e8 = fVar45 + fVar47 * (fVar34 - fVar49) + fVar57 * fVar44;
        local_e4 = fVar50 - (fVar42 * local_e8 + fVar55 * local_f0 + fVar54 * local_ec);
        if (uVar9 < uVar7) {
          pfVar14 = (float *)(local_100 + (ulong)uVar9 * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,uVar9 + 1);
          uVar9 = uVar9 + 1;
        }
        else {
                    /* try { // try from 003b4d14 to 003b4d1f has its CatchHandler @ 003b6718 */
          FUN_003b94d0(&local_100,&local_f0);
          uVar7 = local_f8._4_4_ & 0x7fffffff;
          uVar9 = (uint)local_f8;
        }
        fVar43 = -(fVar41 + fVar43);
        fVar37 = fVar37 + fVar48 + fVar49;
        local_f0 = fVar60 * fVar37 + fVar45 + fVar47 * (fVar56 - fVar64);
        fVar44 = fVar47 * (fVar48 - fVar49);
        local_ec = fVar45 + fVar47 * (fVar64 - fVar61) + fVar58 * fVar37;
        local_e8 = fVar39 + fVar44 + fVar57 * fVar37;
        local_e4 = fVar43 - (fVar42 * local_e8 + fVar55 * local_f0 + fVar54 * local_ec);
        if (uVar9 < uVar7) {
          pfVar14 = (float *)(local_100 + (ulong)uVar9 * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,uVar9 + 1);
          uVar9 = uVar9 + 1;
        }
        else {
                    /* try { // try from 003b4de0 to 003b4def has its CatchHandler @ 003b6708 */
          FUN_003b94d0(&local_100,&local_f0);
          uVar7 = local_f8._4_4_ & 0x7fffffff;
          uVar9 = (uint)local_f8;
        }
        fVar46 = fVar46 + fVar48 + fVar49;
        local_f0 = fVar60 * fVar46 + fVar45 + fVar47 * (fVar40 - fVar64);
        local_ec = fVar45 + fVar47 * (fVar64 - fVar34) + fVar58 * fVar46;
        local_e8 = fVar36 + fVar44 + fVar57 * fVar46;
        local_e4 = fVar43 - (fVar42 * local_e8 + fVar55 * local_f0 + fVar54 * local_ec);
        if (uVar9 < uVar7) {
          pfVar14 = (float *)(local_100 + (ulong)uVar9 * 0x10);
          *pfVar14 = local_f0;
          pfVar14[1] = local_ec;
          pfVar14[2] = local_e8;
          pfVar14[3] = local_e4;
          local_f8 = CONCAT44(local_f8._4_4_,uVar9 + 1);
        }
        else {
                    /* try { // try from 003b4ea4 to 003b4eaf has its CatchHandler @ 003b66f8 */
          FUN_003b94d0(&local_100,&local_f0);
        }
        uVar8 = uVar8 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0x9c));
    }
    if (*(int *)(param_1 + 0xa0) != 0) {
      uVar8 = 0;
      do {
        lVar22 = *(long *)(*plVar31 + 0x40);
                    /* try { // try from 003b4edc to 003b4ee3 has its CatchHandler @ 003b65e8 */
        FUN_003fc170(*plVar31,&local_f0);
                    /* try { // try from 003b4ee4 to 003b503f has its CatchHandler @ 003b66e8 */
        FUN_003afa90(&local_170,lVar20);
        fVar41 = (local_e0 - local_160) + (local_e0 - local_160);
        fVar43 = (local_dc - fStack_15c) + (local_dc - fStack_15c);
        fVar36 = (local_d8 - local_158) + (local_d8 - local_158);
        fVar39 = local_168._4_4_ * local_168._4_4_ + -0.5;
        fVar37 = (fVar41 * -(float)local_170 - fVar43 * local_170._4_4_) - fVar36 * (float)local_168
        ;
        local_150 = CONCAT44(((local_168._4_4_ * local_ec - local_e4 * local_170._4_4_) -
                             local_f0 * (float)local_168) + local_e8 * (float)local_170,
                             ((local_168._4_4_ * local_f0 - local_e4 * (float)local_170) -
                             local_e8 * local_170._4_4_) + local_ec * (float)local_168);
        _local_148 = CONCAT44(local_168._4_4_ * local_e4 + local_f0 * (float)local_170 +
                              local_ec * local_170._4_4_ + local_e8 * (float)local_168,
                              ((local_168._4_4_ * local_e8 - local_e4 * (float)local_168) -
                              local_ec * (float)local_170) + local_f0 * local_170._4_4_);
        local_138 = (fVar39 * fVar36 +
                    local_168._4_4_ * (fVar41 * local_170._4_4_ - fVar43 * (float)local_170)) -
                    fVar37 * (float)local_168;
        local_140 = (fVar39 * fVar41 +
                    local_168._4_4_ * (fVar43 * (float)local_168 - fVar36 * local_170._4_4_)) -
                    fVar37 * (float)local_170;
        fStack_13c = (fVar39 * fVar43 +
                     local_168._4_4_ * (fVar36 * (float)local_170 - fVar41 * (float)local_168)) -
                     fVar37 * local_170._4_4_;
        FUN_001ae520(&local_130,&local_150,lVar22 + 0x4c);
                    /* try { // try from 003b504c to 003b5053 has its CatchHandler @ 003b65d8 */
        uVar7 = (**(code **)(**(long **)(lVar22 + 0x68) + 0x48))();
        if (uVar7 != 0) {
          uVar9 = 0;
          do {
            while( true ) {
                    /* try { // try from 003b5068 to 003b5073 has its CatchHandler @ 003b6788 */
              (**(code **)(**(long **)(lVar22 + 0x68) + 0x50))
                        (*(long **)(lVar22 + 0x68),uVar9,&local_150);
              fVar43 = (float)local_150 * local_130 + local_150._4_4_ * local_124 +
                       local_148 * local_118;
              fVar41 = (float)local_150 * local_12c + local_150._4_4_ * local_120 +
                       local_148 * local_114;
              fVar36 = (float)local_150 * local_128 + local_150._4_4_ * local_11c +
                       local_148 * local_110;
              local_170 = CONCAT44(fVar41,fVar43);
              fVar37 = (local_144 - (fVar43 * local_10c + fVar41 * local_108 + fVar36 * local_104))
                       - (float)uVar24;
              local_168 = CONCAT44(fVar37,fVar36);
              if ((local_f8._4_4_ & 0x7fffffff) <= (uint)local_f8) break;
              pfVar14 = (float *)(local_100 + (local_f8 & 0xffffffff) * 0x10);
              *pfVar14 = fVar43;
              pfVar14[1] = fVar41;
              pfVar14[2] = fVar36;
              pfVar14[3] = fVar37;
              local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 + 1);
              uVar9 = uVar9 + 1;
              if (uVar7 <= uVar9) goto LAB_003b515c;
            }
                    /* try { // try from 003b5144 to 003b514f has its CatchHandler @ 003b6758 */
            FUN_003b94d0(&local_100,&local_170);
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
LAB_003b515c:
        uVar8 = uVar8 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0xa0));
    }
                    /* try { // try from 003b5190 to 003b5193 has its CatchHandler @ 003b64e8 */
    (**(code **)(**(long **)(lVar20 + 0x20) + 0x168))
              (*(long **)(lVar20 + 0x20),local_100,local_100 + (local_f8 & 0xffffffff) * 0x10,
               *(int *)(lVar20 + 100),(uint)local_f8 + *(int *)(lVar20 + 100));
    local_180 = 0;
    local_178 = 0;
    local_190 = 0;
    local_188 = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      uVar29 = 0;
      do {
        lVar22 = *plVar31;
        lVar26 = *(long *)(lVar22 + 0x40);
                    /* try { // try from 003b51b8 to 003b51c3 has its CatchHandler @ 003b6588 */
        FUN_003afa90(&local_f0,lVar20);
                    /* try { // try from 003b51c4 to 003b51cf has its CatchHandler @ 003b6578 */
        FUN_003fc170(lVar22,&local_150);
        fVar41 = (local_140 - local_e0) + (local_140 - local_e0);
        fVar43 = (fStack_13c - local_dc) + (fStack_13c - local_dc);
        fVar36 = (local_138 - local_d8) + (local_138 - local_d8);
        fVar39 = local_e4 * local_e4 + -0.5;
        fVar37 = (fVar41 * -local_f0 - fVar43 * local_ec) - fVar36 * local_e8;
        local_170 = CONCAT44(((local_e4 * local_150._4_4_ - local_144 * local_ec) -
                             (float)local_150 * local_e8) + local_148 * local_f0,
                             ((local_e4 * (float)local_150 - local_144 * local_f0) -
                             local_148 * local_ec) + local_150._4_4_ * local_e8);
        local_168 = CONCAT44(local_e4 * local_144 + (float)local_150 * local_f0 +
                             local_150._4_4_ * local_ec + local_148 * local_e8,
                             ((local_e4 * local_148 - local_144 * local_e8) -
                             local_150._4_4_ * local_f0) + (float)local_150 * local_ec);
        local_158 = (fVar39 * fVar36 + local_e4 * (fVar41 * local_ec - fVar43 * local_f0)) -
                    fVar37 * local_e8;
        local_160 = (fVar39 * fVar41 + local_e4 * (fVar43 * local_e8 - fVar36 * local_ec)) -
                    fVar37 * local_f0;
        fStack_15c = (fVar39 * fVar43 + local_e4 * (fVar36 * local_f0 - fVar41 * local_e8)) -
                     fVar37 * local_ec;
                    /* try { // try from 003b5314 to 003b531f has its CatchHandler @ 003b6568 */
        FUN_001ae520(&local_130,&local_170,lVar26 + 0x4c);
        uVar24 = local_178;
        uVar30 = local_178 & 0xffffffff;
                    /* try { // try from 003b5334 to 003b5397 has its CatchHandler @ 003b6660 */
        (**(code **)(**(long **)(lVar26 + 0x70) + 0x60))(local_198);
        plVar23 = *(long **)(lVar26 + 0x70);
        fVar41 = *(float *)(lVar26 + 0x4c) * *(float *)(lVar26 + 0x50) * *(float *)(lVar26 + 0x54);
        if ((local_198[0] >> 1 & 1) == 0) {
          uVar8 = (**(code **)(*plVar23 + 0x50))(plVar23);
          lVar22 = (**(code **)(*plVar23 + 0x58))(plVar23);
          lVar26 = (**(code **)(*plVar23 + 0x38))(plVar23);
          if (uVar8 != 0) {
            uVar32 = 0;
            iVar11 = 2;
            if (fVar41 >= 0.0) {
              iVar11 = 1;
            }
            uVar27 = (ulong)uVar8;
            do {
              while( true ) {
                uVar16 = (ulong)*(uint *)(lVar22 + uVar32 * 4);
                uVar8 = local_178._4_4_ & 0x7fffffff;
                if ((uint)local_178 < uVar8) {
                  puVar18 = (undefined4 *)(local_180 + (local_178 & 0xffffffff) * 0xc);
                  lVar17 = lVar26 + uVar16 * 0xc;
                  *puVar18 = *(undefined4 *)(lVar26 + uVar16 * 0xc);
                  puVar18[1] = *(undefined4 *)(lVar17 + 4);
                  puVar18[2] = *(undefined4 *)(lVar17 + 8);
                  uVar7 = (uint)local_178 + 1;
                  local_178 = CONCAT44(local_178._4_4_,uVar7);
                }
                else {
                    /* try { // try from 003b5400 to 003b54bb has its CatchHandler @ 003b6680 */
                  FUN_00346600(&local_180);
                  uVar8 = local_178._4_4_ & 0x7fffffff;
                  uVar7 = (uint)local_178;
                }
                iVar12 = (int)uVar32;
                uVar32 = (ulong)*(uint *)(lVar22 + (ulong)(uint)(iVar11 + iVar12) * 4);
                if (uVar7 < uVar8) {
                  lVar17 = lVar26 + uVar32 * 0xc;
                  puVar18 = (undefined4 *)(local_180 + (ulong)uVar7 * 0xc);
                  *puVar18 = *(undefined4 *)(lVar26 + uVar32 * 0xc);
                  puVar18[1] = *(undefined4 *)(lVar17 + 4);
                  puVar18[2] = *(undefined4 *)(lVar17 + 8);
                  local_178 = CONCAT44(local_178._4_4_,uVar7 + 1);
                  uVar7 = uVar7 + 1;
                }
                else {
                  FUN_00346600(&local_180);
                  uVar8 = local_178._4_4_ & 0x7fffffff;
                  uVar7 = (uint)local_178;
                }
                uVar32 = (ulong)*(uint *)(lVar22 + (ulong)((2 - (uint)(fVar41 < 0.0)) + iVar12) * 4)
                ;
                if (uVar8 <= uVar7) break;
                lVar17 = lVar26 + uVar32 * 0xc;
                puVar18 = (undefined4 *)(local_180 + (ulong)uVar7 * 0xc);
                *puVar18 = *(undefined4 *)(lVar26 + uVar32 * 0xc);
                puVar18[1] = *(undefined4 *)(lVar17 + 4);
                puVar18[2] = *(undefined4 *)(lVar17 + 8);
                local_178 = CONCAT44(local_178._4_4_,uVar7 + 1);
                uVar27 = uVar27 - 1;
                uVar32 = (ulong)(iVar12 + 3);
                if (uVar27 == 0) goto LAB_003b5630;
              }
              FUN_00346600(&local_180);
              uVar27 = uVar27 - 1;
              uVar32 = (ulong)(iVar12 + 3);
            } while (uVar27 != 0);
          }
        }
        else {
                    /* try { // try from 003b54cc to 003b54ff has its CatchHandler @ 003b6660 */
          uVar8 = (**(code **)(*plVar23 + 0x50))(plVar23);
          lVar22 = (**(code **)(*plVar23 + 0x58))(plVar23);
          lVar26 = (**(code **)(*plVar23 + 0x38))(plVar23);
          if (uVar8 != 0) {
            uVar32 = 0;
            iVar11 = 2;
            if (fVar41 >= 0.0) {
              iVar11 = 1;
            }
            uVar27 = (ulong)uVar8;
            do {
              while( true ) {
                uVar16 = (ulong)*(ushort *)(lVar22 + uVar32 * 2);
                uVar8 = local_178._4_4_ & 0x7fffffff;
                if ((uint)local_178 < uVar8) {
                  puVar18 = (undefined4 *)(local_180 + (local_178 & 0xffffffff) * 0xc);
                  lVar17 = lVar26 + uVar16 * 0xc;
                  *puVar18 = *(undefined4 *)(lVar26 + uVar16 * 0xc);
                  puVar18[1] = *(undefined4 *)(lVar17 + 4);
                  puVar18[2] = *(undefined4 *)(lVar17 + 8);
                  uVar7 = (uint)local_178 + 1;
                  local_178 = CONCAT44(local_178._4_4_,uVar7);
                }
                else {
                    /* try { // try from 003b5568 to 003b5623 has its CatchHandler @ 003b6670 */
                  FUN_00346600(&local_180);
                  uVar8 = local_178._4_4_ & 0x7fffffff;
                  uVar7 = (uint)local_178;
                }
                iVar12 = (int)uVar32;
                uVar32 = (ulong)*(ushort *)(lVar22 + (ulong)(uint)(iVar11 + iVar12) * 2);
                if (uVar7 < uVar8) {
                  lVar17 = lVar26 + uVar32 * 0xc;
                  puVar18 = (undefined4 *)(local_180 + (ulong)uVar7 * 0xc);
                  *puVar18 = *(undefined4 *)(lVar26 + uVar32 * 0xc);
                  puVar18[1] = *(undefined4 *)(lVar17 + 4);
                  puVar18[2] = *(undefined4 *)(lVar17 + 8);
                  local_178 = CONCAT44(local_178._4_4_,uVar7 + 1);
                  uVar7 = uVar7 + 1;
                }
                else {
                  FUN_00346600(&local_180);
                  uVar8 = local_178._4_4_ & 0x7fffffff;
                  uVar7 = (uint)local_178;
                }
                uVar32 = (ulong)*(ushort *)
                                 (lVar22 + (ulong)((2 - (uint)(fVar41 < 0.0)) + iVar12) * 2);
                if (uVar8 <= uVar7) break;
                lVar17 = lVar26 + uVar32 * 0xc;
                puVar18 = (undefined4 *)(local_180 + (ulong)uVar7 * 0xc);
                *puVar18 = *(undefined4 *)(lVar26 + uVar32 * 0xc);
                puVar18[1] = *(undefined4 *)(lVar17 + 4);
                puVar18[2] = *(undefined4 *)(lVar17 + 8);
                local_178 = CONCAT44(local_178._4_4_,uVar7 + 1);
                uVar27 = uVar27 - 1;
                uVar32 = (ulong)(iVar12 + 3);
                if (uVar27 == 0) goto LAB_003b5630;
              }
              FUN_00346600(&local_180);
              uVar27 = uVar27 - 1;
              uVar32 = (ulong)(iVar12 + 3);
            } while (uVar27 != 0);
          }
        }
LAB_003b5630:
        pfVar14 = (float *)(*(long *)(param_1 + 0xc0) + uVar29 * 0x30);
        fVar42 = *pfVar14;
        fVar44 = pfVar14[1];
        *pfVar14 = local_130;
        fVar46 = pfVar14[2];
        fVar43 = pfVar14[3];
        fVar48 = pfVar14[4];
        fVar36 = pfVar14[5];
        pfVar14[1] = local_12c;
        fVar49 = pfVar14[6];
        fVar39 = pfVar14[7];
        fVar45 = pfVar14[8];
        fVar41 = pfVar14[9];
        pfVar14[2] = local_128;
        fVar47 = pfVar14[10];
        fVar37 = pfVar14[0xb];
        pfVar14[3] = local_124;
        pfVar14[4] = local_120;
        pfVar14[5] = local_11c;
        pfVar14[6] = local_118;
        pfVar14[7] = local_114;
        pfVar14[8] = local_110;
        pfVar14[9] = local_10c;
        pfVar14[10] = local_108;
        pfVar14[0xb] = local_104;
        uVar32 = local_178 & 0xffffffff;
        if ((uint)uVar24 < (uint)local_178) {
          lVar22 = uVar30 * 0xc;
          uVar27 = uVar30;
          do {
            pfVar14 = (float *)(local_180 + lVar22);
            fVar56 = pfVar14[2];
            fVar55 = *pfVar14;
            fVar50 = pfVar14[1];
            fVar57 = fVar41 + fVar42 * fVar55 + fVar43 * fVar50 + fVar49 * fVar56;
            fVar54 = fVar47 + fVar44 * fVar55 + fVar48 * fVar50 + fVar39 * fVar56;
            fVar50 = fVar37 + fVar46 * fVar55 + fVar36 * fVar50 + fVar45 * fVar56;
            local_170 = CONCAT44(fVar54,fVar57);
            local_168 = CONCAT44(local_168._4_4_,fVar50);
            if ((uint)local_188 < (local_188._4_4_ & 0x7fffffff)) {
              pfVar14 = (float *)(local_190 + (local_188 & 0xffffffff) * 0xc);
              *pfVar14 = fVar57;
              pfVar14[1] = fVar54;
              pfVar14[2] = fVar50;
              local_188 = CONCAT44(local_188._4_4_,(uint)local_188 + 1);
            }
            else {
                    /* try { // try from 003b5770 to 003b5783 has its CatchHandler @ 003b65c8 */
              FUN_00346600(&local_190,&local_170);
            }
            uVar27 = uVar27 + 1;
            lVar22 = lVar22 + 0xc;
          } while (uVar27 < uVar32);
        }
        if ((uint)uVar24 < (uint)local_178) {
          pfVar14 = (float *)(local_180 + uVar30 * 0xc);
          do {
            fVar41 = *pfVar14;
            fVar43 = pfVar14[1];
            fVar36 = pfVar14[2];
            *pfVar14 = fVar41 * local_130 + fVar43 * local_124 + fVar36 * local_118 + local_10c;
            pfVar14[1] = fVar41 * local_12c + fVar43 * local_120 + fVar36 * local_114 + local_108;
            pfVar14[2] = fVar41 * local_128 + fVar43 * local_11c + fVar36 * local_110 + local_104;
            pfVar14 = pfVar14 + 3;
          } while (pfVar14 < (float *)(local_180 + (ulong)(uint)local_178 * 0xc));
        }
        uVar24 = uVar35 & 0xffffffff;
        uVar29 = uVar29 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar29 < *(uint *)(param_1 + 0xa4));
    }
    local_150 = 0;
    local_148 = 0.0;
    local_144 = 0.0;
    local_170 = 0;
    local_168 = 0;
    if (*(int *)(param_1 + 0xa8) != 0) {
      uVar8 = 0;
      do {
        lVar22 = *plVar31;
        lVar26 = *(long *)(lVar22 + 0x40);
                    /* try { // try from 003b5870 to 003b587b has its CatchHandler @ 003b6548 */
        FUN_003afa90(&local_130,lVar20);
                    /* try { // try from 003b587c to 003b5887 has its CatchHandler @ 003b6538 */
        FUN_003fc170(lVar22,&local_f0);
        fVar54 = local_d8;
        fVar50 = local_dc;
        fVar47 = local_e0;
        fVar45 = local_e4;
        fVar49 = local_e8;
        fVar48 = local_ec;
        fVar46 = local_f0;
        fVar44 = local_118;
        fVar42 = local_11c;
        fVar39 = local_120;
        fVar37 = local_124;
        fVar36 = local_128;
        fVar43 = local_12c;
        fVar41 = local_130;
        plVar23 = *(long **)(lVar26 + 0x50);
        fVar55 = *(float *)(lVar26 + 0x58);
        fVar56 = *(float *)(lVar26 + 0x5c);
        fVar57 = *(float *)(lVar26 + 0x60);
                    /* try { // try from 003b58e8 to 003b5953 has its CatchHandler @ 003b6598 */
        uVar9 = (**(code **)(*plVar23 + 0x48))(plVar23);
        uVar24 = (ulong)uVar9;
        uVar10 = (**(code **)(*plVar23 + 0x40))(plVar23);
        uVar7 = uVar10 * uVar9;
        local_b0 = 0.0;
        FUN_003b8f80(&local_170,uVar7,&local_b0);
        (**(code **)(*plVar23 + 0x30))(plVar23,local_170,uVar7 * 4);
        if (((uint)local_144 & 0x7fffffff) < uVar7) {
          FUN_001ed900(&local_150,uVar7);
        }
        if ((uVar10 != 0) && (uVar9 != 0)) {
          lVar22 = 0;
          uVar7 = 0;
          do {
            fVar58 = (float)uVar7;
            uVar29 = 0;
            do {
              while( true ) {
                local_a8 = (float)(uVar29 & 0xffffffff);
                fStack_ac = (float)(int)*(short *)(local_170 +
                                                  (ulong)(uint)((int)lVar22 + (int)uVar29) * 4);
                local_b0 = fVar58;
                if (((uint)local_144 & 0x7fffffff) <= (uint)local_148) break;
                pfVar14 = (float *)(local_150 + (ulong)(uint)local_148 * 0xc);
                local_148 = (float)((int)local_148 + 1);
                *pfVar14 = fVar58;
                pfVar14[1] = fStack_ac;
                pfVar14[2] = local_a8;
                uVar29 = uVar29 + 1;
                if (uVar24 == uVar29) goto LAB_003b59f8;
              }
                    /* try { // try from 003b59dc to 003b59eb has its CatchHandler @ 003b65f8 */
              FUN_00346600(&local_150,&local_b0);
              uVar29 = uVar29 + 1;
            } while (uVar24 != uVar29);
LAB_003b59f8:
            uVar7 = uVar7 + 1;
            lVar22 = lVar22 + uVar24;
          } while (uVar7 != uVar10);
        }
        lVar17 = local_150;
        lVar22 = local_170;
        uVar24 = local_178;
        plVar23 = *(long **)(lVar26 + 0x50);
        uVar29 = local_178 & 0xffffffff;
                    /* try { // try from 003b5a28 to 003b5a7b has its CatchHandler @ 003b6558 */
        iVar11 = (**(code **)(*plVar23 + 0x48))(plVar23);
        iVar12 = (**(code **)(*plVar23 + 0x40))(plVar23);
        uVar7 = iVar12 - 1;
        uVar9 = iVar11 - 1;
        if ((local_178._4_4_ & 0x7fffffff) < (uint)local_178 + uVar9 * uVar7 * 6) {
          FUN_001ed900(&local_180);
        }
        if (uVar9 != 0) {
          uVar30 = 0;
          do {
            while (iVar25 = (int)uVar30, uVar7 != 0) {
              uVar10 = iVar25 + 1;
              uVar33 = iVar25 * iVar12;
              uVar21 = uVar10 * iVar12;
              iVar25 = iVar25 << 1;
              uVar32 = (ulong)uVar7;
              do {
                cVar5 = *(char *)(lVar22 + uVar30 * 4 + 2);
                    /* try { // try from 003b5adc to 003b5d67 has its CatchHandler @ 003b65b8 */
                sVar6 = (**(code **)(*plVar23 + 0x90))(plVar23,iVar25);
                uVar1 = uVar33 + 1;
                uVar2 = uVar21 + 1;
                if (sVar6 != 0x7f) {
                  uVar13 = local_178._4_4_ & 0x7fffffff;
                  if ((uint)local_178 < uVar13) {
                    lVar26 = lVar17 + (ulong)uVar21 * 0xc;
                    puVar18 = (undefined4 *)(local_180 + (local_178 & 0xffffffff) * 0xc);
                    uVar15 = (uint)local_178 + 1;
                    *puVar18 = *(undefined4 *)(lVar17 + (ulong)uVar21 * 0xc);
                    puVar18[1] = *(undefined4 *)(lVar26 + 4);
                    puVar18[2] = *(undefined4 *)(lVar26 + 8);
                    local_178 = CONCAT44(local_178._4_4_,uVar15);
                    if (uVar13 <= uVar15) goto LAB_003b5bbc;
LAB_003b5b88:
                    lVar26 = lVar17 + (ulong)uVar33 * 0xc;
                    puVar18 = (undefined4 *)(local_180 + (ulong)uVar15 * 0xc);
                    uVar15 = uVar15 + 1;
                    *puVar18 = *(undefined4 *)(lVar17 + (ulong)uVar33 * 0xc);
                    puVar18[1] = *(undefined4 *)(lVar26 + 4);
                    puVar18[2] = *(undefined4 *)(lVar26 + 8);
                    local_178 = CONCAT44(local_178._4_4_,uVar15);
                  }
                  else {
                    FUN_00346600(&local_180);
                    uVar13 = local_178._4_4_ & 0x7fffffff;
                    uVar15 = (uint)local_178;
                    if ((uint)local_178 < uVar13) goto LAB_003b5b88;
LAB_003b5bbc:
                    FUN_00346600(&local_180);
                    uVar13 = local_178._4_4_ & 0x7fffffff;
                    uVar15 = (uint)local_178;
                  }
                  uVar3 = uVar1;
                  if (cVar5 < '\0') {
                    uVar3 = uVar2;
                  }
                  if (uVar15 < uVar13) {
                    lVar26 = lVar17 + (ulong)uVar3 * 0xc;
                    puVar18 = (undefined4 *)(local_180 + (ulong)uVar15 * 0xc);
                    *puVar18 = *(undefined4 *)(lVar17 + (ulong)uVar3 * 0xc);
                    puVar18[1] = *(undefined4 *)(lVar26 + 4);
                    puVar18[2] = *(undefined4 *)(lVar26 + 8);
                    local_178 = CONCAT44(local_178._4_4_,uVar15 + 1);
                  }
                  else {
                    FUN_00346600(&local_180);
                  }
                }
                sVar6 = (**(code **)(*plVar23 + 0x90))(plVar23,iVar25 + 1);
                if (sVar6 != 0x7f) {
                  uVar13 = local_178._4_4_ & 0x7fffffff;
                  if ((uint)local_178 < uVar13) {
                    lVar26 = lVar17 + (ulong)uVar1 * 0xc;
                    puVar18 = (undefined4 *)(local_180 + (local_178 & 0xffffffff) * 0xc);
                    uVar15 = (uint)local_178 + 1;
                    *puVar18 = *(undefined4 *)(lVar17 + (ulong)uVar1 * 0xc);
                    puVar18[1] = *(undefined4 *)(lVar26 + 4);
                    puVar18[2] = *(undefined4 *)(lVar26 + 8);
                    local_178 = CONCAT44(local_178._4_4_,uVar15);
                    if (uVar13 <= uVar15) goto LAB_003b5d00;
LAB_003b5ccc:
                    lVar26 = lVar17 + (ulong)uVar2 * 0xc;
                    puVar18 = (undefined4 *)(local_180 + (ulong)uVar15 * 0xc);
                    uVar15 = uVar15 + 1;
                    *puVar18 = *(undefined4 *)(lVar17 + (ulong)uVar2 * 0xc);
                    puVar18[1] = *(undefined4 *)(lVar26 + 4);
                    puVar18[2] = *(undefined4 *)(lVar26 + 8);
                    local_178 = CONCAT44(local_178._4_4_,uVar15);
                  }
                  else {
                    FUN_00346600(&local_180);
                    uVar13 = local_178._4_4_ & 0x7fffffff;
                    uVar15 = (uint)local_178;
                    if ((uint)local_178 < uVar13) goto LAB_003b5ccc;
LAB_003b5d00:
                    FUN_00346600(&local_180);
                    uVar13 = local_178._4_4_ & 0x7fffffff;
                    uVar15 = (uint)local_178;
                  }
                  uVar1 = uVar21;
                  if (cVar5 < '\0') {
                    uVar1 = uVar33;
                  }
                  if (uVar15 < uVar13) {
                    lVar26 = lVar17 + (ulong)uVar1 * 0xc;
                    puVar18 = (undefined4 *)(local_180 + (ulong)uVar15 * 0xc);
                    *puVar18 = *(undefined4 *)(lVar17 + (ulong)uVar1 * 0xc);
                    puVar18[1] = *(undefined4 *)(lVar26 + 4);
                    puVar18[2] = *(undefined4 *)(lVar26 + 8);
                    local_178 = CONCAT44(local_178._4_4_,uVar15 + 1);
                  }
                  else {
                    FUN_00346600(&local_180);
                  }
                }
                iVar25 = iVar25 + iVar11 * 2;
                uVar32 = uVar32 - 1;
                uVar21 = uVar21 + 1;
                uVar33 = uVar33 + 1;
                uVar30 = (ulong)(uint)((int)uVar30 + iVar11);
              } while (uVar32 != 0);
              uVar30 = (ulong)uVar10;
              if (uVar10 == uVar9) goto LAB_003b5db8;
            }
            uVar30 = (ulong)(iVar25 + 1U);
          } while (iVar25 + 1U != uVar9);
        }
LAB_003b5db8:
        fVar60 = (fVar47 - fVar39) + (fVar47 - fVar39);
        fVar39 = (fVar50 - fVar42) + (fVar50 - fVar42);
        fVar47 = (fVar54 - fVar44) + (fVar54 - fVar44);
        fVar44 = ((fVar37 * fVar46 - fVar45 * fVar41) - fVar49 * fVar43) + fVar48 * fVar36;
        fVar50 = ((fVar37 * fVar48 - fVar45 * fVar43) - fVar46 * fVar36) + fVar49 * fVar41;
        fVar54 = fVar37 * fVar37 + -0.5;
        fVar58 = fVar37 * fVar45 + fVar46 * fVar41 + fVar48 * fVar43 + fVar49 * fVar36;
        fVar46 = ((fVar37 * fVar49 - fVar45 * fVar36) - fVar48 * fVar41) + fVar46 * fVar43;
        fVar51 = fVar50 + fVar50;
        fVar53 = fVar44 + fVar44;
        fVar42 = (fVar60 * -fVar41 - fVar39 * fVar43) - fVar47 * fVar36;
        fVar45 = fVar46 * (fVar46 + fVar46);
        fVar48 = fVar58 * (fVar46 + fVar46);
        fVar38 = (fVar54 * fVar60 + fVar37 * (fVar39 * fVar36 - fVar47 * fVar43)) - fVar42 * fVar41;
        fVar40 = (fVar54 * fVar39 + fVar37 * (fVar47 * fVar41 - fVar60 * fVar36)) - fVar42 * fVar43;
        fVar44 = 1.0 - fVar44 * fVar53;
        fVar59 = (fVar54 * fVar47 + fVar37 * (fVar60 * fVar43 - fVar39 * fVar41)) - fVar42 * fVar36;
        fVar42 = fVar56 * ((1.0 - fVar50 * fVar51) - fVar45);
        fVar36 = fVar56 * (fVar53 * fVar50 + fVar48);
        pfVar14 = (float *)(*(long *)(param_1 + 0xc0) +
                           (ulong)(*(int *)(param_1 + 0xa4) + uVar8) * 0x30);
        fVar54 = *pfVar14;
        fVar60 = pfVar14[1];
        fVar62 = pfVar14[2];
        fVar63 = pfVar14[3];
        fVar56 = fVar56 * (fVar53 * fVar46 - fVar58 * fVar51);
        fVar47 = pfVar14[4];
        fVar61 = pfVar14[5];
        fVar34 = pfVar14[6];
        fVar49 = pfVar14[7];
        fVar64 = pfVar14[8];
        fVar52 = pfVar14[9];
        pfVar14[1] = fVar36;
        fVar41 = fVar55 * (fVar53 * fVar50 - fVar48);
        *pfVar14 = fVar42;
        pfVar14[2] = fVar56;
        pfVar14[3] = fVar41;
        fVar43 = fVar55 * (fVar44 - fVar45);
        fVar55 = fVar55 * (fVar53 * fVar58 + fVar46 * fVar51);
        fVar45 = pfVar14[10];
        fVar48 = pfVar14[0xb];
        fVar37 = fVar57 * (fVar53 * fVar46 + fVar58 * fVar51);
        fVar39 = fVar57 * (fVar46 * fVar51 - fVar53 * fVar58);
        fVar57 = fVar57 * (fVar44 - fVar50 * fVar51);
        pfVar14[4] = fVar43;
        pfVar14[5] = fVar55;
        pfVar14[6] = fVar37;
        pfVar14[7] = fVar39;
        pfVar14[8] = fVar57;
        pfVar14[9] = fVar38;
        pfVar14[10] = fVar40;
        pfVar14[0xb] = fVar59;
        uVar30 = local_178 & 0xffffffff;
        if ((uint)uVar24 < (uint)local_178) {
          lVar22 = uVar29 * 0xc;
          uVar32 = uVar29;
          do {
            pfVar14 = (float *)(local_180 + lVar22);
            fVar50 = pfVar14[2];
            fVar46 = *pfVar14;
            fVar44 = pfVar14[1];
            local_b0 = fVar52 + fVar54 * fVar46 + fVar63 * fVar44 + fVar34 * fVar50;
            fStack_ac = fVar45 + fVar60 * fVar46 + fVar47 * fVar44 + fVar49 * fVar50;
            local_a8 = fVar48 + fVar62 * fVar46 + fVar61 * fVar44 + fVar64 * fVar50;
            if ((uint)local_188 < (local_188._4_4_ & 0x7fffffff)) {
              pfVar14 = (float *)(local_190 + (local_188 & 0xffffffff) * 0xc);
              *pfVar14 = local_b0;
              pfVar14[1] = fStack_ac;
              pfVar14[2] = local_a8;
              local_188 = CONCAT44(local_188._4_4_,(uint)local_188 + 1);
            }
            else {
                    /* try { // try from 003b6090 to 003b60af has its CatchHandler @ 003b6528 */
              FUN_00346600(&local_190,&local_b0);
            }
            uVar32 = uVar32 + 1;
            lVar22 = lVar22 + 0xc;
          } while (uVar32 < uVar30);
        }
        if ((uint)uVar24 < (uint)local_178) {
          pfVar14 = (float *)(local_180 + uVar29 * 0xc);
          do {
            fVar48 = *pfVar14;
            fVar44 = pfVar14[1];
            fVar46 = pfVar14[2];
            *pfVar14 = fVar38 + fVar42 * fVar48 + fVar41 * fVar44 + fVar37 * fVar46;
            pfVar14[1] = fVar40 + fVar36 * fVar48 + fVar43 * fVar44 + fVar39 * fVar46;
            pfVar14[2] = fVar59 + fVar56 * fVar48 + fVar55 * fVar44 + fVar57 * fVar46;
            pfVar14 = pfVar14 + 3;
          } while (pfVar14 < (float *)(local_180 + (ulong)(uint)local_178 * 0xc));
        }
                    /* try { // try from 003b615c to 003b616b has its CatchHandler @ 003b6518 */
        FUN_001ed870(&local_150,0,&local_b0);
        uVar24 = uVar35 & 0xffffffff;
        local_b0 = 0.0;
                    /* try { // try from 003b6174 to 003b6183 has its CatchHandler @ 003b6508 */
        FUN_003b8f80(&local_170,0,&local_b0);
        uVar8 = uVar8 + 1;
        plVar31 = plVar31 + 1;
      } while (uVar8 < *(uint *)(param_1 + 0xa8));
    }
                    /* try { // try from 003b61a4 to 003b61a7 has its CatchHandler @ 003b64c8 */
    pfVar14 = (float *)(**(code **)(**(long **)(lVar20 + 0x20) + 0x2f0))();
    local_130 = *pfVar14;
    local_12c = pfVar14[1];
    local_128 = pfVar14[2];
                    /* try { // try from 003b61cc to 003b61d3 has its CatchHandler @ 003b64b8 */
    pfVar14 = (float *)(**(code **)(**(long **)(lVar20 + 0x20) + 0x2f8))();
                    /* try { // try from 003b61d4 to 003b61db has its CatchHandler @ 003b64a8 */
    local_e8 = (float)FUN_003b1ad0(lVar20);
    uVar8 = (uint)local_178;
    local_ec = local_e8 + pfVar14[1];
    local_f0 = local_e8 + *pfVar14;
    local_e8 = local_e8 + pfVar14[2];
    if ((uint)local_178 == 0) {
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
      uVar7 = 1;
      do {
        uVar30 = (ulong)(uVar7 - 1);
        uVar29 = (ulong)(uVar7 + 1);
                    /* try { // try from 003b6224 to 003b6253 has its CatchHandler @ 003b65a8 */
        iVar11 = FUN_0023a3f0(&local_130,&local_f0,local_180 + uVar30 * 0xc,
                              local_180 + (ulong)uVar7 * 0xc,local_180 + uVar29 * 0xc);
        if ((iVar11 != 0) ||
           (iVar11 = FUN_0023a3f0(&local_130,&local_f0,local_190 + uVar30 * 0xc,
                                  local_190 + (ulong)uVar7 * 0xc,local_190 + uVar29 * 0xc),
           iVar11 != 0)) {
          puVar18 = (undefined4 *)(local_180 + uVar30 * 0xc);
          puVar19 = (undefined4 *)(local_180 + uVar35 * 0xc);
          *puVar19 = *puVar18;
          uVar4 = puVar18[2];
          puVar19[1] = puVar18[1];
          puVar19[2] = uVar4;
          lVar22 = (ulong)uVar7 * 0xc;
          puVar18 = (undefined4 *)(local_180 + lVar22);
          iVar11 = (int)uVar35;
          puVar19 = (undefined4 *)(local_180 + (ulong)(iVar11 + 1U) * 0xc);
          *puVar19 = *puVar18;
          uVar4 = puVar18[2];
          puVar19[1] = puVar18[1];
          puVar19[2] = uVar4;
          puVar18 = (undefined4 *)(local_180 + uVar29 * 0xc);
          puVar19 = (undefined4 *)(local_180 + (ulong)(iVar11 + 2U) * 0xc);
          *puVar19 = *puVar18;
          uVar4 = puVar18[2];
          puVar19[1] = puVar18[1];
          puVar19[2] = uVar4;
          puVar18 = (undefined4 *)(local_190 + uVar30 * 0xc);
          puVar19 = (undefined4 *)(local_190 + uVar35 * 0xc);
          uVar35 = (ulong)(iVar11 + 3);
          *puVar19 = *puVar18;
          uVar4 = puVar18[2];
          puVar19[1] = puVar18[1];
          puVar19[2] = uVar4;
          puVar18 = (undefined4 *)(local_190 + lVar22);
          puVar19 = (undefined4 *)(local_190 + (ulong)(iVar11 + 1U) * 0xc);
          *puVar19 = *puVar18;
          uVar4 = puVar18[2];
          puVar19[1] = puVar18[1];
          puVar19[2] = uVar4;
          puVar18 = (undefined4 *)(local_190 + uVar29 * 0xc);
          puVar19 = (undefined4 *)(local_190 + (ulong)(iVar11 + 2U) * 0xc);
          *puVar19 = *puVar18;
          uVar4 = puVar18[2];
          puVar19[1] = puVar18[1];
          puVar19[2] = uVar4;
        }
        uVar9 = uVar7 + 2;
        uVar7 = uVar7 + 3;
      } while (uVar9 < uVar8);
    }
    lVar26 = local_180;
    lVar22 = local_190;
    lVar17 = local_190 + uVar35 * 0xc;
                    /* try { // try from 003b633c to 003b6383 has its CatchHandler @ 003b64d8 */
    FUN_003b9060(uVar24,local_190,lVar17);
    lVar28 = lVar26 + uVar35 * 0xc;
    FUN_003b9060(uVar24,lVar26,lVar28);
    (**(code **)(**(long **)(lVar20 + 0x20) + 400))
              (*(long **)(lVar20 + 0x20),lVar22,lVar17,lVar26,lVar28,*(undefined4 *)(lVar20 + 0x6c))
    ;
    lVar20 = local_170;
    if (((-1 < (long)local_168) && ((local_168 & 0x7fffffff00000000) != 0)) && (local_170 != 0)) {
                    /* try { // try from 003b639c to 003b63af has its CatchHandler @ 003b64a4 */
      plVar31 = (long *)FUN_00400d30();
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar20);
    }
    lVar20 = local_150;
    if (((-1 < (int)local_144) && (((uint)local_144 & 0x7fffffff) != 0)) && (local_150 != 0)) {
                    /* try { // try from 003b63c8 to 003b63db has its CatchHandler @ 003b64a0 */
      plVar31 = (long *)FUN_00400d30();
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar20);
    }
    lVar20 = local_190;
    if (((-1 < (long)local_188) && ((local_188 & 0x7fffffff00000000) != 0)) && (local_190 != 0)) {
                    /* try { // try from 003b63f4 to 003b6407 has its CatchHandler @ 003b649c */
      plVar31 = (long *)FUN_00400d30();
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar20);
    }
    lVar20 = local_180;
    if (((-1 < (long)local_178) && ((local_178 & 0x7fffffff00000000) != 0)) && (local_180 != 0)) {
                    /* try { // try from 003b6420 to 003b6433 has its CatchHandler @ 003b6498 */
      plVar31 = (long *)FUN_00400d30();
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar20);
    }
    lVar20 = local_100;
    if (((-1 < (long)local_f8) && ((local_f8 & 0x7fffffff00000000) != 0)) && (local_100 != 0)) {
                    /* try { // try from 003b644c to 003b645f has its CatchHandler @ 003b6494 */
      plVar31 = (long *)FUN_00400d30();
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar20);
    }
    lVar20 = local_c8;
    if (((-1 < (long)local_c0) && ((local_c0 & 0x7fffffff00000000) != 0)) && (local_c8 != 0)) {
                    /* try { // try from 003b6478 to 003b648b has its CatchHandler @ 003b6490 */
      plVar31 = (long *)FUN_00400d30();
      (**(code **)(*plVar31 + 0x18))(plVar31,lVar20);
    }
  }
  return;
}


