/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001f5040; name: FUN_001f5040
 */


void FUN_001f5040(long *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = 0;
  *param_1 = (long)(PTR_DAT_02711188 + 0x10);
                    /* try { // try from 001f5070 to 001f507b has its CatchHandler @ 001f5140 */
  FUN_001cb170(param_1 + 2,param_2,param_1);
                    /* try { // try from 001f5090 to 001f509b has its CatchHandler @ 001f512c */
  FUN_0039a2f0(param_1 + 0x486,param_1 + 2,*(undefined4 *)(param_2 + 0xb0),
               *(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),param_2 + 0x60);
                    /* try { // try from 001f509c to 001f50af has its CatchHandler @ 001f5144 */
  lVar1 = FUN_002aee80();
  param_1[0x499] = lVar1;
  lVar1 = FUN_002c5720();
  param_1[0x49a] = lVar1;
  lVar1 = FUN_002a4950();
  param_1[0x49b] = lVar1;
  param_1[0x49e] = 0;
  param_1[0x49f] = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  param_1[0x49c] = (long)(PTR_DAT_02711190 + 0x10);
  param_1[0x49d] = (long)param_1;
  param_1[0x4a5] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4a2] = (long)"NpSceneQueries.sceneQueriesStaticPrunerUpdate";
  *(undefined4 *)(param_1 + 0x4a7) = 0;
  param_1[0x4a3] = (long)(PTR_DAT_02711198 + 0x10);
  param_1[0x4a4] = (long)param_1;
  param_1[0x4a9] = (long)"NpSceneQueries.sceneQueriesDynamicPrunerUpdate";
  *(undefined4 *)(param_1 + 0x4aa) = *(undefined4 *)(param_2 + 0xbc);
  param_1[0x4a1] = (long)param_1;
  param_1[0x4a8] = (long)param_1;
  return;
}


