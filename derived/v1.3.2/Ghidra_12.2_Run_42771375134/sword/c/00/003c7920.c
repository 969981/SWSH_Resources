/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c7920; name: FUN_003c7920
 */


void FUN_003c7920(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 4;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  local_68 = "PxConstraintFlags";
  local_60 = "PxU16";
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "ConstraintCore";
  local_60 = (char *)0x0;
  local_50 = 0;
  local_58 = (undefined1 *)0x5800000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_48 = 0;
  local_68 = "PxConstraintFlags";
  local_60 = "mFlags";
  local_58 = (undefined1 *)0x200000000;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU16";
  local_60 = "mPaddingFromFlags";
  local_58 = (undefined1 *)0x200000002;
  local_50 = 1;
  local_48 = 0x200;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxVec3";
  local_60 = "mAppliedForce";
  local_58 = (undefined1 *)0xc00000004;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxVec3";
  local_60 = "mAppliedTorque";
  local_48 = 0;
  local_58 = (undefined1 *)0xc00000010;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxConstraintConnector";
  local_60 = "mConnector";
  local_58 = (undefined1 *)0x800000020;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxConstraintProject";
  local_60 = "mProject";
  local_50 = 1;
  local_58 = (undefined1 *)0x800000028;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxConstraintSolverPrep";
  local_60 = "mSolverPrep";
  local_50 = 1;
  local_58 = (undefined1 *)0x800000030;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxConstraintVisualize";
  local_60 = "mVisualize";
  local_50 = 1;
  local_58 = (undefined1 *)0x800000038;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mDataSize";
  local_48 = 0;
  local_50 = 1;
  local_58 = (undefined1 *)0x400000040;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "mLinearBreakForce";
  local_58 = (undefined1 *)0x400000044;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "mAngularBreakForce";
  local_48 = 0;
  local_58 = (undefined1 *)0x400000048;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "mMinResponseThreshold";
  local_48 = 0;
  local_58 = (undefined1 *)0x40000004c;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "ConstraintSim";
  local_60 = "mSim";
  local_50 = 1;
  local_58 = &DAT_800000050;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


