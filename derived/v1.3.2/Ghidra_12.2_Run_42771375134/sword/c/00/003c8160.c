/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c8160; name: FUN_003c8160
 */


void FUN_003c8160(undefined8 *param_1)

{
  char *local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_70 = 0;
  local_78 = 0x1000000000;
  local_88 = "PxFilterData";
  local_80 = (char *)0x0;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_78 = 0x400000000;
  local_70 = 1;
  local_88 = "PxU32";
  local_80 = "word0";
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxU32";
  local_80 = "word1";
  local_68 = 0;
  local_78 = 0x400000004;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxU32";
  local_80 = "word2";
  local_68 = 0;
  local_78 = 0x400000008;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxU32";
  local_80 = "word3";
  local_68 = 0;
  local_78 = 0x40000000c;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_88 = "PxsShapeCore";
  local_80 = (char *)0x0;
  local_78 = 0x8000000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxTransform";
  local_80 = "transform";
  local_78 = 0x1c00000000;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "Gu::GeometryUnion";
  local_80 = "geometry";
  local_68 = 0;
  local_70 = 1;
  local_78 = 0x5000000028;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxReal";
  local_80 = "contactOffset";
  local_78 = 0x40000001c;
  local_68 = 0;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxShapeFlags";
  local_80 = "mShapeFlags";
  local_78 = 0x100000020;
  local_68 = 0;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxU8";
  local_80 = "mOwnsMaterialIdxMemory";
  local_78 = 0x100000021;
  local_68 = 0;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxU16";
  local_80 = "materialIndex";
  local_68 = 0;
  local_70 = 1;
  local_78 = 0x200000022;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_70 = 0;
  local_80 = "PxU8";
  local_78 = 0;
  local_88 = "PxShapeFlags";
  local_68 = 4;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "ShapeCore";
  local_80 = (char *)0x0;
  local_70 = 0;
  local_78 = 0xb000000000;
  local_68 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_68 = 0;
  local_88 = "PxFilterData";
  local_80 = "mQueryFilterData";
  local_78 = 0x1000000000;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxFilterData";
  local_80 = "mSimulationFilterData";
  local_68 = 0;
  local_78 = 0x1000000010;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxsShapeCore";
  local_80 = "mCore";
  local_68 = 0;
  local_78 = 0x8000000020;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  local_88 = "PxReal";
  local_80 = "mRestOffset";
  local_68 = 0;
  local_78 = 0x4000000a0;
  local_70 = 1;
  (**(code **)*param_1)(param_1,&local_88,0x28);
  return;
}


