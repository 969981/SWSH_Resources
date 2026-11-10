/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01166fa0; name: FUN_01166fa0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01166fa0(char *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  int iVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long *plVar33;
  ulong uVar34;
  long *plVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  code *pcVar38;
  undefined8 *puVar39;
  undefined8 uVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined1 *local_fc8;
  long local_f98;
  undefined1 *local_f90;
  char *pcStack_f88;
  undefined8 local_f80;
  long local_f78;
  undefined1 local_f70 [2];
  undefined4 local_f6e;
  undefined2 local_f6a;
  undefined1 local_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 uStack_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 uStack_f08;
  undefined8 local_f00;
  undefined8 uStack_ef8;
  undefined8 local_ef0;
  undefined8 uStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined1 *puStack_e50;
  undefined8 local_e48;
  long local_e40;
  undefined2 local_e38;
  undefined4 local_e30;
  undefined1 local_e2c;
  undefined4 local_e2a;
  undefined8 local_e24;
  undefined1 local_e1c;
  undefined1 auStack_e10 [8];
  undefined2 local_e08;
  undefined2 local_e04;
  undefined4 local_e00;
  undefined2 local_dfc;
  undefined4 local_df8;
  undefined2 local_df4;
  undefined4 local_df0;
  undefined2 local_dec;
  undefined4 local_de8;
  undefined2 local_de4;
  undefined4 local_de0;
  undefined2 local_ddc;
  undefined4 local_dd8;
  undefined2 local_dd4;
  undefined4 local_dd0;
  undefined2 local_dcc;
  undefined4 local_dc8;
  undefined2 local_dc4;
  undefined4 local_dc0;
  undefined2 local_dbc;
  undefined4 local_db8;
  undefined2 local_db4;
  undefined4 local_db0;
  undefined2 local_dac;
  undefined4 local_da8;
  undefined2 local_da4;
  undefined4 local_da0;
  undefined2 local_d9c;
  undefined4 local_d98;
  undefined2 local_d94;
  undefined4 local_d90;
  undefined2 local_d8c;
  undefined4 local_d88;
  undefined2 local_d84;
  undefined4 local_d80;
  undefined2 local_d7c;
  undefined4 local_d78;
  undefined2 local_d74;
  undefined4 local_d70;
  undefined2 local_d6c;
  undefined4 local_d68;
  undefined2 local_d64;
  undefined4 local_d60;
  undefined2 local_d5c;
  undefined4 local_d58;
  undefined2 local_d54;
  undefined4 local_d50;
  undefined2 local_d4c;
  undefined4 local_d48;
  undefined2 local_d44;
  undefined4 local_d40;
  undefined2 local_d3c;
  undefined4 local_d38;
  undefined2 local_d34;
  undefined4 local_d30;
  undefined2 local_d2c;
  undefined4 local_d28;
  undefined2 local_d24;
  undefined4 local_d20;
  undefined2 local_d1c;
  undefined4 local_d18;
  undefined2 local_d14;
  undefined4 local_d10;
  undefined2 local_d0c;
  undefined4 local_d08;
  undefined2 local_d04;
  undefined4 local_d00;
  undefined2 local_cfc;
  undefined4 local_cf8;
  undefined2 local_cf4;
  undefined4 local_cf0;
  undefined2 local_cec;
  undefined4 local_ce8;
  undefined2 local_ce4;
  undefined4 local_ce0;
  undefined2 local_cdc;
  undefined4 local_cd8;
  undefined2 local_cd4;
  undefined4 local_cd0;
  undefined2 local_ccc;
  undefined4 local_cc8;
  undefined2 local_cc4;
  undefined4 local_cc0;
  undefined2 local_cbc;
  undefined4 local_cb8;
  undefined2 local_cb4;
  undefined4 local_cb0;
  undefined2 local_cac;
  undefined4 local_ca8;
  undefined2 local_ca4;
  undefined4 local_ca0;
  undefined2 local_c9c;
  undefined4 local_c98;
  undefined2 local_c94;
  undefined4 local_c90;
  undefined2 local_c8c;
  undefined8 local_c88;
  undefined2 local_c80;
  undefined1 local_c7e;
  undefined4 local_c7d;
  undefined1 local_c79;
  undefined4 local_c63;
  undefined1 local_c5f;
  undefined1 local_c50 [2];
  undefined4 local_c4e;
  undefined2 local_c4a;
  undefined1 local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  undefined8 local_c30;
  undefined8 local_c28;
  undefined8 local_c20;
  undefined8 local_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 local_c00;
  undefined8 local_bf8;
  undefined8 local_bf0;
  undefined8 local_be8;
  undefined8 local_be0;
  undefined8 local_bd8;
  undefined8 local_bd0;
  undefined8 local_bc8;
  undefined8 local_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined8 local_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b70;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined8 local_b50;
  undefined8 local_b48;
  undefined8 local_b40;
  undefined8 local_b38;
  undefined1 *local_b30;
  undefined8 local_b28;
  long local_b20;
  undefined2 local_b18;
  undefined8 local_b10;
  undefined5 uStack_b08;
  undefined3 local_b03;
  undefined5 uStack_b00;
  undefined8 local_af0;
  undefined1 *local_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined1 *local_ad0;
  char *local_ac8;
  undefined8 local_ac0;
  long local_ab8;
  undefined8 local_ab0;
  undefined1 *local_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined4 local_a90;
  undefined6 uStack_a88;
  undefined2 local_a82;
  undefined6 uStack_a80;
  undefined2 uStack_a7a;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined4 local_a58;
  undefined8 local_a50;
  undefined4 local_a48;
  undefined2 local_a44;
  undefined8 local_a40;
  undefined4 local_a38;
  undefined2 local_a34;
  undefined8 local_a30;
  undefined4 local_a28;
  undefined2 local_a24;
  undefined8 local_a20;
  undefined4 local_a18;
  undefined2 local_a14;
  undefined8 local_a10;
  undefined4 local_a08;
  undefined2 local_a04;
  undefined2 local_a00;
  undefined8 local_9f8 [5];
  undefined1 auStack_9d0 [288];
  undefined1 auStack_8b0 [288];
  undefined1 auStack_790 [288];
  undefined1 auStack_670 [288];
  undefined1 auStack_550 [288];
  undefined8 local_430 [6];
  undefined2 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined1 auStack_3d0 [704];
  char local_110 [16];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined8 *local_c0;
  long local_b8;
  long local_b0;
  char local_98 [8];
  long local_90;
  undefined1 *local_88;
  char *local_80;
  undefined8 local_78;
  long local_70;
  
  if ((*(long *)(param_2 + 0x80) == 0) ||
     (puVar31 = *(undefined8 **)(*(long *)(param_2 + 0x80) + 0x60), puVar31 == (undefined8 *)0x0)) {
LAB_01167840:
    *param_1 = '\0';
    return;
  }
  puVar39 = puVar31 + -10;
  (**(code **)*puVar31)();
  uVar32 = FUN_01168be0();
  if (((uVar32 & 1) == 0) || (uVar32 = FUN_0119d960(puVar39), (uVar32 & 1) == 0)) goto LAB_01167840;
  FUN_0119a950(local_98,puVar39);
  if ((local_98[0] == '\0') || (local_90 == 0)) {
    *param_1 = '\0';
    goto joined_r0x01167868;
  }
  uVar44 = *(undefined8 *)PTR_DAT_02710848;
  uVar40 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
  uVar37 = *(undefined8 *)PTR_DAT_02718f20;
  uVar42 = *(undefined8 *)PTR_DAT_027185f8;
  FUN_0120e660(local_110,uVar42);
  if (local_110[0] != '\0') {
    uVar42 = FUN_0120e640(uVar42);
    lVar41 = *(long *)(param_2 + 0x80);
    if ((lVar41 != 0) && (*(int *)(lVar41 + 0x54) != 0)) {
      piVar1 = (int *)(lVar41 + 0x54);
      iVar30 = *(int *)(lVar41 + 0x54);
      do {
        while( true ) {
          uVar32 = FUN_01168be0(*(undefined8 *)(lVar41 + 0x58));
          if ((uVar32 & 1) == 0) goto LAB_011670c0;
          iVar3 = *piVar1;
          if (iVar3 != iVar30) break;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar30 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar43 = 0;
            if (*(long *)(lVar41 + 0x60) != 0) {
              lVar43 = *(long *)(lVar41 + 0x60) + -0x50;
            }
            goto LAB_011670c4;
          }
          iVar30 = iVar3;
          if (iVar3 == 0) goto LAB_011670c0;
        }
        ClearExclusiveLocal();
        iVar30 = iVar3;
      } while (iVar3 != 0);
    }
LAB_011670c0:
    lVar43 = 0;
LAB_011670c4:
    uVar29 = FUN_0119d030(lVar43,uVar42);
    if (lVar43 != 0) {
      (**(code **)(*(long *)(lVar43 + 0x48) + 0x18))((long *)(lVar43 + 0x48));
    }
    puVar6 = PTR_DAT_02715198;
    if ((uVar29 & 0xff) == 0) {
      *param_1 = '\0';
    }
    else {
      local_e08 = 0;
      local_e04 = 0;
      local_e00 = 0;
      local_dfc = 0;
      local_df8 = 0;
      local_df4 = 0;
      local_df0 = 0;
      local_dec = 0;
      local_de8 = 0;
      local_de4 = 0;
      local_de0 = 0;
      local_ddc = 0;
      local_dd8 = 0;
      local_dd4 = 0;
      local_dd0 = 0;
      local_dcc = 0;
      local_dc8 = 0;
      local_dc4 = 0;
      local_dc0 = 0;
      local_dbc = 0;
      local_db8 = 0;
      local_db4 = 0;
      local_db0 = 0;
      local_dac = 0;
      local_da8 = 0;
      local_da4 = 0;
      local_da0 = 0;
      local_d9c = 0;
      local_d98 = 0;
      local_d94 = 0;
      local_d90 = 0;
      local_d8c = 0;
      local_d88 = 0;
      local_d84 = 0;
      local_d80 = 0;
      local_d7c = 0;
      local_d78 = 0;
      local_d74 = 0;
      local_d70 = 0;
      local_d6c = 0;
      local_d68 = 0;
      local_d64 = 0;
      local_d60 = 0;
      local_d5c = 0;
      local_d58 = 0;
      local_d54 = 0;
      local_d50 = 0;
      local_d4c = 0;
      local_d48 = 0;
      local_d44 = 0;
      local_d40 = 0;
      local_d3c = 0;
      local_d38 = 0;
      local_d34 = 0;
      local_d30 = 0;
      local_d2c = 0;
      local_d28 = 0;
      local_d24 = 0;
      local_d20 = 0;
      local_d1c = 0;
      local_d18 = 0;
      local_d14 = 0;
      local_d10 = 0;
      local_d0c = 0;
      local_d08 = 0;
      local_d04 = 0;
      local_d00 = 0;
      local_cfc = 0;
      local_cf8 = 0;
      local_cf4 = 0;
      local_cf0 = 0;
      local_cec = 0;
      local_ce8 = 0;
      local_ce4 = 0;
      local_ce0 = 0;
      local_cdc = 0;
      local_cd8 = 0;
      local_cd4 = 0;
      local_cd0 = 0;
      local_ccc = 0;
      local_cc8 = 0;
      local_cc4 = 0;
      local_cc0 = 0;
      local_cbc = 0;
      local_cb8 = 0;
      local_cb4 = 0;
      local_cb0 = 0;
      local_cac = 0;
      local_ca8 = 0;
      local_ca4 = 0;
      local_ca0 = 0;
      local_c9c = 0;
      local_c98 = 0;
      local_c94 = 0;
      local_c90 = 0;
      local_c8c = 0;
      local_c88 = 0;
      local_c7e = 0;
      local_c80 = 0;
      local_c7d = 0x301;
      local_c79 = 0;
      local_c63 = 0;
      local_c5f = 0;
      local_b38 = 0xcbf29ce484222645;
      local_b30 = &DAT_01d38550;
      local_b20 = 0;
      local_b28 = 0;
      local_c50[0] = 0;
      local_c4e = 0;
      local_c48 = 0;
      local_c4a = 0;
      local_b48 = 0;
      local_b50 = 0;
      local_b58 = 0;
      local_b60 = 0;
      local_b68 = 0;
      local_b70 = 0;
      local_b78 = 0;
      local_b80 = 0;
      local_b88 = 0;
      local_b90 = 0;
      local_b98 = 0;
      local_ba0 = 0;
      local_ba8 = 0;
      local_bb0 = 0;
      local_bb8 = 0;
      local_bc0 = 0;
      local_bc8 = 0;
      local_bd0 = 0;
      local_bd8 = 0;
      local_be0 = 0;
      local_be8 = 0;
      local_bf0 = 0;
      local_bf8 = 0;
      local_c00 = 0;
      local_c08 = 0;
      local_c10 = 0;
      local_c18 = 0;
      local_c20 = 0;
      local_c28 = 0;
      local_c30 = 0;
      local_c38 = 0;
      local_c40 = 0;
      local_b40 = 0xcbf29ce484222645;
      if ((*PTR_DAT_02715198 & 1) == 0) {
        iVar30 = __cxa_guard_acquire(PTR_DAT_02715198);
        puVar7 = PTR_DAT_027151a0;
        if (iVar30 != 0) {
          *(undefined8 *)PTR_DAT_027151a0 = 0xcbf29ce484222645;
          *(undefined1 **)(puVar7 + 8) = &DAT_01d38550;
          *(undefined8 *)(puVar7 + 0x10) = 0;
          *(undefined8 *)(puVar7 + 0x18) = 0;
          FUN_001001c0(PTR_LAB_027151a8,puVar7,&PTR_LOOP_025db000);
          __cxa_guard_release(PTR_DAT_02715198);
        }
      }
      puVar7 = PTR_DAT_027151a0;
      local_b38 = *(undefined8 *)PTR_DAT_027151a0;
      local_b30 = *(undefined1 **)(PTR_DAT_027151a0 + 8);
      local_b28 = *(undefined8 *)(PTR_DAT_027151a0 + 0x10);
      lVar41 = *(long *)(PTR_DAT_027151a0 + 0x18);
      if (lVar41 != 0) {
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
      }
      if (local_b20 != 0) {
        plVar33 = (long *)(local_b20 + 0x48);
        local_b20 = lVar41;
        (**(code **)(*plVar33 + 0x18))();
        lVar41 = local_b20;
      }
      local_b20 = lVar41;
      local_f70[0] = 0;
      local_b18 = 0;
      local_af0 = 0xcbf29ce484222645;
      local_ae8 = &DAT_01d38550;
      local_ad8 = 0;
      local_ae0 = 0;
      local_ad0 = (undefined1 *)0xcbf29ce484222645;
      local_ac8 = "";
      local_ab8 = 0;
      local_ac0 = 0;
      local_ab0 = 0xcbf29ce484222645;
      local_aa8 = &DAT_01d38550;
      local_a98 = 0;
      local_aa0 = 0;
      local_a90 = 0xffffffff;
      local_a60 = 0;
      local_a68 = 0;
      local_a70 = 0;
      local_a78 = 0;
      uStack_a80 = 0;
      uStack_a88 = 0;
      local_a82 = 0;
      local_a50 = 0;
      local_a44 = 0xffff;
      local_a48 = 0xffffffff;
      local_a40 = 0;
      local_a34 = 0xffff;
      local_a38 = 0xffffffff;
      local_a30 = 0;
      local_a24 = 0xffff;
      local_a28 = 0xffffffff;
      local_a20 = 0;
      local_a14 = 0xffff;
      local_a18 = 0xffffffff;
      local_a10 = 0;
      local_a04 = 0xffff;
      local_a08 = 0xffffffff;
      local_9f8[4] = 0;
      local_9f8[3] = 0;
      local_9f8[2] = 0;
      local_9f8[1] = 0;
      local_9f8[0] = 0;
      local_430[4] = 0;
      local_430[3] = 0;
      local_430[2] = 0;
      local_430[1] = 0;
      local_430[0] = 0;
      local_3d8 = 0;
      local_3e0 = 0;
      local_3e8 = 0;
      local_3f0 = 0;
      local_3f8 = 0;
      local_f68 = 0;
      local_f6a = 0;
      local_f6e = 0;
      local_e60 = 0xcbf29ce484222645;
      local_e58 = 0xcbf29ce484222645;
      puStack_e50 = &DAT_01d38550;
      local_e48 = 0;
      local_e40 = 0;
      local_e70 = 0;
      uStack_e68 = 0;
      local_e80 = 0;
      uStack_e78 = 0;
      local_e90 = 0;
      uStack_e88 = 0;
      local_ea0 = 0;
      uStack_e98 = 0;
      local_eb0 = 0;
      uStack_ea8 = 0;
      local_ec0 = 0;
      uStack_eb8 = 0;
      local_ed0 = 0;
      uStack_ec8 = 0;
      local_ee0 = 0;
      uStack_ed8 = 0;
      local_ef0 = 0;
      uStack_ee8 = 0;
      local_f00 = 0;
      uStack_ef8 = 0;
      local_f10 = 0;
      uStack_f08 = 0;
      local_f20 = 0;
      uStack_f18 = 0;
      local_f30 = 0;
      uStack_f28 = 0;
      local_f40 = 0;
      uStack_f38 = 0;
      local_f50 = 0;
      uStack_f48 = 0;
      local_f60 = 0;
      uStack_f58 = 0;
      if (((*puVar6 & 1) == 0) && (iVar30 = __cxa_guard_acquire(PTR_DAT_02715198), iVar30 != 0)) {
        *(undefined8 *)puVar7 = 0xcbf29ce484222645;
        *(undefined1 **)(puVar7 + 8) = &DAT_01d38550;
        *(undefined8 *)(puVar7 + 0x10) = 0;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        FUN_001001c0(PTR_LAB_027151a8,puVar7,&PTR_LOOP_025db000);
        __cxa_guard_release(PTR_DAT_02715198);
      }
      local_e58 = *(undefined8 *)puVar7;
      puStack_e50 = *(undefined1 **)(puVar7 + 8);
      local_e48 = *(undefined8 *)(puVar7 + 0x10);
      lVar41 = *(long *)(puVar7 + 0x18);
      if (lVar41 != 0) {
        (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
      }
      if (local_e40 != 0) {
        plVar33 = (long *)(local_e40 + 0x48);
        local_e40 = lVar41;
        (**(code **)(*plVar33 + 0x18))();
        lVar41 = local_e40;
      }
      local_e40 = lVar41;
      local_e38 = 0;
      local_88 = &DAT_cc7b5e39ed4396ae;
      local_80 = "NONE_NONE";
      local_78 = 9;
      local_70 = 0;
      FUN_010011e0(&local_88,local_f70);
      if (local_70 != 0) {
        (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
        local_70 = 0;
      }
      local_e2a = 0;
      local_e2c = 0;
      local_e30 = 0;
      local_e24 = 0;
      local_e1c = 0;
      local_f90 = &DAT_cc7b5e39ed4396ae;
      pcStack_f88 = "NONE_NONE";
      local_f80 = 9;
      local_f78 = 0;
      FUN_010011e0(&local_f90,local_f70);
      if (local_f78 != 0) {
        (**(code **)(*(long *)(local_f78 + 0x48) + 0x18))();
        local_f78 = 0;
      }
      uVar32 = FUN_012092f0(*(undefined8 *)PTR_DAT_02710880);
      lVar41 = *(long *)(param_2 + 0x80);
      if ((lVar41 != 0) && (*(int *)(lVar41 + 0x54) != 0)) {
        piVar1 = (int *)(lVar41 + 0x54);
        iVar30 = *(int *)(lVar41 + 0x54);
        do {
          while( true ) {
            uVar34 = FUN_01168be0(*(undefined8 *)(lVar41 + 0x58));
            if ((uVar34 & 1) == 0) goto LAB_01167634;
            iVar3 = *piVar1;
            if (iVar3 != iVar30) break;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar30 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar43 = 0;
              if (*(long *)(lVar41 + 0x60) != 0) {
                lVar43 = *(long *)(lVar41 + 0x60) + -0x50;
              }
              goto LAB_01167638;
            }
            iVar30 = iVar3;
            if (iVar3 == 0) goto LAB_01167634;
          }
          ClearExclusiveLocal();
          iVar30 = iVar3;
        } while (iVar3 != 0);
      }
LAB_01167634:
      lVar43 = 0;
LAB_01167638:
      FUN_0119bf70(&local_88,lVar43,uVar42);
      uVar36 = 1;
      if ((uVar32 & 1) != 0) {
        uVar36 = 2;
      }
      FUN_008e7700(auStack_e10,uVar44,local_88,local_f70,uVar36,uVar29 >> 8 & 0xff,uVar40);
      if (local_88 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = (undefined1 *)0x0;
      }
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x18))((long *)(lVar43 + 0x48));
      }
      if (local_b8 != 0) {
        puVar2 = local_c0 + local_b8;
        puVar31 = local_c0;
        do {
          lVar41 = *(long *)(param_2 + 0x80);
          if ((lVar41 != 0) && (*(int *)(lVar41 + 0x54) != 0)) {
            piVar1 = (int *)(lVar41 + 0x54);
            iVar30 = *(int *)(lVar41 + 0x54);
            do {
              while( true ) {
                uVar32 = FUN_01168be0(*(undefined8 *)(lVar41 + 0x58));
                if ((uVar32 & 1) == 0) goto LAB_01167704;
                iVar3 = *piVar1;
                if (iVar3 != iVar30) break;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar30 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') {
                  lVar43 = 0;
                  if (*(long *)(lVar41 + 0x60) != 0) {
                    lVar43 = *(long *)(lVar41 + 0x60) + -0x50;
                  }
                  goto LAB_01167708;
                }
                iVar30 = iVar3;
                if (iVar3 == 0) goto LAB_01167704;
              }
              ClearExclusiveLocal();
              iVar30 = iVar3;
            } while (iVar3 != 0);
          }
LAB_01167704:
          lVar43 = 0;
LAB_01167708:
          uVar32 = FUN_0119d030(lVar43,*puVar31);
          if (lVar43 != 0) {
            (**(code **)(*(long *)(lVar43 + 0x48) + 0x18))((long *)(lVar43 + 0x48));
          }
          if (((uVar32 & 0xff) == 0) ||
             (FUN_011ffbe0(&local_88,uVar37,*puVar31), local_88 == (undefined1 *)0x0)) {
            *param_1 = '\0';
            goto joined_r0x01167900;
          }
          uVar32 = uVar32 >> 8 & 0xff;
          FUN_01524b60(local_430[uVar32],*(undefined8 *)(local_88 + 8));
          plVar33 = (long *)local_9f8[uVar32];
          lVar43 = *(long *)(param_2 + 0x80);
          lVar41 = 0;
          if (lVar43 != 0) {
            if (*(int *)(lVar43 + 0x54) != 0) {
              piVar1 = (int *)(lVar43 + 0x54);
              iVar30 = *(int *)(lVar43 + 0x54);
              do {
                while( true ) {
                  uVar32 = FUN_01168be0(*(undefined8 *)(lVar43 + 0x58));
                  if ((uVar32 & 1) == 0) goto LAB_011677b4;
                  iVar3 = *piVar1;
                  if (iVar3 != iVar30) break;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar30 + 1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                  if (cVar4 == '\0') {
                    lVar41 = 0;
                    if (*(long *)(lVar43 + 0x60) != 0) {
                      lVar41 = *(long *)(lVar43 + 0x60) + -0x50;
                    }
                    goto LAB_011677b8;
                  }
                  iVar30 = iVar3;
                  if (iVar3 == 0) goto LAB_011677b4;
                }
                ClearExclusiveLocal();
                iVar30 = iVar3;
              } while (iVar3 != 0);
            }
LAB_011677b4:
            lVar41 = 0;
          }
LAB_011677b8:
          FUN_0119bf70(&local_f98,lVar41,*puVar31);
          (**(code **)(*plVar33 + 0x68))(plVar33,local_f98);
          if (local_f98 != 0) {
            (**(code **)(*(long *)(local_f98 + 0x48) + 0x18))();
            local_f98 = 0;
          }
          if (lVar41 != 0) {
            (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
          }
          puVar31 = puVar31 + 1;
        } while (puVar31 != puVar2);
      }
      if (*(long *)(param_2 + 0x68) == 0) {
        uVar32 = FUN_01164670(0);
      }
      else {
        puVar31 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60);
        if (puVar31 != (undefined8 *)0x0) {
          plVar33 = (long *)(**(code **)*puVar31)(puVar31);
          plVar35 = (long *)FUN_01153d60();
          if (plVar33 != (long *)0x0) {
            do {
              if (plVar33 == plVar35) {
                uVar32 = FUN_01164670(puVar31 + -10);
                goto joined_r0x01167dd0;
              }
              plVar33 = (long *)*plVar33;
            } while (plVar33 != (long *)0x0);
            uVar32 = FUN_01164670(0);
            goto joined_r0x01167dd0;
          }
        }
        uVar32 = FUN_01164670(0);
      }
