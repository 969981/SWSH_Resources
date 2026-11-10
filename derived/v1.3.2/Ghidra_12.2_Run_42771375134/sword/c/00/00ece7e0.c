/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ece7e0; name: FUN_00ece7e0
 */


uint FUN_00ece7e0(uint param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  
  lVar6 = *param_2;
  if (-0x6f759c8e735c8cce < lVar6) {
    if (lVar6 < -0x6f75988e735c8601) {
      if (lVar6 == -0x6f759c8e735c8ccd) goto LAB_00ece530;
      if (lVar6 == -0x6f759b8e735c8b1a) {
        lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
        }
        lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
        }
        uVar1 = param_1 - 1;
        uVar7 = param_1;
        if ((uVar1 < 0x17) && ((0x6380c7U >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
          uVar7 = *(uint *)(&DAT_02161090 + (long)(int)uVar1 * 4);
          uVar4 = FUN_01510f00(lVar8,0x9b6dfce321ae589);
          if ((uVar4 & 1) == 0) {
            uVar7 = param_1;
          }
        }
        if (lVar8 != 0) {
          (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
        }
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
        }
        return uVar7;
      }
      goto LAB_00eceaac;
    }
    if (((lVar6 != -0x6f75988e735c8601) && (lVar6 != -0x6f75968e735c829b)) &&
       (lVar6 != -0x6f75938e735c7d82)) goto LAB_00eceaac;
LAB_00ece530:
    lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    switch(param_1) {
    case 3:
      uVar4 = FUN_01510f00(lVar8,0xc4dac8ad11f2a42e);
      param_1 = 2;
      if ((uVar4 & 1) == 0) {
        param_1 = 3;
      }
    default:
      goto joined_r0x00ece6e4;
    case 7:
      uVar4 = FUN_01510f00(lVar8,0xc4dac8ad11f2a42e);
      param_1 = 6;
      if ((uVar4 & 1) == 0) {
        param_1 = 7;
      }
      break;
    case 8:
      uVar4 = FUN_01510f00(lVar8,0xc4dac8ad11f2a42e);
      param_1 = 8;
      if ((uVar4 & 1) != 0) {
        param_1 = 1;
      }
      break;
    case 0x12:
      uVar4 = FUN_01510f00(lVar8,0xc4dac8ad11f2a42e);
      param_1 = 0x11;
      if ((uVar4 & 1) == 0) {
        param_1 = 0x12;
      }
      break;
    case 0x16:
      uVar4 = FUN_01510f00(lVar8,0xc4dac8ad11f2a42e);
      param_1 = 0x15;
      if ((uVar4 & 1) == 0) {
        param_1 = 0x16;
      }
      break;
    case 0x17:
      uVar4 = FUN_01510f00(lVar8,0xc4dac8ad11f2a42e);
      param_1 = 0x10;
      if ((uVar4 & 1) == 0) {
        param_1 = 0x17;
      }
joined_r0x00ece6e4:
      if (lVar8 == 0) goto LAB_00ece5e4;
      goto LAB_00ece5d4;
    }
    if (lVar8 != 0) {
LAB_00ece5d4:
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
LAB_00ece5e4:
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    return param_1;
  }
  if (lVar6 < -0x781eb78e7843e858) {
    if ((lVar6 == -0x7825c08e784a1651) || (lVar6 == -0x7825be8e784a12eb)) {
      lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if ((0x17 < param_1) || ((0xff81ffU >> (ulong)(param_1 & 0x1f) & 1) == 0)) goto LAB_00ecea70;
      uVar7 = *(uint *)(&DAT_02161150 + (long)(int)param_1 * 4);
      uVar5 = 0xf6752b0f646cd021;
      goto LAB_00ecea60;
    }
  }
  else {
    if ((lVar6 == -0x781eb78e7843e858) || (lVar6 == -0x781eb48e7843e33f)) {
      lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
      }
      lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if ((0x17 < param_1) || ((0xf781efU >> (ulong)(param_1 & 0x1f) & 1) == 0)) goto LAB_00ecea70;
      uVar7 = *(uint *)(&DAT_021610f0 + (long)(int)param_1 * 4);
      uVar5 = 0x2a97a965971755a6;
LAB_00ecea60:
      uVar4 = FUN_01510f00(lVar8,uVar5);
      if ((uVar4 & 1) == 0) {
        uVar7 = param_1;
      }
      param_1 = uVar7;
LAB_00ecea70:
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      if (lVar6 == 0) {
        return param_1;
      }
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      return param_1;
    }
    if (lVar6 == -0x6f759d8e735c8e80) goto LAB_00ece530;
  }
LAB_00eceaac:
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 == 0) {
    iVar3 = FUN_0100d230(0,param_2);
  }
  else {
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    iVar3 = FUN_0100d230(lVar6,param_2);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if (iVar3 != 0) {
    return param_1;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  switch(param_1) {
  case 5:
    uVar4 = FUN_01510f00(lVar8,0x1f02f78d7b3217a1);
    bVar2 = (uVar4 & 1) == 0;
    param_1 = 4;
    break;
  default:
    goto switchD_00ece318_caseD_6;
  case 7:
    uVar4 = FUN_01510f00(lVar8,0xd59b9da4a17bc4da);
    bVar2 = (uVar4 & 1) == 0;
    param_1 = 6;
    break;
  case 8:
    uVar4 = FUN_01510f00(lVar8,0x5ef93375d158283e);
    param_1 = 0;
    if ((uVar4 & 1) == 0) {
      param_1 = 8;
    }
    goto joined_r0x00ece43c;
  case 0x14:
    uVar4 = FUN_01510f00(lVar8,0x1f02f78d7b3217a1);
    bVar2 = (uVar4 & 1) == 0;
    param_1 = 0x13;
    break;
  case 0x16:
    uVar4 = FUN_01510f00(lVar8,0xd59b9da4a17bc4da);
    bVar2 = (uVar4 & 1) == 0;
    param_1 = 0x15;
    break;
  case 0x17:
    uVar4 = FUN_01510f00(lVar8,0x5ef93375d158283e);
    param_1 = 0xf;
    if ((uVar4 & 1) == 0) {
      param_1 = 0x17;
    }
joined_r0x00ece43c:
    if (lVar8 == 0) goto LAB_00ece3ec;
    goto LAB_00ece3dc;
  }
  if (bVar2) {
    param_1 = param_1 + 1;
  }
switchD_00ece318_caseD_6:
  if (lVar8 != 0) {
LAB_00ece3dc:
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
LAB_00ece3ec:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  return param_1;
}


