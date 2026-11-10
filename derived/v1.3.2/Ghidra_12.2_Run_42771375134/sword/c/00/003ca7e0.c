/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ca7e0; name: FUN_003ca7e0
 */


void FUN_003ca7e0(undefined8 *param_1)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_003c9810();
  local_50 = 0;
  local_68 = "Sc::ClothCore";
  local_60 = (char *)0x0;
  local_58 = 0x7000000000;
  local_48 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_48 = 1;
  local_68 = "Sc::ClothCore";
  local_60 = "Sc::ActorCore";
  local_58 = 0x7000000000;
  local_50 = 0;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_60 = "PxU16";
  local_58 = 0;
  local_50 = 0;
  local_68 = "PxClothFlags";
  local_48 = 4;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxVec3";
  local_60 = "mExternalAcceleration";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0xc00000010;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Sc::ClothFabricCore";
  local_60 = "mFabric";
  local_58 = 0x800000028;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxFilterData";
  local_60 = "mFilterData";
  local_48 = 0;
  local_50 = 1;
  local_58 = 0x1000000040;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxClothFlags";
  local_60 = "mClothFlags";
  local_48 = 0;
  local_58 = 0x200000050;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "mContactOffset";
  local_58 = 0x400000054;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxReal";
  local_60 = "mRestOffset";
  local_48 = 0;
  local_58 = 0x400000058;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mNumUserSpheres";
  local_58 = 0x40000005c;
  local_48 = 0;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mNumUserCapsules";
  local_48 = 0;
  local_58 = 0x400000060;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mNumUserPlanes";
  local_48 = 0;
  local_58 = 0x400000064;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mNumUserConvexes";
  local_48 = 0;
  local_58 = 0x400000068;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "PxU32";
  local_60 = "mNumUserTriangles";
  local_48 = 0;
  local_58 = 0x40000006c;
  local_50 = 1;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  local_60 = "mLowLevelCloth";
  local_58 = 0x800000020;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  local_60 = "mBulkData";
  local_58 = 0x800000030;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "void";
  local_60 = "mPhaseConfigs";
  local_58 = 0x800000038;
  local_50 = 1;
  local_48 = 8;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  local_68 = "Sc::ClothBulkData";
  local_60 = (char *)0x0;
  local_58 = 0x18800000028;
  local_50 = 0x800000000;
  local_48 = 0x30;
  (**(code **)*param_1)(param_1,&local_68,0x28);
  return;
}


