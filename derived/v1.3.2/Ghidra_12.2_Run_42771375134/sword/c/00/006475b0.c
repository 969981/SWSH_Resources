/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006475b0; name: FUN_006475b0
 */


undefined8 FUN_006475b0(long param_1,ulong param_2,void *param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  long lVar3;
  size_t __n;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  
  if (*(char *)(param_1 + 0x184) == '\0') {
LAB_006477ec:
    uVar5 = 0;
  }
  else {
    if (param_3 == (void *)0x0) {
      param_3 = *(void **)(param_1 + 0x160);
    }
    pvVar2 = (void *)(**(code **)(**(long **)(param_1 + 0x490) + 0x250))
                               (*(long **)(param_1 + 0x490),0,*(undefined4 *)(param_1 + 0x178),
                                *(undefined4 *)(param_1 + 0x174));
    memcpy(pvVar2,param_3,(long)*(int *)(param_1 + 0x174) * (long)*(int *)(param_1 + 0x178));
    (**(code **)(**(long **)(param_1 + 0x490) + 600))();
    switch(*(undefined4 *)(param_1 + 0x180)) {
    case 1:
      iVar4 = *(int *)(param_1 + 0x178);
      lVar7 = 0;
      if (iVar4 < 1) goto switchD_00647640_default;
      goto LAB_00647658;
    case 2:
      iVar4 = *(int *)(param_1 + 0x178);
      iVar6 = iVar4;
      if (iVar4 < 0) {
        iVar6 = iVar4 + 1;
      }
      lVar7 = 0;
      iVar6 = iVar6 >> 1;
      break;
    case 3:
      iVar4 = *(int *)(param_1 + 0x178);
      iVar6 = iVar4 + -1;
      lVar7 = 1;
      break;
    case 4:
      iVar4 = *(int *)(param_1 + 0x178);
      lVar7 = 0;
      iVar6 = iVar4 / 3;
      break;
    case 5:
      iVar4 = *(int *)(param_1 + 0x178);
      iVar6 = iVar4 + -2;
      lVar7 = 2;
      break;
    default:
      goto switchD_00647640_default;
    }
    if (0 < iVar6) {
LAB_00647658:
      iVar6 = (int)lVar7;
      if (((param_2 & 1) == 0) && (iVar6 != 0)) {
        __n = (size_t)*(int *)(param_1 + 0x174);
        param_3 = (void *)((long)param_3 + (long)(iVar4 - iVar6) * __n);
        if (iVar6 == 2) {
          memcpy((void *)(param_1 + __n + 0x290),param_3,__n);
          __n = (size_t)*(int *)(param_1 + 0x174);
          param_3 = (void *)((long)param_3 + __n);
        }
        else if (iVar6 != 1) goto LAB_0064772c;
        memcpy((void *)(param_1 + 0x290),param_3,__n);
      }
LAB_0064772c:
      lVar3 = (**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
      *(undefined8 *)(lVar3 + 0x16c) = 4;
      uVar1 = *(undefined4 *)(param_1 + 0x180);
      lVar3 = (**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
      *(undefined4 *)(lVar3 + 0x16c) = uVar1;
      lVar3 = (**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
      *(uint *)(lVar3 + 0x188) = *(uint *)(lVar3 + 0x188) | 4;
      (**(code **)(**(long **)(param_1 + 0x490) + 0xc0))
                (*(long **)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x178),0,1,0);
      if ((param_2 & 1) != 0) {
        return 1;
      }
      pvVar2 = *(void **)(param_1 + 0x160);
      if (pvVar2 == (void *)0x0) goto LAB_006477ec;
      *(void **)(param_1 + 0x168) = pvVar2;
      *(undefined4 *)(param_1 + 0x178) = 0;
      if (iVar6 != 0) {
        memcpy(pvVar2,(void *)(param_1 + 0x290),*(int *)(param_1 + 0x174) * lVar7);
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + iVar6;
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + *(int *)(param_1 + 0x174) * lVar7;
      }
    }
switchD_00647640_default:
    uVar5 = 1;
  }
  return uVar5;
}


