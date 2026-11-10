/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c8080; name: FUN_003c8080
 */


void FUN_003c8080(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0x3000000000;
  local_58 = "Sc::StaticCore";
  local_50 = (char *)0x0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Sc::StaticCore";
  local_50 = "Sc::RigidCore";
  local_48 = 0x3000000000;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "PxsRigidCore";
  local_50 = "mCore";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0x2000000010;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


