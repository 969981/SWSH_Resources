/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bbe20; name: FUN_003bbe20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003bbe20(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(int *)(param_1 + 0x30) == 0) || (*(char *)(param_1 + 0x110) == '\0')) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != *(byte *)(param_1 + 0x9c)) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
                    /* try { // try from 003bbe6c to 003bbe77 has its CatchHandler @ 003bbfe8 */
    FUN_003bbff0(param_1 + 0xd0,uVar1,&local_60);
    local_60 = 0;
    uStack_58 = 0x3f80000000000000;
    local_50 = 0;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    FUN_003bc0c0(param_1 + 0xc0,uVar1,&local_60);
    uVar7 = _UNK_01d4b588;
    uVar6 = _DAT_01d4b580;
    uVar5 = _UNK_01d4ae58;
    uVar4 = _DAT_01d4ae50;
    uVar3 = _UNK_01d49dc8;
    uVar2 = _DAT_01d49dc0;
    uStack_58 = _UNK_01d4ae58;
    local_60 = _DAT_01d4ae50;
    uStack_48 = _UNK_01d4b588;
    local_50 = _DAT_01d4b580;
    uStack_38 = _UNK_01d49dc8;
    local_40 = _DAT_01d49dc0;
    FUN_003bc170(param_1 + 0xb0,uVar1,&local_60);
    uStack_58 = uVar5;
    local_60 = uVar4;
    uStack_48 = uVar7;
    local_50 = uVar6;
    uStack_38 = uVar3;
    local_40 = uVar2;
    FUN_003bc170(param_1 + 0xa0,uVar1,&local_60);
    FUN_00159890(uVar1,&local_60,&local_24,&local_28);
    local_64[0] = 0;
    FUN_003bc200(param_1 + 0xe0,local_24,local_64);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xa0);
    *(short *)(param_1 + 0x9a) = (short)local_60;
    *(short *)(param_1 + 0x98) = (short)local_24;
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x100);
    local_64[0] = 0;
    FUN_003bc200(param_1 + 0xf0,local_28,local_64);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xf0);
    *(short *)(param_1 + 0x9e) = (short)local_28;
  }
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0xb0),0,(ulong)(uint)(*(int *)(param_1 + 0xb8) * 0x30));
}


