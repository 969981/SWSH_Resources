/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00444e00; name: FUN_00444e00
 */


ulong FUN_00444e00(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint local_24;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*(int *)(param_4 + 0x40) == -1) {
    iVar1 = FUN_00405500(0,param_2,param_2,9,0x10);
    if (iVar1 == -1) {
      return 0x34;
    }
    *(int *)(param_4 + 0x40) = iVar1;
    *(undefined1 *)(param_4 + 0x44) = 1;
    uVar3 = FUN_004049c0();
    iVar1 = (int)uVar3;
  }
  else {
    uVar3 = FUN_004049c0();
    iVar1 = (int)uVar3;
  }
  if (iVar1 != 1) {
    return uVar3;
  }
  uVar2 = FUN_00404660(*(undefined4 *)(param_4 + 0x40));
  if ((uVar2 >> 3 & 1) == 0) {
    lVar4 = FUN_00404690(*(undefined4 *)(param_4 + 0x40),param_2);
    *(long *)(param_4 + 0x28) = lVar4;
  }
  else {
    uVar2 = FUN_004049a0(*(undefined4 *)(param_4 + 0x40));
    if (uVar2 < param_2) {
      lVar4 = *(long *)(param_4 + 0x28);
    }
    else {
      lVar4 = FUN_004048f0(*(undefined4 *)(param_4 + 0x40));
      *(long *)(param_4 + 0x28) = lVar4;
    }
  }
  if (lVar4 == 0) {
    return 0x34;
  }
  *(uint *)(param_4 + 0x38) = param_2;
  local_24 = 0;
  uVar2 = FUN_0044e400(param_1 + 8,lVar4,param_2,&local_24);
  if (local_24 != param_2 && uVar2 == 1) {
    uVar2 = 7;
  }
  return (ulong)uVar2;
}


