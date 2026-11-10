/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012255b0; name: FUN_012255b0
 */


void FUN_012255b0(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined2 local_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined5 local_34;
  undefined3 uStack_2f;
  undefined5 uStack_2c;
  
  if ((*param_2 != 0) && (0xb4 < (ulong)param_2[1])) {
    FUN_0121b9b0(local_70,*param_2 + 0x90,0x25);
    if (*(char *)(param_1 + 0x8c) == '\0') {
      *(undefined1 *)(param_1 + 0x90) = local_70[0];
      *(undefined1 *)(param_1 + 0x94) = 0;
      if (local_70[4] != '\0') {
        *(undefined8 *)(param_1 + 0x98) = local_68;
        *(undefined4 *)(param_1 + 0xb0) = local_50;
        *(undefined8 *)(param_1 + 0xa0) = local_60;
        *(undefined8 *)(param_1 + 0xa8) = local_58;
        *(undefined1 *)(param_1 + 0x94) = 1;
      }
      *(ulong *)(param_1 + 0xb4) = CONCAT44(uStack_48,local_4c);
      *(ulong *)(param_1 + 0xbc) = CONCAT44(uStack_40,CONCAT22(uStack_42,local_44));
      *(ulong *)(param_1 + 0xd1) = CONCAT53(uStack_2c,uStack_2f);
      *(ulong *)(param_1 + 0xcc) = CONCAT35(uStack_2f,local_34);
      *(ulong *)(param_1 + 0xc4) = CONCAT44(uStack_38,CONCAT22(uStack_3a,local_3c));
      *(undefined1 *)(param_1 + 0x8c) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x90) = local_70[0];
      if (*(char *)(param_1 + 0x94) == '\0') {
        if (local_70[4] != '\0') {
          *(undefined8 *)(param_1 + 0x98) = local_68;
          *(undefined4 *)(param_1 + 0xb0) = local_50;
          *(undefined8 *)(param_1 + 0xa0) = local_60;
          *(undefined8 *)(param_1 + 0xa8) = local_58;
          *(undefined1 *)(param_1 + 0x94) = 1;
        }
      }
      else if (local_70[4] == '\0') {
        *(undefined1 *)(param_1 + 0x94) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xb0) = (undefined1)local_50;
        *(undefined8 *)(param_1 + 0x98) = local_68;
        *(undefined8 *)(param_1 + 0xa0) = local_60;
        *(undefined8 *)(param_1 + 0xa8) = local_58;
      }
      *(ulong *)(param_1 + 0xb4) = CONCAT44(uStack_48,local_4c);
      *(ulong *)(param_1 + 0xd1) = CONCAT53(uStack_2c,uStack_2f);
      *(ulong *)(param_1 + 0xcc) = CONCAT35(uStack_2f,local_34);
      *(ulong *)(param_1 + 0xc4) = CONCAT44(uStack_38,CONCAT22(uStack_3a,local_3c));
      *(ulong *)(param_1 + 0xbc) = CONCAT44(uStack_40,CONCAT22(uStack_42,local_44));
    }
    if (local_70[4] != '\0') {
      local_70[4] = 0;
    }
    if ((*param_2 != 0) && (0xd0 < (ulong)param_2[1])) {
      FUN_0121c400(local_70,*param_2 + 0xb5,0x1c);
      if (*(char *)(param_1 + 0x50) == '\0') {
        *(undefined8 *)(param_1 + 0x5c) = local_68;
        *(undefined8 *)(param_1 + 100) = local_60;
        *(undefined8 *)(param_1 + 0x54) = local_70;
        *(ulong *)(param_1 + 0x7c) = CONCAT26(uStack_42,CONCAT24(local_44,uStack_48));
        *(ulong *)(param_1 + 0x84) = CONCAT26(uStack_3a,CONCAT24(local_3c,uStack_40));
        *(undefined8 *)(param_1 + 0x6c) = local_58;
        *(ulong *)(param_1 + 0x74) = CONCAT44(local_4c,local_50);
        *(undefined1 *)(param_1 + 0x50) = 1;
        lVar1 = *param_2;
      }
      else {
        *(undefined8 *)(param_1 + 0x5c) = local_68;
        *(undefined8 *)(param_1 + 100) = local_60;
        *(undefined8 *)(param_1 + 0x54) = local_70;
        *(ulong *)(param_1 + 0x82) = CONCAT26(local_3c,CONCAT42(uStack_40,uStack_42));
        *(undefined8 *)(param_1 + 0x6c) = local_58;
        *(ulong *)(param_1 + 0x74) = CONCAT44(local_4c,local_50);
        *(ulong *)(param_1 + 0x7c) = CONCAT26(uStack_42,CONCAT24(local_44,uStack_48));
        lVar1 = *param_2;
      }
      if ((lVar1 != 0) && (0xd9 < (ulong)param_2[1])) {
        local_70 = (undefined1  [8])0x9;
        auVar2 = FUN_0121b2a0(lVar1 + 0xd1,local_70);
        *(long *)(param_1 + 0x40) = auVar2._0_8_;
        if (*(char *)(param_1 + 0x3c) == '\0') {
          *(long *)(param_1 + 0x48) = auVar2._8_8_;
          *(undefined1 *)(param_1 + 0x3c) = 1;
        }
        else {
          *(int *)(param_1 + 0x48) = auVar2._8_4_;
          *(short *)(param_1 + 0x4c) = auVar2._12_2_;
        }
      }
    }
  }
  FUN_012257f0(param_1,param_2);
  return;
}


