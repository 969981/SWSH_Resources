/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004cbda0; name: FUN_004cbda0
 */


undefined8 FUN_004cbda0(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int local_40 [3];
  undefined4 uStack_34;
  
  iVar2 = *(int *)(param_1 + 0x28);
  uVar1 = *param_2 + iVar2;
  iVar4 = *(ushort *)(param_1 + 0x54) - 1;
  *(uint *)(param_1 + 0x28) = uVar1;
  if (iVar4 == 0) {
    if (*(uint *)(param_1 + 0x24) <= uVar1) {
      *param_2 = *(uint *)(param_1 + 0x24) - iVar2;
      uVar6 = 0x11;
      goto LAB_004cbe20;
    }
  }
  else if (*(uint *)(param_1 + 0x38) < uVar1) {
    if (*(ushort *)(param_1 + 0x54) != 0) {
      *(short *)(param_1 + 0x54) = (short)iVar4;
    }
    *param_2 = (1 - iVar2) + *(uint *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x34);
  }
  uVar6 = 0x2d;
LAB_004cbe20:
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  FUN_00469430(param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),iVar2,*param_2 + iVar2);
  lVar5 = *(long *)(param_1 + 0x18);
  if ((*(byte *)(lVar5 + 10) >> 4 & 1) != 0) {
    uStack_34 = *(undefined4 *)(lVar5 + 0x208);
    local_40[1] = 0x3f800000;
    local_40[0] = iVar2;
    local_40[2] = uVar3;
    FUN_00490ac0(*(undefined8 *)PTR_DAT_02712db8,*(undefined4 *)(lVar5 + 0x1d8),local_40,param_1);
  }
  return uVar6;
}


