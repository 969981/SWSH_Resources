/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044f380; name: FUN_0044f380
 */


int FUN_0044f380(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  
  lVar7 = *(long *)(param_1 + 0x140);
  if ((*(ushort *)(param_1 + 0x154) & 0xc) == 0) {
    lVar8 = *(long *)(param_1 + 0x148);
    if ((*(long *)(lVar8 + 0x38) == 0) || (-1 < *(char *)(*(long *)(lVar8 + 0x38) + 2))) {
      bVar3 = false;
      lVar8 = *(long *)(lVar8 + 0x78);
      if (lVar8 != 0) goto LAB_0044f4b0;
    }
    else {
      bVar3 = (*(ushort *)(lVar8 + 0x98) & 0xffe) != 0;
      lVar8 = *(long *)(lVar8 + 0x78);
      if (lVar8 != 0 && !bVar3) {
LAB_0044f4b0:
        do {
          if ((*(long *)(lVar8 + 0x38) == 0) || (-1 < *(char *)(*(long *)(lVar8 + 0x38) + 2))) {
            bVar3 = false;
            lVar8 = *(long *)(lVar8 + 0x78);
          }
          else {
            bVar3 = (*(ushort *)(lVar8 + 0x98) & 0xffe) != 0;
            lVar8 = *(long *)(lVar8 + 0x78);
          }
        } while ((lVar8 != 0) && (!bVar3));
      }
    }
    if (((*(ushort *)(param_1 + 0x154) & 3) == 0) && (!bVar3)) {
      return 1;
    }
  }
  iVar9 = *(int *)(lVar7 + 8);
  if (((param_2 != (long *)0x0) && (*param_2 != 0)) && ((int)param_2[1] == iVar9)) {
    *(long *)(param_1 + 0x100) = *param_2;
    *(int *)(param_1 + 0x108) = (int)param_2[1];
  }
  puVar2 = PTR_DAT_02712dc8;
  if (((*(long *)(lVar7 + 0x40) != 0) && (*(int *)(lVar7 + 0x48) != 0)) &&
     ((*(long *)(param_1 + 0x100) == 0 || ((*(byte *)(lVar7 + 0x28) >> 2 & 1) != 0)))) {
    lVar7 = FUN_0048a8d0(*(undefined8 *)PTR_DAT_02712dc8);
    *(long *)(param_1 + 0x100) = lVar7;
    if (lVar7 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x140);
      uVar5 = FUN_00488860(*(undefined8 *)(param_1 + 0x148));
      iVar4 = FUN_00463080(uVar6,lVar7,uVar5);
      if (iVar4 != 1) {
        FUN_0048a970(*(undefined8 *)puVar2,*(undefined8 *)(param_1 + 0x100));
        iVar9 = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
      }
      *(int *)(param_1 + 0x108) = iVar9;
      bVar1 = *(byte *)(*(long *)(param_1 + 0x140) + 0x4c);
      goto joined_r0x0044f464;
    }
  }
  iVar4 = 1;
  bVar1 = *(byte *)(*(long *)(param_1 + 0x140) + 0x4c);
joined_r0x0044f464:
  if (((bVar1 >> 5 & 1) == 0) && (lVar7 = *(long *)(param_1 + 0x100), lVar7 != 0)) {
    uVar6 = FUN_004959d0(*(undefined8 *)(param_1 + 0x10));
    FUN_0048a470(lVar7,uVar6);
  }
  return iVar4;
}


