/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00112990; name: FUN_00112990
 */


void FUN_00112990(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar3 = param_1 + 0xc;
  *puVar3 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar4 = param_1 + 0x10;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
                    /* try { // try from 00112a04 to 00112a1b has its CatchHandler @ 00112b30 */
  FUN_00114f00(param_1 + 0x16,puVar3,puVar4,param_1 + 0xe,param_3);
                    /* try { // try from 00112a20 to 00112a37 has its CatchHandler @ 00112b18 */
  FUN_00114f00(param_1 + 0x62,0,puVar4,0,param_3);
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xaf] = param_3;
  puVar1 = PTR_DAT_02710c10 + 0x10;
  param_1[0xb3] = param_1;
  param_1[0xb4] = param_1 + 0x62;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xae] = puVar1;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xb6] = param_3;
  param_1[0xb5] = puVar1;
  param_1[0xba] = param_1;
  param_1[0xbb] = param_1 + 0x16;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  puVar1 = PTR_DAT_02710c18 + 0x10;
  param_1[0xbd] = param_3;
  param_1[0xc1] = param_1;
  param_1[0xc3] = param_3;
  param_1[0xbc] = puVar1;
  local_58 = 0;
                    /* try { // try from 00112aa8 to 00112ab7 has its CatchHandler @ 00112ae4 */
  FUN_00112d20(puVar3,0x400,&local_58);
  uVar2 = 1000;
  if ((param_2 & 1) != 0) {
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0xc2) = uVar2;
  return;
}


