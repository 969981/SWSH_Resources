/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017c270; name: FUN_0017c270
 */


void FUN_0017c270(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[0x586] = param_2;
  param_1[0x587] = 0;
  *(undefined4 *)(param_1 + 0x588) = 0;
  param_1[0x589] = 0;
  param_1[0x58a] = 0;
  param_1[0x58b] = param_2;
  param_1[0x58c] = param_2;
  param_1[0x58d] = 0;
  *(undefined4 *)(param_1 + 0x58e) = 0;
  *(undefined4 *)(param_1 + 0x58f) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x591) = 0;
  param_1[0x592] = 0;
  param_1[0x593] = 0;
  param_1[0x594] = 0;
  param_1[0x595] = 0;
  param_1[0x596] = 0;
  param_1[0x597] = 0;
  param_1[0x5a4] = 0;
  param_1[0x5a5] = 0;
  param_1[0x5a6] = 0;
  param_1[0x5a7] = 0;
  param_1[0x5a8] = 0;
  param_1[0x5a9] = 0;
  param_1[0x5aa] = 0;
  param_1[0x5ab] = 0;
  param_1[0x5ac] = 0;
  param_1[0x5ad] = 0;
  param_1[0x5ae] = 0;
  param_1[0x5af] = 0;
  param_1[0x5b2] = 0;
  param_1[0x5b3] = 0;
  *(undefined4 *)(param_1 + 0x5b5) = 0;
  param_1[0x5b6] = 0;
  *(undefined4 *)(param_1 + 0x5b7) = 0;
  param_1[0x5b8] = 0;
  param_1[0x5ba] = 0;
  param_1[0x5bb] = 0;
  param_1[0x5bc] = 0;
  param_1[0x5bd] = 0;
  param_1[0x5be] = 0;
                    /* try { // try from 0017c340 to 0017c363 has its CatchHandler @ 0017c378 */
  FUN_001ed4d0(param_1 + 0x596,0x200);
  if ((*(uint *)((long)param_1 + 0x2c9c) & 0x7fffff80) == 0) {
    FUN_001ed4d0(param_1 + 0x592,0x80);
  }
  return;
}


