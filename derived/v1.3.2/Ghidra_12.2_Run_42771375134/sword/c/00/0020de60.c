/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020de60; name: FUN_0020de60
 */


void FUN_0020de60(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_68 = "NpInternalShapeFlags";
  local_60 = "PxU8";
  local_48 = 4;
  local_58 = 0;
  local_50 = 0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0;
  local_58 = 0x11000000000;
  local_68 = "NpShape";
  local_60 = (char *)0x0;
  local_48 = 3;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpShape";
  local_60 = "PxBase";
  local_58 = 0x11000000000;
  local_50 = 0;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_48 = 1;
  local_68 = "NpShape";
  local_60 = "RefCountable";
  local_58 = 0x11000000018;
  local_50 = 0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  local_60 = "userData";
  local_58 = 0x800000010;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxRigidActor";
  local_60 = "mActor";
  local_50 = 1;
  local_58 = 0x800000028;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Scb::Shape";
  local_60 = "mShape";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0xd000000030;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "char";
  local_60 = "mName";
  local_58 = 0x800000100;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxI32";
  local_60 = "mExclusiveAndActorCount";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x400000108;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "char";
  local_60 = "string";
  local_58 = 0;
  local_50 = 0;
  local_48 = 0x90;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


