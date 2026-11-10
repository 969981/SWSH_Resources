/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0e1a0; name: FUN_00a0e1a0
 */


void FUN_00a0e1a0(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_58;
  
  if (param_2 == 0) {
    uVar1 = 0;
LAB_00a0e228:
    lVar4 = (ulong)uVar1 * 0x78;
    do {
      FUN_00a0f480(*(long *)(param_1 + 0x5d0) + lVar4,0);
      lVar4 = lVar4 + 0x78;
    } while (lVar4 != 0x690);
  }
  else {
    uVar3 = 0;
    do {
      FUN_00a0f3d0(*(long *)(param_1 + 0x5d0) + uVar3 * 0x78,uVar3 < param_2 - param_3,0);
      FUN_00a0f480(*(long *)(param_1 + 0x5d0) + uVar3 * 0x78,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_2);
    uVar1 = param_2;
    if (param_2 < 0xe) goto LAB_00a0e228;
  }
  if (*(uint *)(param_1 + 0x66c) == param_2) {
    iVar2 = *(int *)(param_1 + 0x668);
    if (iVar2 == 2) goto LAB_00a0e2d8;
LAB_00a0e268:
    lVar4 = param_1 + 0x100;
    if (iVar2 == 0) {
      if (param_3 != 0) {
        *(byte *)(*(long *)(param_1 + 0x628) + 0x58) =
             *(byte *)(*(long *)(param_1 + 0x628) + 0x58) | 1;
        local_58 = 0x3a83de9f607011c3;
        FUN_00ffd010(lVar4,&local_58);
      }
      if (param_2 == param_3) {
LAB_00a0e31c:
        local_58 = 0x3a84109f607066b9;
        FUN_00ffd010(lVar4,&local_58);
        FUN_00ffd010(lVar4,&DAT_02154608);
        iVar2 = 2;
        goto LAB_00a0e384;
      }
      if (param_3 == 0) {
LAB_00a0e380:
        iVar2 = 0;
        goto LAB_00a0e384;
      }
    }
    else {
      if (param_2 == param_3) goto LAB_00a0e31c;
      if (param_3 == 0) {
        local_58 = 0x3a840d9f607061a0;
        FUN_00ffd010(lVar4,&local_58);
        goto LAB_00a0e380;
      }
    }
  }
  else {
    FUN_019a65b0(*(undefined8 *)(param_1 + 0x630));
    FUN_00ffd840(param_1 + 0x100,*(undefined8 *)(param_1 + 0x628));
    *(uint *)(param_1 + 0x66c) = param_2;
    iVar2 = *(int *)(param_1 + 0x668);
    if (iVar2 != 2) goto LAB_00a0e268;
LAB_00a0e2d8:
    if (param_3 == 0) {
      local_58 = 0x3a840d9f607061a0;
      FUN_00ffd010(param_1 + 0x100,&local_58);
    }
    iVar2 = (uint)(param_2 == param_3) << 1;
    if ((param_2 == param_3) || (param_3 == 0)) goto LAB_00a0e384;
  }
  iVar2 = 1;
LAB_00a0e384:
  *(int *)(param_1 + 0x668) = iVar2;
  return;
}


