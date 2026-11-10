/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005bb6a0; name: FUN_005bb6a0
 */


int FUN_005bb6a0(long param_1)

{
  int iVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  local_68 = 0;
  local_88 = 0x1000007d0;
  uStack_80 = 0x7d000000001;
  local_78 = 0x100000001;
  FUN_00550f60(auStack_70);
  local_58 = 0;
  FUN_00550f60(auStack_60);
  local_48 = 0;
  FUN_00550f60(auStack_50);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar1 = FUN_005bb790(param_1,&local_88);
  if (iVar1 == 0) {
    iVar1 = FUN_005bbef0(param_1,&local_88);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = uStack_80._4_4_;
      *(undefined4 *)(param_1 + 0x30) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0x34) = local_78._4_4_;
      FUN_00551670(param_1 + 0x38,auStack_60);
    }
  }
  FUN_00551380(auStack_50);
  FUN_00551380(auStack_60);
  FUN_00551380(auStack_70);
  return iVar1;
}


