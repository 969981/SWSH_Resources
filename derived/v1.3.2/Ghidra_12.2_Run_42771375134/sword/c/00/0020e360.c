/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020e360; name: FUN_0020e360
 */


void FUN_0020e360(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_68 = "NpConnectorArray";
  local_60 = (char *)0x0;
  local_50 = 0;
  local_58 = 0x5800000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpConnector";
  local_60 = "mBuffer";
  local_58 = 0x4000000000;
  local_48 = 0;
  local_50 = 4;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "bool";
  local_48 = 0;
  local_60 = "mBufferUsed";
  local_58 = 0x100000040;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "char";
  local_60 = "mPadding";
  local_58 = 0x300000041;
  local_50 = 3;
  local_48 = 0x200;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpConnector";
  local_60 = "mData";
  local_58 = 0x800000048;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mSize";
  local_58 = 0x400000050;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mCapacity";
  local_48 = 0;
  local_58 = 0x400000054;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_50 = 0x400000054;
  local_68 = "NpConnector";
  local_60 = (char *)0x0;
  local_58 = 0x100000040;
  local_48 = 0x2850;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


