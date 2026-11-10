/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00196300; name: FUN_00196300
 */


void FUN_00196300(undefined8 *param_1)

{
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_60 = 0;
  local_68 = 0x400000000;
  local_78 = "Pt::ParticleFlags";
  local_70 = (char *)0x0;
  local_58 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU16";
  local_70 = "api";
  local_58 = 0;
  local_68 = 0x200000000;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU16";
  local_70 = "low";
  local_58 = 0;
  local_68 = 0x200000002;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_60 = 0;
  local_78 = "Pt::Particle";
  local_70 = (char *)0x0;
  local_68 = 0x2000000000;
  local_58 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxVec3";
  local_70 = "position";
  local_58 = 0;
  local_68 = 0xc00000000;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_58 = 0;
  local_68 = 0x40000000c;
  local_78 = "PxReal";
  local_70 = "density";
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxVec3";
  local_70 = "velocity";
  local_58 = 0;
  local_68 = 0xc00000010;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "Pt::ParticleFlags";
  local_70 = "flags";
  local_58 = 0;
  local_68 = 0x40000001c;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "Pt::ParticleData";
  local_70 = (char *)0x0;
  local_60 = 0;
  local_68 = 0x5800000000;
  local_58 = 3;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "bool";
  local_70 = "mOwnMemory";
  local_68 = 0x100000008;
  local_58 = 0;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_58 = 0;
  local_78 = "PxU32";
  local_70 = "mMaxParticles";
  local_68 = 0x40000000c;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "bool";
  local_70 = "mHasRestOffsets";
  local_58 = 0;
  local_68 = 0x100000010;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU32";
  local_70 = "mValidParticleRange";
  local_58 = 0;
  local_68 = 0x400000014;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU32";
  local_70 = "mValidParticleCount";
  local_58 = 0;
  local_68 = 0x400000018;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxBounds3";
  local_70 = "mWorldBounds";
  local_58 = 0;
  local_60 = 1;
  local_68 = 0x180000001c;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "Pt::Particle";
  local_70 = "mParticleBuffer";
  local_68 = 0x800000038;
  local_60 = 1;
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "mRestOffsetBuffer";
  local_68 = 0x800000040;
  local_60 = 1;
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "BitMap";
  local_70 = "mParticleMap";
  local_58 = 0;
  local_60 = 1;
  local_68 = 0x1000000048;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_68 = 0x40000000c;
  local_60 = 0x10;
  local_78 = "Pt::Particle";
  local_70 = (char *)0x0;
  local_58 = 0x1000000010;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  memcpy(&local_78,&PTR_s_PxReal_025dde78,0x28);
  (**(code **)*param_1)(param_1,&local_78,0x28);
  return;
}


