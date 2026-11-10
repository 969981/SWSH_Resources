/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00211540; name: FUN_00211540
 */


void FUN_00211540(undefined8 *param_1)

{
  char *local_58;
  char *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_48 = 0xd000000000;
  local_58 = "Scb::ArticulationJoint";
  local_50 = (char *)0x0;
  local_38 = 1;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_38 = 1;
  local_58 = "Scb::ArticulationJoint";
  local_50 = "Scb::Base";
  local_48 = 0xd000000000;
  local_40 = 0;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  local_58 = "ArticulationJointCore";
  local_50 = "mJoint";
  local_38 = 0;
  local_40 = 1;
  local_48 = 0xb800000018;
  (**(code **)*param_1)(param_1,&local_58,0x28);
  return;
}


