/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00480b40; name: FUN_00480b40
 */


int FUN_00480b40(long param_1,long param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  
  if (((param_3 & 1) == 0) ||
     (iVar2 = FUN_00488060(param_1,*(ushort *)(param_2 + 0x18) & 1), iVar2 == 1)) {
    if (*(char *)(param_2 + 0x1c) == '\0') {
      if ((*(long *)(param_1 + 0x70) == 0) ||
         ((*(byte *)(*(long *)(param_1 + 0x70) + 0x98) & 1) != 0)) {
        if ((param_4 & 1) == 0) {
          iVar2 = FUN_004875c0(param_1,param_2,param_3 & 1);
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = FUN_00487870(param_1,param_2,param_3 & 1);
      }
      bVar5 = (byte)((uint)*(undefined4 *)(param_1 + 0x9c) >> 0x1e) & 1;
      *(byte *)(param_2 + 0x1c) = bVar5;
      uVar1 = *(ushort *)(param_2 + 0x18);
    }
    else {
      bVar5 = 1;
      iVar2 = 1;
      uVar1 = *(ushort *)(param_2 + 0x18);
    }
  }
  else {
    bVar5 = *(byte *)(param_2 + 0x1c);
    uVar1 = *(ushort *)(param_2 + 0x18);
  }
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0x80) != 0)) {
    *(ushort *)(param_2 + 0x18) = uVar1 & 0xfffe;
    *(undefined1 *)(param_2 + 0x1c) = 0;
    iVar3 = (**(code **)(**(long **)(param_1 + 0x80) + 0x118))
                      (*(long **)(param_1 + 0x80),param_2,param_3 & 1,param_4 & 1);
    if (iVar3 != 1) {
      if (iVar3 == 0x50) {
        iVar3 = 0x50;
        if (iVar2 != 1) {
          iVar3 = iVar2;
        }
        lVar4 = *(long *)(param_1 + 0x78);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x78);
      }
      goto joined_r0x00480c28;
    }
  }
  lVar4 = *(long *)(param_1 + 0x78);
  iVar3 = iVar2;
joined_r0x00480c28:
  if (lVar4 != 0) {
    *(byte *)(param_2 + 0x1c) = bVar5;
    iVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x118))
                      (*(long **)(param_1 + 0x78),param_2,param_3 & 1,param_4 & 1);
    if (iVar2 != 1) {
      if (iVar2 == 0x50) {
        iVar2 = 0x50;
        if (iVar3 != 1) {
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
      }
      else {
        iVar3 = iVar2;
      }
    }
  }
  return iVar3;
}


