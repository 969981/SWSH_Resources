/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01523340; name: FUN_01523340
 */


int FUN_01523340(ushort *param_1,ushort *param_2,ushort *param_3,ushort *param_4,ushort *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = FUN_01523240();
  uVar3 = FUN_00888e60(*param_5 & 0x7fff);
  uVar4 = FUN_00888e60(*param_4 & 0x7fff);
  if (uVar3 < uVar4) {
    uVar1 = *(undefined4 *)param_4;
    *(undefined4 *)param_4 = *(undefined4 *)param_5;
    *(undefined4 *)param_5 = uVar1;
    uVar3 = FUN_00888e60(*param_4 & 0x7fff);
    uVar4 = FUN_00888e60(*param_3 & 0x7fff);
    if (uVar3 < uVar4) {
      uVar1 = *(undefined4 *)param_3;
      *(undefined4 *)param_3 = *(undefined4 *)param_4;
      *(undefined4 *)param_4 = uVar1;
      uVar3 = FUN_00888e60(*param_3 & 0x7fff);
      uVar4 = FUN_00888e60(*param_2 & 0x7fff);
      if (uVar3 < uVar4) {
        uVar1 = *(undefined4 *)param_2;
        *(undefined4 *)param_2 = *(undefined4 *)param_3;
        *(undefined4 *)param_3 = uVar1;
        uVar3 = FUN_00888e60(*param_2 & 0x7fff);
        uVar4 = FUN_00888e60(*param_1 & 0x7fff);
        if (uVar3 < uVar4) {
          uVar1 = *(undefined4 *)param_1;
          iVar2 = iVar2 + 4;
          *(undefined4 *)param_1 = *(undefined4 *)param_2;
          *(undefined4 *)param_2 = uVar1;
        }
        else {
          iVar2 = iVar2 + 3;
        }
      }
      else {
        iVar2 = iVar2 + 2;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}


