/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4910; name: FUN_012e4910
 */


uint FUN_012e4910(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  
  local_50 = FUN_0130fa00();
  local_60 = 0x407a55817bcd2834;
  uStack_58 = 0;
  uVar2 = FUN_012ecf40(local_50,&local_60);
  if ((uVar2 & 1) == 0) {
    local_70 = FUN_0130fa00(param_1);
    local_80 = 0xa6514906bdd85577;
    uStack_78 = 0;
    uVar2 = FUN_012ecf40(local_70,&local_80);
    if ((uVar2 & 1) == 0) {
      local_30 = FUN_0130fa00(param_1);
      local_40 = 0x44283abd19e14af5;
      uStack_38 = 0;
      uVar1 = FUN_012ecf40(local_30,&local_40);
      goto LAB_012e49b4;
    }
  }
  uVar1 = 1;
LAB_012e49b4:
  return uVar1 & 1;
}


