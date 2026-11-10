/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00211a40; name: FUN_00211a40
 */


void FUN_00211a40(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_58 = 0x1800000000;
  local_68 = "ForceUpdates";
  local_60 = (char *)0x0;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "BitMap";
  local_60 = "map";
  local_58 = 0x800000000;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxVec3";
  local_60 = "values";
  local_58 = 0x800000008;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "bool";
  local_60 = "hasUpdates";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x100000010;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0;
  local_68 = "Scb::ParticleSystem";
  local_60 = (char *)0x0;
  local_58 = 0xe000000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_48 = 1;
  local_68 = "Scb::ParticleSystem";
  local_60 = "Scb::Actor";
  local_58 = 0xe000000000;
  local_50 = 0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Sc::ParticleSystemCore";
  local_60 = "mParticleSystem";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x9000000018;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpParticleFluidReadData";
  local_60 = "mReadParticleFluidData";
  local_50 = 1;
  local_58 = 0x8000000a8;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "ForceUpdates";
  local_60 = "mForceUpdatesAcc";
  local_48 = 0;
  local_58 = 0x18000000b0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "ForceUpdates";
  local_60 = "mForceUpdatesVel";
  local_48 = 0;
  local_58 = 0x18000000c8;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


