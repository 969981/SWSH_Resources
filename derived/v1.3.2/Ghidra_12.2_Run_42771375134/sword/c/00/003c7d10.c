/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c7d10; name: FUN_003c7d10
 */


void FUN_003c7d10(undefined8 *param_1)

{
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = 4;
  local_68 = 0;
  local_60 = 0;
  local_78 = "PxCombineMode::Enum";
  local_70 = "PxU32";
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_60 = 0;
  local_78 = "PxMaterialFlags";
  local_70 = "PxU16";
  local_68 = 0;
  local_58 = 4;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "MaterialCore";
  local_70 = (char *)0x0;
  local_60 = 0;
  local_68 = 0x2000000000;
  local_58 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_58 = 0;
  local_78 = "PxReal";
  local_70 = "dynamicFriction";
  local_68 = 0x400000000;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "staticFriction";
  local_58 = 0;
  local_68 = 0x400000004;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxReal";
  local_70 = "restitution";
  local_58 = 0;
  local_68 = 0x400000008;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxMaterialFlags";
  local_70 = "flags";
  local_58 = 0;
  local_68 = 0x20000000c;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU8";
  local_70 = "fricRestCombineMode";
  local_68 = 0x10000000e;
  local_58 = 0;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU8";
  local_70 = "padding";
  local_68 = 0x10000000f;
  local_60 = 1;
  local_58 = 0x200;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxMaterial";
  local_70 = "mNxMaterial";
  local_68 = 0x800000010;
  local_60 = 1;
  local_58 = 8;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  local_78 = "PxU32";
  local_70 = "mMaterialIndex";
  local_58 = 0;
  local_68 = 0x400000018;
  local_60 = 1;
  (**(code **)*param_1)(param_1,&local_78,0x28);
  return;
}


