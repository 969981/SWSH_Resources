/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a27d20; name: FUN_00a27d20
 */


int FUN_00a27d20(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  lVar1 = param_1 + 0x628;
  if ((*(long *)(param_1 + 0x4c8) == 0) && (*(long *)(param_1 + 0x4d0) == 0)) {
    iVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x548);
joined_r0x00a27d80:
    if (lVar3 != 0) goto LAB_00a27d94;
LAB_00a27d6c:
    if (*(long *)(param_1 + 0x550) != 0) goto LAB_00a27d94;
  }
  else {
    uVar2 = FUN_011f4020(lVar1,(undefined8 *)(param_1 + 0x4c8));
    if ((uVar2 & 1) == 0) {
      iVar4 = 1;
      lVar3 = *(long *)(param_1 + 0x548);
      goto joined_r0x00a27d80;
    }
    iVar4 = 0;
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    if (*(long *)(param_1 + 0x548) == 0) goto LAB_00a27d6c;
LAB_00a27d94:
    uVar2 = FUN_011f4020(lVar1,(undefined8 *)(param_1 + 0x548));
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 1;
      lVar3 = *(long *)(param_1 + 0x5c8);
      goto joined_r0x00a27dc8;
    }
    *(undefined8 *)(param_1 + 0x548) = 0;
    *(undefined8 *)(param_1 + 0x550) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x5c8);
joined_r0x00a27dc8:
  if ((lVar3 != 0) || (*(long *)(param_1 + 0x5d0) != 0)) {
    uVar2 = FUN_011f4020(lVar1,(undefined8 *)(param_1 + 0x5c8));
    if ((uVar2 & 1) == 0) {
      iVar4 = iVar4 + 1;
    }
    else {
      *(undefined8 *)(param_1 + 0x5c8) = 0;
      *(undefined8 *)(param_1 + 0x5d0) = 0;
    }
  }
  return iVar4;
}


