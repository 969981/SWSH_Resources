/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a9dd0; name: FUN_008a9dd0
 */


void FUN_008a9dd0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [24];
  long local_38;
  
  if (*(int *)(*(long *)(param_1 + 0x88) + 0x5cc) == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar7)(puVar7);
  lVar3 = FUN_00897d00();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x88) + 0x5cc);
  lVar3 = puVar7[0xb];
  if (iVar1 != 5) {
    if (iVar1 != 6) {
      return;
    }
    FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x5cc) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
    if (*(char *)(lVar3 + 0x2b) != '\0') {
      FUN_008c95d0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(lVar3 + 0x1c),0);
      FUN_008c7410(*(undefined8 *)(param_1 + 0x88),*(undefined1 *)(lVar3 + 0x2b));
    }
    *(undefined8 *)(param_1 + 0x7c) = 0xc;
    return;
  }
  FUN_008c82b0(*(long *)(param_1 + 0x88),0);
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x88),0);
  if ((*(int *)(lVar3 + 0x20) == -1) ||
     (lVar4 = (**(code **)(**(long **)(lVar3 + 0x10) + 0x50))(), lVar4 == 0)) {
LAB_008a9fe4:
    uVar8 = 0x9a798655c71499a4;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      uVar8 = 0x911909c148014b72;
    }
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
      plVar2 = (long *)(**(code **)*puVar7)(puVar7);
      lVar3 = FUN_00897d00();
      for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        if (plVar2 == (long *)lVar3) goto LAB_008aa0fc;
      }
    }
  }
  else {
    uVar5 = FUN_0087d610(lVar4,2);
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_008ab150(param_1);
      if ((uVar5 & 1) == 0) goto LAB_008a9fe4;
      iVar1 = FUN_0087afd0(lVar4);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 3;
        FUN_008c95d0(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(lVar3 + 0x1c),0);
        FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
        iVar1 = FUN_008783b0(lVar4);
        if (iVar1 < 800) {
          if (iVar1 == 0x283) {
            puVar6 = &DAT_02616d58;
          }
          else {
            if (iVar1 != 0x284) goto LAB_008aa198;
            puVar6 = &DAT_02616d70;
          }
        }
        else {
          if (iVar1 != 800) {
            if (iVar1 == 0x380) {
              FUN_006cf0a0(auStack_50,&DAT_02616d88);
              FUN_016d3620(auStack_50);
              if (local_38 != 0) {
                (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
                local_38 = 0;
              }
              *(undefined1 *)(lVar3 + 0x29) = 1;
            }
            else if (iVar1 == 0x381) {
              FUN_006cf0a0(auStack_50,&DAT_02616da0);
              FUN_016d3620(auStack_50);
              if (local_38 != 0) {
                (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
                local_38 = 0;
              }
              *(undefined1 *)(lVar3 + 0x29) = 0;
            }
            goto LAB_008aa198;
          }
          puVar6 = &DAT_02616d40;
        }
        FUN_006cf0a0(auStack_50,puVar6);
        FUN_016d3620(auStack_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
LAB_008aa198:
        FUN_008a98b0(param_1,1);
        return;
      }
      uVar8 = 0x9a798755c7149b57;
      if (*(char *)(param_1 + 0xa2) != '\0') {
        uVar8 = 0x911c2bc14803bb0f;
      }
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0))
      {
        plVar2 = (long *)(**(code **)*puVar7)(puVar7);
        lVar3 = FUN_00897d00();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) goto LAB_008aa0fc;
        }
      }
    }
    else {
      uVar8 = 0x9a798955c7149ebd;
      if (*(char *)(param_1 + 0xa2) != '\0') {
        uVar8 = 0x91233bc14809f4ed;
      }
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0))
      {
        plVar2 = (long *)(**(code **)*puVar7)(puVar7);
        lVar3 = FUN_00897d00();
        for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
          if (plVar2 == (long *)lVar3) goto LAB_008aa0fc;
        }
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_008aa050:
  FUN_008a6b70(puVar7,uVar8,0,0);
  *(undefined8 *)(param_1 + 0x7c) = 2;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x90),0);
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
LAB_008aa0fc:
  puVar7 = puVar7 + -10;
  goto LAB_008aa050;
}


