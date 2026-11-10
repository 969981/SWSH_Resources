/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01044640; name: FUN_01044640
 */


void FUN_01044640(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)(param_1 + 0xa0);
  lVar1 = param_1 + 0x2d0;
  if (((*plVar4 == 0) && (*(long *)(param_1 + 0xa8) == 0)) ||
     ((uVar2 = FUN_011f4020(lVar1,plVar4), (uVar2 & 1) == 0 &&
      ((*(long *)(param_1 + 0xa0) != *(long *)(param_1 + 0x2d8) ||
       (*(long *)(param_1 + 0xa8) != *(long *)(param_1 + 0x2e0))))))) {
    if (*(long *)(param_1 + 0x120) == 0) goto LAB_010446b4;
LAB_010446bc:
    uVar2 = FUN_011f4020(lVar1,(undefined8 *)(param_1 + 0x120));
    if (((uVar2 & 1) != 0) ||
       ((*(long *)(param_1 + 0x120) == *(long *)(param_1 + 0x2d8) &&
        (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x2e0))))) {
      *(undefined8 *)(param_1 + 0x120) = 0;
      *(undefined8 *)(param_1 + 0x128) = 0;
      lVar3 = *(long *)(param_1 + 0x1a0);
      goto joined_r0x010446d8;
    }
  }
  else {
    *plVar4 = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(long *)(param_1 + 0x120) != 0) goto LAB_010446bc;
LAB_010446b4:
    if (*(long *)(param_1 + 0x128) != 0) goto LAB_010446bc;
  }
  lVar3 = *(long *)(param_1 + 0x1a0);
joined_r0x010446d8:
  if ((lVar3 != 0) || (*(long *)(param_1 + 0x1a8) != 0)) {
    uVar2 = FUN_011f4020(lVar1,(undefined8 *)(param_1 + 0x1a0));
    if (((uVar2 & 1) != 0) ||
       ((*(long *)(param_1 + 0x1a0) == *(long *)(param_1 + 0x2d8) &&
        (*(long *)(param_1 + 0x1a8) == *(long *)(param_1 + 0x2e0))))) {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      return;
    }
  }
  return;
}


