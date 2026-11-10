/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003cac60; name: FUN_003cac60
 */


void FUN_003cac60(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_00196300();
  local_40 = 0;
  local_58 = "Sc::ParticleSystemCore";
  local_50 = (char *)0x0;
  local_48 = 0x9000000000;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Sc::ParticleSystemCore";
  local_50 = "Sc::ActorCore";
  local_48 = 0x9000000000;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "Pt::ParticleData";
  local_50 = "mStandaloneData";
  local_48 = 0x800000010;
  local_40 = 1;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxFilterData";
  local_50 = "mSimulationFilterData";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x1000000018;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mExternalAcceleration";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0xc00000028;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mParticleMass";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x400000034;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "Pt::ParticleSystemParameter";
  local_50 = "mLLParameter";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x5800000038;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "Pt::ParticleData";
  local_50 = (char *)0x0;
  local_48 = 0x5800000034;
  local_40 = 0x400000000;
  local_38 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


