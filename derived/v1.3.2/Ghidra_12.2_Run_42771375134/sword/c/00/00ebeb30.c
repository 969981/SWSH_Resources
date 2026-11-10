/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebeb30; name: FUN_00ebeb30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ebeb30(long param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  bool bVar33;
  bool bVar34;
  undefined *puVar35;
  undefined *puVar36;
  int iVar37;
  undefined4 uVar38;
  uint uVar39;
  long lVar40;
  long *plVar41;
  long lVar42;
  ulong uVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  long *plVar47;
  long lVar48;
  undefined8 *puVar49;
  long *plVar50;
  undefined8 uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  byte bVar83;
  undefined1 uVar84;
  byte bVar85;
  undefined1 uVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  undefined8 uVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined8 uVar101;
  float fVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  undefined4 uVar118;
  undefined8 uVar119;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  long local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  lVar48 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar48 != 0) {
    (**(code **)(*(long *)(lVar48 + 0x48) + 0x10))();
  }
  lVar40 = FUN_00a89ad0(*(undefined8 *)(param_1 + 200),&local_110);
  FUN_00dfb1f0(&local_110,*(undefined8 *)(param_1 + 0xb0));
  if (local_110 == 0) {
    plVar41 = (long *)0x0;
    lVar42 = *(long *)(param_1 + 0x770);
    if (lVar42 != 0) goto LAB_00ebebf4;
LAB_00ebec2c:
    plVar46 = (long *)0x0;
    lVar42 = *(long *)(*(long *)(param_1 + 0xb0) + 0x50);
    if (lVar42 == 0) goto LAB_00ebec94;
LAB_00ebec3c:
    plVar50 = (long *)(lVar42 + 0x48);
    (**(code **)(*plVar50 + 0x10))(plVar50);
    lVar42 = *(long *)(lVar42 + 0x60);
    if (lVar42 == 0) {
      plVar47 = (long *)0x0;
    }
    else {
      uVar43 = FUN_00dfefc0(lVar42);
      plVar47 = (long *)(lVar42 + -0x50);
      if ((uVar43 & 1) == 0) {
        plVar47 = (long *)0x0;
      }
    }
    (**(code **)(*plVar50 + 0x18))(plVar50);
    if (plVar47 == (long *)0x0) goto LAB_00ebec94;
    lVar42 = *(long *)(*(long *)(param_1 + 0xb0) + 0x58);
    if (lVar42 != 0) goto LAB_00ebecfc;
LAB_00ebed84:
    puVar36 = PTR_DAT_0271ee58;
    puVar35 = PTR_DAT_0271ee50;
    puVar49 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0);
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    if (puVar49 == puVar2) {
      plVar50 = (long *)0x0;
    }
    else {
      do {
        plVar50 = (long *)*puVar49;
        plVar45 = (long *)(**(code **)plVar50[10])(plVar50 + 10);
        if (((*puVar35 & 1) == 0) && (iVar37 = __cxa_guard_acquire(puVar35), iVar37 != 0)) {
          uVar51 = FUN_00a89c30();
          *(undefined8 *)puVar36 = uVar51;
          __cxa_guard_release(puVar35);
        }
        for (; plVar45 != (long *)0x0; plVar45 = (long *)*plVar45) {
          if (plVar45 == (long *)puVar36) {
            uVar43 = (**(code **)(*(long *)*puVar49 + 0x88))();
            if ((uVar43 & 1) == 0) goto LAB_00ebee60;
            break;
          }
        }
        puVar49 = puVar49 + 1;
      } while (puVar49 != puVar2);
      plVar50 = (long *)0x0;
    }
  }
  else {
    puVar49 = *(undefined8 **)(local_110 + 0x60);
    if (puVar49 != (undefined8 *)0x0) {
      plVar41 = (long *)(**(code **)*puVar49)(puVar49);
      lVar42 = FUN_00a89c30();
      for (; plVar41 != (long *)0x0; plVar41 = (long *)*plVar41) {
        if (plVar41 == (long *)lVar42) {
          plVar41 = puVar49 + -10;
          goto joined_r0x00ebed64;
        }
      }
    }
    plVar41 = (long *)0x0;
joined_r0x00ebed64:
    if (local_110 != 0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = 0;
    }
    lVar42 = *(long *)(param_1 + 0x770);
    if (lVar42 == 0) goto LAB_00ebec2c;
LAB_00ebebf4:
    lVar42 = *(long *)(lVar42 + 0x60);
    if (lVar42 == 0) goto LAB_00ebec2c;
    uVar43 = FUN_0156b540(lVar42);
    plVar46 = (long *)(lVar42 + -0x50);
    if ((uVar43 & 1) == 0) {
      plVar46 = (long *)0x0;
    }
    lVar42 = *(long *)(*(long *)(param_1 + 0xb0) + 0x50);
    if (lVar42 != 0) goto LAB_00ebec3c;
LAB_00ebec94:
    puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    for (puVar49 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar49 != puVar2;
        puVar49 = puVar49 + 1) {
      plVar47 = (long *)*puVar49;
      uVar43 = FUN_00dfefc0(plVar47 + 10);
      if (((uVar43 & 1) != 0) &&
         (uVar43 = (**(code **)(*(long *)*puVar49 + 0x88))(), (uVar43 & 1) == 0)) {
        lVar42 = *(long *)(*(long *)(param_1 + 0xb0) + 0x58);
        goto joined_r0x00ebecf8;
      }
    }
    plVar47 = (long *)0x0;
    lVar42 = *(long *)(*(long *)(param_1 + 0xb0) + 0x58);
joined_r0x00ebecf8:
    if (lVar42 == 0) goto LAB_00ebed84;
LAB_00ebecfc:
    plVar45 = (long *)(lVar42 + 0x48);
    (**(code **)(*plVar45 + 0x10))(plVar45);
    plVar50 = *(long **)(lVar42 + 0x60);
    if (plVar50 != (long *)0x0) {
      plVar44 = (long *)(**(code **)*plVar50)(plVar50);
      if (((*PTR_DAT_0271ee50 & 1) == 0) &&
         (iVar37 = __cxa_guard_acquire(PTR_DAT_0271ee50), iVar37 != 0)) {
        uVar51 = FUN_00a89c30();
        *(undefined8 *)PTR_DAT_0271ee58 = uVar51;
        __cxa_guard_release(PTR_DAT_0271ee50);
      }
      for (; plVar44 != (long *)0x0; plVar44 = (long *)*plVar44) {
        if (plVar44 == (long *)PTR_DAT_0271ee58) {
          plVar50 = plVar50 + -10;
          goto LAB_00ebed70;
        }
      }
      plVar50 = (long *)0x0;
    }
LAB_00ebed70:
    (**(code **)(*plVar45 + 0x18))(plVar45);
    if (plVar50 == (long *)0x0) goto LAB_00ebed84;
  }
