/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00962300; name: FUN_00962300
 */


void FUN_00962300(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [112];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  *param_2 = 0;
  uVar4 = *param_3;
  uVar1 = param_3[1];
  uVar3 = FUN_008e0a10(uVar4);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = thunk_FUN_008dd3c0(*(undefined4 *)param_3[3]), (uVar3 & 1) != 0)) {
    uVar3 = FUN_008e0b50(uVar1);
    if ((uVar3 & 1) != 0) {
      FUN_008e0b60(uVar1);
      FUN_008e5ee0();
      uVar3 = FUN_0093db60();
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    local_78 = FUN_00942380(param_1);
    local_70 = FUN_00942390(param_1);
    uStack_68 = param_3[2];
    local_60 = (undefined4 *)param_3[3];
    local_58 = uVar4;
    uStack_50 = uVar1;
    local_48 = FUN_009659c0(uVar4,*local_60);
    FUN_009654d0(auStack_e8,&local_78);
    uVar4 = FUN_009423a0(param_1);
    FUN_00964370(auStack_f8,uVar4);
    uVar3 = FUN_00965540(auStack_e8);
    if ((uVar3 & 1) != 0) {
      FUN_00964380(auStack_f8);
    }
    bVar2 = FUN_00962420(param_1,auStack_e8);
    if (((bVar2 & 1) != 0) && (uVar3 = FUN_00965540(auStack_e8), (uVar3 & 1) != 0)) {
      FUN_009643c0(auStack_f8,auStack_e8);
    }
    *param_2 = bVar2 & 1;
  }
  return;
}


