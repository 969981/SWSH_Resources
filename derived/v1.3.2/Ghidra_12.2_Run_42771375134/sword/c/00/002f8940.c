/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f8940; name: FUN_002f8940
 */


void FUN_002f8940(undefined8 *param_1)

{
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_88 = "PxPrismaticJointFlags";
  local_80 = "PxU16";
  local_68 = 4;
  local_78 = 0;
  local_70 = 0;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "PrismaticJointData";
  local_80 = (char *)0x0;
  local_78 = 0x7000000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PrismaticJointData";
  local_80 = "JointData";
  local_68 = 1;
  local_78 = 0x7000000000;
  local_70 = 0;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxJointLinearLimitPair";
  local_80 = "limit";
  local_68 = 0;
  local_70 = 1;
  local_78 = 0x1c00000048;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxReal";
  local_80 = "projectionLinearTolerance";
  local_78 = 0x400000064;
  local_68 = 0;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxReal";
  local_80 = "projectionAngularTolerance";
  local_68 = 0;
  local_78 = 0x400000068;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxPrismaticJointFlags";
  local_80 = "jointFlags";
  local_68 = 0;
  local_78 = 0x20000006c;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "PrismaticJoint";
  local_80 = (char *)0x0;
  local_78 = 0x7000000000;
  local_68 = 3;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 1;
  local_88 = "PrismaticJoint";
  local_80 = "PxJoint";
  local_78 = 0x7000000000;
  local_70 = 0;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 1;
  local_88 = "PrismaticJoint";
  local_80 = "PxConstraintConnector";
  local_78 = 0x7000000018;
  local_70 = 0;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "char";
  local_80 = "mName";
  local_78 = 0x800000020;
  local_70 = 1;
  local_68 = 8;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxTransform";
  local_80 = "mLocalPose";
  local_68 = 0;
  local_78 = 0x3800000028;
  local_70 = 2;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxConstraint";
  local_80 = "mPxConstraint";
  local_70 = 1;
  local_78 = 0x800000060;
  local_68 = 8;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "JointData";
  local_80 = "mData";
  local_78 = 0x800000068;
  local_70 = 1;
  local_68 = 8;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PrismaticJointData";
  local_80 = (char *)0x0;
  local_78 = 0x7000000068;
  local_70 = 0x800000000;
  local_68 = 0x1000000030;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "char";
  local_80 = "string";
  local_78 = 0;
  local_70 = 0;
  local_68 = 0x90;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  return;
}


