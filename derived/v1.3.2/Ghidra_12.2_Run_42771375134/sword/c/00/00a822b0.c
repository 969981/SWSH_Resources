/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a822b0; name: FUN_00a822b0
 */


void FUN_00a822b0(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = 0x4a8;
  if (param_2 != 0) {
    lVar1 = 0x4c8;
  }
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar4 = FUN_00a92a60(uVar3);
  uVar3 = FUN_00a92ab0(uVar3);
  if (*(char *)(param_1 + 0x1f3a) != '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x580) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x580));
      (**(code **)(**(long **)(param_1 + 0x580) + 0x1e8))
                (*(long **)(param_1 + 0x580),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x588) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x588));
      (**(code **)(**(long **)(param_1 + 0x588) + 0x1e8))
                (*(long **)(param_1 + 0x588),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x590) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x590));
      (**(code **)(**(long **)(param_1 + 0x590) + 0x1e8))
                (*(long **)(param_1 + 0x590),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x598) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x598));
      (**(code **)(**(long **)(param_1 + 0x598) + 0x1e8))
                (*(long **)(param_1 + 0x598),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x5a0) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x5a0));
      (**(code **)(**(long **)(param_1 + 0x5a0) + 0x1e8))
                (*(long **)(param_1 + 0x5a0),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x5a8) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x5a8));
      (**(code **)(**(long **)(param_1 + 0x5a8) + 0x1e8))
                (*(long **)(param_1 + 0x5a8),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x5b0) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x5b0));
      (**(code **)(**(long **)(param_1 + 0x5b0) + 0x1e8))
                (*(long **)(param_1 + 0x5b0),(uVar2 & 1) == 0,param_2);
    }
  }
  if (*(char *)(param_1 + 0x1f39) != '\0') {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x548) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x548));
      (**(code **)(**(long **)(param_1 + 0x548) + 0x1e8))
                (*(long **)(param_1 + 0x548),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x550) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x550));
      (**(code **)(**(long **)(param_1 + 0x550) + 0x1e8))
                (*(long **)(param_1 + 0x550),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x558) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x558));
      (**(code **)(**(long **)(param_1 + 0x558) + 0x1e8))
                (*(long **)(param_1 + 0x558),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x560) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x560));
      (**(code **)(**(long **)(param_1 + 0x560) + 0x1e8))
                (*(long **)(param_1 + 0x560),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x568) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x568));
      (**(code **)(**(long **)(param_1 + 0x568) + 0x1e8))
                (*(long **)(param_1 + 0x568),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x570) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x570));
      (**(code **)(**(long **)(param_1 + 0x570) + 0x1e8))
                (*(long **)(param_1 + 0x570),(uVar2 & 1) == 0,param_2);
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x578) + 400))();
    if ((uVar2 & 1) != 0) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0x578));
      (**(code **)(**(long **)(param_1 + 0x578) + 0x1e8))
                (*(long **)(param_1 + 0x578),(uVar2 & 1) == 0,param_2);
    }
  }
  if (*(char *)(param_1 + 0x1f3b) != '\0') {
    if ((*(long **)(param_1 + 0xbd0) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0xbd0) + 400))(), (uVar2 & 1) != 0)) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0xbd0));
      (**(code **)(**(long **)(param_1 + 0xbd0) + 0x1e8))
                (*(long **)(param_1 + 0xbd0),(uVar2 & 1) == 0,param_2);
    }
    if ((*(long **)(param_1 + 0xbd8) != (long *)0x0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0xbd8) + 400))(), (uVar2 & 1) != 0)) {
      uVar2 = FUN_00aca110(uVar4,uVar3,*(undefined8 *)(param_1 + 0xbd8));
                    /* WARNING: Could not recover jumptable at 0x00a82810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0xbd8) + 0x1e8))
                (*(long **)(param_1 + 0xbd8),(uVar2 & 1) == 0,param_2);
      return;
    }
  }
  return;
}


