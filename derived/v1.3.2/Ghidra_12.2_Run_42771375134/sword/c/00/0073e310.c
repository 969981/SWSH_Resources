/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0073e310; name: FUN_0073e310
 */


void FUN_0073e310(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar33;
  undefined8 uVar32;
  byte bVar34;
  byte bVar36;
  byte bVar37;
  float fVar35;
  byte bVar38;
  byte bVar39;
  byte bVar41;
  byte bVar42;
  float fVar40;
  byte bVar43;
  byte bVar44;
  byte bVar46;
  byte bVar47;
  float fVar45;
  byte bVar48;
  byte bVar49;
  byte bVar51;
  byte bVar52;
  float fVar50;
  byte bVar53;
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
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  long local_78;
  
  puVar6 = PTR_DAT_02715500;
  fVar5 = DAT_01d4c154;
  uVar4 = DAT_01d4ab58;
  uVar3 = DAT_01d4ab50;
  lVar14 = *(long *)(param_1 + 0x6d0);
  lVar15 = *(long *)(param_1 + 0x6d8);
  if (lVar14 != lVar15) {
    do {
      uVar13 = *(undefined8 *)(lVar14 + 0x5e8);
      local_a8 = 0xceb322b9a2492526;
      local_a0 = "PrimitiveRendererConstantVS";
      local_98 = 0x1b;
      FUN_006cf0a0(auStack_90,&local_a8);
      lVar7 = FUN_00734c00(uVar13,0,auStack_90);
      if (lVar7 == 0) {
        puVar8 = (undefined8 *)0x0;
        lVar7 = 0;
      }
      else {
        iVar2 = *(int *)puVar6;
        *(int *)(lVar7 + 0x138) = iVar2;
        FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar7);
        lVar7 = lVar7 + (long)iVar2 * 0x70 + 0x58;
        puVar8 = (undefined8 *)thunk_FUN_0199c7e0(lVar7);
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (puVar8 != (undefined8 *)0x0) {
        if (*(uint *)(lVar14 + 0x5f0) < 5) {
          lVar12 = *(long *)(param_2 + 0x68);
          fVar17 = (float)*(undefined8 *)(lVar14 + 0x620);
          fVar27 = (float)*(undefined8 *)(lVar12 + 0xe0);
          fVar28 = (float)((ulong)*(undefined8 *)(lVar12 + 0xe0) >> 0x20);
          fVar30 = (float)*(undefined8 *)(lVar12 + 0xe8);
          fVar31 = (float)((ulong)*(undefined8 *)(lVar12 + 0xe8) >> 0x20);
          fVar18 = (float)((ulong)*(undefined8 *)(lVar14 + 0x620) >> 0x20);
          fVar33 = (float)*(undefined8 *)(lVar12 + 0xf0);
          fVar35 = (float)((ulong)*(undefined8 *)(lVar12 + 0xf0) >> 0x20);
          fVar40 = (float)*(undefined8 *)(lVar12 + 0xf8);
          fVar45 = (float)((ulong)*(undefined8 *)(lVar12 + 0xf8) >> 0x20);
          fVar22 = (float)*(undefined8 *)(lVar14 + 0x630);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar14 + 0x630) >> 0x20);
          fVar19 = (float)*(undefined8 *)(lVar14 + 0x628);
          fVar50 = (float)*(undefined8 *)(lVar12 + 0x100);
          fVar54 = (float)((ulong)*(undefined8 *)(lVar12 + 0x100) >> 0x20);
          fVar55 = (float)*(undefined8 *)(lVar12 + 0x108);
          fVar56 = (float)((ulong)*(undefined8 *)(lVar12 + 0x108) >> 0x20);
          fVar25 = (float)*(undefined8 *)(lVar14 + 0x638);
          fVar21 = (float)((ulong)*(undefined8 *)(lVar14 + 0x628) >> 0x20);
          fVar57 = (float)*(undefined8 *)(lVar12 + 0x110);
          fVar58 = (float)((ulong)*(undefined8 *)(lVar12 + 0x110) >> 0x20);
          fVar59 = (float)*(undefined8 *)(lVar12 + 0x118);
          fVar60 = (float)((ulong)*(undefined8 *)(lVar12 + 0x118) >> 0x20);
          uVar13 = CONCAT44(fVar28 * fVar17 + fVar35 * fVar18 + fVar54 * fVar19 + fVar58 * fVar21,
                            fVar27 * fVar17 + fVar33 * fVar18 + fVar50 * fVar19 + fVar57 * fVar21);
          uVar20 = CONCAT44(fVar31 * fVar17 + fVar45 * fVar18 + fVar56 * fVar19 + fVar60 * fVar21,
                            fVar30 * fVar17 + fVar40 * fVar18 + fVar55 * fVar19 + fVar59 * fVar21);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar14 + 0x638) >> 0x20);
          uVar23 = CONCAT44(fVar28 * fVar22 + fVar35 * fVar24 + fVar54 * fVar25 + fVar58 * fVar17,
                            fVar27 * fVar22 + fVar33 * fVar24 + fVar50 * fVar25 + fVar57 * fVar17);
          uVar26 = CONCAT44(fVar31 * fVar22 + fVar45 * fVar24 + fVar56 * fVar25 + fVar60 * fVar17,
                            fVar30 * fVar22 + fVar40 * fVar24 + fVar55 * fVar25 + fVar59 * fVar17);
          fVar17 = (float)*(undefined8 *)(lVar14 + 0x640);
          fVar22 = (float)*(undefined8 *)(lVar14 + 0x650);
          fVar18 = (float)((ulong)*(undefined8 *)(lVar14 + 0x640) >> 0x20);
          fVar24 = (float)((ulong)*(undefined8 *)(lVar14 + 0x650) >> 0x20);
          fVar19 = (float)*(undefined8 *)(lVar14 + 0x648);
          fVar25 = (float)*(undefined8 *)(lVar14 + 0x658);
          fVar21 = (float)((ulong)*(undefined8 *)(lVar14 + 0x648) >> 0x20);
          uVar29 = CONCAT44(fVar28 * fVar17 + fVar35 * fVar18 + fVar54 * fVar19 + fVar58 * fVar21,
                            fVar27 * fVar17 + fVar33 * fVar18 + fVar50 * fVar19 + fVar57 * fVar21);
          uVar32 = CONCAT44(fVar31 * fVar17 + fVar45 * fVar18 + fVar56 * fVar19 + fVar60 * fVar21,
                            fVar30 * fVar17 + fVar40 * fVar18 + fVar55 * fVar19 + fVar59 * fVar21);
          fVar17 = (float)((ulong)*(undefined8 *)(lVar14 + 0x658) >> 0x20);
          uVar67 = CONCAT44(fVar28 * fVar22 + fVar35 * fVar24 + fVar54 * fVar25 + fVar58 * fVar17,
                            fVar27 * fVar22 + fVar33 * fVar24 + fVar50 * fVar25 + fVar57 * fVar17);
          uVar70 = CONCAT44(fVar31 * fVar22 + fVar45 * fVar24 + fVar56 * fVar25 + fVar60 * fVar17,
                            fVar30 * fVar22 + fVar40 * fVar24 + fVar55 * fVar25 + fVar59 * fVar17);
        }
        else {
          uVar20 = *(undefined8 *)(lVar14 + 0x628);
          uVar13 = *(undefined8 *)(lVar14 + 0x620);
          uVar26 = *(undefined8 *)(lVar14 + 0x638);
          uVar23 = *(undefined8 *)(lVar14 + 0x630);
          uVar32 = *(undefined8 *)(lVar14 + 0x648);
          uVar29 = *(undefined8 *)(lVar14 + 0x640);
          uVar70 = *(undefined8 *)(lVar14 + 0x658);
          uVar67 = *(undefined8 *)(lVar14 + 0x650);
        }
        fVar17 = (float)*(undefined8 *)(lVar14 + 0x660);
        fVar54 = (float)uVar13;
        fVar55 = (float)((ulong)uVar13 >> 0x20);
        fVar56 = (float)uVar20;
        fVar57 = (float)((ulong)uVar20 >> 0x20);
        fVar18 = (float)((ulong)*(undefined8 *)(lVar14 + 0x660) >> 0x20);
        fVar58 = (float)uVar23;
        fVar59 = (float)((ulong)uVar23 >> 0x20);
        fVar60 = (float)uVar26;
        fVar61 = (float)((ulong)uVar26 >> 0x20);
        fVar22 = (float)*(undefined8 *)(lVar14 + 0x670);
        fVar24 = (float)((ulong)*(undefined8 *)(lVar14 + 0x670) >> 0x20);
        fVar28 = (float)*(undefined8 *)(lVar14 + 0x680);
        fVar30 = (float)((ulong)*(undefined8 *)(lVar14 + 0x680) >> 0x20);
        fVar35 = (float)*(undefined8 *)(lVar14 + 0x690);
        fVar40 = (float)((ulong)*(undefined8 *)(lVar14 + 0x690) >> 0x20);
        fVar19 = (float)*(undefined8 *)(lVar14 + 0x668);
        fVar62 = (float)uVar29;
        fVar63 = (float)((ulong)uVar29 >> 0x20);
        fVar64 = (float)uVar32;
        fVar65 = (float)((ulong)uVar32 >> 0x20);
        fVar25 = (float)*(undefined8 *)(lVar14 + 0x678);
        fVar31 = (float)*(undefined8 *)(lVar14 + 0x688);
        fVar45 = (float)*(undefined8 *)(lVar14 + 0x698);
        fVar21 = (float)((ulong)*(undefined8 *)(lVar14 + 0x668) >> 0x20);
        fVar66 = (float)uVar67;
        fVar68 = (float)((ulong)uVar67 >> 0x20);
        fVar69 = (float)uVar70;
        fVar71 = (float)((ulong)uVar70 >> 0x20);
        fVar27 = (float)((ulong)*(undefined8 *)(lVar14 + 0x678) >> 0x20);
        fVar33 = (float)((ulong)*(undefined8 *)(lVar14 + 0x688) >> 0x20);
        fVar50 = (float)((ulong)*(undefined8 *)(lVar14 + 0x698) >> 0x20);
        puVar8[1] = CONCAT44(fVar57 * fVar17 + fVar61 * fVar18 + fVar65 * fVar19 + fVar71 * fVar21,
                             fVar56 * fVar17 + fVar60 * fVar18 + fVar64 * fVar19 + fVar69 * fVar21);
        *puVar8 = CONCAT44(fVar55 * fVar17 + fVar59 * fVar18 + fVar63 * fVar19 + fVar68 * fVar21,
                           fVar54 * fVar17 + fVar58 * fVar18 + fVar62 * fVar19 + fVar66 * fVar21);
        puVar8[3] = CONCAT44(fVar57 * fVar22 + fVar61 * fVar24 + fVar65 * fVar25 + fVar71 * fVar27,
                             fVar56 * fVar22 + fVar60 * fVar24 + fVar64 * fVar25 + fVar69 * fVar27);
        puVar8[2] = CONCAT44(fVar55 * fVar22 + fVar59 * fVar24 + fVar63 * fVar25 + fVar68 * fVar27,
                             fVar54 * fVar22 + fVar58 * fVar24 + fVar62 * fVar25 + fVar66 * fVar27);
        puVar8[5] = CONCAT44(fVar57 * fVar28 + fVar61 * fVar30 + fVar65 * fVar31 + fVar71 * fVar33,
                             fVar56 * fVar28 + fVar60 * fVar30 + fVar64 * fVar31 + fVar69 * fVar33);
        puVar8[4] = CONCAT44(fVar55 * fVar28 + fVar59 * fVar30 + fVar63 * fVar31 + fVar68 * fVar33,
                             fVar54 * fVar28 + fVar58 * fVar30 + fVar62 * fVar31 + fVar66 * fVar33);
        puVar8[7] = CONCAT44(fVar57 * fVar35 + fVar61 * fVar40 + fVar65 * fVar45 + fVar71 * fVar50,
                             fVar56 * fVar35 + fVar60 * fVar40 + fVar64 * fVar45 + fVar69 * fVar50);
        puVar8[6] = CONCAT44(fVar55 * fVar35 + fVar59 * fVar40 + fVar63 * fVar45 + fVar68 * fVar50,
                             fVar54 * fVar35 + fVar58 * fVar40 + fVar62 * fVar45 + fVar66 * fVar50);
        lVar12 = *(long *)(param_2 + 0x68);
        uVar20 = *(undefined8 *)(lVar12 + 0x68);
        uVar13 = *(undefined8 *)(lVar12 + 0x60);
        uVar26 = *(undefined8 *)(lVar12 + 0x78);
        uVar23 = *(undefined8 *)(lVar12 + 0x70);
        uVar32 = *(undefined8 *)(lVar12 + 0x88);
        uVar29 = *(undefined8 *)(lVar12 + 0x80);
        bVar34 = (byte)uVar3;
        bVar36 = (byte)((ulong)uVar3 >> 8);
        bVar37 = (byte)((ulong)uVar3 >> 0x10);
        bVar38 = (byte)((ulong)uVar3 >> 0x18);
        bVar39 = (byte)((ulong)uVar3 >> 0x20);
        bVar41 = (byte)((ulong)uVar3 >> 0x28);
        bVar42 = (byte)((ulong)uVar3 >> 0x30);
        bVar43 = (byte)((ulong)uVar3 >> 0x38);
        bVar44 = (byte)uVar4;
        bVar46 = (byte)((ulong)uVar4 >> 8);
        bVar47 = (byte)((ulong)uVar4 >> 0x10);
        bVar48 = (byte)((ulong)uVar4 >> 0x18);
        bVar49 = (byte)((ulong)uVar4 >> 0x20);
        bVar51 = (byte)((ulong)uVar4 >> 0x28);
        bVar52 = (byte)((ulong)uVar4 >> 0x30);
        bVar53 = (byte)((ulong)uVar4 >> 0x38);
        puVar8[0xd] = CONCAT17((byte)((ulong)uVar32 >> 0x38) & bVar53,
                               CONCAT16((byte)((ulong)uVar32 >> 0x30) & bVar52,
                                        CONCAT15((byte)((ulong)uVar32 >> 0x28) & bVar51,
                                                 CONCAT14((byte)((ulong)uVar32 >> 0x20) & bVar49,
                                                          CONCAT13((byte)((ulong)uVar32 >> 0x18) &
                                                                   bVar48,CONCAT12((byte)((ulong)
                                                  uVar32 >> 0x10) & bVar47,
                                                  CONCAT11((byte)((ulong)uVar32 >> 8) & bVar46,
                                                           (byte)uVar32 & bVar44)))))));
        puVar8[0xc] = CONCAT17((byte)((ulong)uVar29 >> 0x38) & bVar43,
                               CONCAT16((byte)((ulong)uVar29 >> 0x30) & bVar42,
                                        CONCAT15((byte)((ulong)uVar29 >> 0x28) & bVar41,
                                                 CONCAT14((byte)((ulong)uVar29 >> 0x20) & bVar39,
                                                          CONCAT13((byte)((ulong)uVar29 >> 0x18) &
                                                                   bVar38,CONCAT12((byte)((ulong)
                                                  uVar29 >> 0x10) & bVar37,
                                                  CONCAT11((byte)((ulong)uVar29 >> 8) & bVar36,
                                                           (byte)uVar29 & bVar34)))))));
        puVar8[9] = CONCAT17((byte)((ulong)uVar20 >> 0x38) & bVar53,
                             CONCAT16((byte)((ulong)uVar20 >> 0x30) & bVar52,
                                      CONCAT15((byte)((ulong)uVar20 >> 0x28) & bVar51,
                                               CONCAT14((byte)((ulong)uVar20 >> 0x20) & bVar49,
                                                        CONCAT13((byte)((ulong)uVar20 >> 0x18) &
                                                                 bVar48,CONCAT12((byte)((ulong)
                                                  uVar20 >> 0x10) & bVar47,
                                                  CONCAT11((byte)((ulong)uVar20 >> 8) & bVar46,
                                                           (byte)uVar20 & bVar44)))))));
        puVar8[8] = CONCAT17((byte)((ulong)uVar13 >> 0x38) & bVar43,
                             CONCAT16((byte)((ulong)uVar13 >> 0x30) & bVar42,
                                      CONCAT15((byte)((ulong)uVar13 >> 0x28) & bVar41,
                                               CONCAT14((byte)((ulong)uVar13 >> 0x20) & bVar39,
                                                        CONCAT13((byte)((ulong)uVar13 >> 0x18) &
                                                                 bVar38,CONCAT12((byte)((ulong)
                                                  uVar13 >> 0x10) & bVar37,
                                                  CONCAT11((byte)((ulong)uVar13 >> 8) & bVar36,
                                                           (byte)uVar13 & bVar34)))))));
        puVar8[0xb] = CONCAT17((byte)((ulong)uVar26 >> 0x38) & bVar53,
                               CONCAT16((byte)((ulong)uVar26 >> 0x30) & bVar52,
                                        CONCAT15((byte)((ulong)uVar26 >> 0x28) & bVar51,
                                                 CONCAT14((byte)((ulong)uVar26 >> 0x20) & bVar49,
                                                          CONCAT13((byte)((ulong)uVar26 >> 0x18) &
                                                                   bVar48,CONCAT12((byte)((ulong)
                                                  uVar26 >> 0x10) & bVar47,
                                                  CONCAT11((byte)((ulong)uVar26 >> 8) & bVar46,
                                                           (byte)uVar26 & bVar44)))))));
        puVar8[10] = CONCAT17((byte)((ulong)uVar23 >> 0x38) & bVar43,
                              CONCAT16((byte)((ulong)uVar23 >> 0x30) & bVar42,
                                       CONCAT15((byte)((ulong)uVar23 >> 0x28) & bVar41,
                                                CONCAT14((byte)((ulong)uVar23 >> 0x20) & bVar39,
                                                         CONCAT13((byte)((ulong)uVar23 >> 0x18) &
                                                                  bVar38,CONCAT12((byte)((ulong)
                                                  uVar23 >> 0x10) & bVar37,
                                                  CONCAT11((byte)((ulong)uVar23 >> 8) & bVar36,
                                                           (byte)uVar23 & bVar34)))))));
      }
      uVar13 = *(undefined8 *)(lVar14 + 0x5e8);
      local_a8 = 0xceb96ab9a24e0b2c;
      local_a0 = "PrimitiveRendererConstantPS";
      local_98 = 0x1b;
      FUN_006cf0a0(auStack_90,&local_a8);
      lVar12 = FUN_00734c00(uVar13,0,auStack_90);
      if (lVar12 == 0) {
        pfVar9 = (float *)0x0;
        lVar12 = 0;
      }
      else {
        iVar2 = *(int *)puVar6;
        *(int *)(lVar12 + 0x138) = iVar2;
        FUN_006f6a10(*(undefined8 *)PTR_DAT_02710460,lVar12);
        lVar12 = lVar12 + (long)iVar2 * 0x70 + 0x58;
        pfVar9 = (float *)thunk_FUN_0199c7e0(lVar12);
      }
      if (local_78 != 0) {
        (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
        local_78 = 0;
      }
      if (pfVar9 != (float *)0x0) {
        uVar1 = *(uint *)(lVar14 + 0x6a0);
        *pfVar9 = (float)(uVar1 & 0xff) / fVar5;
        pfVar9[1] = (float)(uVar1 >> 8 & 0xff) / fVar5;
        pfVar9[2] = (float)(uVar1 >> 0x10 & 0xff) / fVar5;
        pfVar9[3] = (float)(uVar1 >> 0x18) / fVar5;
        uVar1 = *(uint *)(lVar14 + 0x6a4);
        pfVar9[4] = (float)(uVar1 & 0xff) / fVar5;
        pfVar9[5] = (float)(uVar1 >> 8 & 0xff) / fVar5;
        pfVar9[6] = (float)(uVar1 >> 0x10 & 0xff) / fVar5;
        pfVar9[7] = (float)(uVar1 >> 0x18) / fVar5;
      }
      if (*(int *)(param_1 + 0x18) != 1) {
        plVar16 = *(long **)(param_1 + 0x760);
        if (plVar16 == *(long **)(param_1 + 0x768)) {
          FUN_007426b0(param_1 + 0x758,lVar14 + 0x5e8);
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0x770);
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar13;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          lVar11 = *(long *)(lVar14 + 0x5e8);
          *plVar16 = lVar11;
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
          }
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          *(long *)(param_1 + 0x760) = *(long *)(param_1 + 0x760) + 8;
        }
      }
      if (lVar12 != 0) {
        thunk_FUN_0199c800(lVar12);
      }
      if (lVar7 != 0) {
        thunk_FUN_0199c800(lVar7);
      }
      lVar14 = lVar14 + 0x6b0;
    } while (lVar15 != lVar14);
  }
  return;
}


