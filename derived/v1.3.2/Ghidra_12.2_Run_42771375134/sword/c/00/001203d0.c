/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001203d0; name: FUN_001203d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001203d0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xe] = param_2 + 0x120;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x40] = param_2 + 0x28;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x3f800000;
  param_1[9] = 0;
  param_1[10] = 0x3f80000000000000;
  param_1[0xb] = 0;
  FUN_0011c930(param_1 + 0x43);
  uVar3 = _DAT_01d4b8f0;
  param_1[0x24b] = _UNK_01d4b8f8;
  param_1[0x24a] = uVar3;
  uVar2 = _UNK_01d4b578;
  uVar3 = _DAT_01d4b570;
  *(undefined2 *)((long)param_1 + 0x127e) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x2b2) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x316) = 0;
  param_1[0x249] = uVar2;
  param_1[0x248] = uVar3;
  *(undefined4 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x37a) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)((long)param_1 + 0x1be4) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x37c) = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  *(undefined2 *)(param_1 + 0x382) = 0;
  *(undefined4 *)(param_1 + 0x37d) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1c12) = *(undefined1 *)(param_2 + 0x178);
  *(undefined1 *)((long)param_1 + 0x1c13) = 0;
  *(undefined8 *)((long)param_1 + 0x1c14) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c2c) = 0;
  param_1[0x387] = *(undefined8 *)(param_2 + 0x180);
  param_1[0x388] = *(undefined8 *)(param_2 + 0x188);
  param_1[0x389] = *(undefined8 *)(param_2 + 400);
  uVar3 = *(undefined8 *)(param_2 + 0x1a0);
  param_1[0x38c] = 0;
  *(undefined4 *)(param_1 + 0x38d) = 0;
  param_1[0x38e] = 0;
  *(undefined4 *)(param_1 + 0x38f) = 0;
  param_1[0x390] = 0;
  param_1[0x391] = 0;
  param_1[0x38b] = uVar3;
                    /* try { // try from 001204e8 to 00120503 has its CatchHandler @ 00120520 */
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0xf,0,0xc4);
}


