/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00954780; name: FUN_00954780
 */


void FUN_00954780(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_3c [4];
  undefined1 local_38;
  undefined2 local_37;
  
  uVar1 = FUN_0093eb90(param_1,2);
  if (uVar1 != (param_2 & 0xff)) {
    return;
  }
  uVar3 = FUN_0093ec00(param_1,0x31,local_3c);
  if (((uVar3 & 1) != 0) && ((local_3c[0] >> 2 & 1) == 0)) {
    return;
  }
  uVar4 = FUN_0093ec60(param_1,param_2);
  if (param_3 == 0x2d) {
    iVar2 = FUN_008e19f0(uVar4);
  }
  else {
    if (param_3 != 0x2f) {
      if (param_3 == 0x2e) {
        iVar2 = FUN_008e19f0(uVar4);
        if (iVar2 != 0) goto LAB_00954844;
        uVar3 = FUN_008e1810(uVar4,6);
      }
      else {
        uVar3 = FUN_008e1810(uVar4,param_3);
      }
      if ((uVar3 & 1) == 0) {
        return;
      }
      goto LAB_00954844;
    }
    iVar2 = FUN_008ec8a0(uVar4);
  }
  if (iVar2 == 0) {
    return;
  }
LAB_00954844:
  FUN_0093efa0(param_1);
  local_37 = 0;
  local_38 = (undefined1)param_2;
  FUN_0093fca0(param_1,&local_38);
  return;
}


