/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00885700; name: FUN_00885700
 */


undefined8 FUN_00885700(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  iVar3 = FUN_008660d0(0x10000);
  if (((iVar3 != 0x4000) && (iVar3 != 0xc000)) && (iVar3 != 0x8000)) {
    return 0;
  }
  lVar1 = param_1[0x11];
  do {
    do {
      uVar2 = FUN_008660d0((char)lVar1);
      (**(code **)(*param_1 + 0x50))(param_1,uVar2);
      iVar3 = FUN_008783b0();
      uVar4 = (**(code **)(*param_1 + 0x50))(param_1,uVar2);
      uVar5 = FUN_0087d610(uVar4,0);
    } while (iVar3 == 0);
  } while ((uVar5 & 1) != 0);
  (**(code **)(*param_1 + 0x50))(param_1,uVar2);
  uVar5 = FUN_0087ee80();
  if ((uVar5 & 1) == 0) {
    (**(code **)(*param_1 + 0x50))(param_1,uVar2);
    FUN_0087eef0();
    return 1;
  }
  return 0;
}


