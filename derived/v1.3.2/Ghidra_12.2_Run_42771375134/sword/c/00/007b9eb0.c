/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b9eb0; name: FUN_007b9eb0
 */


void FUN_007b9eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long local_70 [4];
  long *local_50;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  plVar2 = (long *)param_2[6];
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
    uVar5 = param_2[9];
    *param_1 = uVar3;
    param_1[1] = uVar1;
LAB_007b9f48:
    param_1[6] = 0;
    param_1[8] = 0;
    param_1[9] = uVar5;
    param_1[10] = 0;
  }
  else {
    if (param_2 + 2 == plVar2) {
      local_50 = local_70;
      (**(code **)(*plVar2 + 0x18))();
      uVar5 = param_2[9];
      *param_1 = uVar3;
      param_1[1] = uVar1;
    }
    else {
      local_50 = (long *)(**(code **)(*plVar2 + 0x10))();
      uVar5 = param_2[9];
      *param_1 = uVar3;
      param_1[1] = uVar1;
    }
    if (local_50 == (long *)0x0) goto LAB_007b9f48;
    if (local_70 == local_50) {
      param_1[6] = param_1 + 2;
      (**(code **)(*local_50 + 0x18))();
      param_1[8] = 0;
      param_1[9] = uVar5;
      param_1[10] = 0;
    }
    else {
      uVar3 = (**(code **)(*local_50 + 0x10))();
      param_1[6] = uVar3;
      param_1[8] = 0;
      param_1[9] = uVar5;
      param_1[10] = 0;
    }
  }
  if (uVar5 != 0) {
    if ((ulong)param_1[1] < uVar5) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,uVar5 << 3,8);
    param_1[8] = uVar3;
    param_1[10] = uVar5;
  }
  if (local_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_007b9fb4;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_007b9fb4:
  if (param_2[9] != 0) {
    memmove((void *)param_1[8],(void *)param_2[8],param_2[9] << 3);
  }
  return;
}


