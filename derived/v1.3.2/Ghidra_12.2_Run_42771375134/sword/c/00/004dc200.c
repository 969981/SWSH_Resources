/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004dc200; name: FUN_004dc200
 */


int FUN_004dc200(long param_1,undefined8 *param_2,byte param_3,byte param_4)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_2[3];
  *(long *)(lVar5 + 0x200) = param_1;
  if ((((param_3 ^ 1) & 1) == 0) && (((param_4 ^ 1) & 1) == 0)) {
    iVar2 = FUN_0048d230(lVar5,param_1 + 0x84);
    *(int *)(param_1 + 0x88) = iVar2;
    if (*(int *)(param_1 + 0x34) != 0) goto joined_r0x004dc288;
    lVar4 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x60);
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 != 0) {
      *(undefined4 *)(param_1 + 0x34) = 1;
      iVar2 = *(int *)(param_1 + 0x88);
      goto joined_r0x004dc288;
    }
    iVar2 = 2;
LAB_004dc368:
    FUN_004dda80(param_2,1);
    uVar1 = *(undefined4 *)PTR_DAT_02712e28;
    (**(code **)*param_2)(param_2);
    FUN_00404870(uVar1,param_2);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x88);
joined_r0x004dc288:
    if (iVar2 == 0) {
LAB_004dc2d8:
      iVar2 = FUN_004ddd90(param_2,*(undefined8 *)(lVar5 + 0x290),*(undefined4 *)(lVar5 + 0x298));
      if ((iVar2 != 0x3f) && (iVar2 != 1)) goto LAB_004dc368;
    }
    else {
      uVar3 = FUN_0044f1a0(lVar5 + 0x18,0);
      if ((uVar3 & 1) == 0) goto LAB_004dc2d8;
      if (*(int *)(param_1 + 0x88) == 1) {
        iVar2 = 3;
        goto LAB_004dc368;
      }
      if (((*(int *)(param_1 + 0x84) != 0 | param_3 ^ 1 | param_4 ^ 1) & 1) != 0) goto LAB_004dc2d8;
      if ((*(int *)(param_1 + 0x88) != 0) && ((*(byte *)(param_1 + 0x60) & 1) != 0)) {
        FUN_0048e540(lVar5);
      }
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
      iVar2 = 1;
    }
    if ((param_3 & 1) == 0) {
      *(undefined8 **)(param_1 + 0x78) = param_2;
    }
    else {
      *(undefined8 **)(param_1 + 0x70) = param_2;
      lVar4 = 0;
      if (param_2[3] != 0) {
        lVar4 = param_2[3] + 0x18;
      }
      *(long *)(param_1 + 0x20) = lVar4;
      *(uint *)(lVar5 + 0x26b) = *(uint *)(lVar5 + 0x26b) & 0xfbffffff;
    }
  }
  return iVar2;
}


