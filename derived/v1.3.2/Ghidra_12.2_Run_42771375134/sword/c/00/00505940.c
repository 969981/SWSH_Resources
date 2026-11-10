/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00505940; name: FUN_00505940
 */


int FUN_00505940(long *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 local_28;
  
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 0x26b) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  iVar3 = (**(code **)(*(long *)param_1[0xb] + 0x80))
                    ((long *)param_1[0xb],&local_28,param_1 + 0xd,0);
  if (iVar3 != 0x11) {
    if (iVar3 == 0x2e) {
      return 0x3f;
    }
    if (iVar3 != 0x2d) {
      return 2;
    }
  }
  if ((int)param_1[0x12] == 0) {
    iVar3 = (**(code **)(*param_1 + 0xf0))(param_1,local_28);
    if (iVar3 != 1) {
      return iVar3;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined2 *)(param_1[3] + 0x268);
    }
    *(undefined2 *)((long)param_1 + 0x54) = uVar5;
    iVar3 = FUN_004cca20(param_1,local_28,0);
    if (iVar3 != 1) {
      return iVar3;
    }
    uVar2 = *(uint *)(param_1 + 6);
    param_1[0xc] = param_1[0xc] + (ulong)uVar2;
    *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar2;
    *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar2;
  }
  else {
    iVar3 = FUN_004cca20(param_1,local_28,0);
    if (iVar3 != 1) {
      return iVar3;
    }
  }
  iVar3 = FUN_00505bb0(param_1);
  if (iVar3 == 1) {
    if ((*(uint *)(param_1[3] + 0x26b) >> 0x16 & 1) == 0) {
      iVar4 = 0;
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_004ccd00(param_1);
      if ((int)param_1[0xd] != 0) {
        if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
          (**(code **)(*(long *)param_1[0xb] + 0x88))();
        }
        else {
          *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
        }
        param_1[0xc] = 0;
        *(undefined4 *)(param_1 + 0xd) = 0;
      }
      lVar6 = param_1[3];
      uVar2 = *(uint *)(lVar6 + 0x26b);
      if ((uVar2 >> 0x16 & 1) == 0) {
        iVar4 = *(int *)(lVar6 + 0x264);
      }
      else {
        iVar4 = 0;
      }
      *(undefined4 *)(lVar6 + 0x264) = 0;
      *(undefined1 *)(lVar6 + 0x26f) = *(undefined1 *)(lVar6 + 0x26f);
      *(uint *)(lVar6 + 0x26b) = uVar2 & 0xfe3fffff;
      *(int *)(param_1 + 5) = (int)param_1[5] + iVar4;
    }
    puVar1 = (undefined2 *)((long)param_1 + 0x10e);
    if (*(short *)((long)param_1 + 0x54) != 1) {
      puVar1 = (undefined2 *)((long)param_1 + 0x102);
    }
    FUN_005062e0(param_1 + 0x13,iVar4,*puVar1);
    *(undefined4 *)(param_1 + 0x12) = 3;
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
    return iVar3;
  }
  if (iVar3 != 0x3f) {
    return iVar3;
  }
  if ((int)param_1[0xd] != 0) {
    return 0x3f;
  }
  if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
    (**(code **)(*(long *)param_1[0xb] + 0x88))();
  }
  else {
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
  }
  param_1[0xc] = 0;
  return 0x3f;
}


