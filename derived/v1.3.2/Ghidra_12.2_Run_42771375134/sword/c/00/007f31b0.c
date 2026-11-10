/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007f31b0; name: FUN_007f31b0
 */


undefined1  [16] FUN_007f31b0(long *param_1,string *param_2,undefined8 param_3,int param_4)

{
  string sVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  string *psVar4;
  string *psVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  string *psVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  string local_78;
  undefined7 uStack_77;
  char cStack_70;
  undefined7 uStack_6f;
  char local_68;
  undefined2 uStack_67;
  undefined5 uStack_65;
  
  auVar14 = FUN_007f3a40();
  uVar11 = auVar14._8_8_;
  uVar10 = auVar14._0_8_ >> 0x20;
  if (auVar14._0_4_ != 0) goto LAB_007f32c4;
  if (*(char *)(*param_1 + 0x29) == '\0') {
LAB_007f32b4:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar11;
    auVar14 = auVar3 << 0x40;
    goto LAB_007f32c4;
  }
  sVar1 = *param_2;
  uVar10 = (ulong)((byte)sVar1 >> 1);
  if (((byte)sVar1 & 1) != 0) {
    uVar10 = *(ulong *)(param_2 + 8);
  }
  if (uVar10 == 0) {
    auVar14 = ZEXT816(0);
    uVar10 = 0;
    goto LAB_007f32c4;
  }
  psVar12 = *(string **)(param_2 + 0x10);
  uVar11 = 0;
  bVar2 = false;
  if (((byte)sVar1 & 1) == 0) {
    psVar12 = param_2 + 1;
  }
  do {
    while (sVar1 = psVar12[uVar11], 0x60 < (byte)sVar1) {
      if (0x7a < (byte)sVar1) goto LAB_007f32ac;
LAB_007f3244:
      bVar2 = false;
      uVar11 = uVar11 + 1;
      if (uVar10 <= uVar11) goto LAB_007f32a8;
    }
    if (0x40 < (byte)sVar1) {
      if (((byte)sVar1 < 0x5b) || (sVar1 == (string)0x5f)) goto LAB_007f3244;
      goto LAB_007f32ac;
    }
    if (0x2f < (byte)sVar1) {
      if ((byte)sVar1 < 0x3a) goto LAB_007f3244;
      goto LAB_007f32ac;
    }
    if ((bool)(bVar2 | sVar1 != (string)0x2e)) goto LAB_007f32ac;
    bVar2 = true;
    uVar11 = uVar11 + 1;
  } while (uVar11 < uVar10);
LAB_007f32a8:
  if (bVar2) {
LAB_007f32ac:
    uVar11 = 0;
    uVar10 = 0;
    goto LAB_007f32b4;
  }
  lVar13 = param_1[1];
  if (*psVar12 == (string)0x2e) {
    std::string::string(&local_78,param_2,1,0xffffffffffffffff,(allocator *)param_2);
    psVar12 = (string *)FUN_007e1d20(lVar13,&local_78);
    if (((byte)local_78 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)));
    }
  }
  else {
    psVar12 = (string *)FUN_007e1d20(lVar13,param_2);
  }
  uVar10 = std::string::rfind((char)psVar12,0x2e);
  if (uVar10 == 0xffffffffffffffff) {
    if (*(long *)PTR_DAT_02716d70 != 2) {
      local_68 = 0;
      local_78 = SUB81(PTR_DAT_02716670 + 0x10,0);
      uStack_77 = (undefined7)((ulong)(PTR_DAT_02716670 + 0x10) >> 8);
      cStack_70 = (char)PTR_LAB_02716d78;
      uStack_6f = (undefined7)((ulong)PTR_LAB_02716d78 >> 8);
      FUN_00801c10(PTR_DAT_02716d70,&local_78);
      FUN_00801390(&local_78);
    }
    psVar4 = *(string **)PTR_DAT_02716d10;
    psVar5 = psVar12;
  }
  else {
    lVar13 = param_1[1];
    std::string::string(&local_78,psVar12,0,uVar10,(allocator *)psVar12);
    psVar4 = (string *)FUN_007e1d20(lVar13,&local_78);
    if (((byte)local_78 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)));
    }
    lVar13 = param_1[1];
    std::string::string(&local_78,psVar12,uVar10 + 1,0xffffffffffffffff,(allocator *)psVar12);
    psVar5 = (string *)FUN_007e1d20(lVar13,&local_78);
    if (((byte)local_78 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)));
    }
  }
  std::operator+(psVar12,".placeholder.proto");
  lVar13 = FUN_007eb350(param_1,&local_78);
  if (((byte)local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)));
  }
  *(string **)(lVar13 + 8) = psVar4;
  if (param_4 != 1) {
    *(undefined4 *)(lVar13 + 0x48) = 1;
    puVar6 = (undefined8 *)FUN_007e1f40(param_1[1],0xa8);
    *(undefined8 **)(lVar13 + 0x50) = puVar6;
    *puVar6 = psVar5;
    puVar6[0x13] = 0;
    puVar6[0x14] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[1] = psVar12;
    puVar6[2] = lVar13;
    uVar7 = FUN_0084ad30();
    puVar6[4] = uVar7;
    *(undefined1 *)(puVar6 + 5) = 1;
    psVar12 = param_2 + 1;
    if (((byte)*param_2 & 1) != 0) {
      psVar12 = *(string **)(param_2 + 0x10);
    }
    *(bool *)((long)puVar6 + 0x29) = *psVar12 != (string)0x2e;
    if (param_4 == 2) {
      *(undefined4 *)(puVar6 + 0xd) = 1;
      puVar9 = (undefined4 *)FUN_007e1f40(param_1[1],8);
      puVar6[0xe] = puVar9;
      *puVar9 = 1;
      *(undefined4 *)(puVar6[0xe] + 4) = 0x20000000;
    }
    uVar10 = 0;
    auVar14._8_8_ = puVar6;
    auVar14._0_8_ = 1;
    goto LAB_007f32c4;
  }
  *(undefined4 *)(lVar13 + 0x58) = 1;
  puVar6 = (undefined8 *)FUN_007e1f40(param_1[1],0x38);
  *(undefined8 **)(lVar13 + 0x60) = puVar6;
  *puVar6 = psVar5;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[1] = psVar12;
  puVar6[2] = lVar13;
  uVar7 = FUN_0084fe30();
  puVar6[4] = uVar7;
  *(undefined1 *)(puVar6 + 5) = 1;
  psVar12 = param_2 + 1;
  if (((byte)*param_2 & 1) != 0) {
    psVar12 = *(string **)(param_2 + 0x10);
  }
  sVar1 = *psVar12;
  *(undefined4 *)((long)puVar6 + 0x2c) = 1;
  *(bool *)((long)puVar6 + 0x29) = sVar1 != (string)0x2e;
  puVar8 = (undefined8 *)FUN_007e1f40(param_1[1],0x28);
  puVar6[6] = puVar8;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  uStack_65 = 0;
  local_78 = (string)0x22;
  uStack_6f = s_PLACEHOLDER_VALUE_01cebac0._8_7_;
  local_68 = s_PLACEHOLDER_VALUE_01cebac0[0xf];
  uStack_77 = s_PLACEHOLDER_VALUE_01cebac0._0_7_;
  cStack_70 = s_PLACEHOLDER_VALUE_01cebac0[7];
  uStack_67 = 0x45;
  uVar7 = FUN_007e1d20(param_1[1],&local_78);
  *puVar8 = uVar7;
  if (((byte)local_78 & 1) != 0) {
    operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)));
  }
  if (((byte)*psVar4 & 1) == 0) {
    if ((byte)*psVar4 >> 1 != 0) goto LAB_007f360c;
LAB_007f354c:
    puVar8[1] = *puVar8;
  }
  else {
    if (*(long *)(psVar4 + 8) == 0) goto LAB_007f354c;
LAB_007f360c:
    lVar13 = param_1[1];
    std::operator+(psVar4,".PLACEHOLDER_VALUE");
    uVar7 = FUN_007e1d20(lVar13,&local_78);
    puVar8[1] = uVar7;
    if (((byte)local_78 & 1) != 0) {
      operator_delete((void *)CONCAT53(uStack_65,CONCAT21(uStack_67,local_68)));
    }
  }
  *(undefined4 *)(puVar8 + 2) = 0;
  puVar8[3] = puVar6;
  uVar7 = FUN_00850fb0();
  uVar10 = 0;
  puVar8[4] = uVar7;
  auVar14._8_8_ = puVar6;
  auVar14._0_8_ = 4;
LAB_007f32c4:
  auVar15._8_8_ = auVar14._8_8_;
  auVar15._0_8_ = auVar14._0_8_ & 0xffffffff | uVar10 << 0x20;
  return auVar15;
}


