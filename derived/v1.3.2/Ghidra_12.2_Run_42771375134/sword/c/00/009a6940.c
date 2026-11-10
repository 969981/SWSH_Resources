/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a6940; name: FUN_009a6940
 */


bool FUN_009a6940(undefined8 param_1,undefined4 param_2,byte param_3,char param_4)

{
  int iVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  if ((param_3 != 0) || (param_4 == '\x05')) {
    if ((param_3 < 2) && (param_4 != '\x05')) {
      uVar2 = 0;
      puVar3 = (undefined4 *)PTR_DAT_027184d8;
      while ((iVar1 = FUN_008ec3f0(param_2,*puVar3), iVar1 == 0 ||
             (((0x7017fU >> (uVar2 & 0x3f) & 1) == 0 && ((0xfe80UL >> (uVar2 & 0x3f) & 1) == 0)))))
      {
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 6;
        if (0x12 < uVar2) {
          return false;
        }
      }
    }
    else {
      iVar1 = FUN_008ec3f0(param_2,0x1a);
      if (((((iVar1 == 0) && (iVar1 = FUN_008ec3f0(param_2,0x1b), iVar1 == 0)) &&
           (iVar1 = FUN_008ec3f0(param_2,0x1c), iVar1 == 0)) &&
          ((iVar1 = FUN_008ec3f0(param_2,0x1d), iVar1 == 0 &&
           (iVar1 = FUN_008ec3f0(param_2,0x1e), iVar1 == 0)))) &&
         ((iVar1 = FUN_008ec3f0(param_2,0x1f), iVar1 == 0 &&
          (iVar1 = FUN_008ec3f0(param_2,0x20), iVar1 == 0)))) {
        FUN_008ec3f0(param_2,0x21);
        iVar1 = FUN_008ec3f0(param_2,0x22);
        if (iVar1 == 0) {
          FUN_008ec3f0(param_2,0x26);
          FUN_008ec3f0(param_2,0x27);
          FUN_008ec3f0(param_2,0x28);
          FUN_008ec3f0(param_2,0x29);
          FUN_008ec3f0(param_2,0x2a);
          FUN_008ec3f0(param_2,0x2b);
          FUN_008ec3f0(param_2,0x2c);
          iVar1 = FUN_008ec3f0(param_2,0x2f);
          if ((iVar1 == 0) && (iVar1 = FUN_008ec3f0(param_2,0x30), iVar1 == 0)) {
            iVar1 = FUN_008ec3f0(param_2,0x31);
            return iVar1 != 0;
          }
        }
      }
    }
  }
  return true;
}


