/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6ee0; name: FUN_003c6ee0
 */


void FUN_003c6ee0(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 4;
  local_58 = 0;
  local_50 = 0;
  local_68 = "PxActorFlags";
  local_60 = "PxU8";
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0;
  local_68 = "PxDominanceGroup";
  local_60 = "PxU8";
  local_58 = 0;
  local_48 = 4;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0;
  local_68 = "PxClientID";
  local_60 = "PxU8";
  local_58 = 0;
  local_48 = 4;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Sc::ActorCore";
  local_60 = (char *)0x0;
  local_50 = 0;
  local_58 = 0x1000000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "ActorSim";
  local_60 = "mSim";
  local_48 = 8;
  local_58 = 0x800000000;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mAggregateIDOwnerClient";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x400000008;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxActorFlags";
  local_60 = "mActorFlags";
  local_48 = 0;
  local_58 = 0x10000000c;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU8";
  local_60 = "mActorType";
  local_48 = 0;
  local_58 = 0x10000000d;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU8";
  local_60 = "mClientBehaviorFlags";
  local_48 = 0;
  local_58 = 0x10000000e;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU8";
  local_60 = "mDominanceGroup";
  local_48 = 0;
  local_58 = 0x10000000f;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


