/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01517030; name: FUN_01517030
 */


ulong FUN_01517030(long param_1,uint *param_2)

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
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  uint local_48;
  uint uStack_44;
  
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
      if (*puVar13 == *param_2) goto LAB_015170c8;
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
LAB_015170c8:
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
      local_b0 = PTR_DAT_0272a768 + 0x10;
      uStack_44 = *puVar13;
      local_50 = 0;
      local_48 = 0;
      puVar2 = PTR_DAT_0272a770 + 0x10;
      local_58 = puVar2;
      if (uStack_44 != 0) {
        uVar9 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
        uStack_44 = uStack_44 ^ uStack_44 << 2;
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
        uStack_44 = uStack_44 ^ uStack_44 << 0xd;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if ((uVar9 != 1) &&
           (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
           uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar9 != 2)) {
          FUN_014fc490(&local_58);
          for (lVar5 = uVar9 - 3; lVar5 != 0; lVar5 = lVar5 + -1) {
            (**(code **)(local_58 + 0x10))(&local_58);
          }
        }
      }
      puStack_98 = PTR_DAT_0272a778 + 0x10;
      local_80 = 0;
      local_a0 = 0;
      local_68 = CONCAT44(uStack_44,uStack_44);
      local_60 = 0;
      local_a8 = PTR_DAT_0272a780 + 0x10;
      local_90 = uVar10;
      uStack_88 = uVar12;
      local_78 = puVar2;
      uStack_70 = local_50;
      local_48 = uStack_44;
      uVar9 = FUN_01517230(&local_b0);
      uVar11 = uVar9 & 0xff00;
      uVar9 = uVar9 & 0xff;
    }
  }
  nn::os::UnlockMutex(pMVar1);
  return uVar11 | uVar9;
}


