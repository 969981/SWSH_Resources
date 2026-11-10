/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012195e0; name: FUN_012195e0
 */


void FUN_012195e0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long local_80;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  lVar1 = (**(code **)(*param_2 + 0x10))();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 1;
    local_78 = 0xfa;
    local_80 = lVar1;
  }
  *param_1 = 0;
  param_1[0x24] = 0;
  param_1[0x38] = 0;
  param_1[0x74] = 0;
  param_1[0xd0] = 0;
  param_1[400] = 0;
  param_1[0x1e0] = 0;
  if (lVar1 != 0) {
    FUN_0121ad90(&local_70,lVar1,0x28);
    *(undefined8 *)(param_1 + 0x208) = local_50;
    *(undefined8 *)(param_1 + 0x1e8) = local_70;
    *(undefined8 *)(param_1 + 0x1f0) = uStack_68;
    *(undefined8 *)(param_1 + 0x1f8) = local_60;
    *(undefined8 *)(param_1 + 0x200) = local_58;
    if (param_1[0x1e0] == '\0') {
      param_1[0x1e0] = 1;
    }
    if ((local_80 != 0) && (0x58 < local_78)) {
      FUN_0121cd80(&local_70,local_80 + 0x28,0x31);
      *(undefined8 *)(param_1 + 0x19c) = uStack_68;
      *(undefined8 *)(param_1 + 0x194) = local_70;
      *(undefined8 *)(param_1 + 0x1bc) = uStack_48;
      *(undefined8 *)(param_1 + 0x1ac) = local_58;
      *(undefined8 *)(param_1 + 0x1a4) = local_60;
      *(undefined4 *)(param_1 + 0x1dc) = local_28;
      *(undefined8 *)(param_1 + 0x1d4) = local_30;
      *(undefined8 *)(param_1 + 0x1cc) = local_38;
      *(undefined8 *)(param_1 + 0x1b4) = local_50;
      *(undefined8 *)(param_1 + 0x1c4) = local_40;
      if (param_1[400] == '\0') {
        param_1[400] = 1;
      }
    }
  }
  FUN_0121a280(param_1,&local_80);
  return;
}


