/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009adbc0; name: FUN_009adbc0
 */


void FUN_009adbc0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_70 [8];
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 auStack_4c [36];
  undefined2 local_28;
  undefined1 local_26;
  
  uVar2 = FUN_00942380();
  uVar3 = FUN_008f89c0(uVar2,2);
  if ((uVar3 & 1) == 0) {
    FUN_00942380(param_1);
    cVar1 = FUN_008f8f80();
    if (cVar1 == '\0') {
      return;
    }
    local_68[0] = 0x1f;
    local_64 = 10;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0xf9;
    FUN_00943e60(auStack_4c);
    local_64 = 8;
    local_28 = 0;
    local_26 = 0;
    local_60 = CONCAT11(1,cVar1);
    local_58 = FUN_008ed120(0x1f);
  }
  else {
    local_68[0] = 0x1f;
    local_60 = 0;
    local_64 = 10;
    local_58 = 0;
    local_50 = 0xf9;
    FUN_00943e60(auStack_4c);
    local_64 = 8;
    local_28 = 0;
    local_26 = 0;
    local_60 = CONCAT11(local_60._1_1_,4);
    local_58 = FUN_008ed0b0(0x1f,5);
    local_28 = CONCAT11(local_28._1_1_,1);
  }
  FUN_00942450(param_1);
  uVar2 = FUN_009255f0();
  FUN_00947840(uVar2,auStack_70,local_68);
  return;
}


