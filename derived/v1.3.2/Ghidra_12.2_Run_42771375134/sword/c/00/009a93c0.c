/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009a93c0; name: FUN_009a93c0
 */


void FUN_009a93c0(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_b0 [3];
  undefined1 local_a3;
  int local_a0;
  undefined4 uStack_9c;
  undefined5 uStack_98;
  undefined1 local_93;
  int local_90;
  undefined4 uStack_8c;
  undefined5 uStack_88;
  undefined1 local_83;
  int local_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  undefined1 local_73;
  int local_70;
  undefined4 uStack_6c;
  undefined5 uStack_68;
  undefined1 local_63;
  int local_60;
  undefined4 uStack_5c;
  undefined5 uStack_58;
  undefined1 local_53;
  undefined8 local_50;
  undefined1 *puStack_48;
  long local_38;
  undefined1 local_28 [8];
  
  *param_2 = 0;
  FUN_00942380();
  uVar3 = FUN_008f8be0();
  if ((uVar3 & 1) != 0) {
    stack0xffffffffffffff58 = 0;
    local_b0[0] = 0;
    local_b0[1] = 0;
    local_a3 = 1;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_9c = 0;
    local_93 = 1;
    uStack_88 = 0;
    local_90 = 0;
    uStack_8c = 0;
    local_83 = 1;
    uStack_78 = 0;
    local_80 = 0;
    uStack_7c = 0;
    local_73 = 1;
    uStack_68 = 0;
    local_70 = 0;
    uStack_6c = 0;
    local_63 = 1;
    uStack_58 = 0;
    local_60 = 0;
    uStack_5c = 0;
    local_53 = 1;
    FUN_009a9560(param_1,local_b0);
    if (((((local_b0[0] != 0) || (local_a0 != 0)) || (local_90 != 0)) ||
        ((local_80 != 0 || (local_70 != 0)))) || (local_60 != 0)) {
      iVar1 = FUN_00942640(param_1);
      if ((iVar1 == 0) && (uVar3 = FUN_009426f0(param_1), (uVar3 & 1) != 0)) {
        uVar4 = FUN_00942380(param_1);
        FUN_00942380(param_1);
        uVar2 = FUN_008f98a0();
        uVar2 = FUN_008f8ca0(uVar4,uVar2);
        uVar3 = FUN_00942700(param_1,uVar2);
        if ((uVar3 & 1) == 0) {
          FUN_00942380(param_1);
          FUN_008f8ef0(&local_50);
          uVar4 = FUN_009423a0(param_1);
          FUN_00916b10(uVar4,0xad,0);
          if (local_38 != 0) {
            (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
            local_38 = 0;
          }
        }
      }
      FUN_00942380(param_1);
      uVar2 = FUN_008f98a0();
      local_50 = FUN_009425f0(param_1,uVar2);
      local_28[0] = 0;
      puStack_48 = (undefined1 *)local_b0;
      FUN_00942450(param_1);
      uVar4 = FUN_00925310();
      FUN_009a2f70(uVar4,local_28,&local_50);
      *param_2 = local_28[0];
    }
  }
  return;
}


