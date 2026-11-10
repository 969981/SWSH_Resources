/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094f2b0; name: FUN_0094f2b0
 */


byte FUN_0094f2b0(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte bVar7;
  char local_a8 [8];
  undefined8 local_a0;
  undefined4 local_98;
  int iStack_94;
  char local_90;
  undefined2 local_8e;
  undefined4 local_8c;
  char local_88;
  byte local_87;
  undefined8 local_80;
  byte local_78;
  char *local_70;
  char local_68;
  char local_58 [8];
  
  pcVar1 = (char *)0x0;
  if (param_2[0x1f] != '\0') {
    pcVar1 = param_2 + 0x24;
  }
  if (param_2[1] == '\0') {
    bVar7 = 0;
  }
  else if (param_2[0x1f] == '\0') {
    uVar6 = 0;
    bVar7 = 0;
    do {
      FUN_00942390(param_1);
      uVar2 = FUN_009319a0();
      uVar3 = FUN_00913dd0(uVar2,param_2[uVar6 + 2]);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009424e0(param_1,param_2[uVar6 + 2]);
        uVar3 = FUN_008e1600();
        if ((uVar3 & 1) == 0) {
          if (param_2[0x21] == '\0') {
            if (*param_2 == '\x1f') {
              local_87 = 0;
            }
            else {
              uVar4 = FUN_009424e0(param_1);
              uVar5 = FUN_009423e0(param_1);
              local_87 = FUN_009267c0(uVar5,uVar4,uVar2,0);
            }
          }
          else {
            local_87 = 1;
          }
          local_a8[0] = *param_2;
          local_98 = *(undefined4 *)(param_2 + 8);
          local_90 = param_2[0xd];
          local_8e = *(undefined2 *)(param_2 + 0xe);
          local_8c = *(undefined4 *)(param_2 + 0x10);
          local_88 = param_2[0x1d];
          local_68 = param_2[0x20];
          local_80 = 0;
          iStack_94 = (int)param_2[0xc];
          local_87 = local_87 & 1;
          local_78 = param_2[0x1c] ^ 1;
          local_a0 = uVar2;
          local_70 = pcVar1;
          FUN_00942450(param_1);
          uVar2 = FUN_00925ae0();
          FUN_0094f630(uVar2,local_58,local_a8);
          if (local_58[0] != '\0') {
            uVar2 = FUN_009423b0(param_1);
            FUN_00935bf0(uVar2,param_2 + 0x24);
            bVar7 = 1;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (byte)param_2[1]);
  }
  else {
    uVar6 = 0;
    bVar7 = 0;
    do {
      FUN_00942390(param_1);
      uVar2 = FUN_009319a0();
      uVar3 = FUN_00913dd0(uVar2,param_2[uVar6 + 2]);
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_009424e0(param_1,param_2[uVar6 + 2]);
        uVar3 = FUN_008e1600();
        if ((uVar3 & 1) == 0) {
          if (param_2[0x21] == '\0') {
            if (*param_2 == '\x1f') {
              local_87 = 0;
            }
            else {
              uVar4 = FUN_009424e0(param_1);
              uVar5 = FUN_009423e0(param_1);
              local_87 = FUN_009267c0(uVar5,uVar4,uVar2,0);
            }
          }
          else {
            local_87 = 1;
          }
          local_a8[0] = *param_2;
          local_98 = *(undefined4 *)(param_2 + 8);
          local_90 = param_2[0xd];
          local_8e = *(undefined2 *)(param_2 + 0xe);
          local_8c = *(undefined4 *)(param_2 + 0x10);
          local_88 = param_2[0x1d];
          local_68 = param_2[0x20];
          local_80 = 0;
          iStack_94 = (int)param_2[0xc];
          local_87 = local_87 & 1;
          local_78 = param_2[0x1c] ^ 1;
          local_a0 = uVar2;
          local_70 = pcVar1;
          FUN_00942450(param_1);
          uVar2 = FUN_00925ae0();
          FUN_0094f630(uVar2,local_58,local_a8);
          bVar7 = bVar7 | local_58[0] != '\0';
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (byte)param_2[1]);
  }
  return bVar7;
}


