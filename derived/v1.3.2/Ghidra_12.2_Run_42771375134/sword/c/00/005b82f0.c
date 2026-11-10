/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b82f0; name: FUN_005b82f0
 */


int FUN_005b82f0(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int unaff_w22;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((*(long *)(param_1 + 0x20) == 0) || (*(float *)(param_1 + 0x74) < 0.0)) {
    return -3;
  }
  if (0 < *(int *)(param_1 + 0x3c)) {
    lVar5 = 0;
    do {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x40 + lVar5 * 8) + 0x38))();
      iVar3 = iVar2;
      if (-1 < iVar2) {
        iVar3 = unaff_w22;
      }
      if (iVar2 < 0) {
        if (iVar3 < 0) {
          return iVar3;
        }
        break;
      }
      lVar5 = lVar5 + 1;
      unaff_w22 = iVar3;
    } while (lVar5 < *(int *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x74) = 0xbf800000;
  puVar1 = PTR_DAT_027139b0;
  if (param_2 == 0) {
    param_2 = *(long *)(param_1 + 0x88);
  }
  iVar3 = *(int *)PTR_DAT_027139b0;
  if (iVar3 < 1) {
    plVar4 = (long *)FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x29c08,
                                  "../src/GPU\\GPUClassUtil.h",0x49,0);
    FUN_0056dc10(plVar4,0);
    *(long **)PTR_DAT_027139b8 = plVar4;
    *(undefined4 *)puVar1 = 1;
joined_r0x005b84d0:
    if (plVar4 == (long *)0x0) {
      *(undefined4 *)puVar1 = 0;
      goto joined_r0x005b84dc;
    }
    uVar6 = *(undefined8 *)PTR_PTR_02713988;
    (**(code **)(*plVar4 + 0x20))(plVar4);
    FUN_005b9b10(uVar6,plVar4);
    iVar3 = 0;
    *(undefined8 *)PTR_DAT_027139b8 = 0;
  }
  else {
    plVar4 = *(long **)PTR_DAT_027139b8;
    *(int *)PTR_DAT_027139b0 = iVar3 + 1;
    if (iVar3 + 1 < 2) goto joined_r0x005b84d0;
  }
  *(int *)puVar1 = iVar3;
joined_r0x005b84dc:
  if ((param_3 & 1) != 0) {
    FUN_005714c0(plVar4,1,3,0xffffffff);
  }
  FUN_00540e00(*(undefined8 *)(param_1 + 0x20),0);
  FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
  FUN_005b7e10(param_1,param_2);
  iVar3 = FUN_005b7ff0(param_1);
  if (-1 < iVar3) {
    FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
    iVar3 = 0;
  }
  return iVar3;
}


