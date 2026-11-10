/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f7bd0; name: FUN_002f7bd0
 */


void FUN_002f7bd0(undefined8 *param_1)

{
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_78 = "PxDistanceJointFlags";
  local_70 = "PxU16";
  local_58 = 4;
  local_68 = 0;
  local_60 = 0;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_60 = 0;
  local_78 = "DistanceJointData";
  local_70 = (char *)0x0;
  local_68 = 0x6000000000;
  local_58 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "DistanceJointData";
  local_70 = "JointData";
  local_58 = 1;
  local_68 = 0x6000000000;
  local_60 = 0;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "minDistance";
  local_68 = 0x400000048;
  local_58 = 0;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "maxDistance";
  local_58 = 0;
  local_68 = 0x40000004c;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "tolerance";
  local_58 = 0;
  local_68 = 0x400000050;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "stiffness";
  local_58 = 0;
  local_68 = 0x400000054;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "damping";
  local_58 = 0;
  local_68 = 0x400000058;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxDistanceJointFlags";
  local_70 = "jointFlags";
  local_58 = 0;
  local_68 = 0x20000005c;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_60 = 0;
  local_68 = 0x7000000000;
  local_78 = "DistanceJoint";
  local_70 = (char *)0x0;
  local_58 = 3;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_58 = 1;
  local_78 = "DistanceJoint";
  local_70 = "PxJoint";
  local_68 = 0x7000000000;
  local_60 = 0;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_58 = 1;
  local_78 = "DistanceJoint";
  local_70 = "PxConstraintConnector";
  local_68 = 0x7000000018;
  local_60 = 0;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "char";
  local_70 = "mName";
  local_68 = 0x800000020;
  local_60 = 1;
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxTransform";
  local_70 = "mLocalPose";
  local_58 = 0;
  local_68 = 0x3800000028;
  local_60 = 2;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxConstraint";
  local_70 = "mPxConstraint";
  local_60 = 1;
  local_68 = 0x800000060;
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "JointData";
  local_70 = "mData";
  local_68 = 0x800000068;
  local_60 = 1;
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "DistanceJointData";
  local_70 = (char *)0x0;
  local_68 = 0x6000000068;
  local_60 = 0x800000000;
  local_58 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "char";
  local_70 = "string";
  local_68 = 0;
  local_60 = 0;
  local_58 = 0x90;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  return;
}


