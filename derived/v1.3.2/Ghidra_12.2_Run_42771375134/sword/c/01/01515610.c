/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01515610; name: FUN_01515610
 */


ulong FUN_01515610(long param_1,uint *param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
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
  plVar5 = *(long **)(param_1 + 0x58);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
  }
  nn::os::LockMutex(pMVar1);
  puVar4 = *(uint **)(param_1 + 0x10);
  uVar10 = (long)puVar4 - (long)*(uint **)(param_1 + 8);
  if (0 < (long)uVar10) {
    puVar8 = *(uint **)(param_1 + 8);
    puVar9 = puVar4;
    do {
      puVar14 = (uint *)((long)puVar8 + (uVar10 >> 1 & 0x7fffffffffffffe0));
      if (*puVar14 == *param_2) goto LAB_015156a8;
      puVar3 = puVar14 + 8;
      if (*param_2 <= *puVar14) {
        puVar3 = puVar8;
        puVar9 = puVar14;
      }
      uVar10 = (long)puVar9 - (long)puVar3;
      puVar8 = puVar3;
    } while (0 < (long)uVar10);
  }
  puVar14 = puVar4;
LAB_015156a8:
  nn::os::UnlockMutex(pMVar1);
  uVar10 = 0;
  if (puVar14 == puVar4) {
    uVar12 = 0;
    goto LAB_0151585c;
  }
  uVar12 = 0;
  if (puVar14 == (uint *)0x0) goto LAB_0151585c;
  uVar11 = *(undefined8 *)(puVar14 + 2);
  uVar13 = *(undefined8 *)(puVar14 + 6);
  local_b0 = PTR_DAT_0272a768 + 0x10;
  uStack_44 = *puVar14;
  local_50 = 0;
  local_48 = 0;
  puVar2 = PTR_DAT_0272a770 + 0x10;
  local_58 = puVar2;
  if (uStack_44 != 0) {
    uVar10 = (ulong)uStack_44 - ((ulong)(uStack_44 >> 1) & 0x5555555555555555);
    uStack_44 = uStack_44 ^ uStack_44 << 2;
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uStack_44 = uStack_44 ^ uStack_44 >> 0xf;
    uStack_44 = uStack_44 ^ uStack_44 << 0xd;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if ((uVar10 != 1) &&
       (uStack_44 = uStack_44 ^ uStack_44 << 2, uStack_44 = uStack_44 ^ uStack_44 >> 0xf,
       uStack_44 = uStack_44 ^ uStack_44 << 0xd, uVar10 != 2)) {
      FUN_014fc490(&local_58);
      for (lVar7 = uVar10 - 3; lVar7 != 0; lVar7 = lVar7 + -1) {
        (**(code **)(local_58 + 0x10))(&local_58);
      }
    }
  }
  local_a0 = 0;
  local_98 = PTR_DAT_0272a778 + 0x10;
  local_80 = 0;
  local_68 = CONCAT44(uStack_44,uStack_44);
  local_60 = 0;
  local_a8 = PTR_DAT_0272a780 + 0x10;
  uStack_90 = uVar11;
  local_88 = uVar13;
  local_78 = puVar2;
  uStack_70 = local_50;
  local_48 = uStack_44;
  plVar5 = (long *)(**(code **)(local_b0 + 0x18))(&local_b0);
  plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
  uVar10 = (**(code **)(*plVar6 + 0x10))(plVar6,1,plVar5[1]);
  uVar12 = 0;
  if ((uVar10 & 1) != 0) {
    uVar12 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_58,1,0);
    uVar12 = uVar12 & 0xffffffff;
  }
  lVar7 = (**(code **)(local_b0 + 0x10))(&local_b0);
  *(long *)(lVar7 + 8) = *(long *)(lVar7 + 8) + 1;
  if ((uVar12 & 1) == 0) {
LAB_0151581c:
    uVar10 = 0;
    uVar12 = 0;
  }
  else {
    if ((char)local_58 == '\x01') {
      uVar12 = 0;
    }
    else {
      if ((char)local_58 != '\x02') goto LAB_0151581c;
      uVar12 = 0x100;
    }
    uVar10 = 1;
  }
LAB_0151585c:
  nn::os::UnlockMutex(pMVar1);
  return uVar12 | uVar10;
}