joined_r0x01167dd0:
      if ((uVar32 & 1) != 0) {
        FUN_008e7940(auStack_e10);
      }
      local_fc8 = local_c50;
      FUN_008e9bd0(auStack_e10,local_90,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 8));
      FUN_0119d970(&local_88,puVar39);
      local_ad0 = local_88;
      local_ac8 = local_80;
      local_ac0 = local_78;
      if (local_ab8 != 0) {
        (**(code **)(*(long *)(local_ab8 + 0x48) + 0x18))();
        local_ab8 = 0;
      }
      lVar43 = local_70;
      uVar19 = local_a50;
      uVar36 = local_a90;
      uVar18 = local_a98;
      uVar17 = local_aa0;
      puVar16 = local_aa8;
      uVar15 = local_ab0;
      uVar14 = local_ac0;
      pcVar13 = local_ac8;
      puVar12 = local_ad0;
      uVar11 = local_ad8;
      uVar44 = local_ae0;
      puVar10 = local_ae8;
      uVar42 = local_af0;
      uVar9 = local_b18;
      lVar41 = local_b20;
      uVar40 = local_b28;
      puVar8 = local_b30;
      uVar37 = local_b38;
      *param_1 = '\0';
      memcpy(param_1 + 0x10,auStack_e10,0x1b2);
      memcpy(param_1 + 0x1d0,local_fc8,0x118);
      uVar28 = local_9f8[4];
      uVar27 = local_9f8[3];
      uVar26 = local_9f8[2];
      uVar25 = local_9f8[1];
      uVar24 = local_9f8[0];
      uVar23 = local_a10;
      uVar22 = local_a20;
      uVar21 = local_a30;
      uVar20 = local_a40;
      *(undefined8 *)(param_1 + 0x2e8) = uVar37;
      local_b20 = 0;
      *(undefined1 **)(param_1 + 0x2f0) = puVar8;
      *(undefined8 *)(param_1 + 0x2f8) = uVar40;
      *(long *)(param_1 + 0x300) = lVar41;
      *(undefined2 *)(param_1 + 0x308) = uVar9;
      *(ulong *)(param_1 + 0x31d) = CONCAT53(uStack_b00,local_b03);
      *(undefined8 *)(param_1 + 0x310) = local_b10;
      *(undefined8 *)(param_1 + 0x348) = uVar11;
      *(undefined1 **)(param_1 + 0x350) = puVar12;
      *(char **)(param_1 + 0x358) = pcVar13;
      *(undefined8 *)(param_1 + 0x360) = uVar14;
      *(long *)(param_1 + 0x368) = lVar43;
      *(undefined8 *)(param_1 + 0x370) = uVar15;
      *(undefined1 **)(param_1 + 0x378) = puVar16;
      *(undefined8 *)(param_1 + 0x380) = uVar17;
      *(undefined8 *)(param_1 + 0x388) = uVar18;
      local_ad8 = 0;
      local_ab8 = 0;
      local_a98 = 0;
      *(ulong *)(param_1 + 0x318) = CONCAT35(local_b03,uStack_b08);
      *(undefined8 *)(param_1 + 0x3a8) = local_a78;
      *(undefined8 *)(param_1 + 0x340) = uVar44;
      *(undefined8 *)(param_1 + 0x330) = uVar42;
      *(undefined1 **)(param_1 + 0x338) = puVar10;
      *(undefined4 *)(param_1 + 0x3c8) = local_a58;
      *(undefined8 *)(param_1 + 0x3b0) = local_a70;
      *(undefined4 *)(param_1 + 0x390) = uVar36;
      *(ulong *)(param_1 + 0x3a0) = CONCAT26(uStack_a7a,uStack_a80);
      *(ulong *)(param_1 + 0x398) = CONCAT26(local_a82,uStack_a88);
      local_a50 = 0;
      *(undefined8 *)(param_1 + 0x3c0) = local_a60;
      *(undefined8 *)(param_1 + 0x3b8) = local_a68;
      *(undefined8 *)(param_1 + 0x3d0) = uVar19;
      *(undefined2 *)(param_1 + 0x3dc) = local_a44;
      *(undefined4 *)(param_1 + 0x3d8) = local_a48;
      local_a40 = 0;
      *(undefined8 *)(param_1 + 0x3e0) = uVar20;
      *(undefined2 *)(param_1 + 0x3ec) = local_a34;
      *(undefined4 *)(param_1 + 1000) = local_a38;
      local_a30 = 0;
      *(undefined8 *)(param_1 + 0x3f0) = uVar21;
      *(undefined2 *)(param_1 + 0x3fc) = local_a24;
      *(undefined4 *)(param_1 + 0x3f8) = local_a28;
      local_a20 = 0;
      *(undefined8 *)(param_1 + 0x400) = uVar22;
      *(undefined2 *)(param_1 + 0x40c) = local_a14;
      *(undefined4 *)(param_1 + 0x408) = local_a18;
      local_a10 = 0;
      *(undefined8 *)(param_1 + 0x410) = uVar23;
      *(undefined4 *)(param_1 + 0x418) = local_a08;
      *(undefined2 *)(param_1 + 0x420) = local_a00;
      local_9f8[0] = 0;
      *(undefined8 *)(param_1 + 0x428) = uVar24;
      local_9f8[1] = 0;
      *(undefined8 *)(param_1 + 0x430) = uVar25;
      local_9f8[2] = 0;
      *(undefined8 *)(param_1 + 0x438) = uVar26;
      local_9f8[3] = 0;
      *(undefined8 *)(param_1 + 0x440) = uVar27;
      *(undefined2 *)(param_1 + 0x41c) = local_a04;
      local_9f8[4] = 0;
      *(undefined8 *)(param_1 + 0x448) = uVar28;
      memcpy(param_1 + 0x450,auStack_9d0,0x120);
      memcpy(param_1 + 0x570,auStack_8b0,0x120);
      memcpy(param_1 + 0x690,auStack_790,0x120);
      memcpy(param_1 + 0x7b0,auStack_670,0x120);
      memcpy(param_1 + 0x8d0,auStack_550,0x120);
      uVar15 = local_3d8;
      uVar14 = local_3e0;
      uVar11 = local_3e8;
      uVar44 = local_3f8;
      uVar42 = local_430[4];
      uVar40 = local_430[2];
      uVar37 = local_430[0];
      local_430[0] = 0;
      *(undefined8 *)(param_1 + 0x9f0) = uVar37;
      local_430[2] = 0;
      *(undefined8 *)(param_1 + 0xa00) = uVar40;
      local_430[4] = 0;
      *(undefined8 *)(param_1 + 0xa10) = uVar42;
      *(undefined2 *)(param_1 + 0xa20) = local_400;
      local_3f8 = 0;
      *(undefined8 *)(param_1 + 0xa28) = uVar44;
      *(undefined8 *)(param_1 + 0x9f8) = local_430[1];
      *(undefined8 *)(param_1 + 0xa08) = local_430[3];
      local_430[1] = 0;
      local_430[3] = 0;
      *(undefined8 *)(param_1 + 0xa18) = local_430[5];
      *(undefined8 *)(param_1 + 0xa30) = local_3f0;
      local_3e8 = 0;
      *(undefined8 *)(param_1 + 0xa38) = uVar11;
      local_3e0 = 0;
      *(undefined8 *)(param_1 + 0xa40) = uVar14;
      local_3f0 = 0;
      local_3d8 = 0;
      *(undefined8 *)(param_1 + 0xa48) = uVar15;
      memcpy(param_1 + 0xa50,auStack_3d0,0x2b8);
      *param_1 = '\x01';
joined_r0x01167900:
      if (local_e40 != 0) {
        (**(code **)(*(long *)(local_e40 + 0x48) + 0x18))();
        local_e40 = 0;
      }
      FUN_01003170(auStack_e10);
    }
    if (local_110[0] == '\0') goto joined_r0x01167868;
    if (local_b0 != 0) {
      (**(code **)(*local_100 + 0x18))(local_100,local_c0,local_b0 << 3,8);
    }
    param_1 = local_110;
    if (alStack_f0 == local_d0) {
      pcVar38 = *(code **)(*local_d0 + 0x20);
    }
    else {
      if (local_d0 == (long *)0x0) goto LAB_01167d68;
      pcVar38 = *(code **)(*local_d0 + 0x28);
    }
    (*pcVar38)();
  }
LAB_01167d68:
  *param_1 = '\0';
joined_r0x01167868:
  if (local_98[0] == '\0') {
    return;
  }
  if (local_90 == 0) {
    return;
  }
  (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  return;
}


