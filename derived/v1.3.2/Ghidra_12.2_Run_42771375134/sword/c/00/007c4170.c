/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c4170; name: FUN_007c4170
 */


undefined8 FUN_007c4170(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  uint local_228;
  undefined4 local_224;
  int local_78 [4];
  uint local_68;
  undefined4 local_64;
  
  puVar3 = PTR_DAT_02716b80;
  if ((*(long *)PTR_DAT_02716b80 == 0) ||
     ((iVar5 = FUN_007c2bc0(), iVar5 != 0 &&
      (iVar5 = FUN_007c2bc0(*(undefined8 *)puVar3), iVar5 != 1)))) {
    return 0;
  }
  puVar1 = PTR_DAT_02716708;
  if (*(long *)PTR_DAT_02716708 != 0) {
    FUN_0186bd40(*(long *)PTR_DAT_02716708,0);
  }
  puVar2 = PTR_DAT_02716a30;
  FUN_019416b0(&local_228,*(undefined8 *)PTR_DAT_02716a30);
  local_68 = local_68 & 0xffffff00;
  if (local_228 != 0) {
    FUN_018724d0((ulong)&local_68 | 4,&local_228);
    lVar8 = *(long *)puVar3;
    local_68 = CONCAT31(local_68._1_3_,1);
    if (lVar8 == 0) {
      return 0;
    }
    local_228 = 2;
    FUN_007c2c00(lVar8,&local_228);
    local_228._0_1_ = 1;
    local_224 = 0;
    FUN_007c2c50(lVar8,&local_228);
    lVar8 = *(long *)puVar3;
    if (lVar8 == 0) {
      return 0;
    }
    local_228 = (uint)local_228._1_3_ << 8;
    FUN_018724d0((ulong)&local_228 | 4,(ulong)&local_68 | 4);
    local_228 = CONCAT31(local_228._1_3_,1);
    FUN_007c2fb0(lVar8,&local_228);
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x4e8));
  if (*(char *)(param_1 + 0x4e0) != '\0') {
    lVar8 = param_1 + 0x360;
    uVar6 = FUN_007c1be0(lVar8);
    if ((uVar6 & 1) != 0) {
      uVar9 = *(undefined8 *)puVar2;
      cVar4 = FUN_007a9cb0();
      if (cVar4 == '\0') {
        FUN_0189b210(&local_228);
        uVar7 = FUN_007c2320(lVar8);
        FUN_0189b2c0(&local_68,&local_228,uVar7,0x168);
        FUN_01940640(local_78,uVar9,&local_228);
        if (local_78[0] == 0) {
          thunk_FUN_018af3a0(&local_228);
          uVar6 = FUN_019406a0(uVar9);
          goto joined_r0x007c447c;
        }
        lVar8 = *(long *)puVar3;
        if (lVar8 != 0) {
          local_68 = 2;
          FUN_007c2c00(lVar8,&local_68);
          local_68 = CONCAT31(local_68._1_3_,1);
          local_64 = 0;
          FUN_007c2c50(lVar8,&local_68);
          lVar8 = *(long *)puVar3;
          if (lVar8 != 0) {
            local_68 = local_68 & 0xffffff00;
            FUN_018724d0((ulong)&local_68 | 4,local_78);
            local_68 = CONCAT31(local_68._1_3_,1);
            FUN_007c2fb0(lVar8,&local_68);
            if ((char)local_68 != '\0') {
              local_68 = local_68 & 0xffffff00;
            }
          }
        }
        thunk_FUN_018af3a0(&local_228);
      }
      else {
        cVar4 = FUN_007a9cb0();
        if (cVar4 == '\x03') {
          FUN_0188fd00(&local_228);
          uVar7 = FUN_007c2320(lVar8);
          FUN_0188fe20(&local_68,&local_228,uVar7,0x168);
          FUN_01940640(local_78,uVar9,&local_228);
          if (local_78[0] != 0) {
            lVar8 = *(long *)puVar3;
            if (lVar8 != 0) {
              local_68 = 2;
              FUN_007c2c00(lVar8,&local_68);
              local_68 = CONCAT31(local_68._1_3_,1);
              local_64 = 0;
              FUN_007c2c50(lVar8,&local_68);
              lVar8 = *(long *)puVar3;
              if (lVar8 != 0) {
                local_68 = local_68 & 0xffffff00;
                FUN_018724d0((ulong)&local_68 | 4,local_78);
                local_68 = CONCAT31(local_68._1_3_,1);
                FUN_007c2fb0(lVar8,&local_68);
                if ((char)local_68 != '\0') {
                  local_68 = local_68 & 0xffffff00;
                }
              }
            }
            FUN_0188fd60(&local_228);
            goto LAB_007c4530;
          }
          FUN_0188fd60(&local_228);
        }
        uVar6 = FUN_019406a0(uVar9);
joined_r0x007c447c:
        while ((uVar6 & 1) == 0) {
          if (*(long *)puVar1 != 0) {
            FUN_0186bd40(*(long *)puVar1,0);
          }
          nn::os::SleepThread(*(long *)(param_1 + 0x328) * 1000000);
          uVar6 = FUN_019406a0(uVar9);
        }
        FUN_019406d0(&local_68,uVar9);
        if (local_68 == 0) goto LAB_007c4538;
        lVar8 = *(long *)puVar3;
        uVar9 = 0;
        if (lVar8 == 0) goto LAB_007c453c;
        local_228 = 2;
        FUN_007c2c00(lVar8,&local_228);
        local_228 = CONCAT31(local_228._1_3_,1);
        local_224 = 0;
        FUN_007c2c50(lVar8,&local_228);
        lVar8 = *(long *)puVar3;
        uVar9 = 0;
        if (lVar8 == 0) goto LAB_007c453c;
        local_228 = local_228 & 0xffffff00;
        FUN_018724d0((ulong)&local_228 | 4,&local_68);
        local_228 = CONCAT31(local_228._1_3_,1);
        FUN_007c2fb0(lVar8,&local_228);
        if ((char)local_228 != '\0') {
          local_228 = local_228 & 0xffffff00;
        }
      }
LAB_007c4530:
      uVar9 = 0;
      goto LAB_007c453c;
    }
  }
LAB_007c4538:
  uVar9 = 1;
LAB_007c453c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x4e8));
  return uVar9;
}


