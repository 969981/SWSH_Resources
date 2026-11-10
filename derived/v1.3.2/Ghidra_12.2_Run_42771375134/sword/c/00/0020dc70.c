/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020dc70; name: FUN_0020dc70
 */


void FUN_0020dc70(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_50 = 0;
  local_58 = 0xb800000000;
  local_68 = "NpConstraint";
  local_60 = (char *)0x0;
  local_48 = 3;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "NpConstraint";
  local_60 = "PxBase";
  local_58 = 0xb800000000;
  local_50 = 0;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxRigidActor";
  local_60 = "mActor0";
  local_58 = 0x800000010;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxRigidActor";
  local_60 = "mActor1";
  local_58 = 0x800000018;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Scb::Constraint";
  local_60 = "mConstraint";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x9000000020;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "bool";
  local_60 = "mIsDirty";
  local_58 = 0x1000000b0;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "bool";
  local_60 = "mPaddingFromBool";
  local_58 = 0x3000000b1;
  local_50 = 3;
  local_48 = 0x200;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


