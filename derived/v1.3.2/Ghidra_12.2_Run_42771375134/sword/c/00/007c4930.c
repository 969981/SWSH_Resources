/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c4930; name: FUN_007c4930
 */


undefined8 FUN_007c4930(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  char local_1d8 [32];
  int local_1b8 [90];
  
  puVar2 = PTR_DAT_02716b80;
  if ((*(long *)PTR_DAT_02716b80 != 0) &&
     ((iVar3 = FUN_007c2bc0(), iVar3 == 0 ||
      (iVar3 = FUN_007c2bc0(*(undefined8 *)puVar2), iVar3 == 1)))) {
    if (*(long *)PTR_DAT_02716708 != 0) {
      FUN_0186bd40(*(long *)PTR_DAT_02716708,0);
    }
    puVar1 = PTR_DAT_02716a30;
    FUN_019416b0(local_1b8,*(undefined8 *)PTR_DAT_02716a30);
    local_1d8[0] = '\0';
    if (local_1b8[0] == 0) {
      plVar4 = (long *)FUN_0193fc60(*(undefined8 *)puVar1);
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x18))();
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x28))(plVar4);
      if (puVar5 == puVar6) {
        return 1;
      }
      do {
        iVar3 = (**(code **)(*(long *)*puVar5 + 0x48))();
        if (iVar3 == 0x168) {
          nn::os::LockMutex((MutexType *)(param_1 + 0x538));
                    /* WARNING: Subroutine does not return */
          memset(local_1b8,0,0x168);
        }
        puVar5 = puVar5 + 1;
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x28))(plVar4);
      } while (puVar5 != puVar6);
      return 1;
    }
    FUN_018724d0((ulong)local_1d8 | 4,local_1b8);
    lVar7 = *(long *)puVar2;
    local_1d8[0] = '\x01';
    if (lVar7 != 0) {
      local_1b8[0] = 2;
      FUN_007c2c00(lVar7,local_1b8);
      local_1b8[0]._0_1_ = 1;
      local_1b8[1] = 0;
      FUN_007c2c50(lVar7,local_1b8);
      lVar7 = *(long *)puVar2;
      if (lVar7 != 0) {
        local_1b8[0] = (uint)local_1b8[0]._1_3_ << 8;
        FUN_018724d0((ulong)local_1b8 | 4,(ulong)local_1d8 | 4);
        local_1b8[0] = CONCAT31(local_1b8[0]._1_3_,1);
        FUN_007c2fb0(lVar7,local_1b8);
      }
    }
  }
  return 0;
}


