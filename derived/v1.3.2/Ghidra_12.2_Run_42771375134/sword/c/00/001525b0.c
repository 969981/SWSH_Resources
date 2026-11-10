/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001525b0; name: FUN_001525b0
 */


void FUN_001525b0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = *(undefined8 *)(param_3 + 8);
  param_1[4] = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x100000000;
                    /* try { // try from 00152614 to 0015261b has its CatchHandler @ 0015286c */
  FUN_00158690(param_1 + 0x22,param_3 + 0x110);
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
                    /* try { // try from 00152650 to 00152657 has its CatchHandler @ 0015285c */
  FUN_00158750(param_1 + 0x34,param_3 + 0x1a0);
                    /* try { // try from 00152660 to 0015266b has its CatchHandler @ 0015284c */
  FUN_00158840(param_1 + 0x36,param_3 + 0x1b0);
                    /* try { // try from 00152674 to 0015267f has its CatchHandler @ 0015283c */
  FUN_00158840(param_1 + 0x38,param_3 + 0x1c0);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
                    /* try { // try from 0015268c to 00152697 has its CatchHandler @ 0015282c */
  FUN_00158840(param_1 + 0x3c,param_3 + 0x1e0);
                    /* try { // try from 001526a0 to 001526a7 has its CatchHandler @ 00152818 */
  FUN_00158840(param_1 + 0x3e,param_3 + 0x1f0);
                    /* try { // try from 001526b0 to 001526b7 has its CatchHandler @ 00152804 */
  FUN_00158930(param_1 + 0x40,param_3 + 0x200);
                    /* try { // try from 001526c0 to 001526c7 has its CatchHandler @ 001527f0 */
  FUN_00158930(param_1 + 0x42,param_3 + 0x210);
                    /* try { // try from 001526d0 to 001526d7 has its CatchHandler @ 001527dc */
  FUN_001589f0(param_1 + 0x46,param_3 + 0x230);
                    /* try { // try from 001526e0 to 001526e7 has its CatchHandler @ 001527c8 */
  FUN_00158840(param_1 + 0x48,param_3 + 0x240);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_3 + 0x250);
                    /* try { // try from 001526f8 to 001526ff has its CatchHandler @ 001527b4 */
  FUN_00158ae0(param_1 + 0x4c,param_3 + 0x260);
                    /* try { // try from 00152708 to 0015270f has its CatchHandler @ 001527a0 */
  FUN_00158840(param_1 + 0x4e,param_3 + 0x270);
                    /* try { // try from 00152710 to 0015276f has its CatchHandler @ 0015287c */
  FUN_00152ce0(param_1,param_3);
  FUN_00153010(param_1 + 2,param_3 + 0x10);
  FUN_00153010(param_1 + 4,param_3 + 0x20);
  FUN_00153010(param_1 + 0x25,param_3 + 0x128);
  FUN_00153010(param_1 + 0x27,param_3 + 0x138);
  FUN_00153010(param_1 + 0x2b,param_3 + 0x158);
  FUN_00153010(param_1 + 0x2d,param_3 + 0x168);
  FUN_00153010(param_1 + 0x2f,param_3 + 0x178);
  *(short *)(param_1[1] + 0x10) = *(short *)(param_1[1] + 0x10) + 1;
  return;
}


