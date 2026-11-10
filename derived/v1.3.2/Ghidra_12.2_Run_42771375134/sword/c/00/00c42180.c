/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c42180; name: FUN_00c42180
 */


void FUN_00c42180(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_34d0;
  code *local_34c8;
  undefined1 *local_34c0;
  undefined1 *puStack_34b8;
  long *local_34b0;
  undefined4 local_34a8;
  undefined4 uStack_34a4;
  long local_34a0;
  long local_3448;
  undefined8 local_3440;
  code *local_3438;
  undefined1 *local_3430;
  undefined1 *local_3428;
  long *local_3420;
  undefined8 local_3418;
  undefined8 local_3410;
  long local_3408 [1653];
  
  if ((char)param_1[0x15] == '\0') {
    *(undefined4 *)(param_1 + 0x11) = param_4;
    return;
  }
  lVar2 = param_1[0x17];
  lVar5 = FUN_00c188d0(param_1);
  if ((lVar5 != 0) && (iVar4 = FUN_00bdc320(), iVar4 != 0)) {
    local_3440 = (undefined1 *)((ulong)local_3440._4_4_ << 0x20);
    local_3438 = (code *)0x0;
    local_3420 = (long *)0x0;
    local_3418 = 0;
    local_3430 = (undefined1 *)0x0;
    local_3428 = (undefined1 *)0x0;
    local_3410 = 0x100000001;
                    /* WARNING: Subroutine does not return */
    memset(local_3408,0,0x2b28);
  }
  (**(code **)(*param_1 + 0x10))(&local_3448,param_1);
  lVar5 = local_3448;
  if (local_3448 == 0) {
    lVar7 = 0;
  }
  else {
    (**(code **)(*(long *)(local_3448 + 0x48) + 0x10))();
    lVar7 = local_3448;
    if (local_3448 != 0) {
      (**(code **)(*(long *)(local_3448 + 0x48) + 0x10))();
      bVar1 = false;
      goto LAB_00c422b0;
    }
  }
  bVar1 = true;
LAB_00c422b0:
  lVar8 = param_1[1];
  local_3430 = (undefined1 *)0x0;
  local_3428 = (undefined1 *)0x0;
  local_3440 = (undefined1 *)0x0;
  local_3438 = (code *)0x0;
  local_3418 = CONCAT44(param_3,(int)lVar2);
  local_3410 = CONCAT44(local_3410._4_4_,param_4);
  local_3408[0] = lVar5;
  local_3420 = param_1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_3440 = &LAB_00c446f0;
  local_3438 = FUN_00c44820;
  local_3430 = &LAB_00c44860;
  local_3428 = &LAB_00c44890;
  local_34c0 = (undefined1 *)0x0;
  puStack_34b8 = (undefined1 *)0x0;
  local_34d0 = (undefined1 *)0x0;
  local_34c8 = (code *)0x0;
  local_34b0 = param_1;
  local_34a8 = param_3;
  uStack_34a4 = param_4;
  local_34a0 = lVar7;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_34d0 = &LAB_00c448c0;
  local_34c8 = FUN_00c44a40;
  local_34c0 = &LAB_00c44a80;
  puStack_34b8 = &LAB_00c44ab0;
  uVar6 = FUN_01282010((int)lVar2,0,lVar8,&local_3440,&local_34d0);
  pcVar3 = local_34c8;
  if (local_34c8 != (code *)0x0) {
    local_34c0 = (undefined1 *)0x0;
    puStack_34b8 = (undefined1 *)0x0;
    local_34d0 = (undefined1 *)0x0;
    local_34c8 = (code *)0x0;
    (*pcVar3)(&local_34b0);
  }
  pcVar3 = local_3438;
  if (local_3438 != (code *)0x0) {
    local_3430 = (undefined1 *)0x0;
    local_3428 = (undefined1 *)0x0;
    local_3440 = (undefined1 *)0x0;
    local_3438 = (code *)0x0;
    (*pcVar3)(&local_3420);
  }
  if ((uVar6 & 1) == 0) {
    param_2 = param_4;
  }
  *(undefined4 *)(param_1 + 0x11) = param_2;
  if (!bVar1) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_3448 != 0) {
    (**(code **)(*(long *)(local_3448 + 0x48) + 0x18))();
  }
  return;
}


