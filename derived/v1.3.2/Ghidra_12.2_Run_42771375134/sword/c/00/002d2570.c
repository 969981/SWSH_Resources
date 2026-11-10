/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d2570; name: FUN_002d2570
 */


void FUN_002d2570(undefined8 *param_1)

{
  char *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_68 = "SourceMesh";
  pcStack_60 = (char *)0x0;
  local_50 = 0;
  local_58 = 0x3000000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  pcStack_60 = "mNbVerts";
  local_48 = 0;
  local_58 = 0x400000000;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxVec3";
  pcStack_60 = "mVerts";
  local_58 = 0x800000008;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  pcStack_60 = "mNbTris";
  local_48 = 0;
  local_58 = 0x400000010;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  pcStack_60 = "mTriangles32";
  local_58 = 0x800000018;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  pcStack_60 = "mTriangles16";
  local_58 = 0x800000020;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  pcStack_60 = "mRemap";
  local_58 = 0x800000028;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


