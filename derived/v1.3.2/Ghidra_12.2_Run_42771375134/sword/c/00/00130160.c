/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00130160; name: FUN_00130160
 */


void FUN_00130160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,uint param_6,undefined8 *param_7,undefined8 param_8,int param_9,
                 int param_10)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 local_70 [2];
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar2 = PTR_DAT_02710ca8;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 8) = puVar2 + 0x10;
  *(undefined8 *)(param_1 + 0x10) = param_8;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = *param_7;
  uVar3 = *param_7;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = param_4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xd0) = *param_7;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = *param_7;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  uVar3 = *param_7;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = param_2;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x1dc) = 0x100;
  *(undefined8 *)(param_1 + 0x1e0) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x120) = param_3;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x204) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0xffffffff3f400000;
                    /* try { // try from 0013028c to 00130297 has its CatchHandler @ 001303f0 */
  FUN_00134d20(param_1 + 0x210,0x40);
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x278) = 0;
                    /* try { // try from 001302b8 to 001302c3 has its CatchHandler @ 001303e0 */
  FUN_00134d20(param_1 + 0x248,0x40);
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0xfffffffe;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
                    /* try { // try from 001302f4 to 001302ff has its CatchHandler @ 001303d0 */
  FUN_00134ed0(param_1 + 0x298,0x40);
  if (param_6 == 0) {
    param_6 = 1;
  }
  param_6 = param_6 | param_6 >> 1;
  param_6 = param_6 | param_6 >> 2;
  param_6 = param_6 | param_6 >> 4;
  param_6 = param_6 | param_6 >> 8;
  iVar1 = (param_6 | param_6 >> 0x10) + 1;
  *(undefined8 *)(param_1 + 0x2d0) = param_8;
  local_70[0] = CONCAT44(local_70[0]._4_4_,0xffffffff);
                    /* try { // try from 0013032c to 00130373 has its CatchHandler @ 00130400 */
  FUN_0012ff00(param_1 + 0x90,iVar1,local_70);
  local_70[0] = 0;
  FUN_0012ffe0((undefined8 *)(param_1 + 0xb0),iVar1,local_70);
  FUN_00130120(*(undefined8 *)(param_1 + 0xa8),iVar1);
  FUN_00190b50((undefined8 *)(param_1 + 0x50),iVar1);
  FUN_00190b50((undefined8 *)(param_1 + 0x60),iVar1);
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0x101;
  *(undefined2 *)(param_1 + 0xce) = 0x101;
  *(bool *)(param_1 + 0xc4) = param_10 != 2;
  *(bool *)(param_1 + 0xc1) = param_10 != 2;
  *(undefined8 *)(param_1 + 0xc6) = 0x101010101010101;
  *(bool *)(param_1 + 0xc5) = param_9 != 2;
  return;
}


