/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01523100; name: FUN_01523100
 */


undefined8 FUN_01523100(ushort *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_00888e60(*param_2 & 0x7fff);
  uVar3 = FUN_00888e60(*param_1 & 0x7fff);
  uVar4 = FUN_00888e60(*param_3 & 0x7fff);
  uVar5 = FUN_00888e60(*param_2 & 0x7fff);
  if (uVar2 < uVar3) {
    uVar1 = *(undefined4 *)param_1;
    if (uVar4 < uVar5) {
      *(undefined4 *)param_1 = *(undefined4 *)param_3;
      *(undefined4 *)param_3 = uVar1;
    }
    else {
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar1;
      uVar2 = FUN_00888e60(*param_3 & 0x7fff);
      uVar3 = FUN_00888e60(*param_2 & 0x7fff);
      if (uVar2 < uVar3) {
        uVar1 = *(undefined4 *)param_2;
        *(undefined4 *)param_2 = *(undefined4 *)param_3;
        *(undefined4 *)param_3 = uVar1;
        return 2;
      }
    }
  }
  else {
    if (uVar5 <= uVar4) {
      return 0;
    }
    uVar1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)param_3 = uVar1;
    uVar2 = FUN_00888e60(*param_2 & 0x7fff);
    uVar3 = FUN_00888e60(*param_1 & 0x7fff);
    if (uVar2 < uVar3) {
      uVar1 = *(undefined4 *)param_1;
      *(undefined4 *)param_1 = *(undefined4 *)param_2;
      *(undefined4 *)param_2 = uVar1;
      return 2;
    }
  }
  return 1;
}


