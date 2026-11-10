/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020e100; name: FUN_0020e100
 */


void FUN_0020e100(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0xb000000000;
  local_58 = "NpRigidStatic";
  local_50 = (char *)0x0;
  local_38 = 3;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "NpRigidStatic";
  local_50 = "PxBase";
  local_48 = 0xb000000000;
  local_40 = 0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "NpRigidStatic";
  local_50 = "NpActor";
  local_48 = 0xb000000018;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "void";
  local_50 = "userData";
  local_48 = 0x800000010;
  local_40 = 1;
  local_38 = 8;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "NpShapeManager";
  local_50 = "mShapeManager";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x2800000028;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxU32";
  local_50 = "mIndex";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x400000050;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "Scb::RigidStatic";
  local_50 = "mRigidStatic";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x5000000060;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "NpConnectorArray";
  local_50 = (char *)0x0;
  local_48 = 0x5800000020;
  local_40 = 0x800000000;
  local_38 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "char";
  local_40 = 0;
  local_38 = 0x90;
  local_50 = "string";
  local_48 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


