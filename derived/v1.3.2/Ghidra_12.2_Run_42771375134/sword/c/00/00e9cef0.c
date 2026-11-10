/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e9cef0; name: FUN_00e9cef0
 */


void FUN_00e9cef0(long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  
  if (*(char *)((long)param_1 + 0x7e1) == '\0') {
    (**(code **)(*param_1 + 0x1a8))(param_1,PTR_DAT_0271ecf0,0);
    if ((char)param_1[0xfc] != '\0') goto LAB_00e9cf3c;
LAB_00e9cfec:
    if (*(char *)((long)param_1 + 0x7e2) == '\0') {
      if ((((long *)param_1[0x83] != (long *)param_1[0x84]) &&
          (lVar7 = *(long *)param_1[0x83], lVar7 != 0)) &&
         (puVar8 = *(undefined8 **)(lVar7 + 0x60), puVar8 != (undefined8 *)0x0)) {
        plVar5 = (long *)(**(code **)*puVar8)(puVar8);
        if (((*PTR_DAT_027150a8 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar3 != 0)) {
          uVar6 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_027150b0 = uVar6;
          __cxa_guard_release(PTR_DAT_027150a8);
        }
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)PTR_DAT_027150b0) {
            local_28 = FUN_0069d2b0(puVar8 + -10);
            plVar5 = (long *)FUN_006b93b0(&local_28);
            if (*plVar5 == *(long *)PTR_DAT_02720030 || *plVar5 == *(long *)PTR_DAT_02720040)
            goto LAB_00e9d088;
            break;
          }
        }
      }
      plVar5 = (long *)FUN_006b93b0(param_1 + 0xfb);
      if ((*plVar5 == *(long *)PTR_DAT_02720030) || (*plVar5 == *(long *)PTR_DAT_02720040)) {
LAB_00e9d088:
        (**(code **)(*param_1 + 0x1c8))(param_1);
        (**(code **)(*param_1 + 0x1d0))(param_1);
        cVar1 = *(char *)((long)param_1 + 0x7e1);
        goto joined_r0x00e9d0ac;
      }
    }
  }
  else {
    if ((char)param_1[0xfc] == '\0') goto LAB_00e9cfec;
LAB_00e9cf3c:
    plVar5 = (long *)FUN_006b92e0(param_1 + 0xfb);
    lVar7 = *plVar5;
    if (lVar7 < 0x20bc64734786891b) {
      if (((lVar7 != -0x5ede15e58d5cf2b4) && (lVar7 != -0x5f7e0ab4c519dfe)) &&
         (lVar7 != 0xade7f9ba76923fc)) goto LAB_00e9cfac;
    }
    else if (lVar7 < 0x4e8da957d620e016) {
      if ((lVar7 != 0x20bc64734786891b) && (lVar7 != 0x289c55baf0a88895)) {
LAB_00e9cfac:
        uVar4 = FUN_00ea09f0(param_1);
        if ((uVar4 & 1) != 0) {
          plVar5 = (long *)FUN_006b93b0(param_1 + 0xfb);
          if ((*plVar5 != *(long *)PTR_DAT_02720030) && (*plVar5 != *(long *)PTR_DAT_02720040))
          goto LAB_00e9d130;
        }
        goto LAB_00e9cfec;
      }
    }
    else if ((lVar7 != 0x4e8da957d620e016) && (lVar7 != 0x72c7a349fd3ebde9)) goto LAB_00e9cfac;
  }
LAB_00e9d130:
  cVar1 = *(char *)((long)param_1 + 0x7e1);
joined_r0x00e9d0ac:
  if (cVar1 != '\0') {
    if ((int)param_1[0xb7] == 2) {
      uVar2 = FUN_00e46320(param_1);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,PTR_DAT_0271ecf0,uVar2 & 1);
  }
  return;
}