LAB_00ebee60:
  local_80 = *(long *)PTR_DAT_0271ef60;
  uStack_78 = (undefined1)*(undefined8 *)(PTR_DAT_0271ef60 + 8);
  uStack_77 = (undefined7)((ulong)*(undefined8 *)(PTR_DAT_0271ef60 + 8) >> 8);
  if (plVar46 == (long *)0x0) {
    if (lVar40 == 0) {
      bVar34 = false;
      bVar33 = false;
      cVar3 = *(char *)(param_1 + 0x618);
    }
    else {
      if (*(int *)(lVar40 + 0x3b0) != 0) {
        local_80 = *(long *)PTR_DAT_0271ef68;
        uStack_78 = (undefined1)*(undefined8 *)(PTR_DAT_0271ef68 + 8);
        uStack_77 = (undefined7)((ulong)*(undefined8 *)(PTR_DAT_0271ef68 + 8) >> 8);
        goto LAB_00ebeec0;
      }
      bVar33 = false;
LAB_00ebf1d4:
      plVar45 = plVar47;
      if (*(char *)(*(long *)(param_1 + 0xa8) + 0x351) != '\0') {
        plVar45 = plVar50;
      }
      if ((((plVar46 != (long *)0x0) && (plVar45 != (long *)0x0)) &&
          (uVar43 = (**(code **)(*plVar46 + 0x70))(plVar46), (uVar43 & 1) != 0)) &&
         (uVar43 = (**(code **)(*plVar45 + 0x70))(plVar45), (uVar43 & 1) != 0)) {
        FUN_00e13e60(*(undefined8 *)(param_1 + 0xa8),&local_80,plVar45 + 0x16,plVar45 + 0x14);
      }
      bVar34 = true;
      cVar3 = *(char *)(param_1 + 0x618);
    }
  }
  else {
    uStack_78 = (undefined1)plVar46[0x17];
    uStack_77 = (undefined7)((ulong)plVar46[0x17] >> 8);
    local_80 = plVar46[0x16];
    if ((plVar41 != (long *)0x0) && (*(char *)(param_1 + 0x618) == '\0')) {
      lVar52 = FUN_00e813b0(plVar46 + 10);
      lVar42 = plVar41[0x15];
      *(long *)(lVar52 + 0x5d0) = plVar41[0x14];
      *(long *)(lVar52 + 0x5d8) = lVar42;
    }
    if (lVar40 == 0) {
      bVar34 = false;
      bVar33 = true;
      cVar3 = *(char *)(param_1 + 0x618);
    }
    else {
      if (*(int *)(lVar40 + 0x3b0) == 0) {
        bVar33 = true;
        goto LAB_00ebf1d4;
      }
LAB_00ebeec0:
      FUN_00e13e60(*(undefined8 *)(param_1 + 0xa8),&local_80,PTR_DAT_02715088,PTR_DAT_027152c0);
      bVar34 = true;
      bVar33 = true;
      cVar3 = *(char *)(param_1 + 0x618);
    }
  }
  if (cVar3 == '\0') {
    plVar45 = *(long **)(*(long *)(param_1 + 0xa8) + 0x148);
    plVar44 = *(long **)(*(long *)(param_1 + 0xa8) + 0x150);
    if (((plVar44 != plVar45) && ((long)plVar44 - (long)plVar45 == 8)) &&
       (lVar42 = *plVar45, lVar42 != 0)) {
      uVar51 = *(undefined8 *)PTR_DAT_027202a0;
      local_88 = *(long *)(lVar42 + 0x3a0);
      local_110 = *(undefined8 *)(lVar42 + 0x620);
      uStack_108 = *(undefined **)(lVar42 + 0x628);
      local_100 = *(undefined8 *)(lVar42 + 0x630);
      local_f8 = *(long *)(lVar42 + 0x638);
      if (local_f8 != 0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x10))();
      }
      FUN_00ecb400(uVar51,&local_88,&local_110,0);
      if (local_f8 != 0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
        local_f8 = 0;
      }
      uVar38 = *(undefined4 *)(lVar42 + 0x664);
      lVar52 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
      if (lVar52 != 0) {
        (**(code **)(*(long *)(lVar52 + 0x48) + 0x10))();
      }
      uVar43 = FUN_010198e0(lVar52);
      if ((uVar43 & 1) == 0) {
        FUN_0106ad60(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0xd0),uVar38);
      }
      local_110 = *(long *)(lVar42 + 0x648);
      if (local_110 != *(long *)PTR_DAT_02720270) {
        FUN_01027aa0(*(undefined8 *)(lVar48 + 0x790),&local_110);
        lVar53 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1c0);
        if (lVar53 != 0) {
          (**(code **)(*(long *)(lVar53 + 0x48) + 0x10))();
        }
        if (*(long *)(lVar42 + 0x3a0) != *(long *)(lVar53 + 0x68)) {
          local_90 = *(long *)(lVar42 + 0x3a0);
          local_88 = *(long *)(lVar53 + 0x68);
          FUN_014b1220(&local_88,&local_90);
          *(undefined8 *)(lVar53 + 0x68) = *(undefined8 *)(lVar42 + 0x3a0);
        }
        (**(code **)(*(long *)(lVar53 + 0x48) + 0x18))((long *)(lVar53 + 0x48));
      }
      plVar45 = (long *)PTR_DAT_02720270;
      uVar43 = FUN_00d93eb0(*(undefined8 *)PTR_DAT_02710868,0);
      if ((uVar43 & 1) != 0) {
        if (((*(char *)(lVar42 + 0x641) != '\0') && (local_110 != -0x340d631b7bddd9bb)) &&
           (local_110 != *(long *)(param_1 + 0x98))) {
          lVar53 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
          if (lVar53 != 0) {
            (**(code **)(*(long *)(lVar53 + 0x48) + 0x10))();
          }
          if (*(char *)(lVar53 + 0x350) != '\0') {
            FUN_016b0ec0(*(undefined8 *)(param_1 + 0x630));
          }
          (**(code **)(*(long *)(lVar53 + 0x48) + 0x18))((long *)(lVar53 + 0x48));
          plVar45 = (long *)PTR_DAT_02720270;
        }
        if (local_110 != *plVar45) {
          *(long *)(param_1 + 0x98) = local_110;
        }
      }
      if (*(long *)(param_1 + 0xa0) != *(long *)(lVar42 + 0x3a0)) {
        *(long *)(param_1 + 0xa0) = *(long *)(lVar42 + 0x3a0);
        local_88 = *(long *)(lVar42 + 0x3a0);
        uVar43 = FUN_01009850(lVar48,&local_88,0,0);
        if ((uVar43 & 1) != 0) {
          if (*(long *)(lVar42 + 0x3a0) != -0x3b7ee4555d34847a) {
            lVar53 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1c0);
            if (lVar53 == 0) {
              _DAT_00000060 = *(long *)(lVar42 + 0x3a0);
            }
            else {
              plVar45 = (long *)(lVar53 + 0x48);
              (**(code **)(*plVar45 + 0x10))(plVar45);
              *(undefined8 *)(lVar53 + 0x60) = *(undefined8 *)(lVar42 + 0x3a0);
              (**(code **)(*plVar45 + 0x18))(plVar45);
            }
          }
        }
        lVar53 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar53 != 0) {
          (**(code **)(*(long *)(lVar53 + 0x48) + 0x10))();
        }
        lVar54 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
        if (lVar54 != 0) {
          (**(code **)(*(long *)(lVar54 + 0x48) + 0x10))();
        }
        if (lVar53 != 0) {
          (**(code **)(*(long *)(lVar53 + 0x48) + 0x18))((long *)(lVar53 + 0x48));
        }
        if (lVar54 != 0) {
          if (*(char *)(param_1 + 0x790) != '\0') {
            uVar51 = *(undefined8 *)(*(long *)PTR_DAT_02710880 + 0xc0);
            bVar1 = *(char *)(lVar42 + 0x662) == '\0';
            if (bVar1) {
              FUN_016b1c40(*(undefined8 *)(param_1 + 0x630),1);
            }
            else {
              FUN_016b1c40(*(undefined8 *)(param_1 + 0x630),0);
            }
            FUN_01196fd0(uVar51,bVar1);
          }
          uVar43 = FUN_00dc7770(lVar42);
          if ((uVar43 & 1) == 0) {
            FUN_01511120(lVar54,0xf3e80e69b65b81fe);
          }
          else {
            FUN_01511030(lVar54);
          }
          (**(code **)(*(long *)(lVar54 + 0x48) + 0x18))((long *)(lVar54 + 0x48));
        }
      }
      if (lVar52 != 0) {
        (**(code **)(*(long *)(lVar52 + 0x48) + 0x18))((long *)(lVar52 + 0x48));
      }
    }
  }
  if ((((plVar50 != (long *)0x0) && (plVar41 == plVar50)) &&
      (plVar41 = *(long **)(*(long *)(param_1 + 0xa8) + 0x148),
      *(long **)(*(long *)(param_1 + 0xa8) + 0x150) != plVar41)) &&
     ((plVar50[0xc6] != 0 && (lVar42 = *plVar41, lVar42 != 0)))) {
    if ((*(char *)(lVar42 + 0x66d) == '\0') && (*(char *)(plVar50[0xc6] + 0x66d) == '\0')) {
      FUN_00e3d6f0(plVar50);
    }
    else {
      FUN_00e3d650(plVar50,0);
    }
  }
  if (plVar47 != (long *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    if ((char)plVar47[0x18] == '\0') {
      lVar42 = plVar47[0xd];
      uVar72 = (undefined1)lVar42;
      uVar74 = (undefined1)((ulong)lVar42 >> 8);
      uVar76 = (undefined1)((ulong)lVar42 >> 0x10);
      uVar78 = (undefined1)((ulong)lVar42 >> 0x18);
      uVar80 = (undefined1)((ulong)lVar42 >> 0x20);
      uVar82 = (undefined1)((ulong)lVar42 >> 0x28);
      uVar84 = (undefined1)((ulong)lVar42 >> 0x30);
      uVar86 = (undefined1)((ulong)lVar42 >> 0x38);
      lVar42 = plVar47[0xc];
      uVar56 = (undefined1)lVar42;
      uVar58 = (undefined1)((ulong)lVar42 >> 8);
      uVar60 = (undefined1)((ulong)lVar42 >> 0x10);
      uVar62 = (undefined1)((ulong)lVar42 >> 0x18);
      uVar64 = (undefined1)((ulong)lVar42 >> 0x20);
      uVar66 = (undefined1)((ulong)lVar42 >> 0x28);
      uVar68 = (undefined1)((ulong)lVar42 >> 0x30);
      uVar70 = (undefined1)((ulong)lVar42 >> 0x38);
      auVar91 = *(undefined1 (*) [16])(plVar47 + 0xe);
      auVar90 = *(undefined1 (*) [16])(plVar47 + 0x10);
      lVar42 = plVar47[0x13];
      local_e0 = plVar47[0x12];
    }
    else {
      lVar53 = plVar47[0x15];
      lVar52 = plVar47[0x14];
      lVar42 = plVar47[0x17];
      local_e0 = plVar47[0x16];
      bVar55 = (byte)lVar52 & (byte)DAT_01d4ab50;
      bVar57 = (byte)((ulong)lVar52 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
      bVar59 = (byte)((ulong)lVar52 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
      bVar61 = (byte)((ulong)lVar52 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
      bVar63 = (byte)((ulong)lVar52 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
      bVar65 = (byte)((ulong)lVar52 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
      bVar67 = (byte)((ulong)lVar52 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
      bVar69 = (byte)((ulong)lVar52 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
      bVar71 = (byte)lVar53 & (byte)DAT_01d4ab58;
      bVar73 = (byte)((ulong)lVar53 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
      bVar75 = (byte)((ulong)lVar53 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
      bVar77 = (byte)((ulong)lVar53 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
      bVar79 = (byte)((ulong)lVar53 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
      bVar81 = (byte)((ulong)lVar53 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
      bVar83 = (byte)((ulong)lVar53 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
      bVar85 = (byte)((ulong)lVar53 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
      uVar51 = NEON_ext(CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(
                                                  bVar61,CONCAT12(bVar59,CONCAT11(bVar57,bVar55)))))
                                                )),
                        CONCAT17(bVar69,CONCAT16(bVar67,CONCAT15(bVar65,CONCAT14(bVar63,CONCAT13(
                                                  bVar61,CONCAT12(bVar59,CONCAT11(bVar57,bVar55)))))
                                                )),4,1);
      fVar102 = (float)((ulong)uVar51 >> 0x20);
      auVar4[1] = bVar57;
      auVar4[0] = bVar55;
      auVar4[2] = bVar59;
      auVar4[3] = bVar61;
      auVar4[4] = bVar63;
      auVar4[5] = bVar65;
      auVar4[6] = bVar67;
      auVar4[7] = bVar69;
      auVar4[8] = bVar71;
      auVar4[9] = bVar73;
      auVar4[10] = bVar75;
      auVar4[0xb] = bVar77;
      auVar4[0xc] = bVar79;
      auVar4[0xd] = bVar81;
      auVar4[0xe] = bVar83;
      auVar4[0xf] = bVar85;
      uVar88 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5188);
      auVar5[1] = bVar57;
      auVar5[0] = bVar55;
      auVar5[2] = bVar59;
      auVar5[3] = bVar61;
      auVar5[4] = bVar63;
      auVar5[5] = bVar65;
      auVar5[6] = bVar67;
      auVar5[7] = bVar69;
      auVar5[8] = bVar71;
      auVar5[9] = bVar73;
      auVar5[10] = bVar75;
      auVar5[0xb] = bVar77;
      auVar5[0xc] = bVar79;
      auVar5[0xd] = bVar81;
      auVar5[0xe] = bVar83;
      auVar5[0xf] = bVar85;
      uVar96 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5048);
      auVar6[1] = bVar57;
      auVar6[0] = bVar55;
      auVar6[2] = bVar59;
      auVar6[3] = bVar61;
      auVar6[4] = bVar63;
      auVar6[5] = bVar65;
      auVar6[6] = bVar67;
      auVar6[7] = bVar69;
      auVar6[8] = bVar71;
      auVar6[9] = bVar73;
      auVar6[10] = bVar75;
      auVar6[0xb] = bVar77;
      auVar6[0xc] = bVar79;
      auVar6[0xd] = bVar81;
      auVar6[0xe] = bVar83;
      auVar6[0xf] = bVar85;
      uVar103 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
      fVar116 = (float)uVar88;
      fVar117 = (float)((ulong)uVar88 >> 0x20);
      auVar7[1] = bVar57;
      auVar7[0] = bVar55;
      auVar7[2] = bVar59;
      auVar7[3] = bVar61;
      auVar7[4] = bVar63;
      auVar7[5] = bVar65;
      auVar7[6] = bVar67;
      auVar7[7] = bVar69;
      auVar7[8] = bVar71;
      auVar7[9] = bVar73;
      auVar7[10] = bVar75;
      auVar7[0xb] = bVar77;
      auVar7[0xc] = bVar79;
      auVar7[0xd] = bVar81;
      auVar7[0xe] = bVar83;
      auVar7[0xf] = bVar85;
      uVar101 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5158);
      auVar8[1] = bVar57;
      auVar8[0] = bVar55;
      auVar8[2] = bVar59;
      auVar8[3] = bVar61;
      auVar8[4] = bVar63;
      auVar8[5] = bVar65;
      auVar8[6] = bVar67;
      auVar8[7] = bVar69;
      auVar8[8] = bVar71;
      auVar8[9] = bVar73;
      auVar8[10] = bVar75;
      auVar8[0xb] = bVar77;
      auVar8[0xc] = bVar79;
      auVar8[0xd] = bVar81;
      auVar8[0xe] = bVar83;
      auVar8[0xf] = bVar85;
      uVar88 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
      *(undefined1 *)(plVar47 + 0x18) = 0;
      fVar100 = (float)uVar51 * (float)uVar51;
      fVar102 = fVar102 * fVar102;
      fVar95 = (float)uVar96 * (float)uVar96;
      fVar97 = (float)((ulong)uVar96 >> 0x20);
      fVar97 = fVar97 * fVar97;
      fVar98 = (float)uVar101;
      fVar99 = (float)((ulong)uVar101 >> 0x20);
      fVar112 = (float)uVar103 * (float)CONCAT13(bVar61,CONCAT12(bVar59,CONCAT11(bVar57,bVar55)));
      fVar113 = (float)((ulong)uVar103 >> 0x20) *
                (float)CONCAT13(bVar69,CONCAT12(bVar67,CONCAT11(bVar65,bVar63)));
      fVar114 = fVar116 * (float)CONCAT13(bVar77,CONCAT12(bVar75,CONCAT11(bVar73,bVar71)));
      fVar115 = fVar117 * (float)CONCAT13(bVar85,CONCAT12(bVar83,CONCAT11(bVar81,bVar79)));
      fVar20 = (float)((ulong)lVar53 >> 0x20);
      fVar87 = (float)uVar88 * fVar20;
      fVar92 = (float)((ulong)uVar88 >> 0x20) * fVar20;
      fVar112 = fVar112 + fVar112;
      fVar113 = fVar113 + fVar113;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar87 = fVar87 + fVar87;
      fVar92 = fVar92 + fVar92;
      fVar93 = fVar98 * fVar20 + fVar98 * fVar20;
      fVar94 = fVar99 * fVar20 + fVar99 * fVar20;
      fVar19 = fVar112 + fVar87;
      fVar20 = fVar113 + fVar92;
      uVar78 = SUB41(fVar20,0);
      uVar80 = (undefined1)((uint)fVar20 >> 8);
      uVar82 = (undefined1)((uint)fVar20 >> 0x10);
      uVar84 = (undefined1)((uint)fVar20 >> 0x18);
      fVar20 = fVar114 + fVar93;
      uVar86 = SUB41(fVar20,0);
      uVar105 = (undefined1)((uint)fVar20 >> 8);
      uVar106 = (undefined1)((uint)fVar20 >> 0x10);
      uVar107 = (undefined1)((uint)fVar20 >> 0x18);
      fVar20 = fVar115 + fVar94;
      uVar108 = SUB41(fVar20,0);
      uVar109 = (undefined1)((uint)fVar20 >> 8);
      uVar110 = (undefined1)((uint)fVar20 >> 0x10);
      uVar111 = (undefined1)((uint)fVar20 >> 0x18);
      fVar112 = fVar112 - fVar87;
      fVar113 = fVar113 - fVar92;
      fVar114 = fVar114 - fVar93;
      fVar115 = fVar115 - fVar94;
      fVar20 = (float)_DAT_01d4a130 - (fVar95 + fVar95 + fVar100 + fVar100);
      fVar87 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar97 + fVar97 + fVar102 + fVar102);
      uVar56 = SUB41(fVar87,0);
      uVar58 = (undefined1)((uint)fVar87 >> 8);
      uVar60 = (undefined1)((uint)fVar87 >> 0x10);
      uVar62 = (undefined1)((uint)fVar87 >> 0x18);
      fVar87 = (float)_UNK_01d4a138 -
               (fVar98 * fVar98 + fVar98 * fVar98 + fVar116 * fVar116 + fVar116 * fVar116);
      uVar64 = (undefined1)((uint)fVar87 >> 8);
      uVar66 = (undefined1)((uint)fVar87 >> 0x10);
      uVar68 = (undefined1)((uint)fVar87 >> 0x18);
      fVar92 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
               (fVar99 * fVar99 + fVar99 * fVar99 + fVar117 * fVar117 + fVar117 * fVar117);
      uVar70 = SUB41(fVar92,0);
      uVar72 = (undefined1)((uint)fVar92 >> 8);
      uVar74 = (undefined1)((uint)fVar92 >> 0x10);
      uVar76 = (undefined1)((uint)fVar92 >> 0x18);
      auVar15[4] = uVar78;
      auVar15._0_4_ = fVar19;
      auVar15[5] = uVar80;
      auVar15[6] = uVar82;
      auVar15[7] = uVar84;
      auVar15[8] = uVar86;
      auVar15[9] = uVar105;
      auVar15[10] = uVar106;
      auVar15[0xb] = uVar107;
      auVar15[0xc] = uVar108;
      auVar15[0xd] = uVar109;
      auVar15[0xe] = uVar110;
      auVar15[0xf] = uVar111;
      auVar21._4_4_ = fVar113;
      auVar21._0_4_ = fVar112;
      auVar21._8_4_ = fVar114;
      auVar21._12_4_ = fVar115;
      auVar89._0_8_ = a64_TBL(ZEXT816(0),auVar15,auVar21,DAT_01cd5250);
      auVar16[4] = uVar78;
      auVar16._0_4_ = fVar19;
      auVar16[5] = uVar80;
      auVar16[6] = uVar82;
      auVar16[7] = uVar84;
      auVar16[8] = uVar86;
      auVar16[9] = uVar105;
      auVar16[10] = uVar106;
      auVar16[0xb] = uVar107;
      auVar16[0xc] = uVar108;
      auVar16[0xd] = uVar109;
      auVar16[0xe] = uVar110;
      auVar16[0xf] = uVar111;
      auVar22._4_4_ = fVar113;
      auVar22._0_4_ = fVar112;
      auVar22._8_4_ = fVar114;
      auVar22._12_4_ = fVar115;
      uVar51 = a64_TBL(ZEXT816(0),auVar16,auVar22,DAT_01cd51f8);
      auVar17[4] = uVar78;
      auVar17._0_4_ = fVar19;
      auVar17[5] = uVar80;
      auVar17[6] = uVar82;
      auVar17[7] = uVar84;
      auVar17[8] = uVar86;
      auVar17[9] = uVar105;
      auVar17[10] = uVar106;
      auVar17[0xb] = uVar107;
      auVar17[0xc] = uVar108;
      auVar17[0xd] = uVar109;
      auVar17[0xe] = uVar110;
      auVar17[0xf] = uVar111;
      auVar23._4_4_ = fVar113;
      auVar23._0_4_ = fVar112;
      auVar23._8_4_ = fVar114;
      auVar23._12_4_ = fVar115;
      uVar119 = a64_TBL(ZEXT816(0),auVar17,auVar23,DAT_01cd5430);
      auVar18[4] = uVar78;
      auVar18._0_4_ = fVar19;
      auVar18[5] = uVar80;
      auVar18[6] = uVar82;
      auVar18[7] = uVar84;
      auVar18[8] = uVar86;
      auVar18[9] = uVar105;
      auVar18[10] = uVar106;
      auVar18[0xb] = uVar107;
      auVar18[0xc] = uVar108;
      auVar18[0xd] = uVar109;
      auVar18[0xe] = uVar110;
      auVar18[0xf] = uVar111;
      auVar24._4_4_ = fVar113;
      auVar24._0_4_ = fVar112;
      auVar24._8_4_ = fVar114;
      auVar24._12_4_ = fVar115;
      uVar96 = a64_TBL(ZEXT816(0),auVar18,auVar24,DAT_01cd5050);
      auVar89._8_8_ = uVar51;
      auVar9[4] = uVar56;
      auVar9._0_4_ = fVar20;
      auVar9[5] = uVar58;
      auVar9[6] = uVar60;
      auVar9[7] = uVar62;
      auVar9[8] = SUB41(fVar87,0);
      auVar9[9] = uVar64;
      auVar9[10] = uVar66;
      auVar9[0xb] = uVar68;
      auVar9[0xc] = uVar70;
      auVar9[0xd] = uVar72;
      auVar9[0xe] = uVar74;
      auVar9[0xf] = uVar76;
      uVar88 = a64_TBL(ZEXT816(0),auVar9,auVar89,DAT_01cd50d8);
      auVar10[4] = uVar56;
      auVar10._0_4_ = fVar20;
      auVar10[5] = uVar58;
      auVar10[6] = uVar60;
      auVar10[7] = uVar62;
      auVar10[8] = SUB41(fVar87,0);
      auVar10[9] = uVar64;
      auVar10[10] = uVar66;
      auVar10[0xb] = uVar68;
      auVar10[0xc] = uVar70;
      auVar10[0xd] = uVar72;
      auVar10[0xe] = uVar74;
      auVar10[0xf] = uVar76;
      uVar103 = a64_TBL(ZEXT816(0),auVar10,auVar89,DAT_01cd4fb8);
      uVar118 = (undefined4)
                (CONCAT17(uVar76,CONCAT16(uVar74,CONCAT15(uVar72,CONCAT14(uVar70,fVar87)))) >> 0x20)
      ;
      uVar38 = (undefined4)
               (CONCAT17(uVar62,CONCAT16(uVar60,CONCAT15(uVar58,CONCAT14(uVar56,fVar20)))) >> 0x20);
      auVar25._4_4_ = uVar38;
      auVar25._0_4_ = fVar20;
      auVar25._8_4_ = fVar87;
      auVar25._12_4_ = uVar118;
      auVar29._8_8_ = uVar96;
      auVar29._0_8_ = uVar119;
      uVar51 = a64_TBL(ZEXT816(0),auVar25,auVar29,DAT_01cd50b8);
      auVar26._4_4_ = uVar38;
      auVar26._0_4_ = fVar20;
      auVar26._8_4_ = fVar87;
      auVar26._12_4_ = uVar118;
      auVar30._8_8_ = uVar96;
      auVar30._0_8_ = uVar119;
      uVar101 = a64_TBL(ZEXT816(0),auVar26,auVar30,DAT_01cd5308);
      auVar27._4_4_ = uVar38;
      auVar27._0_4_ = fVar20;
      auVar27._8_4_ = fVar87;
      auVar27._12_4_ = uVar118;
      auVar31._8_8_ = uVar96;
      auVar31._0_8_ = uVar119;
      uVar104 = a64_TBL(ZEXT816(0),auVar27,auVar31,DAT_01cd5008);
      fVar113 = *(float *)(plVar47 + 0x1a);
      fVar114 = *(float *)((long)plVar47 + 0xd4);
      fVar112 = *(float *)(plVar47 + 0x1b);
      auVar28._4_4_ = uVar38;
      auVar28._0_4_ = fVar20;
      auVar28._8_4_ = fVar87;
      auVar28._12_4_ = uVar118;
      auVar32._8_8_ = uVar96;
      auVar32._0_8_ = uVar119;
      uVar96 = a64_TBL(ZEXT816(0),auVar28,auVar32,DAT_01cd4fb0);
      auVar90._0_8_ = CONCAT44((float)((ulong)uVar88 >> 0x20) * fVar112,(float)uVar88 * fVar112);
      auVar90._8_4_ = (float)uVar103 * fVar112;
      auVar90._12_4_ = (float)((ulong)uVar103 >> 0x20) * fVar112;
      fVar112 = (float)uVar51 * fVar113;
      uVar56 = SUB41(fVar112,0);
      uVar58 = (undefined1)((uint)fVar112 >> 8);
      uVar60 = (undefined1)((uint)fVar112 >> 0x10);
      uVar62 = (undefined1)((uint)fVar112 >> 0x18);
      fVar20 = (float)((ulong)uVar51 >> 0x20) * fVar113;
      uVar64 = SUB41(fVar20,0);
      uVar66 = (undefined1)((uint)fVar20 >> 8);
      uVar68 = (undefined1)((uint)fVar20 >> 0x10);
      uVar70 = (undefined1)((uint)fVar20 >> 0x18);
      fVar20 = (float)uVar101 * fVar113;
      uVar72 = SUB41(fVar20,0);
      uVar74 = (undefined1)((uint)fVar20 >> 8);
      uVar76 = (undefined1)((uint)fVar20 >> 0x10);
      uVar78 = (undefined1)((uint)fVar20 >> 0x18);
      fVar113 = (float)((ulong)uVar101 >> 0x20) * fVar113;
      uVar80 = SUB41(fVar113,0);
      uVar82 = (undefined1)((uint)fVar113 >> 8);
      uVar84 = (undefined1)((uint)fVar113 >> 0x10);
      uVar86 = (undefined1)((uint)fVar113 >> 0x18);
      plVar47[0x11] = auVar90._8_8_;
      plVar47[0x10] = auVar90._0_8_;
      plVar47[0x13] = lVar42;
      plVar47[0x12] = local_e0;
      auVar91._0_8_ = CONCAT44((float)((ulong)uVar104 >> 0x20) * fVar114,(float)uVar104 * fVar114);
      auVar91._8_4_ = (float)uVar96 * fVar114;
      auVar91._12_4_ = (float)((ulong)uVar96 >> 0x20) * fVar114;
      plVar47[0xd] = CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,fVar20))));
      plVar47[0xc] = CONCAT17(uVar70,CONCAT16(uVar68,CONCAT15(uVar66,CONCAT14(uVar64,fVar112))));
      plVar47[0xf] = auVar91._8_8_;
      plVar47[0xe] = auVar91._0_8_;
    }
    uStack_d8 = CONCAT44(0x3f800000,(int)lVar42);
    uStack_108 = (undefined *)
                 CONCAT17(uVar86,CONCAT16(uVar84,CONCAT15(uVar82,CONCAT14(uVar80,CONCAT13(uVar78,
                                                  CONCAT12(uVar76,CONCAT11(uVar74,uVar72)))))));
    local_110 = CONCAT17(uVar70,CONCAT16(uVar68,CONCAT15(uVar66,CONCAT14(uVar64,CONCAT13(uVar62,
                                                  CONCAT12(uVar60,CONCAT11(uVar58,uVar56)))))));
    local_f8 = auVar91._8_8_;
    local_100 = auVar91._0_8_;
    uStack_e8 = auVar90._8_8_;
    local_f0 = auVar90._0_8_;
    lVar42 = *(long *)(param_1 + 0x100);
    if (lVar42 == 0) {
      local_c0 = *(undefined8 *)(_DAT_00000128 + 0xf0);
      local_b8 = *(undefined8 *)(_DAT_00000128 + 0xf8);
      local_d0 = *(undefined8 *)(_DAT_00000128 + 0xe0);
      local_c8 = *(undefined8 *)(_DAT_00000128 + 0xe8);
      local_b0 = *(undefined8 *)(_DAT_00000128 + 0x100);
      uStack_a8 = *(undefined8 *)(_DAT_00000128 + 0x108);
      local_a0 = *(undefined8 *)(_DAT_00000128 + 0x110);
      uStack_98 = *(undefined8 *)(_DAT_00000128 + 0x118);
    }
    else {
      plVar41 = (long *)(lVar42 + 0x48);
      (**(code **)(*plVar41 + 0x10))(plVar41);
      lVar42 = *(long *)(lVar42 + 0x128);
      local_c0 = *(undefined8 *)(lVar42 + 0xf0);
      local_b8 = *(undefined8 *)(lVar42 + 0xf8);
      local_d0 = *(undefined8 *)(lVar42 + 0xe0);
      local_c8 = *(undefined8 *)(lVar42 + 0xe8);
      local_a0 = *(undefined8 *)(lVar42 + 0x110);
      uStack_98 = *(undefined8 *)(lVar42 + 0x118);
      local_b0 = *(undefined8 *)(lVar42 + 0x100);
      uStack_a8 = *(undefined8 *)(lVar42 + 0x108);
      (**(code **)(*plVar41 + 0x18))(plVar41);
    }
    FUN_016b0510(*(undefined8 *)(param_1 + 0x630),&local_110);
  }
  if (bVar33) {
    FUN_00ebf9a0(param_1,&local_80);
  }
  if (!bVar34) {
    lVar42 = *(long *)(param_1 + 0x778);
    goto joined_r0x00ebf5cc;
  }
  uStack_108 = *(undefined **)(lVar40 + 0x428);
  local_110 = *(long *)(lVar40 + 0x420);
  local_f8 = *(long *)(lVar40 + 0x438);
  local_100 = *(undefined8 *)(lVar40 + 0x430);
  if (*(int *)(param_1 + 0x794) == 0) {
    uVar72 = (undefined1)((uint7)uStack_77 >> 8);
    uVar74 = (undefined1)((uint7)uStack_77 >> 0x10);
    uVar76 = (undefined1)((uint7)uStack_77 >> 0x18);
    uVar78 = (undefined1)((uint7)uStack_77 >> 0x20);
    uVar80 = (undefined1)((uint7)uStack_77 >> 0x28);
    uVar82 = (undefined1)((uint7)uStack_77 >> 0x30);
    auVar14[8] = uStack_78;
    auVar14._0_8_ = local_80;
    auVar13[8] = uStack_78;
    auVar13._0_8_ = local_80;
    uVar56 = (undefined1)local_80;
    uVar58 = (undefined1)((ulong)local_80 >> 8);
    uVar60 = (undefined1)((ulong)local_80 >> 0x10);
    uVar62 = (undefined1)((ulong)local_80 >> 0x18);
    uVar64 = (undefined1)((ulong)local_80 >> 0x20);
    uVar66 = (undefined1)((ulong)local_80 >> 0x28);
    uVar68 = (undefined1)((ulong)local_80 >> 0x30);
    uVar70 = (undefined1)((ulong)local_80 >> 0x38);
    auVar13[9] = (char)uStack_77;
    auVar13[10] = uVar72;
    auVar13[0xb] = uVar74;
    auVar13[0xc] = uVar76;
    auVar13[0xd] = uVar78;
    auVar13[0xe] = uVar80;
    auVar13[0xf] = uVar82;
    auVar14[9] = (char)uStack_77;
    auVar14[10] = uVar72;
    auVar14[0xb] = uVar74;
    auVar14[0xc] = uVar76;
    auVar14[0xd] = uVar78;
    auVar14[0xe] = uVar80;
    auVar14[0xf] = uVar82;
    auVar91 = NEON_ext(auVar13,auVar14,8,1);
    uVar72 = auVar91[0];
    uVar74 = auVar91[1];
    uVar76 = auVar91[2];
    uVar78 = auVar91[3];
LAB_00ebf6a8:
    local_100._4_4_ =
         local_100._4_4_ + (float)CONCAT13(uVar70,CONCAT12(uVar68,CONCAT11(uVar66,uVar64)));
    local_f8._4_4_ = local_f8._4_4_ + 0.0;
    uStack_108 = (undefined *)
                 CONCAT44(uStack_108._4_4_ + 0.0,
                          (float)uStack_108 +
                          (float)CONCAT13(uVar78,CONCAT12(uVar76,CONCAT11(uVar74,uVar72))));
    local_110 = CONCAT44(local_110._4_4_ +
                         (float)CONCAT13(uVar70,CONCAT12(uVar68,CONCAT11(uVar66,uVar64))),
                         (float)local_110 +
                         (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(uVar58,uVar56))));
    local_f8 = CONCAT17((char)((uint)local_f8._4_4_ >> 0x18),
                        CONCAT16((char)((uint)local_f8._4_4_ >> 0x10),
                                 CONCAT15((char)((uint)local_f8._4_4_ >> 8),
                                          CONCAT14(SUB41(local_f8._4_4_,0),
                                                   (float)local_f8 +
                                                   (float)CONCAT13(uVar78,CONCAT12(uVar76,CONCAT11(
                                                  uVar74,uVar72)))))));
    local_100 = CONCAT17((char)((uint)local_100._4_4_ >> 0x18),
                         CONCAT16((char)((uint)local_100._4_4_ >> 0x10),
                                  CONCAT15((char)((uint)local_100._4_4_ >> 8),
                                           CONCAT14(SUB41(local_100._4_4_,0),
                                                    (float)local_100 +
                                                    (float)CONCAT13(uVar62,CONCAT12(uVar60,CONCAT11(
                                                  uVar58,uVar56)))))));
  }
  else {
    FUN_00dfb1f0(&local_88,*(undefined8 *)(param_1 + 0xb0));
    if (local_88 != 0) {
      puVar49 = *(undefined8 **)(local_88 + 0x60);
      if (puVar49 != (undefined8 *)0x0) {
        plVar41 = (long *)(**(code **)*puVar49)(puVar49);
        lVar42 = FUN_00a89c30();
        for (; plVar41 != (long *)0x0; plVar41 = (long *)*plVar41) {
          if (plVar41 == (long *)lVar42) {
            puVar49 = puVar49 + -10;
            goto joined_r0x00ebf944;
          }
        }
      }
      puVar49 = (undefined8 *)0x0;
joined_r0x00ebf944:
      if (local_88 != 0) {
        (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
        local_88 = 0;
      }
      if (puVar49 != (undefined8 *)0x0) {
        fVar112 = (float)puVar49[0x16] + *(float *)(param_1 + 0x7a0);
        uVar56 = SUB41(fVar112,0);
        uVar58 = (undefined1)((uint)fVar112 >> 8);
        uVar60 = (undefined1)((uint)fVar112 >> 0x10);
        uVar62 = (undefined1)((uint)fVar112 >> 0x18);
        fVar20 = (float)((ulong)puVar49[0x16] >> 0x20) + *(float *)(param_1 + 0x7a4);
        uVar64 = SUB41(fVar20,0);
        uVar66 = (undefined1)((uint)fVar20 >> 8);
        uVar68 = (undefined1)((uint)fVar20 >> 0x10);
        uVar70 = (undefined1)((uint)fVar20 >> 0x18);
        fVar20 = (float)puVar49[0x17] + *(float *)(param_1 + 0x7a8);
        uVar72 = (undefined1)((uint)fVar20 >> 8);
        uVar74 = (undefined1)((uint)fVar20 >> 0x10);
        uVar76 = (undefined1)((uint)fVar20 >> 0x18);
        fVar113 = (float)((ulong)puVar49[0x17] >> 0x20) + *(float *)(param_1 + 0x7ac);
        uVar78 = (undefined1)((uint)fVar113 >> 8);
        uVar80 = (undefined1)((uint)fVar113 >> 0x10);
        uVar82 = (undefined1)((uint)fVar113 >> 0x18);
        auVar11[4] = uVar64;
        auVar11._0_4_ = fVar112;
        auVar11[5] = uVar66;
        auVar11[6] = uVar68;
        auVar11[7] = uVar70;
        auVar11[8] = SUB41(fVar20,0);
        auVar11[9] = uVar72;
        auVar11[10] = uVar74;
        auVar11[0xb] = uVar76;
        auVar11[0xc] = SUB41(fVar113,0);
        auVar11[0xd] = uVar78;
        auVar11[0xe] = uVar80;
        auVar11[0xf] = uVar82;
        auVar12[4] = uVar64;
        auVar12._0_4_ = fVar112;
        auVar12[5] = uVar66;
        auVar12[6] = uVar68;
        auVar12[7] = uVar70;
        auVar12[8] = SUB41(fVar20,0);
        auVar12[9] = uVar72;
        auVar12[10] = uVar74;
        auVar12[0xb] = uVar76;
        auVar12[0xc] = SUB41(fVar113,0);
        auVar12[0xd] = uVar78;
        auVar12[0xe] = uVar80;
        auVar12[0xf] = uVar82;
        auVar91 = NEON_ext(auVar11,auVar12,8,1);
        uVar72 = auVar91[0];
        uVar74 = auVar91[1];
        uVar76 = auVar91[2];
        uVar78 = auVar91[3];
        goto LAB_00ebf6a8;
      }
    }
  }
  FUN_01052a80(*(undefined8 *)(param_1 + 0x100),&local_110);
  lVar42 = *(long *)(param_1 + 0x778);
joined_r0x00ebf5cc:
  if ((lVar42 == 0) || (*(int *)(lVar42 + 0x54) == 0)) {
    plVar50 = *(long **)(*(long *)(param_1 + 200) + 0xb8);
    for (plVar41 = *(long **)(*(long *)(param_1 + 200) + 0xb0); plVar41 != plVar50;
        plVar41 = plVar41 + 1) {
      plVar47 = (long *)*plVar41;
      uVar43 = FUN_00e2ee10(plVar47 + 10);
      if (((uVar43 & 1) != 0) &&
         (uVar43 = (**(code **)(*(long *)*plVar41 + 0x88))(), (uVar43 & 1) == 0)) {
        (**(code **)(*plVar47 + 0x10))(&local_110,plVar47);
        if (*(long *)(param_1 + 0x778) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x778) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x778) = 0;
        }
        *(long *)(param_1 + 0x778) = local_110;
        lVar42 = local_110;
        goto joined_r0x00ebf934;
      }
    }
  }
  lVar42 = *(long *)(param_1 + 0x778);
joined_r0x00ebf934:
  if (((lVar42 != 0) && (lVar42 = *(long *)(lVar42 + 0x60), lVar42 != 0)) &&
     (uVar43 = FUN_0156b540(lVar42), (uVar43 & 1) != 0)) {
    uStack_108 = (undefined *)CONCAT71(uStack_77,uStack_78);
    uVar38 = *(undefined4 *)(lVar42 + 100);
    local_110 = CONCAT17((char)((uint)uVar38 >> 0x18),
                         CONCAT16((char)((uint)uVar38 >> 0x10),
                                  CONCAT15((char)((uint)uVar38 >> 8),
                                           CONCAT14((char)uVar38,(int)local_80))));
    uVar43 = FUN_00e2ee10(lVar42);
    lVar42 = lVar42 + -0x50;
    if ((uVar43 & 1) == 0) {
      lVar42 = 0;
    }
    FUN_00ead690(lVar42,&local_110);
  }
  if (bVar34) {
    FUN_01009f40(&local_88,lVar48);
    uVar43 = FUN_00fb2000(local_88);
    if ((((uVar43 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_027108d0 + 0xd88) != 1)) &&
       (*(int *)(lVar40 + 0x3b0) == 0)) {
      if (((plVar46 != (long *)0x0) && (*(char *)(param_1 + 0x618) == '\0')) &&
         ((uVar43 = (**(code **)(*plVar46 + 0x70))(plVar46), (uVar43 & 1) != 0 &&
          (uVar43 = FUN_00fb40c0(local_88), (uVar43 & 1) == 0)))) {
        uVar38 = FUN_00eceb20(0xcbf29ce484222645);
        FUN_00fb40a0(local_88,uVar38);
      }
      FUN_00fb3d30(local_88);
      uVar39 = FUN_00ecec10();
      if (*(uint *)(param_1 + 0x90) != uVar39) {
        if ((uVar39 | 1) == 3) {
          local_110 = -0x60152bf14230cd4d;
          uStack_108 = &DAT_01d184c1;
          local_118 = 0;
          local_100 = 4;
          local_f8 = 0;
          FUN_014aed90(&local_110,&local_118);
          if (local_118 != 0) {
            (**(code **)(*(long *)(local_118 + 0x48) + 0x18))();
            local_118 = 0;
          }
          if (local_f8 != 0) {
            (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
            local_f8 = 0;
          }
        }
        *(uint *)(param_1 + 0x90) = uVar39;
      }
      uVar43 = FUN_00fb40c0(local_88);
      if (((uVar43 & 1) == 0) && (*(int *)PTR_DAT_0271bdc8 != *(int *)(param_1 + 0x90))) {
        *(int *)PTR_DAT_0271bdc8 = *(int *)(param_1 + 0x90);
      }
    }
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    FUN_00ebfc30(param_1,*(undefined4 *)(lVar40 + 0x3b0));
  }
  if (lVar48 != 0) {
    (**(code **)(*(long *)(lVar48 + 0x48) + 0x18))((long *)(lVar48 + 0x48));
  }
  return;
}


