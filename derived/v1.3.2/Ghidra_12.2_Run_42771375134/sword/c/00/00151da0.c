/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00151da0; name: FUN_00151da0
 */


void FUN_00151da0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 long param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puVar5 = param_1 + 2;
  *puVar5 = 0;
  param_1[3] = 0;
  puVar6 = param_1 + 4;
  *puVar6 = 0;
  param_1[5] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x100000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x53] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
                    /* try { // try from 00151e54 to 00151e5f has its CatchHandler @ 00151fc8 */
  FUN_00152410(param_1,param_4,param_5);
  uVar7 = (ulong)(param_5 - (long)param_4) >> 4;
  uVar1 = (int)uVar7 + 3;
  if ((*(uint *)((long)param_1 + 0x1c) & 0x7fffffff) < uVar1) {
                    /* try { // try from 00151e7c to 00151e93 has its CatchHandler @ 00151fd8 */
    FUN_00145a30(puVar5,uVar1);
  }
  FUN_00153540(puVar5,uVar7 & 0xffffffff);
  if (*(uint *)(param_1 + 3) != 0) {
    puVar2 = (undefined4 *)param_1[2];
    puVar3 = puVar2 + (ulong)*(uint *)(param_1 + 3) * 4;
    do {
      *puVar2 = *param_4;
      puVar2[1] = param_4[1];
      puVar2[2] = param_4[2];
      puVar2[3] = param_4[3];
      puVar2 = puVar2 + 4;
      param_4 = param_4 + 4;
    } while (puVar2 < puVar3);
  }
  local_50 = 0;
  uStack_48 = 0;
                    /* try { // try from 00151ed8 to 00151ee7 has its CatchHandler @ 00151fb8 */
  FUN_00145790(puVar5,uVar1,&local_50);
  uVar1 = *(uint *)(param_1 + 3);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(uint *)((long)param_1 + 0x2c) & 0x7fffffff) < uVar1) {
                    /* try { // try from 00151f00 to 00151f07 has its CatchHandler @ 00151fd8 */
    FUN_00145a30(puVar6);
    uVar1 = *(uint *)(param_1 + 3);
  }
  if (uVar1 != 0) {
    puVar3 = (undefined4 *)*puVar6;
    puVar4 = (undefined4 *)*puVar5;
    puVar2 = puVar3 + (ulong)uVar1 * 4;
    do {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      puVar3[2] = puVar4[2];
      puVar3[3] = puVar4[3];
      puVar3 = puVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (puVar3 < puVar2);
  }
  *(uint *)(param_1 + 5) = uVar1;
                    /* try { // try from 00151f50 to 00151f5f has its CatchHandler @ 00151fa8 */
  FUN_00145790(puVar5,uVar7 & 0xffffffff,&local_50);
                    /* try { // try from 00151f60 to 00151f6f has its CatchHandler @ 00151f98 */
  FUN_00145790(puVar6,uVar7 & 0xffffffff,&local_50);
  *(short *)(param_1[1] + 0x10) = *(short *)(param_1[1] + 0x10) + 1;
  return;
}


