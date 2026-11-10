/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020e7f0; name: FUN_0020e7f0
 */


void FUN_0020e7f0(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_68 = "NpArticulationLinkArray";
  local_60 = (char *)0x0;
  local_50 = 0;
  local_58 = 0x3800000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpArticulationLink";
  local_60 = "mBuffer";
  local_58 = 0x2000000000;
  local_50 = 4;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "bool";
  local_48 = 0;
  local_60 = "mBufferUsed";
  local_58 = 0x100000020;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "char";
  local_60 = "mPadding";
  local_58 = 0x300000021;
  local_50 = 3;
  local_48 = 0x200;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpArticulationLink";
  local_60 = "mData";
  local_58 = 0x800000028;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mSize";
  local_58 = 0x400000030;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mCapacity";
  local_48 = 0;
  local_58 = 0x400000034;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0x400000034;
  local_68 = "NpArticulationLink";
  local_60 = (char *)0x0;
  local_58 = 0x100000020;
  local_48 = 0x2858;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


