/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0155a8c0; name: FUN_0155a8c0
 */


bool FUN_0155a8c0(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  Sha256Impl aSStack_118 [120];
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  long lStack_80;
  long local_78;
  undefined1 local_70;
  undefined *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_48;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 == *(long *)(param_1 + 0x10)) {
    lVar14 = 0;
  }
  else {
    uVar13 = (*(long *)(param_1 + 0x10) + -0x20) - lVar9;
    uVar12 = uVar13 >> 5;
    uVar4 = (int)uVar12 + 1;
    uVar11 = (ulong)uVar4 & 3;
    if (uVar13 < 0x60) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      lVar8 = (uVar11 - 1) - uVar12;
      do {
        plVar10 = (long *)(lVar9 + 0x18);
        plVar1 = (long *)(lVar9 + 0x38);
        plVar2 = (long *)(lVar9 + 0x58);
        plVar3 = (long *)(lVar9 + 0x78);
        lVar9 = lVar9 + 0x80;
        lVar14 = lVar14 + *plVar10 + *plVar1 + *plVar2 + *plVar3 + 0x10;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0);
    }
    if ((uVar4 & 3) != 0) {
      lVar8 = -uVar11;
      plVar10 = (long *)(lVar9 + 0x18);
      do {
        lVar14 = lVar14 + *plVar10 + 4;
        lVar8 = lVar8 + 1;
        plVar10 = plVar10 + 4;
      } while (lVar8 != 0);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  lVar9 = lVar14 + 0x20;
  lVar8 = (**(code **)(*param_2 + 0x10))(param_2,lVar9,8);
  if (lVar8 == 0) {
    bVar6 = false;
  }
  else {
    local_90 = 0;
    local_a0 = PTR_DAT_0272ae88 + 0x10;
    local_70 = 0;
    local_88 = PTR_DAT_0272a778 + 0x10;
    local_68 = &DAT_0217318c;
    uStack_60 = 0x7f;
    local_98 = PTR_DAT_0272ae70 + 0x10;
    local_58 = 0;
    lStack_80 = lVar8;
    local_78 = lVar14;
    uVar11 = FUN_0155ab10(param_1,&local_a0);
    bVar6 = false;
    if ((uVar11 & 1) != 0) {
      FUN_01562ca0(auStack_128);
      FUN_01562cb0(auStack_128);
      FUN_01562d20(auStack_128,lVar8,lVar14,0);
      FUN_01562d70(&local_148,auStack_128);
      puVar5 = (undefined8 *)(lVar8 + lVar14);
      puVar5[2] = local_138;
      puVar5[3] = uStack_130;
      *puVar5 = local_148;
      puVar5[1] = uStack_140;
      local_48 = 0;
      iVar7 = FUN_0155ad60(&local_48,param_3,lVar9,0);
      if (iVar7 == 0) {
        iVar7 = FUN_006e8190(local_48,lVar8,lVar9);
        bVar6 = iVar7 == 0;
      }
      else {
        bVar6 = false;
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_118);
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar8,lVar9,8);
  }
  return bVar6;
}


