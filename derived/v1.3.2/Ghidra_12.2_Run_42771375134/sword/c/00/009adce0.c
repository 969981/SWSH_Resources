/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009adce0; name: FUN_009adce0
 */


void FUN_009adce0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_7e;
  undefined1 auStack_7c [36];
  undefined1 local_58;
  undefined1 auStack_48 [8];
  
  uVar1 = FUN_00942380();
  uVar2 = FUN_008f89c0(uVar1,1);
  if ((uVar2 & 1) != 0) {
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_88 = 0;
    local_80 = 2;
    local_7e = 0xf9;
    FUN_00943e60(auStack_7c);
    local_58 = 0;
    local_90[0] = 0x1f;
    local_8c = 7;
    local_80 = 0;
    local_88 = FUN_008ed120(0x1f);
    FUN_00942450(param_1);
    uVar1 = FUN_00925850();
    FUN_0094a5a0(uVar1,auStack_48,local_90);
    local_90[0] = 0x1f;
    local_8c = 0x18;
    local_88 = 0;
    local_80 = 2;
    local_7e = 0xf9;
    FUN_00943e60(auStack_7c);
    local_58 = 0;
    local_90[0] = 0x1f;
    local_8c = 7;
    local_80 = 0;
    local_88 = FUN_008ed120(0x1f);
    FUN_00942450(param_1);
    uVar1 = FUN_00925850();
    FUN_0094a5a0(uVar1,auStack_48,local_90);
  }
  return;
}


