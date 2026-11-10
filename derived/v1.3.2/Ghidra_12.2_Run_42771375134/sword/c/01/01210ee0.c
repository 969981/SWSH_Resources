/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01210ee0; name: FUN_01210ee0
 */


void FUN_01210ee0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_e0 [48];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  char local_90 [2];
  undefined2 uStack_8e;
  undefined4 uStack_8c;
  undefined2 local_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 local_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  lVar1 = param_1 + 0x310;
  FUN_0121ae00(local_e0);
  local_88 = local_e0._0_2_;
  uStack_86 = local_e0._2_2_;
  uStack_84 = local_e0._4_4_;
  local_68 = local_e0._32_4_;
  uStack_64 = local_e0._36_4_;
  local_70 = local_e0._24_2_;
  uStack_6e = local_e0._26_2_;
  uStack_6c = local_e0._28_4_;
  local_78 = local_e0._16_2_;
  uStack_76 = local_e0._18_2_;
  uStack_74 = local_e0._20_4_;
  local_90[0] = '\x01';
  local_80 = local_e0._8_2_;
  uStack_7e = local_e0._10_2_;
  uStack_7c = local_e0._12_4_;
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x510) == '\0') {
LAB_01210fa4:
    *(ulong *)(param_1 + 0x518) = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
    *(ulong *)(param_1 + 0x538) = CONCAT44(uStack_64,local_68);
    *(ulong *)(param_1 + 0x530) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
    *(ulong *)(param_1 + 0x528) = CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
    *(ulong *)(param_1 + 0x520) = CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
    *(undefined1 *)(param_1 + 0x510) = 1;
LAB_01210fc8:
    FUN_01225e20(lVar1);
  }
  else {
    uVar4 = FUN_0121ae60(param_1 + 0x518,&local_88);
    if ((uVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x510) == '\0') {
        if (local_90[0] != '\0') goto LAB_01210fa4;
      }
      else if (local_90[0] == '\0') {
        *(undefined1 *)(param_1 + 0x510) = 0;
      }
      else {
        *(ulong *)(param_1 + 0x518) = CONCAT44(uStack_84,CONCAT22(uStack_86,local_88));
        *(ulong *)(param_1 + 0x538) = CONCAT44(uStack_64,local_68);
        *(ulong *)(param_1 + 0x530) = CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70));
        *(ulong *)(param_1 + 0x528) = CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
        *(ulong *)(param_1 + 0x520) = CONCAT44(uStack_7c,CONCAT22(uStack_7e,local_80));
      }
      goto LAB_01210fc8;
    }
  }
  if (local_90[0] != '\0') {
    local_90[0] = '\0';
  }
  FUN_0121cf00(local_e0);
  uStack_84 = local_e0._8_4_;
  local_80 = local_e0._12_2_;
  uStack_7e = local_e0._14_2_;
  puVar6 = (undefined8 *)((ulong)local_90 | 4);
  uStack_74 = local_e0._24_4_;
  local_70 = local_e0._28_2_;
  uStack_6e = local_e0._30_2_;
  uStack_7c = local_e0._16_4_;
  local_78 = local_e0._20_2_;
  uStack_76 = local_e0._22_2_;
  local_44 = local_98;
  local_4c = local_a0;
  uStack_8c = local_e0._0_4_;
  local_88 = local_e0._4_2_;
  uStack_86 = local_e0._6_2_;
  uStack_64 = local_e0._40_4_;
  uStack_60 = local_e0._44_4_;
  uStack_6c = local_e0._32_4_;
  local_68 = local_e0._36_4_;
  local_54 = local_a8;
  local_5c = local_b0;
  local_90[0] = '\x01';
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x4c0) == '\0') {
LAB_012110dc:
    uVar2 = *puVar6;
    *(undefined8 *)(param_1 + 0x4cc) = puVar6[1];
    *(undefined8 *)(param_1 + 0x4c4) = uVar2;
    uVar2 = puVar6[4];
    uVar3 = puVar6[2];
    uVar5 = puVar6[3];
    *(undefined8 *)(param_1 + 0x4ec) = puVar6[5];
    *(undefined8 *)(param_1 + 0x4e4) = uVar2;
    *(undefined8 *)(param_1 + 0x4dc) = uVar5;
    *(undefined8 *)(param_1 + 0x4d4) = uVar3;
    uVar5 = puVar6[8];
    uVar2 = puVar6[6];
    uVar3 = puVar6[7];
    *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(puVar6 + 9);
    *(undefined8 *)(param_1 + 0x504) = uVar5;
    *(undefined8 *)(param_1 + 0x4fc) = uVar3;
    *(undefined8 *)(param_1 + 0x4f4) = uVar2;
    *(undefined1 *)(param_1 + 0x4c0) = 1;
LAB_01211144:
    FUN_01225e20(lVar1);
  }
  else {
    uVar4 = FUN_0121d130(param_1 + 0x4c4,puVar6);
    if ((uVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x4c0) == '\0') {
        if (local_90[0] != '\0') goto LAB_012110dc;
      }
      else if (local_90[0] == '\0') {
        *(undefined1 *)(param_1 + 0x4c0) = 0;
      }
      else {
        uVar2 = *puVar6;
        *(undefined8 *)(param_1 + 0x4cc) = puVar6[1];
        *(undefined8 *)(param_1 + 0x4c4) = uVar2;
        uVar2 = puVar6[4];
        uVar3 = puVar6[2];
        uVar5 = puVar6[3];
        *(undefined8 *)(param_1 + 0x4ec) = puVar6[5];
        *(undefined8 *)(param_1 + 0x4e4) = uVar2;
        *(undefined8 *)(param_1 + 0x4dc) = uVar5;
        *(undefined8 *)(param_1 + 0x4d4) = uVar3;
        uVar2 = puVar6[6];
        uVar3 = puVar6[7];
        uVar5 = puVar6[8];
        *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(puVar6 + 9);
        *(undefined8 *)(param_1 + 0x4fc) = uVar3;
        *(undefined8 *)(param_1 + 0x504) = uVar5;
        *(undefined8 *)(param_1 + 0x4f4) = uVar2;
      }
      goto LAB_01211144;
    }
  }
  if (local_90[0] != '\0') {
    local_90[0] = '\0';
  }
  FUN_011f5030(local_e0);
  puVar6 = (undefined8 *)((ulong)local_90 | 2);
  uStack_76 = local_e0._24_2_;
  uStack_74 = local_e0._26_4_;
  local_70 = local_e0._30_2_;
  uStack_7e = local_e0._16_2_;
  uStack_7c = local_e0._18_4_;
  local_78 = local_e0._22_2_;
  uStack_86 = local_e0._8_2_;
  uStack_84 = local_e0._10_4_;
  local_80 = local_e0._14_2_;
  local_90[0] = '\x01';
  uStack_8e = local_e0._0_2_;
  uStack_8c = local_e0._2_4_;
  local_88 = local_e0._6_2_;
  *(undefined4 *)(param_1 + 0x310) = 3;
  if (*(char *)(param_1 + 0x338) == '\0') {
LAB_012111f0:
    uVar2 = puVar6[2];
    uVar3 = *puVar6;
    uVar5 = puVar6[1];
    *(undefined8 *)(param_1 + 0x352) = puVar6[3];
    *(undefined8 *)(param_1 + 0x34a) = uVar2;
    *(undefined8 *)(param_1 + 0x342) = uVar5;
    *(undefined8 *)(param_1 + 0x33a) = uVar3;
    *(undefined1 *)(param_1 + 0x338) = 1;
  }
  else {
    uVar4 = FUN_011f5190(param_1 + 0x33a,puVar6);
    if ((uVar4 & 1) != 0) goto LAB_01211224;
    if (*(char *)(param_1 + 0x338) == '\0') {
      if (local_90[0] != '\0') goto LAB_012111f0;
    }
    else if (local_90[0] == '\0') {
      *(undefined1 *)(param_1 + 0x338) = 0;
    }
    else {
      uVar2 = puVar6[2];
      uVar3 = *puVar6;
      uVar5 = puVar6[1];
      *(undefined8 *)(param_1 + 0x352) = puVar6[3];
      *(undefined8 *)(param_1 + 0x34a) = uVar2;
      *(undefined8 *)(param_1 + 0x342) = uVar5;
      *(undefined8 *)(param_1 + 0x33a) = uVar3;
    }
  }
  FUN_01225e20(lVar1);
LAB_01211224:
  if (local_90[0] != '\0') {
    local_90[0] = '\0';
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return;
}


