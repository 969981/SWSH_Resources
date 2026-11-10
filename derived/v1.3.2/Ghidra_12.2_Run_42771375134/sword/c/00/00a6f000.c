/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a6f000; name: FUN_00a6f000
 */


void FUN_00a6f000(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  undefined1 auStack_60 [24];
  long local_48;
  long local_38;
  
  if ((char)param_1[0x31d] == '\0') {
    return;
  }
  plVar7 = (long *)param_1[0xa9];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00a7ac40(param_1);
      uVar2 = FUN_00a08c30(uVar3,0);
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)plVar7 + 0x50d) != '\0') {
          uVar3 = 0;
          goto LAB_00a6f08c;
        }
      }
      else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
        uVar3 = 1;
LAB_00a6f08c:
        FUN_00ad5d30(plVar7,uVar3);
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = (long *)param_1[0xaa];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00a7ac40(param_1);
      uVar2 = FUN_00a08c30(uVar3,1);
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)plVar7 + 0x50d) != '\0') {
          uVar3 = 0;
          goto LAB_00a6f104;
        }
      }
      else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
        uVar3 = 1;
LAB_00a6f104:
        FUN_00ad5d30(plVar7,uVar3);
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = (long *)param_1[0xab];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00a7ac40(param_1);
      uVar2 = FUN_00a08c30(uVar3,2);
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)plVar7 + 0x50d) != '\0') {
          uVar3 = 0;
          goto LAB_00a6f17c;
        }
      }
      else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
        uVar3 = 1;
LAB_00a6f17c:
        FUN_00ad5d30(plVar7,uVar3);
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = (long *)param_1[0xac];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00a7ac40(param_1);
      uVar2 = FUN_00a08c30(uVar3,3);
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)plVar7 + 0x50d) != '\0') {
          uVar3 = 0;
          goto LAB_00a6f1f4;
        }
      }
      else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
        uVar3 = 1;
LAB_00a6f1f4:
        FUN_00ad5d30(plVar7,uVar3);
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = (long *)param_1[0xad];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00a7ac40(param_1);
      uVar2 = FUN_00a08c30(uVar3,4);
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)plVar7 + 0x50d) != '\0') {
          uVar3 = 0;
          goto LAB_00a6f26c;
        }
      }
      else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
        uVar3 = 1;
LAB_00a6f26c:
        FUN_00ad5d30(plVar7,uVar3);
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = (long *)param_1[0xae];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7 + 9;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_00a7ac40(param_1);
      uVar2 = FUN_00a08c30(uVar3,5);
      if ((uVar2 & 1) == 0) {
        if (*(char *)((long)plVar7 + 0x50d) != '\0') {
          uVar3 = 0;
          goto LAB_00a6f2e4;
        }
      }
      else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
        uVar3 = 1;
LAB_00a6f2e4:
        FUN_00ad5d30(plVar7,uVar3);
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar7 = (long *)param_1[0xaf];
  if (plVar7 == (long *)0x0) goto LAB_00a6f370;
  plVar6 = plVar7 + 9;
  (**(code **)(*plVar6 + 0x10))(plVar6);
  uVar2 = (**(code **)(*plVar7 + 400))(plVar7);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_00a7ac40(param_1);
    uVar2 = FUN_00a08c30(uVar3,6);
    if ((uVar2 & 1) == 0) {
      if (*(char *)((long)plVar7 + 0x50d) != '\0') {
        uVar3 = 0;
        goto LAB_00a6f35c;
      }
    }
    else if (*(char *)((long)plVar7 + 0x50d) == '\0') {
      uVar3 = 1;
LAB_00a6f35c:
      FUN_00ad5d30(plVar7,uVar3);
    }
  }
  (**(code **)(*plVar6 + 0x18))(plVar6);
LAB_00a6f370:
  if (*(char *)((long)param_1 + 0x18e9) != '\0') {
    uVar2 = 0;
    bVar8 = false;
    do {
      plVar7 = (long *)param_1[uVar2 + 0xa9];
      if (plVar7 != (long *)0x0) {
        plVar6 = plVar7 + 9;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar4 = (**(code **)(*plVar7 + 400))(plVar7);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = (**(code **)(*param_1 + 0x748))(param_1,uVar2 & 0xffffffff), (uVar4 & 1) != 0))
        {
          uVar3 = FUN_00a7ac40(param_1);
          uVar4 = FUN_00a08c30(uVar3,uVar2 & 0xffffffff);
          if ((uVar4 & 1) == 0) {
            if (*(char *)((long)plVar7 + 0x50c) != '\0') {
              *(undefined1 *)((long)plVar7 + 0x50c) = 0;
            }
          }
          else {
            uVar3 = FUN_00a7ac40(param_1);
            uVar4 = FUN_00a08c90(uVar3,uVar2 & 0xffffffff);
            if (((uVar4 & 1) != 0) && (*(char *)((long)plVar7 + 0x50c) == '\0')) {
              bVar8 = true;
              *(undefined1 *)((long)plVar7 + 0x50c) = 1;
            }
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 7);
    if ((bVar8) &&
       (uVar2 = FUN_00895a90(*(undefined8 *)PTR_DAT_02717598,*(undefined4 *)((long)param_1 + 0x18ec)
                            ), (uVar2 & 1) == 0)) {
      lVar5 = *(long *)PTR_DAT_027107a8;
      FUN_0010d170(&local_38,"Play_Ba_sys_pinch");
      FUN_006cf0c0(auStack_60,&local_38);
      uVar1 = FUN_008962c0(lVar5 + 0x108,auStack_60);
      *(undefined4 *)((long)param_1 + 0x18ec) = uVar1;
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
    }
  }
  return;
}


