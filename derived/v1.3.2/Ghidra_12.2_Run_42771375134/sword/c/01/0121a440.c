/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121a440; name: FUN_0121a440
 */


void FUN_0121a440(char *param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined6 local_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  undefined2 uStack_22;
  
  if ((*param_2 != 0) && (0xd0 < (ulong)param_2[1])) {
    FUN_0121c400(&local_58,*param_2 + 0xb5,0x1c);
    if (param_1[0x38] == '\0') {
      *(undefined8 *)(param_1 + 0x44) = uStack_50;
      *(undefined8 *)(param_1 + 0x4c) = local_48;
      *(undefined8 *)(param_1 + 0x3c) = local_58;
      *(ulong *)(param_1 + 100) = CONCAT26(uStack_2a,local_30);
      *(ulong *)(param_1 + 0x6c) = CONCAT26(uStack_22,uStack_28);
      *(undefined8 *)(param_1 + 0x54) = local_40;
      *(undefined8 *)(param_1 + 0x5c) = uStack_38;
      param_1[0x38] = '\x01';
      lVar1 = *param_2;
    }
    else {
      *(undefined8 *)(param_1 + 0x44) = uStack_50;
      *(undefined8 *)(param_1 + 0x4c) = local_48;
      *(undefined8 *)(param_1 + 0x3c) = local_58;
      *(ulong *)(param_1 + 0x6a) = CONCAT62(uStack_28,uStack_2a);
      *(undefined8 *)(param_1 + 0x54) = local_40;
      *(undefined8 *)(param_1 + 0x5c) = uStack_38;
      *(ulong *)(param_1 + 100) = CONCAT26(uStack_2a,local_30);
      lVar1 = *param_2;
    }
    if ((lVar1 != 0) && (0xd9 < (ulong)param_2[1])) {
      local_58 = 9;
      auVar2 = FUN_0121b2a0(lVar1 + 0xd1,&local_58);
      *(long *)(param_1 + 0x28) = auVar2._0_8_;
      if (param_1[0x24] == '\0') {
        *(long *)(param_1 + 0x30) = auVar2._8_8_;
        param_1[0x24] = '\x01';
        lVar1 = *param_2;
      }
      else {
        *(int *)(param_1 + 0x30) = auVar2._8_4_;
        *(short *)(param_1 + 0x34) = auVar2._12_2_;
        lVar1 = *param_2;
      }
      if ((lVar1 != 0) && (0xf9 < (ulong)param_2[1])) {
        FUN_011f5000(&local_58,lVar1 + 0xda,0x20);
        *(undefined8 *)(param_1 + 0x12) = local_48;
        *(undefined8 *)(param_1 + 0x1a) = local_40;
        *(undefined8 *)(param_1 + 10) = uStack_50;
        *(undefined8 *)(param_1 + 2) = local_58;
        if (*param_1 == '\0') {
          *param_1 = '\x01';
          return;
        }
      }
    }
  }
  return;
}


