/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8e170; name: FUN_00c8e170
 */


void FUN_00c8e170(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long *local_50;
  long *local_48;
  
  lVar4 = *(long *)(param_1 + 0x270);
  if (lVar4 != 0) {
    lVar8 = 0;
    while( true ) {
      uVar5 = FUN_00c834c0(lVar4,*(undefined1 *)(param_1 + 0x2e3 + lVar8));
      FUN_00c825a0(&local_48);
      FUN_00c825f0(&local_50,uVar5);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x38))();
      }
      if ((local_50 != (long *)0x0) && ((**(code **)(*local_50 + 0x38))(), local_50 != (long *)0x0))
      {
        (**(code **)(local_50[9] + 0x18))();
        local_50 = (long *)0x0;
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
        local_48 = (long *)0x0;
      }
      if (lVar8 == 0xb4) break;
      lVar4 = *(long *)(param_1 + 0x270);
      lVar8 = lVar8 + 0xc;
    }
  }
  iVar1 = *(int *)(param_1 + 0x3a4);
  if (iVar1 != 6) {
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        FUN_00c94080(param_1,1);
        return;
      }
      return;
    }
    lVar4 = *(long *)(param_1 + 0x270);
    if (lVar4 == 0) {
      bVar7 = false;
    }
    else {
      lVar8 = 0;
      bVar7 = true;
      while( true ) {
        FUN_00c834c0(lVar4,*(undefined1 *)(param_1 + 0x2e3 + lVar8));
        FUN_00c825f0(&local_48);
        if (local_48 != (long *)0x0) {
          uVar6 = (**(code **)(*local_48 + 0x50))();
          if ((uVar6 & 1) == 0) {
            bVar7 = false;
          }
          if (local_48 != (long *)0x0) {
            (**(code **)(local_48[9] + 0x18))();
            local_48 = (long *)0x0;
          }
        }
        if (lVar8 == 0xb4) break;
        lVar4 = *(long *)(param_1 + 0x270);
        lVar8 = lVar8 + 0xc;
      }
      bVar7 = !bVar7;
    }
    if (bVar7) {
      return;
    }
    if (*(int *)(param_1 + 0x94) != 3 && *(int *)(param_1 + 0x94) != 5) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3a4) = 3;
    *(undefined1 *)(param_1 + 0x600) = 0;
    if (*(char *)(param_1 + 0x39d) != '\0') {
      FUN_00c946b0(param_1,1);
      return;
    }
    if (*(char *)(param_1 + 0x39c) == '\0') {
      return;
    }
    FUN_00c8ff20(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x3a8) != 0) {
    if (*(int *)(param_1 + 0x3a0) < 1) {
      *(undefined4 *)(param_1 + 0x3a4) = 0;
      return;
    }
    *(int *)(param_1 + 0x3a0) = *(int *)(param_1 + 0x3a0) + -1;
    return;
  }
  lVar4 = *(long *)(param_1 + 0x270);
  if (lVar4 != 0) {
    lVar8 = 0;
    bVar7 = true;
    do {
      uVar5 = FUN_00c834c0(lVar4,*(undefined1 *)(param_1 + 0x2e3 + lVar8));
      FUN_00c825a0(&local_48);
      FUN_00c825f0(&local_50,uVar5);
      if (local_48 == (long *)0x0) {
        uVar3 = 1;
        uVar2 = 1;
        if (local_50 == (long *)0x0) goto LAB_00c8e37c;
LAB_00c8e34c:
        uVar3 = (**(code **)(*local_50 + 0x70))();
        if ((uVar2 & uVar3 & 1) == 0) {
          bVar7 = false;
        }
        else {
LAB_00c8e380:
          FUN_00c82750(uVar5);
        }
        if (local_50 != (long *)0x0) {
          (**(code **)(local_50[9] + 0x18))();
          local_50 = (long *)0x0;
        }
      }
      else {
        uVar2 = (**(code **)(*local_48 + 0x70))();
        uVar3 = uVar2;
        if (local_50 != (long *)0x0) goto LAB_00c8e34c;
LAB_00c8e37c:
        if ((uVar3 & 1) != 0) goto LAB_00c8e380;
        bVar7 = false;
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(local_48[9] + 0x18))();
        local_48 = (long *)0x0;
      }
      if (lVar8 == 0xb4) goto LAB_00c8e424;
      lVar4 = *(long *)(param_1 + 0x270);
      lVar8 = lVar8 + 0xc;
    } while( true );
  }
LAB_00c8e428:
  FUN_00c8f950(param_1);
  *(undefined4 *)(param_1 + 0x3a0) = 3;
  *(undefined4 *)(param_1 + 0x3a8) = 1;
  return;
LAB_00c8e424:
  if (!bVar7) {
    return;
  }
  goto LAB_00c8e428;
}


