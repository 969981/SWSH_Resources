/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00211090; name: FUN_00211090
 */


void FUN_00211090(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0x12000000000;
  local_58 = "Scb::Body";
  local_50 = (char *)0x0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Scb::Body";
  local_50 = "Scb::RigidObject";
  local_48 = 0x12000000000;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "Sc::BodyCore";
  local_50 = "mBodyCore";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0xc000000020;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxTransform";
  local_50 = "mBufferedBody2World";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x1c000000e0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mBufferedLinVelocity";
  local_48 = 0xc000000fc;
  local_38 = 0;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxVec3";
  local_50 = "mBufferedAngVelocity";
  local_38 = 0;
  local_48 = 0xc00000108;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxReal";
  local_50 = "mBufferedWakeCounter";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x400000114;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mBufferedIsSleeping";
  local_48 = 0x400000118;
  local_38 = 0;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mBodyBufferFlags";
  local_38 = 0;
  local_48 = 0x40000011c;
  local_40 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


