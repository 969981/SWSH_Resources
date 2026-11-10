/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017a470; name: FUN_0017a470
 */


void FUN_0017a470(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *__s;
  long *plVar4;
  long lVar5;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if (uVar3 == 0) {
    lVar5 = *param_1;
    param_1[5] = 0;
    param_1[2] = 0;
    if (lVar5 != 0) {
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
    }
    *param_1 = 0;
    return;
  }
  uVar2 = uVar3 << 1 | 1;
  if ((*(uint *)((long)param_1 + 0x2c) < uVar3) || (uVar3 < *(uint *)((long)param_1 + 0x2c) >> 2)) {
    lVar5 = *param_1;
    if (lVar5 != 0) {
      plVar4 = (long *)FUN_00400d30();
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5);
    }
    iVar1 = uVar2 * 4 + uVar3 * 0xc;
    if (iVar1 == 0) {
      lVar5 = 0;
    }
    else {
      plVar4 = (long *)FUN_00400d30();
      lVar5 = (**(code **)(*plVar4 + 0x10))
                        (plVar4,iVar1,"NonTrackedAlloc",
                         "./../../LowLevelDynamics/include\\DyThresholdTable.h",0xc5);
    }
    __s = (void *)(lVar5 + (ulong)(uVar3 * 0xc));
    *(uint *)((long)param_1 + 0x2c) = uVar3;
    param_1[3] = lVar5;
    param_1[4] = lVar5 + (ulong)(uVar3 << 3);
    *(uint *)((long)param_1 + 0x14) = uVar2;
    *param_1 = lVar5;
    param_1[1] = (long)__s;
  }
  else {
    __s = (void *)param_1[1];
  }
                    /* WARNING: Subroutine does not return */
  memset(__s,0xff,(ulong)(uVar2 << 2));
}


