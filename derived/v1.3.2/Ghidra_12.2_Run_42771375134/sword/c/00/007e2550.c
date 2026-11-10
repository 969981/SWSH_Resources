/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e2550; name: FUN_007e2550
 */


undefined8 FUN_007e2550(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong local_98 [2];
  void *local_88;
  long local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined *local_68;
  undefined local_60 [8];
  long *local_58;
  
  local_80 = param_1;
  uStack_78 = param_3;
  if (*(long *)(param_1 + 0xf0) != 2) {
    local_70 = PTR_DAT_02716e10 + 0x10;
    local_68 = PTR_LAB_02716e18;
    local_58 = &local_80;
    local_60[0] = 0;
    FUN_00801c10((long *)(param_1 + 0xf0),&local_70);
    FUN_00801390(&local_70);
  }
  local_98[1] = 0;
  local_88 = (void *)0x0;
  local_98[0] = 0;
  lVar3 = *param_2;
  lVar1 = param_2[1];
  if (lVar3 != lVar1) {
    lVar5 = 0;
    do {
      if (lVar5 != 0) {
        std::string::append((char *)local_98);
      }
      local_70 = local_60;
      lVar2 = FUN_007ffa60(*(undefined4 *)(lVar3 + lVar5),local_60);
      local_68 = (undefined *)(lVar2 - (long)local_60);
      FUN_00800880(local_98,&local_70);
      lVar5 = lVar5 + 4;
    } while (lVar1 - lVar3 != lVar5);
  }
  lVar3 = FUN_007fbb40(param_1 + 0xf8,local_98);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
  }
  if ((local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  return uVar4;
}


