/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00192b60; name: FUN_00192b60
 */


void FUN_00192b60(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_02710f90;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
                    /* try { // try from 00192ba8 to 00192bb3 has its CatchHandler @ 00192d08 */
  FUN_0019e740(param_1 + 0x12,param_1);
                    /* try { // try from 00192bb8 to 00192bbf has its CatchHandler @ 00192cf4 */
  FUN_001a7290(param_1 + 0x8c,param_1);
  *(undefined4 *)((long)param_1 + 0x6d4) = param_3;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xdc] = 0;
  param_1[0xdb] = (long)(PTR_DAT_02710f98 + 0x10);
  param_1[0xe0] = (long)param_1;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe1] = (long)"Pt::ParticleSystemSimCpu.packetShapesUpdate";
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = (long)(PTR_DAT_02710fa0 + 0x10);
  param_1[0xe7] = (long)param_1;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xe8] = (long)"Pt::ParticleSystemSimCpu.packetShapesFinalization";
  *(undefined4 *)(param_1 + 0xed) = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = (long)(PTR_DAT_02710fa8 + 0x10);
  param_1[0xee] = (long)param_1;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xef] = (long)"Pt::ParticleSystemSimCpu.dynamicsUpdate";
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = (long)(PTR_DAT_02710fb0 + 0x10);
  param_1[0xf5] = (long)param_1;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xf6] = (long)"Pt::ParticleSystemSimCpu.collisionUpdate";
  *(undefined4 *)(param_1 + 0xfb) = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = (long)(PTR_DAT_02710fb8 + 0x10);
  param_1[0xfc] = (long)param_1;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0xfd] = (long)"Pt::ParticleSystemSimCpu.collisionFinalization";
  *(undefined4 *)(param_1 + 0x102) = 0;
  param_1[0xff] = 0;
  param_1[0xfe] = (long)(PTR_DAT_02710fc0 + 0x10);
  param_1[0x103] = (long)param_1;
  param_1[0x104] = (long)"Pt::ParticleSystemSimCpu.spatialHashUpdateSections";
  return;
}


