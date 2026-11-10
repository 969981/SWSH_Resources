/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008a7f80; name: FUN_008a7f80
 */


void FUN_008a7f80(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0x90));
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x9c) != '\0') {
    lVar3 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1d8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    iVar1 = FUN_01521090(lVar3,*(undefined4 *)(param_1 + 0x98));
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    }
    if (iVar1 == 0) {
      FUN_008c61d0(*(undefined8 *)(param_1 + 0x88),0);
    }
    else {
      FUN_008c92f0(*(undefined8 *)(param_1 + 0x88),iVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 3;
  *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x810) = 0xffffffff;
  FUN_01038270(*(undefined8 *)(param_1 + 0x90),1);
  return;
}


