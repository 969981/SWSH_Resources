/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01553850; name: FUN_01553850
 */


undefined1  [16] FUN_01553850(long param_1,uint *param_2,undefined8 *param_3,undefined8 *param_4)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined1 auVar14 [16];
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  
  pMVar1 = (MutexType *)(param_1 + 0x78);
  nn::os::LockMutex(pMVar1);
  plVar6 = *(long **)(param_1 + 0x58);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar9 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar9) {
    puVar7 = *(uint **)(param_1 + 8);
    puVar8 = puVar4;
    do {
      puVar13 = (uint *)((long)puVar7 + (uVar9 >> 1 & 0x7fffffffffffffe0));
      if (*puVar13 == *param_2) goto LAB_015538f4;
      puVar3 = puVar13 + 8;
      if (*param_2 <= *puVar13) {
        puVar3 = puVar7;
        puVar8 = puVar13;
      }
      uVar9 = (long)puVar8 - (long)puVar3;
      puVar7 = puVar3;
    } while (0 < (long)uVar9);
  }
  puVar13 = puVar4;
LAB_015538f4:
  nn::os::UnlockMutex(pMVar1);
  uVar9 = 0;
  if (puVar13 == puVar4) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if (puVar13 != (uint *)0x0) {
      uVar10 = *(undefined8 *)(puVar13 + 2);
      uVar12 = *(undefined8 *)(puVar13 + 6);
      local_c0 = PTR_DAT_0272a768 + 0x10;
      uStack_54 = *puVar13;
      local_60 = 0;
      local_58 = 0;
      puVar2 = PTR_DAT_0272a770 + 0x10;
      local_68 = puVar2;
      if (uStack_54 != 0) {
        uVar9 = (ulong)uStack_54 - ((ulong)(uStack_54 >> 1) & 0x5555555555555555);
        uStack_54 = uStack_54 ^ uStack_54 << 2;
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uStack_54 = uStack_54 ^ uStack_54 >> 0xf;
        uStack_54 = uStack_54 ^ uStack_54 << 0xd;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar9 != 1) &&
           (uStack_54 = uStack_54 ^ uStack_54 << 2, uStack_54 = uStack_54 ^ uStack_54 >> 0xf,
           uStack_54 = uStack_54 ^ uStack_54 << 0xd, uVar9 != 2)) {
          FUN_014fc490(&local_68);
          for (lVar5 = uVar9 - 3; lVar5 != 0; lVar5 = lVar5 + -1) {
            (**(code **)(local_68 + 0x10))(&local_68);
          }
        }
      }
      local_b0 = 0;
      local_a8 = PTR_DAT_0272a778 + 0x10;
      local_90 = 0;
      local_78 = CONCAT44(uStack_54,uStack_54);
      local_b8 = PTR_DAT_0272a780 + 0x10;
      uStack_70 = 0;
      uStack_a0 = uVar10;
      local_98 = uVar12;
      local_88 = puVar2;
      uStack_80 = local_60;
      local_58 = uStack_54;
      auVar14 = FUN_014fc5c0(&local_c0,*param_3,*param_4);
      param_2 = auVar14._8_8_;
      uVar11 = auVar14._0_8_ & 0xffffffffffffff00;
      uVar9 = auVar14._0_8_ & 0xff;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  auVar14._0_8_ = uVar11 | uVar9;
  auVar14._8_8_ = param_2;
  return auVar14;
}


