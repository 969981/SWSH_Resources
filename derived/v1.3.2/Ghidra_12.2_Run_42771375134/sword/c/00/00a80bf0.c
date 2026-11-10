/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a80bf0; name: FUN_00a80bf0
 */


void FUN_00a80bf0(long *param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_98;
  long local_90;
  long *plStack_88;
  long *local_70;
  long *local_68;
  
  if (param_3 == 0xff) {
    *param_1 = 0;
  }
  else {
    FUN_00a87ac0(&local_98,*(long *)(param_2 + 0x6c8) + 8);
    plVar6 = local_70;
    do {
      if (plVar6 == (long *)0x0) {
        *param_1 = 0;
        lVar5 = local_98;
        plVar3 = local_70;
        break;
      }
      lVar5 = plVar6[3];
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar5 + 0xa8) != 0) {
        lVar4 = *(long *)(lVar5 + 0xa8) << 3;
        plVar3 = *(long **)(lVar5 + 0xa0);
        do {
          lVar2 = *plVar3;
          if (*(int *)(lVar2 + 0x3c8) == param_3) {
            *param_1 = lVar2;
            if (lVar2 != 0) {
              (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
            }
            bVar1 = true;
            if (lVar5 == 0) goto LAB_00a80c94;
            goto LAB_00a80c84;
          }
          lVar4 = lVar4 + -8;
          plVar3 = plVar3 + 1;
        } while (lVar4 != 0);
      }
      plVar6 = (long *)*plVar6;
      bVar1 = false;
      if (lVar5 != 0) {
LAB_00a80c84:
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      }
LAB_00a80c94:
      lVar5 = local_98;
      plVar3 = local_70;
    } while (!bVar1);
    while (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      local_98 = lVar5;
      if (plVar3[3] != 0) {
        (**(code **)(*(long *)(plVar3[3] + 0x48) + 0x18))();
        plVar3[3] = 0;
      }
      (**(code **)(*local_68 + 0x18))(local_68,plVar3,0x20,8);
      lVar5 = local_98;
      plVar3 = (long *)lVar4;
    }
    local_98 = 0;
    if (lVar5 != 0) {
      (**(code **)(*plStack_88 + 0x18))(plStack_88,lVar5,local_90 << 3,8);
    }
  }
  return;
}


