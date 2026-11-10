/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00687c90; name: FUN_00687c90
 */


/* WARNING: Type propagation algorithm not settling */

undefined * FUN_00687c90(undefined8 param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  uint uVar11;
  long *local_140;
  byte *local_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulong local_118;
  long *local_110;
  byte *local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulong local_e8;
  byte local_e0 [64];
  byte local_a0 [64];
  
  plVar7 = (long *)FUN_005bf860();
  plVar7 = (long *)(**(code **)(*plVar7 + 0x60))();
  local_108 = local_a0;
  local_f0 = 0x40;
  local_e8 = 1;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = plVar7;
  if (plVar7 == (long *)0x0) {
    lVar8 = FUN_005bc740();
    if (lVar8 == 0) {
      local_110 = (long *)FUN_005bc6f0();
    }
    else {
      local_110 = (long *)FUN_005bc740();
    }
  }
  *local_108 = 0;
  local_138 = local_e0;
  local_120 = 0x40;
  local_118 = 1;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = plVar7;
  if (plVar7 == (long *)0x0) {
    lVar8 = FUN_005bc740();
    if (lVar8 == 0) {
      local_140 = (long *)FUN_005bc6f0();
    }
    else {
      local_140 = (long *)FUN_005bc740();
    }
  }
  *local_138 = 0;
  FUN_005c9440(param_1,&local_110,&local_140);
  if (local_100 == 0) {
    FUN_005c47b0(&local_110,"neutral");
  }
  pbVar2 = local_108;
  if (local_130 == 0) {
    FUN_005c47b0(&local_140,"neutral");
    pbVar2 = local_108;
  }
  local_108 = pbVar2;
  if (local_100 != 0) {
    bVar1 = *pbVar2;
    uVar11 = (uint)bVar1;
    uVar5 = (uint)bVar1;
    if (uVar5 != 0) {
      uVar4 = 0x6e;
      lVar8 = 1;
      do {
        lVar9 = lVar8;
        uVar4 = tolower(uVar4);
        uVar5 = tolower(uVar5);
        pbVar3 = local_138;
        if (((uVar4 & 0xff) < (uVar5 & 0xff)) || ((uVar5 & 0xff) < (uVar4 & 0xff)))
        goto LAB_00687e70;
        uVar4 = (uint)(byte)"neutral"[lVar9];
        uVar5 = (uint)pbVar2[lVar9];
      } while ((lVar9 != 7) && (lVar8 = lVar9 + 1, uVar5 != 0));
      if ((((local_130 != 0) && (lVar9 == 7)) && (pbVar2[lVar9] == 0 && "neutral"[lVar9] == 0)) &&
         (uVar5 = (uint)*local_138, *local_138 != 0)) {
        uVar4 = 0x6e;
        lVar8 = 1;
        do {
          lVar9 = lVar8;
          uVar4 = tolower(uVar4);
          uVar5 = tolower(uVar5);
          if (((uVar4 & 0xff) < (uVar5 & 0xff)) || ((uVar5 & 0xff) < (uVar4 & 0xff)))
          goto LAB_00687e70;
          uVar4 = (uint)(byte)"neutral"[lVar9];
          uVar5 = (uint)pbVar3[lVar9];
        } while ((lVar9 != 7) && (lVar8 = lVar9 + 1, uVar5 != 0));
        if ((lVar9 == 7) &&
           (puVar10 = PTR_DAT_02714e68, pbVar3[lVar9] == 0 && "neutral"[lVar9] == 0))
        goto joined_r0x00687f68;
      }
LAB_00687e70:
      uVar5 = (uint)bVar1;
      if (uVar5 != 0) {
        uVar6 = 0x65;
        lVar8 = 0;
        uVar4 = uVar5;
        do {
          lVar9 = lVar8;
          uVar6 = tolower(uVar6);
          uVar4 = tolower(uVar4);
          pbVar3 = local_138;
          if (((uVar6 & 0xff) < (uVar4 & 0xff)) || ((uVar4 & 0xff) < (uVar6 & 0xff)))
          goto LAB_00687fa4;
          uVar6 = (uint)(byte)(&DAT_01d3352a)[lVar9];
          uVar4 = (uint)pbVar2[lVar9 + 1];
        } while ((lVar9 != 1) && (lVar8 = lVar9 + 1, uVar4 != 0));
        if ((((local_130 != 0) && (lVar9 == 1)) &&
            (pbVar2[lVar9 + 1] == 0 && (&DAT_01d3352a)[lVar9] == 0)) &&
           (uVar4 = (uint)*local_138, *local_138 != 0)) {
          uVar6 = 0x6e;
          lVar8 = 1;
          do {
            lVar9 = lVar8;
            uVar6 = tolower(uVar6);
            uVar4 = tolower(uVar4);
            if (((uVar6 & 0xff) < (uVar4 & 0xff)) || ((uVar4 & 0xff) < (uVar6 & 0xff)))
            goto LAB_00687fa4;
            uVar6 = (uint)(byte)"neutral"[lVar9];
            uVar4 = (uint)pbVar3[lVar9];
          } while ((lVar9 != 7) && (lVar8 = lVar9 + 1, uVar4 != 0));
          if ((lVar9 == 7) &&
             (puVar10 = PTR_DAT_02714e70, pbVar3[lVar9] == 0 && "neutral"[lVar9] == 0))
          goto joined_r0x00687f68;
        }
LAB_00687fa4:
        if (uVar5 != 0) {
          uVar5 = 0x6a;
          lVar8 = 0;
          do {
            lVar9 = lVar8;
            uVar5 = tolower(uVar5);
            uVar11 = tolower(uVar11);
            pbVar3 = local_138;
            if (((uVar5 & 0xff) < (uVar11 & 0xff)) || ((uVar11 & 0xff) < (uVar5 & 0xff)))
            goto LAB_006880a0;
            uVar5 = (uint)(byte)(&DAT_01ceb843)[lVar9];
            uVar11 = (uint)pbVar2[lVar9 + 1];
          } while ((lVar9 != 1) && (lVar8 = lVar9 + 1, uVar11 != 0));
          if ((((local_130 != 0) && (lVar9 == 1)) &&
              (pbVar2[lVar9 + 1] == 0 && (&DAT_01ceb843)[lVar9] == 0)) &&
             (uVar5 = (uint)*local_138, *local_138 != 0)) {
            uVar11 = 0x6e;
            lVar8 = 1;
            do {
              lVar9 = lVar8;
              uVar11 = tolower(uVar11);
              uVar5 = tolower(uVar5);
              if (((uVar11 & 0xff) < (uVar5 & 0xff)) || ((uVar5 & 0xff) < (uVar11 & 0xff)))
              goto LAB_006880a0;
              uVar11 = (uint)(byte)"neutral"[lVar9];
              uVar5 = (uint)pbVar3[lVar9];
            } while ((lVar9 != 7) && (lVar8 = lVar9 + 1, uVar5 != 0));
            if ((lVar9 == 7) &&
               (puVar10 = PTR_DAT_02714e78, pbVar3[lVar9] == 0 && "neutral"[lVar9] == 0))
            goto joined_r0x00687f68;
          }
        }
      }
    }
  }
LAB_006880a0:
  puVar10 = (undefined *)0x0;
joined_r0x00687f68:
  if ((local_118 & 1) == 0) {
    if ((local_138 != (byte *)0x0) && (local_140 != (long *)0x0)) {
      (**(code **)(*local_140 + 0x48))
                (local_140,local_138,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
    }
    local_138 = (byte *)0x0;
  }
  if ((((local_e8 & 1) == 0) && (local_108 != (byte *)0x0)) && (local_110 != (long *)0x0)) {
    (**(code **)(*local_110 + 0x48))
              (local_110,local_108,"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
  }
  return puVar10;
}


